
// Generated from f:\Git\recipe_code\Recipe.g4 by ANTLR 4.7.1

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

    virtual antlrcpp::Any visitType(RecipeParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitCode(RecipeParser::CodeContext *context) = 0;

    virtual antlrcpp::Any visitCode_line_list(RecipeParser::Code_line_listContext *context) = 0;

    virtual antlrcpp::Any visitCode_line(RecipeParser::Code_lineContext *context) = 0;

    virtual antlrcpp::Any visitStatement_list(RecipeParser::Statement_listContext *context) = 0;

    virtual antlrcpp::Any visitStatement(RecipeParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitFunction(RecipeParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitCall(RecipeParser::CallContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stm(RecipeParser::Return_stmContext *context) = 0;

    virtual antlrcpp::Any visitAdd_stm(RecipeParser::Add_stmContext *context) = 0;

    virtual antlrcpp::Any visitSub_stm(RecipeParser::Sub_stmContext *context) = 0;

    virtual antlrcpp::Any visitMult_stm(RecipeParser::Mult_stmContext *context) = 0;

    virtual antlrcpp::Any visitDiv_stm(RecipeParser::Div_stmContext *context) = 0;

    virtual antlrcpp::Any visitInc_stm(RecipeParser::Inc_stmContext *context) = 0;

    virtual antlrcpp::Any visitDec_stm(RecipeParser::Dec_stmContext *context) = 0;

    virtual antlrcpp::Any visitIf_stm(RecipeParser::If_stmContext *context) = 0;

    virtual antlrcpp::Any visitWhile_stm(RecipeParser::While_stmContext *context) = 0;

    virtual antlrcpp::Any visitUntil_stm(RecipeParser::Until_stmContext *context) = 0;

    virtual antlrcpp::Any visitPrint_stm(RecipeParser::Print_stmContext *context) = 0;

    virtual antlrcpp::Any visitCondition_list(RecipeParser::Condition_listContext *context) = 0;

    virtual antlrcpp::Any visitCondition(RecipeParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitComperator(RecipeParser::ComperatorContext *context) = 0;

    virtual antlrcpp::Any visitNumber(RecipeParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitVariable(RecipeParser::VariableContext *context) = 0;


};

