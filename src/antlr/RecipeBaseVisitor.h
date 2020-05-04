
#include "../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from /home/thomas/recipe_code/Recipe.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "RecipeVisitor.h"


/**
 * This class provides an empty implementation of RecipeVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RecipeBaseVisitor : public RecipeVisitor {
public:

  virtual antlrcpp::Any visitProgram(RecipeParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(RecipeParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMainBlock(RecipeParser::MainBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(RecipeParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeader(RecipeParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData(RecipeParser::DataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclList(RecipeParser::DeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(RecipeParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCode(RecipeParser::CodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCodeLineList(RecipeParser::CodeLineListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCodeLine(RecipeParser::CodeLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementList(RecipeParser::StatementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(RecipeParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnCall(RecipeParser::ReturnCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStm(RecipeParser::AssignmentStmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(RecipeParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPass(RecipeParser::PassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParams(RecipeParser::ParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam(RecipeParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStm(RecipeParser::ReturnStmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubStm(RecipeParser::AddSubStmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulStm(RecipeParser::MulStmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDivStm(RecipeParser::DivStmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncDecStm(RecipeParser::IncDecStmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStm(RecipeParser::IfStmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStm(RecipeParser::WhileStmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntilStm(RecipeParser::UntilStmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintStm(RecipeParser::PrintStmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintCharStm(RecipeParser::PrintCharStmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionList(RecipeParser::ConditionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(RecipeParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperand(RecipeParser::OperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(RecipeParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrueSym(RecipeParser::TrueSymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndCond(RecipeParser::AndCondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrCond(RecipeParser::OrCondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt(RecipeParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloat(RecipeParser::FloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(RecipeParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }


};

