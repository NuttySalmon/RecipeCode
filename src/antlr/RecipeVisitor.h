
#include "../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from /home/thomas/recipe_code/Recipe.g4 by ANTLR 4.7.1

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

    virtual antlrcpp::Any visitMainBlock(RecipeParser::MainBlockContext *context) = 0;

    virtual antlrcpp::Any visitBlock(RecipeParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitHeader(RecipeParser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitData(RecipeParser::DataContext *context) = 0;

    virtual antlrcpp::Any visitDeclList(RecipeParser::DeclListContext *context) = 0;

    virtual antlrcpp::Any visitDecl(RecipeParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitCode(RecipeParser::CodeContext *context) = 0;

    virtual antlrcpp::Any visitCodeLineList(RecipeParser::CodeLineListContext *context) = 0;

    virtual antlrcpp::Any visitCodeLine(RecipeParser::CodeLineContext *context) = 0;

    virtual antlrcpp::Any visitStatementList(RecipeParser::StatementListContext *context) = 0;

    virtual antlrcpp::Any visitStatement(RecipeParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(RecipeParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitCall(RecipeParser::CallContext *context) = 0;

    virtual antlrcpp::Any visitReturnStm(RecipeParser::ReturnStmContext *context) = 0;

    virtual antlrcpp::Any visitAddStm(RecipeParser::AddStmContext *context) = 0;

    virtual antlrcpp::Any visitSubStm(RecipeParser::SubStmContext *context) = 0;

    virtual antlrcpp::Any visitMultStm(RecipeParser::MultStmContext *context) = 0;

    virtual antlrcpp::Any visitDivStm(RecipeParser::DivStmContext *context) = 0;

    virtual antlrcpp::Any visitIncStm(RecipeParser::IncStmContext *context) = 0;

    virtual antlrcpp::Any visitDecStm(RecipeParser::DecStmContext *context) = 0;

    virtual antlrcpp::Any visitIfStm(RecipeParser::IfStmContext *context) = 0;

    virtual antlrcpp::Any visitWhileStm(RecipeParser::WhileStmContext *context) = 0;

    virtual antlrcpp::Any visitUntilStm(RecipeParser::UntilStmContext *context) = 0;

    virtual antlrcpp::Any visitPrintStm(RecipeParser::PrintStmContext *context) = 0;

    virtual antlrcpp::Any visitPrintCharStm(RecipeParser::PrintCharStmContext *context) = 0;

    virtual antlrcpp::Any visitConditionList(RecipeParser::ConditionListContext *context) = 0;

    virtual antlrcpp::Any visitCondition(RecipeParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitOperand(RecipeParser::OperandContext *context) = 0;

    virtual antlrcpp::Any visitConstant(RecipeParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitTrueSym(RecipeParser::TrueSymContext *context) = 0;

    virtual antlrcpp::Any visitAndCond(RecipeParser::AndCondContext *context) = 0;

    virtual antlrcpp::Any visitOrCond(RecipeParser::OrCondContext *context) = 0;

    virtual antlrcpp::Any visitInt(RecipeParser::IntContext *context) = 0;

    virtual antlrcpp::Any visitFloat(RecipeParser::FloatContext *context) = 0;

    virtual antlrcpp::Any visitVariable(RecipeParser::VariableContext *context) = 0;


};

