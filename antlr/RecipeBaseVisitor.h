
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

  virtual antlrcpp::Any visitEmpty(RecipeParser::EmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd(RecipeParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSub(RecipeParser::SubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMult(RecipeParser::MultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(RecipeParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInc(RecipeParser::IncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec(RecipeParser::DecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile(RecipeParser::WhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeat(RecipeParser::RepeatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_call(RecipeParser::Func_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf(RecipeParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(RecipeParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn(RecipeParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall(RecipeParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionList(RecipeParser::ConditionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(RecipeParser::ConditionContext *ctx) override {
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

