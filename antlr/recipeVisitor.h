
// Generated from c:\Users\thoma\repos\recipe_code_win\recipe.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "recipeParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by recipeParser.
 */
class  recipeVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by recipeParser.
   */
    virtual antlrcpp::Any visitProgram(recipeParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitHeader(recipeParser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitData(recipeParser::DataContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_list(recipeParser::Declaration_listContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(recipeParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitType(recipeParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitCode(recipeParser::CodeContext *context) = 0;

    virtual antlrcpp::Any visitCode_line_list(recipeParser::Code_line_listContext *context) = 0;

    virtual antlrcpp::Any visitCode_line(recipeParser::Code_lineContext *context) = 0;

    virtual antlrcpp::Any visitStatement_list(recipeParser::Statement_listContext *context) = 0;

    virtual antlrcpp::Any visitEmpty(recipeParser::EmptyContext *context) = 0;

    virtual antlrcpp::Any visitAdd(recipeParser::AddContext *context) = 0;

    virtual antlrcpp::Any visitSub(recipeParser::SubContext *context) = 0;

    virtual antlrcpp::Any visitMult(recipeParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitDiv(recipeParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitInc(recipeParser::IncContext *context) = 0;

    virtual antlrcpp::Any visitDec(recipeParser::DecContext *context) = 0;

    virtual antlrcpp::Any visitWhile(recipeParser::WhileContext *context) = 0;

    virtual antlrcpp::Any visitRepeat(recipeParser::RepeatContext *context) = 0;

    virtual antlrcpp::Any visitFunc_call(recipeParser::Func_callContext *context) = 0;

    virtual antlrcpp::Any visitIf(recipeParser::IfContext *context) = 0;

    virtual antlrcpp::Any visitPrint(recipeParser::PrintContext *context) = 0;

    virtual antlrcpp::Any visitReturn(recipeParser::ReturnContext *context) = 0;

    virtual antlrcpp::Any visitCall(recipeParser::CallContext *context) = 0;

    virtual antlrcpp::Any visitCondition_list(recipeParser::Condition_listContext *context) = 0;

    virtual antlrcpp::Any visitCondition(recipeParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitComperator(recipeParser::ComperatorContext *context) = 0;

    virtual antlrcpp::Any visitInt(recipeParser::IntContext *context) = 0;

    virtual antlrcpp::Any visitFloat(recipeParser::FloatContext *context) = 0;

    virtual antlrcpp::Any visitVariable(recipeParser::VariableContext *context) = 0;


};

