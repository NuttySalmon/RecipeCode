#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

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
    // antlrcpp::Any visitStmt(RecipeParser::StmtContext *ctx) override;
    // antlrcpp::Any visitAssignmentStmt(RecipeParser::AssignmentStmtContext *ctx) override;
    // antlrcpp::Any visitPrintStmt(RecipeParser::PrintStmtContext *ctx) override;
    // antlrcpp::Any visitAddSubExpr(RecipeParser::AddSubExprContext *ctx) override;
    // antlrcpp::Any visitMulDivExpr(RecipeParser::MulDivExprContext *ctx) override;
    // antlrcpp::Any visitVariableExpr(RecipeParser::VariableExprContext *ctx) override;
    // antlrcpp::Any visitSignedNumber(RecipeParser::SignedNumberContext *ctx) override;
    // antlrcpp::Any visitIntegerConst(RecipeParser::IntegerConstContext *ctx) override;
    // antlrcpp::Any visitFloatConst(RecipeParser::FloatConstContext *ctx) override;
};

#endif /* PASS2VISITOR_H_ */
