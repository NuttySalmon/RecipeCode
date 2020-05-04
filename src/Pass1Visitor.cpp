#include <iostream>
#include <string>
#include <vector>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

const bool DEBUG_1 = true;

Pass1Visitor::Pass1Visitor()
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    if (DEBUG_1)
        cout << "=== Pass 1: Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {}

antlrcpp::Any Pass1Visitor::visitProgram(RecipeParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);

    if (DEBUG_1)
        cout << "=== Pass 1: visitProgram: Printing xref table." << endl;

    // Print the cross-reference table.
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);

    return value;
}

antlrcpp::Any Pass1Visitor::visitHeader(RecipeParser::HeaderContext *ctx)
{
    if (DEBUG_1)
        cout << "=== Pass 1: visitHeader: " + ctx->getText() << endl;

    string program_name = ctx->IDENTIFIER()->toString();

    SymTabEntry *program_id = symtab_stack->enter_local(program_name);
    program_id->set_definition((Definition)DF_PROGRAM);
    program_id->set_attribute((SymTabKey)ROUTINE_SYMTAB,
                              symtab_stack->push());
    symtab_stack->set_program_id(program_id);

    return visitChildren(ctx);
}

// antlrcpp::Any Pass1Visitor::visitVarList(RecipeParser::VarListContext *ctx)
// {
//     if (DEBUG_1) cout << "=== Pass 1: visitVarList: " + ctx->getText() << endl;

//     var_id_list.resize(0);
//     var_ctx_list.resize(0);

//     return visitChildren(ctx);
// }

antlrcpp::Any Pass1Visitor::visitDecl(RecipeParser::DeclContext *ctx)
{
    if (DEBUG_1)
        cout << "=== Pass 1: visitVar: " + ctx->getText() << endl;

    string variable_name = ctx->IDENTIFIER()->toString();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition)DF_VARIABLE);

    var_id_list.push_back(variable_id);
    // var_ctx_list.push_back(ctx);

    TypeSpec *type;
    switch (ctx->dtype->getType())
    {
    case RecipeParser::INT_TYPE:
        type = Predefined::integer_type;
        break;
    case RecipeParser::FLOAT_TYPE:
        type = Predefined::real_type;
        break;
    case RecipeParser::ARR_INT_TYPE:
        type = Predefined::integer_type;
        break;
    case RecipeParser::ARR_FLOAT_TYPE:
        type = Predefined::real_type;
        break;
    }
    ctx->type = type;
    cout << variable_name << ' ' << ctx->dtype->getType() << endl;
    variable_id->set_typespec(type);
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitVariable(RecipeParser::VariableContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitVariableExpr: " + ctx->getText() << endl;

    string variable_name = ctx->IDENTIFIER()->toString();
    SymTabEntry *variable_id = symtab_stack->lookup(variable_name);
    if (variable_id == nullptr)
        cout << "ERROR: line " 
             << ctx->IDENTIFIER()->getSymbol()->getLine() 
             << ": no variable named \"" << variable_name << "\" declared\n"; 
    else    
        ctx->type = variable_id->get_typespec();
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitInt(RecipeParser::IntContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitIntegerConst: " + ctx->getText() << endl;

    ctx->type = Predefined::integer_type;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitFloat(RecipeParser::FloatContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitFloatConst: " + ctx->getText() << endl;

    ctx->type = Predefined::real_type;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitOperand(RecipeParser::OperandContext *ctx)
{   antlrcpp::Any childrenVisited = visitChildren(ctx);
    if (ctx->variable() != nullptr)
        ctx->type = ctx->variable()->type;
    else
        ctx->type = Predefined::integer_type;
    return childrenVisited;
}

antlrcpp::Any Pass1Visitor::visitFunction(RecipeParser::FunctionContext *ctx)
{     if (DEBUG_1)
        cout << "=== Pass 1: visitFunction: " + ctx->getText() << endl;
    auto header = ctx->header();
    string variable_name = header->IDENTIFIER()->toString();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition)DF_FUNCTION);

    var_id_list.push_back(variable_id);
    // var_ctx_list.push_back(ctx);

    TypeSpec *type = nullptr;
    if (header->dtype != NULL){
        switch (header->dtype->getType())
        {
        case RecipeParser::PARAM_INT:
            type = Predefined::integer_type;
            break;
        case RecipeParser::PARAM_FLOAT:
            type = Predefined::real_type;
            break;
        }
    }
    ctx->type = type;
    variable_id->set_typespec(type);
    return visitChildren(ctx);
}


