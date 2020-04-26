
// Generated from /mnt/f/repos/recipe_code/Recipe.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "RecipeParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by RecipeParser.
 */
class  RecipeVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by RecipeParser.
   */
    virtual antlrcpp::Any visitProgram(RecipeParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitHeader(RecipeParser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitData(RecipeParser::DataContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_list(RecipeParser::Declaration_listContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(RecipeParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitCode(RecipeParser::CodeContext *context) = 0;

    virtual antlrcpp::Any visitCode_line_list(RecipeParser::Code_line_listContext *context) = 0;

    virtual antlrcpp::Any visitCode_line(RecipeParser::Code_lineContext *context) = 0;

    virtual antlrcpp::Any visitStatement_list(RecipeParser::Statement_listContext *context) = 0;

    virtual antlrcpp::Any visitEmpty(RecipeParser::EmptyContext *context) = 0;

    virtual antlrcpp::Any visitAdd(RecipeParser::AddContext *context) = 0;

    virtual antlrcpp::Any visitSub(RecipeParser::SubContext *context) = 0;

    virtual antlrcpp::Any visitMult(RecipeParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitDiv(RecipeParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitInc(RecipeParser::IncContext *context) = 0;

    virtual antlrcpp::Any visitDec(RecipeParser::DecContext *context) = 0;

    virtual antlrcpp::Any visitWhile(RecipeParser::WhileContext *context) = 0;

    virtual antlrcpp::Any visitRepeat(RecipeParser::RepeatContext *context) = 0;

    virtual antlrcpp::Any visitFunc_call(RecipeParser::Func_callContext *context) = 0;

    virtual antlrcpp::Any visitIf(RecipeParser::IfContext *context) = 0;

    virtual antlrcpp::Any visitPrint(RecipeParser::PrintContext *context) = 0;

    virtual antlrcpp::Any visitReturn(RecipeParser::ReturnContext *context) = 0;

    virtual antlrcpp::Any visitCall(RecipeParser::CallContext *context) = 0;

    virtual antlrcpp::Any visitCondition_list(RecipeParser::Condition_listContext *context) = 0;

    virtual antlrcpp::Any visitCondition(RecipeParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitInt(RecipeParser::IntContext *context) = 0;

    virtual antlrcpp::Any visitFloat(RecipeParser::FloatContext *context) = 0;

    virtual antlrcpp::Any visitVariable(RecipeParser::VariableContext *context) = 0;


};

