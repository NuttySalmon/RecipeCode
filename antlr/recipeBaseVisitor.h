
// Generated from c:\Users\thoma\repos\recipe_code_win\recipe.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "recipeVisitor.h"


/**
 * This class provides an empty implementation of recipeVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  recipeBaseVisitor : public recipeVisitor {
public:

  virtual antlrcpp::Any visitProgram(recipeParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeader(recipeParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData(recipeParser::DataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration_list(recipeParser::Declaration_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(recipeParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(recipeParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCode(recipeParser::CodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCode_line_list(recipeParser::Code_line_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCode_line(recipeParser::Code_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_list(recipeParser::Statement_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty(recipeParser::EmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd(recipeParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSub(recipeParser::SubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMult(recipeParser::MultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(recipeParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInc(recipeParser::IncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec(recipeParser::DecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile(recipeParser::WhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeat(recipeParser::RepeatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_call(recipeParser::Func_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf(recipeParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(recipeParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn(recipeParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall(recipeParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition_list(recipeParser::Condition_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(recipeParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComperator(recipeParser::ComperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt(recipeParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloat(recipeParser::FloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(recipeParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }


};

