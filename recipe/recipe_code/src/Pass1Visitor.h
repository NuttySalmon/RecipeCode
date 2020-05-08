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
    antlrcpp::Any visitDecl(RecipeParser::DeclContext *ctx) override;
    antlrcpp::Any visitVariable(RecipeParser::VariableContext *ctx) override;
    antlrcpp::Any visitInt(RecipeParser::IntContext *ctx) override;
    antlrcpp::Any visitFloat(RecipeParser::FloatContext *ctx) override;
    antlrcpp::Any visitOperand(RecipeParser::OperandContext *ctx) override;
};

#endif /* PASS1VISITOR_H_ */
