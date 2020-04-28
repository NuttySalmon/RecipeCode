#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>
#include <vector>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "antlr/RecipeBaseVisitor.h"
#include "antlr4-runtime.h"
#include "antlr/RecipeVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public RecipeBaseVisitor
{
private:
	string program_name;
	string j_file_name;
	ofstream j_file;
    vector<RecipeParser::DeclContext *> decl_ctx_list; // for loading values in function
    void loadValues();
    char getIndicatorDecl(RecipeParser::DeclContext *ctx);
    char getIndicator(TypeSpec *type);
    int labelCounter;
    string getLabel();
    string cmpPostfix(size_t comp);

public:
	Pass2Visitor();
    virtual ~Pass2Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProgram(RecipeParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(RecipeParser::HeaderContext *ctx) override;
    antlrcpp::Any visitMainBlock(RecipeParser::MainBlockContext *ctx) override;
    // antlrcpp::Any visitVarList(RecipeParser::VarListContext *ctx) override;
    antlrcpp::Any visitDecl(RecipeParser::DeclContext *ctx) override;
    // antlrcpp::Any visitVarId(RecipeParser::VarIdContext *ctx) override;
    antlrcpp::Any visitStatement(RecipeParser::StatementContext *ctx) override;
    // antlrcpp::Any visitAssignmentStmt(RecipeParser::AssignmentStmtContext *ctx) override;
    antlrcpp::Any visitPrintStm(RecipeParser::PrintStmContext *ctx) override;
    antlrcpp::Any visitPrintCharStm(RecipeParser::PrintCharStmContext *ctx) override;
    // antlrcpp::Any visitAddSubExpr(RecipeParser::AddSubExprContext *ctx) override;
    // antlrcpp::Any visitMulDivExpr(RecipeParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVariable(RecipeParser::VariableContext *ctx) override;
    // antlrcpp::Any visitSignedNumber(RecipeParser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitInt(RecipeParser::IntContext *ctx) override;
    antlrcpp::Any visitFloat(RecipeParser::FloatContext *ctx) override;
    antlrcpp::Any visitCondition(RecipeParser::ConditionContext *ctx) override;
    antlrcpp::Any visitTrueSym(RecipeParser::TrueSymContext *ctx) override;
    antlrcpp::Any visitAndCond(RecipeParser::AndCondContext *ctx) override;
    antlrcpp::Any visitOrCond(RecipeParser::OrCondContext *ctx) override;
    antlrcpp::Any visitIfStm(RecipeParser::IfStmContext *ctx) override;

};

#endif /* PASS2VISITOR_H_ */
