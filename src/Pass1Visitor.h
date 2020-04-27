#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "antlr/RecipeBaseVisitor.h"
#include "antlr4-runtime.h"
#include "antlr/RecipeVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public RecipeBaseVisitor
{
private:
    SymTabStack *symtab_stack;
    vector<SymTabEntry *> var_id_list;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    antlrcpp::Any visitProgram(RecipeParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(RecipeParser::HeaderContext *ctx) override;
    // antlrcpp::Any visitVarList(RecipeParser::VarListContext *ctx) override;
    antlrcpp::Any visitDecl(RecipeParser::DeclContext *ctx) override;
    // antlrcpp::Any visitTypeId(RecipeParser::TypeIdContext *ctx) override;
    // antlrcpp::Any visitAddSubExpr(RecipeParser::AddSubExprContext *ctx) override;
    // antlrcpp::Any visitMulDivExpr(RecipeParser::MulDivExprContext *ctx) override;
    // antlrcpp::Any visitVariableExpr(RecipeParser::VariableExprContext *ctx) override;
    // antlrcpp::Any visitSignedNumberExpr(RecipeParser::SignedNumberExprContext *ctx) override;
    // antlrcpp::Any visitSignedNumber(RecipeParser::SignedNumberContext *ctx) override;
    // antlrcpp::Any visitUnsignedNumberExpr(RecipeParser::UnsignedNumberExprContext *ctx) override;
    antlrcpp::Any visitInt(RecipeParser::IntContext *ctx) override;
    antlrcpp::Any visitFloat(RecipeParser::FloatContext *ctx) override;
    // antlrcpp::Any visitParenExpr(RecipeParser::ParenExprContext *ctx) override;
};

#endif /* PASS1VISITOR_H_ */
