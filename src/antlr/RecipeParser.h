
#include "../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from /home/thomas/recipe_code/Recipe.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  RecipeParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, GOTO = 11, PERIOD = 12, COMMA = 13, FUNCTION = 14, 
    INT_TYPE = 15, FLOAT_TYPE = 16, ARR_INT_TYPE = 17, ARR_FLOAT_TYPE = 18, 
    ARRAY_ELEM = 19, OF = 20, HEADER_SYM = 21, DECLARATION_SYM = 22, CODE_SYM = 23, 
    RETURN = 24, ASSIGN = 25, IF = 26, THEN = 27, ELSE = 28, WHILE = 29, 
    WHILE_DO = 30, REPEAT = 31, UNTIL = 32, ADD = 33, SUB = 34, MUL = 35, 
    DIV = 36, STEP_SYM = 37, AND = 38, OR = 39, DEST = 40, PRINT = 41, PRINT_CHAR = 42, 
    IS = 43, TRUE_SYM = 44, NOT = 45, GT = 46, LT = 47, EQ = 48, GE = 49, 
    LE = 50, INC = 51, DEC = 52, WS = 53, NEWLINE = 54, COMMENT = 55, IDENTIFIER = 56, 
    INTEGER = 57
  };

  enum {
    RuleProgram = 0, RuleMainBlock = 1, RuleBlock = 2, RuleHeader = 3, RuleData = 4, 
    RuleDeclList = 5, RuleDecl = 6, RuleCode = 7, RuleCodeLineList = 8, 
    RuleCodeLine = 9, RuleStatementList = 10, RuleStatement = 11, RuleAssignmentStm = 12, 
    RuleJumpStm = 13, RuleFunctionCall = 14, RuleCall = 15, RuleReturnStm = 16, 
    RuleAddSubStm = 17, RuleMulStm = 18, RuleDivStm = 19, RuleIncDecStm = 20, 
    RuleIfStm = 21, RuleWhileStm = 22, RuleUntilStm = 23, RulePrintStm = 24, 
    RulePrintCharStm = 25, RuleConditionList = 26, RuleCondition = 27, RuleOperand = 28, 
    RuleConstant = 29, RuleTrueSym = 30, RuleAndCond = 31, RuleOrCond = 32, 
    RuleNumber = 33, RuleVariable = 34
  };

  RecipeParser(antlr4::TokenStream *input);
  ~RecipeParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class MainBlockContext;
  class BlockContext;
  class HeaderContext;
  class DataContext;
  class DeclListContext;
  class DeclContext;
  class CodeContext;
  class CodeLineListContext;
  class CodeLineContext;
  class StatementListContext;
  class StatementContext;
  class AssignmentStmContext;
  class JumpStmContext;
  class FunctionCallContext;
  class CallContext;
  class ReturnStmContext;
  class AddSubStmContext;
  class MulStmContext;
  class DivStmContext;
  class IncDecStmContext;
  class IfStmContext;
  class WhileStmContext;
  class UntilStmContext;
  class PrintStmContext;
  class PrintCharStmContext;
  class ConditionListContext;
  class ConditionContext;
  class OperandContext;
  class ConstantContext;
  class TrueSymContext;
  class AndCondContext;
  class OrCondContext;
  class NumberContext;
  class VariableContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderContext *header();
    MainBlockContext *mainBlock();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  MainBlockContext : public antlr4::ParserRuleContext {
  public:
    MainBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainBlockContext* mainBlock();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataContext *data();
    CodeContext *code();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEADER_SYM();
    antlr4::tree::TerminalNode *IDENTIFIER();
    CallContext *call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderContext* header();

  class  DataContext : public antlr4::ParserRuleContext {
  public:
    DataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARATION_SYM();
    DeclListContext *declList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataContext* data();

  class  DeclListContext : public antlr4::ParserRuleContext {
  public:
    DeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclListContext* declList();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    antlr4::Token *dtype = nullptr;;
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *INT_TYPE();
    antlr4::tree::TerminalNode *FLOAT_TYPE();
    antlr4::tree::TerminalNode *ARR_FLOAT_TYPE();
    antlr4::tree::TerminalNode *ARR_INT_TYPE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclContext* decl();

  class  CodeContext : public antlr4::ParserRuleContext {
  public:
    CodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CODE_SYM();
    CodeLineListContext *codeLineList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeContext* code();

  class  CodeLineListContext : public antlr4::ParserRuleContext {
  public:
    CodeLineListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CodeLineContext *> codeLine();
    CodeLineContext* codeLine(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeLineListContext* codeLineList();

  class  CodeLineContext : public antlr4::ParserRuleContext {
  public:
    CodeLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    StatementListContext *statementList();
    antlr4::tree::TerminalNode *PERIOD();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeLineContext* codeLine();

  class  StatementListContext : public antlr4::ParserRuleContext {
  public:
    StatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementListContext* statementList();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddSubStmContext *addSubStm();
    MulStmContext *mulStm();
    DivStmContext *divStm();
    IncDecStmContext *incDecStm();
    WhileStmContext *whileStm();
    UntilStmContext *untilStm();
    FunctionCallContext *functionCall();
    IfStmContext *ifStm();
    PrintStmContext *printStm();
    PrintCharStmContext *printCharStm();
    ReturnStmContext *returnStm();
    AssignmentStmContext *assignmentStm();
    JumpStmContext *jumpStm();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  AssignmentStmContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    VariableContext *variable();
    OperandContext *operand();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentStmContext* assignmentStm();

  class  JumpStmContext : public antlr4::ParserRuleContext {
  public:
    JumpStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *INTEGER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpStmContext* jumpStm();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *IDENTIFIER();
    VariableContext *variable();
    CallContext *call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallContext* call();

  class  ReturnStmContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStmContext* returnStm();

  class  AddSubStmContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;;
    AddSubStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    antlr4::tree::TerminalNode *DEST();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddSubStmContext* addSubStm();

  class  MulStmContext : public antlr4::ParserRuleContext {
  public:
    MulStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    antlr4::tree::TerminalNode *DEST();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulStmContext* mulStm();

  class  DivStmContext : public antlr4::ParserRuleContext {
  public:
    DivStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIV();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEST();
    antlr4::tree::TerminalNode* DEST(size_t i);
    std::vector<NumberContext *> number();
    NumberContext* number(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DivStmContext* divStm();

  class  IncDecStmContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;;
    IncDecStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *INC();
    antlr4::tree::TerminalNode *DEC();
    NumberContext *number();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncDecStmContext* incDecStm();

  class  IfStmContext : public antlr4::ParserRuleContext {
  public:
    IfStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ConditionListContext *conditionList();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<StatementListContext *> statementList();
    StatementListContext* statementList(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStmContext* ifStm();

  class  WhileStmContext : public antlr4::ParserRuleContext {
  public:
    WhileStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ConditionListContext *conditionList();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *WHILE_DO();
    StatementListContext *statementList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStmContext* whileStm();

  class  UntilStmContext : public antlr4::ParserRuleContext {
  public:
    UntilStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    StatementListContext *statementList();
    antlr4::tree::TerminalNode *UNTIL();
    ConditionListContext *conditionList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UntilStmContext* untilStm();

  class  PrintStmContext : public antlr4::ParserRuleContext {
  public:
    PrintStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintStmContext* printStm();

  class  PrintCharStmContext : public antlr4::ParserRuleContext {
  public:
    PrintCharStmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT_CHAR();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintCharStmContext* printCharStm();

  class  ConditionListContext : public antlr4::ParserRuleContext {
  public:
    ConditionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionContext *condition();
    std::vector<AndCondContext *> andCond();
    AndCondContext* andCond(size_t i);
    std::vector<OrCondContext *> orCond();
    OrCondContext* orCond(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionListContext* conditionList();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *comp = nullptr;;
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  OperandContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    OperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    ConstantContext *constant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperandContext* operand();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    TrueSymContext *trueSym();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  TrueSymContext : public antlr4::ParserRuleContext {
  public:
    TrueSymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE_SYM();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrueSymContext* trueSym();

  class  AndCondContext : public antlr4::ParserRuleContext {
  public:
    AndCondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndCondContext* andCond();

  class  OrCondContext : public antlr4::ParserRuleContext {
  public:
    OrCondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrCondContext* orCond();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() : antlr4::ParserRuleContext() { }
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FloatContext : public NumberContext {
  public:
    FloatContext(NumberContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> INTEGER();
    antlr4::tree::TerminalNode* INTEGER(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntContext : public NumberContext {
  public:
    IntContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *INTEGER();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *ARRAY_ELEM();
    antlr4::tree::TerminalNode *OF();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

