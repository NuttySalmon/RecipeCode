
// Generated from f:\Git\recipe_code\Recipe.g4 by ANTLR 4.7.1

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

  virtual antlrcpp::Any visitHeader(RecipeParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData(RecipeParser::DataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration_list(RecipeParser::Declaration_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(RecipeParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(RecipeParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCode(RecipeParser::CodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCode_line_list(RecipeParser::Code_line_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCode_line(RecipeParser::Code_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_list(RecipeParser::Statement_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(RecipeParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(RecipeParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall(RecipeParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stm(RecipeParser::Return_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_stm(RecipeParser::Add_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSub_stm(RecipeParser::Sub_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMult_stm(RecipeParser::Mult_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv_stm(RecipeParser::Div_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInc_stm(RecipeParser::Inc_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec_stm(RecipeParser::Dec_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stm(RecipeParser::If_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_stm(RecipeParser::While_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntil_stm(RecipeParser::Until_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint_stm(RecipeParser::Print_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition_list(RecipeParser::Condition_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(RecipeParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComperator(RecipeParser::ComperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(RecipeParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(RecipeParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }


};

