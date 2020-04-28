#include <iostream>
#include <string>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

const bool DEBUG_2 = true;

Pass2Visitor::Pass2Visitor()
    : program_name(""), j_file(nullptr)
{
}

Pass2Visitor::~Pass2Visitor()
{
    labelCounter = 0;
}

string Pass2Visitor::getLabel()
{
    string label = "L" + to_string(labelCounter);
    labelCounter++;
    return label;
}

ostream &Pass2Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any Pass2Visitor::visitProgram(RecipeParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);

    j_file.close();

    if (DEBUG_2)
        cout << "=== Pass 2: visitProgram: closed " + j_file_name << endl;
    return value;
}

antlrcpp::Any Pass2Visitor::visitHeader(RecipeParser::HeaderContext *ctx)
{
    if (DEBUG_2)
        cout << "=== Pass 2: visitHeader: " + ctx->getText() << endl;

    program_name = ctx->IDENTIFIER()->toString();

    // Create the assembly output file.
    j_file_name = program_name + ".j";
    j_file.open(j_file_name);
    if (j_file.fail())
    {
        cout << "***** Cannot open assembly file." << endl;
        exit(-99);
    }

    if (DEBUG_2)
        cout << "=== Pass 2: visitHeader: created " + j_file_name << endl;

    // Emit the program header.
    j_file << ".class public " << program_name << endl;
    j_file << ".super java/lang/Object" << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitMainBlock(RecipeParser::MainBlockContext *ctx)
{
    if (DEBUG_2)
        cout << "=== Pass 2: visitMainBlock" << endl;

    // Emit the RunTimer and PascalTextIn fields.
    j_file << endl;
    // j_file << ".field private static _runTimer LRunTimer;" << endl;
    // j_file << ".field private static _standardIn LPascalTextIn;" << endl;

    // Emit declarations.
    visit(ctx->block()->data());
    j_file << endl;

    // Emit the class constructor.
    j_file << ".method public <init>()V" << endl;
    j_file << endl;
    j_file << "\taload_0" << endl;
    j_file << "\tinvokenonvirtual java/lang/Object/<init>()V" << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 1" << endl;
    j_file << ".limit stack 1" << endl;
    j_file << ".end method" << endl;
    j_file << endl;

    // Emit the main program header and prologue.
    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
    j_file << endl;
    // j_file << "\tnew RunTimer" << endl;
    // j_file << "\tdup" << endl;
    // j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
    // j_file << "\tputstatic\t" << program_name
    //        << "/_runTimer LRunTimer;" << endl;
    // j_file << "\tnew PascalTextIn" << endl;
    // j_file << "\tdup" << endl;
    // j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
    // j_file << "\tputstatic\t" + program_name
    //    << "/_standardIn LPascalTextIn;" << endl;

    // Emit code for the main program's compound statement.

    loadValues();
    visit(ctx->block()->code());

    // Emit the main program epilogue.
    j_file << endl;
    // j_file << "\tgetstatic     " << program_name
    //        << "/_runTimer LRunTimer;" << endl;
    // j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 16" << endl;
    j_file << ".limit stack 16" << endl;
    j_file << ".end method" << endl;

    return nullptr;
}

/* 
Load values to static fields stored
*/
void Pass2Visitor::loadValues()
{

    for (auto ctx : decl_ctx_list)
    {

        visit(ctx->number());
        //pad with .0 if float but input is int
        if (ctx->type == Predefined::real_type && ctx->type != ctx->number()->type)
            j_file << "\ti2f\n";
        storeStatic(ctx);
    }
}

// antlrcpp::Any Pass2Visitor::visitVarList(RecipeParser::VarListContext *ctx)
// {
//     if (DEBUG_2) cout << "=== Pass 2: visitDeclarations: " << ctx->getText() << endl;

//     return visitChildren(ctx);
// }

antlrcpp::Any Pass2Visitor::visitDecl(RecipeParser::DeclContext *ctx)
{
    if (DEBUG_2)
        cout << "=== Pass 2: visitDecl: " + ctx->getText() << endl;

    j_file << "\n; " << ctx->getText() << endl;

    string variable_name = ctx->IDENTIFIER()->toString();

    j_file << ".field private static "
           << variable_name << " " << getIndicator(ctx->type) << endl;

    decl_ctx_list.push_back(ctx);
    return nullptr;
}

char Pass2Visitor::getIndicator(TypeSpec *type)
{
    char type_indicator = (type == Predefined::integer_type) ? 'I'
                                                             : (type == Predefined::real_type) ? 'F'
                                                                                               : '?';
    return type_indicator;
}
// antlrcpp::Any Pass2Visitor::visitVarId(RecipeParser::VarIdContext *ctx)
// {
//     if (DEBUG_2) cout << "=== Pass 2: visitVarId: " + ctx->getText() << endl;

//     string variable_name = ctx->IDENTIFIER()->toString();
//     TypeSpec *type = ctx->type;

//     // Emit a field declaration.
//     string type_indicator = (type == Predefined::integer_type) ? "I"
//                           : (type == Predefined::real_type)    ? "F"
//                           :                                      "?";
//     j_file << ".field private static "
//            << variable_name << " " << type_indicator << endl;

//     return visitChildren(ctx);
// }

antlrcpp::Any Pass2Visitor::visitStatement(RecipeParser::StatementContext *ctx)
{
    if (DEBUG_2)
        cout << "=== Pass 2: visitStmt" << endl;

    string line = ctx->getText();
    line.erase(std::remove(line.begin(), line.end(), '\n'), line.end());
    j_file << endl
           << "; " + ctx->getText() << endl
           << endl;

    return visitChildren(ctx);
}

// antlrcpp::Any Pass2Visitor::visitAssignmentStmt(RecipeParser::AssignmentStmtContext *ctx)
// {
//     if (DEBUG_2) cout << "=== Pass 2: visitAssignmentStmt" << endl;

//     auto value = visit(ctx->expr());

//     string type_indicator =
//                   (ctx->expr()->type == Predefined::integer_type) ? "I"
//                 : (ctx->expr()->type == Predefined::real_type)    ? "F"
//                 :                                                   "?";

//     // Emit a field put instruction.
//     j_file << "\tputstatic\t" << program_name
//            << "/" << ctx->variable()->IDENTIFIER()->toString()
//            << " " << type_indicator << endl;

//     return value;
// }

antlrcpp::Any Pass2Visitor::visitPrintStm(RecipeParser::PrintStmContext *ctx)
{

    int varCount = ctx->variable().size();

    // Loop to generate code for each expression.
    for (int i = 0; i < varCount; i++)
    {
        // Emit code to push the java.lang.System.out object.
        j_file << "\tgetstatic\tjava/lang/System/out Ljava/io/PrintStream;" << endl;

        // Emit code to evaluate the expression.
        visit(ctx->variable(i));
        TypeSpec *type = ctx->variable(i)->type;

        // Emit code to convert a scalar integer or float value
        // to an Integer or Float object, respectively.

        // Emit code to call java.io.PrintStream.printf.
        j_file << "\tinvokevirtual java/io/PrintStream.println("
               << getIndicator(type)
               << ")V" << endl;
    }
    return nullptr;
}

antlrcpp::Any Pass2Visitor::visitPrintCharStm(RecipeParser::PrintCharStmContext *ctx)
{
    // Get the format string without the surrounding the single quotes.
    // Emit code to push the java.lang.System.out object.
    j_file << "\tgetstatic\tjava/lang/System/out Ljava/io/PrintStream;" << endl;

    // Array size is the number of expressions to evaluate and print.
    int array_size = ctx->variable().size();
    j_file << "\tldc\t\"";
    for (int i = 0; i < array_size; i++)
        j_file << "%C"; // format output as char
    j_file << "\"" << endl;
    // Emit code to create the array of the correct size.
    j_file << "\tldc\t" << array_size << endl;
    j_file << "\tanewarray\tjava/lang/Object" << endl;

    // Loop to generate code for each expression.
    for (int i = 0; i < array_size; i++)
    {
        j_file << "\tdup" << endl;        // duplicate the array address
        j_file << "\tldc\t" << i << endl; // array element index

        // Emit code to evaluate the expression.
        visit(ctx->variable(i));
        TypeSpec *type = ctx->variable(i)->type;
        if (type != Predefined::integer_type)
            cout << "ERROR: attempt to print float as char";

        j_file << "\tinvokestatic\tjava/lang/Integer.valueOf(I)"
               << "Ljava/lang/Integer;"
               << endl;

        j_file << "\taastore" << endl; // store the value into the array
    }

    // Emit code to call java.io.PrintStream.printf.
    j_file << "\tinvokevirtual java/io/PrintStream.printf"
           << "(Ljava/lang/String;[Ljava/lang/Object;)"
           << "Ljava/io/PrintStream;"
           << endl;
    j_file << "\tpop" << endl;

    return nullptr;
}

// antlrcpp::Any Pass2Visitor::visitAddSubExpr(RecipeParser::AddSubExprContext *ctx)
// {
//     if (DEBUG_2) cout << "=== Pass 2: visitAddSubExpr" << endl;

//     auto value = visitChildren(ctx);

//     TypeSpec *type1 = ctx->expr(0)->type;
//     TypeSpec *type2 = ctx->expr(1)->type;

//     bool integer_mode =    (type1 == Predefined::integer_type)
//                         && (type2 == Predefined::integer_type);
//     bool real_mode    =    (type1 == Predefined::real_type)
//                         && (type2 == Predefined::real_type);

//     string op = ctx->addSubOp()->getText();
//     string opcode;

//     if (op == "+")
//     {
//         opcode = integer_mode ? "iadd"
//                : real_mode    ? "fadd"
//                :                "????";
//     }
//     else
//     {
//         opcode = integer_mode ? "isub"
//                : real_mode    ? "fsub"
//                :                "????";
//     }

//     // Emit an add or subtract instruction.
//     j_file << "\t" << opcode << endl;

//     return value;
// }

// antlrcpp::Any Pass2Visitor::visitMulDivExpr(RecipeParser::MulDivExprContext *ctx)
// {
//     if (DEBUG_2) cout << "=== Pass 2: visitMulDivExpr" << endl;

//     auto value = visitChildren(ctx);

//     TypeSpec *type1 = ctx->expr(0)->type;
//     TypeSpec *type2 = ctx->expr(1)->type;

//     bool integer_mode =    (type1 == Predefined::integer_type)
//                         && (type2 == Predefined::integer_type);
//     bool real_mode    =    (type1 == Predefined::real_type)
//                         && (type2 == Predefined::real_type);

//     string op = ctx->mulDivOp()->getText();
//     string opcode;

//     if (op == "*")
//     {
//         opcode = integer_mode ? "imul"
//                : real_mode    ? "fmul"
//                :                "????";
//     }
//     else
//     {
//         opcode = integer_mode ? "idpv"
//                : real_mode    ? "fdiv"
//                :                "????";
//     }

//     // Emit a multiply or divide instruction.
//     j_file << "\t" << opcode << endl;

//     return value;
// }

antlrcpp::Any Pass2Visitor::visitVariable(RecipeParser::VariableContext *ctx)
{
    if (DEBUG_2)
        cout << "=== Pass 2: visitVariableExpr" << endl;

    string variable_name = ctx->IDENTIFIER()->toString();

    // Emit a field get instruction.
    j_file << "\tgetstatic\t" << program_name
           << "/" << variable_name << " " << getIndicator(ctx->type) << endl;

    return visitChildren(ctx);
}

// antlrcpp::Any Pass2Visitor::visitSignedNumber(RecipeParser::SignedNumberContext *ctx)
// {
//     if (DEBUG_2) cout << "=== Pass 2: visitSignedNumber" << endl;

//     auto value = visitChildren(ctx);
//     TypeSpec *type = ctx->number()->type;

//     if (ctx->sign()->children[0] == ctx->sign()->SUB_OP())
//     {
//         string opcode = (type == Predefined::integer_type) ? "ineg"
//                       : (type == Predefined::real_type)    ? "fneg"
//                       :                                      "?neg";

//         // Emit a negate instruction.
//         j_file << "\t" << opcode << endl;
//     }

//     return value;
// }

antlrcpp::Any Pass2Visitor::visitInt(RecipeParser::IntContext *ctx)
{
    if (DEBUG_2)
        cout << "=== Pass 2: visitIntegerConst" << endl;

    int value = stoi(ctx->getText());
    // Emit a load constant instruction.
    if (value >= -1 && value <= 5)
    {
        j_file << "\ticonst_" << value << endl;
    }
    else
    {
        j_file << "\tldc\t" << ctx->getText() << endl;
    }
    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitAddStm(RecipeParser::AddStmContext *ctx)
{
    
}

antlrcpp::Any Pass2Visitor::visitFloat(RecipeParser::FloatContext *ctx)
{
    if (DEBUG_2)
        cout << "=== Pass 2: visitFloatConst" << endl;

    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitCondition(RecipeParser::ConditionContext *ctx)
{
    if (DEBUG_2)
        cout << "=== Pass 2: visitCondition" << endl;

    bool cmpfloat = false;
    visit(ctx->operand(0));
    if (ctx->operand(1)->type == Predefined::real_type)
    {
        cmpfloat = true;
        if (ctx->operand(0)->type == Predefined::integer_type)
            j_file << "\ti2f\n";
    }
    visit(ctx->operand(1));
    if (ctx->operand(0)->type == Predefined::real_type)
    {
        cmpfloat = true;
        if (ctx->operand(1)->type == Predefined::integer_type)
            j_file << "\ti2f\n";
    }

    size_t comp = -1;
    if (ctx->comp != nullptr)
    {
        comp = ctx->comp->getType();
    }

    bool negate = ctx->NOT() != nullptr;
    if (cmpfloat)
    {
        j_file << "\tfcmpl" << endl;
        j_file << "\tif";
    }
    else
    {
        j_file << "\tif_icmp";
    }

    string falseLab = getLabel();
    string doneLab = getLabel();
    j_file << cmpPostfix(comp) << " " << falseLab << endl;
    j_file << "\t\t" << (negate ? "iconst_0" : "iconst_1") << endl;
    j_file << "\t\tgoto " << doneLab << endl;
    j_file << "\t" << falseLab << ":\n";
    j_file << "\t\t" << (negate ? "iconst_1" : "iconst_0") << endl;
    j_file << "\t" << doneLab << ":\n";
    return nullptr;
};

antlrcpp::Any Pass2Visitor::visitTrueSym(RecipeParser::TrueSymContext *ctx)
{
    j_file << "\ticonst_1" << endl;
    return nullptr;
}

string Pass2Visitor::cmpPostfix(size_t comp)
{
    switch (comp)
    {
    case (RecipeParser::GT):
        return "le";
    case (RecipeParser::LT):
        return "ge";
    case (RecipeParser::GE):
        return "lt";
    case (RecipeParser::LE):
        return "gt";
    default:
        return "ne";
    }
}

antlrcpp::Any Pass2Visitor::visitAndCond(RecipeParser::AndCondContext *ctx)
{
    antlrcpp::Any childrenVisited = visitChildren(ctx);
    j_file << "\tiand\n";
    return childrenVisited;
}

antlrcpp::Any Pass2Visitor::visitOrCond(RecipeParser::OrCondContext *ctx)
{
    antlrcpp::Any childrenVisited = visitChildren(ctx);
    j_file << "\tior\n";
    return childrenVisited;
}

antlrcpp::Any Pass2Visitor::visitIfStm(RecipeParser::IfStmContext *ctx)
{
    string falseLab = getLabel();
    string doneLab = getLabel();
    j_file << "\t;" << ctx->conditionList()->getText() << endl;
    visit(ctx->conditionList());
    j_file << "\ticonst_1" << endl;
    j_file << "\tif_icmpne " << falseLab << endl;
    j_file << "\n;if true\n";
    visit(ctx->statementList(0));
    if (ctx->statementList(1) != nullptr)
    {
        j_file << "\tgoto " << doneLab << endl;
        j_file << "\n;if false\n";
        j_file << "\t" << falseLab << ":\n";
        visit(ctx->statementList(1));
        j_file << "\t" << doneLab << ":\n";
    }
    else
    {
        j_file << "\t" << falseLab << ":\n";
    }

    return nullptr;
}

antlrcpp::Any Pass2Visitor::visitIncStm(RecipeParser::IncStmContext *ctx)
{
    visitChildren(ctx);
    TypeSpec *varType = ctx->variable()->type;
    char indicator  = tolower(getIndicator(varType));
    if (ctx->number() == nullptr){
        j_file << "\t" << indicator << "const_1\n";
    }
    if(varType == Predefined::real_type)
        j_file << "\ti2f\n";    
    j_file << "\t" << indicator << "add\n";
    
    storeStatic(ctx->variable());
    return nullptr;
}

antlrcpp::Any Pass2Visitor::visitDecStm(RecipeParser::DecStmContext *ctx)
{
    visitChildren(ctx);
    TypeSpec *varType = ctx->variable()->type;
    char indicator  = tolower(getIndicator(varType));
    if (ctx->number() == nullptr){
        j_file << "\t" << indicator << "const_1\n";
    }
    if(varType == Predefined::real_type)
        j_file << "\ti2f\n";    
    j_file << "\t" << indicator << "sub\n";
    
    storeStatic(ctx->variable());
    return nullptr;
}

void Pass2Visitor::storeStatic(RecipeParser::VariableContext *ctx)
{
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->IDENTIFIER()->toString()
           << " " << getIndicator(ctx->type) << endl;
}

void Pass2Visitor::storeStatic(RecipeParser::DeclContext *ctx)
{
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->IDENTIFIER()->toString()
           << " " << getIndicator(ctx->type) << endl;
}

antlrcpp::Any Pass2Visitor::visitWhileStm(RecipeParser::WhileStmContext *ctx){
    string loopLab = getLabel();
    string endLab = getLabel();
    j_file << "\t" << loopLab << ":\n";
    visit(ctx->conditionList());
    j_file << "\ticonst_1" << endl;
    j_file << "\tif_icmpne " << endLab << endl;
    visit(ctx->statementList());
    j_file << "\tgoto " << loopLab << endl;
    j_file << "\t" << endLab << ":\n";
    return nullptr;    
}