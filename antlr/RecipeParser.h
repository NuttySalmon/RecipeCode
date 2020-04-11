
// Generated from f:\Git\recipe_code\Recipe.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  RecipeParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, PERIOD = 7, 
    COMMA = 8, FUNCTION_CALL = 9, INT_TYPE = 10, DEC_TYPE = 11, ARR_INT_TYPE = 12, 
    ARR_DEC_TYPE = 13, ARRAY_ELEM = 14, OF = 15, HEADER_SYM = 16, DECLARATION_SYM = 17, 
    CODE_SYM = 18, RETURN = 19, IF = 20, THEN = 21, ELSE = 22, WHILE = 23, 
    WHILE_DO = 24, REPEAT = 25, UNTIL = 26, ADD = 27, SUB = 28, MULT = 29, 
    DIV = 30, STEP_SYM = 31, AND = 32, OR = 33, DEST = 34, SRC = 35, PRINT = 36, 
    IS = 37, TRUE = 38, NOT = 39, GT = 40, LT = 41, EQ = 42, INC = 43, DEC = 44, 
    WS = 45, NEWLINE = 46, COMMENT = 47, IDENTIFIER = 48, INTEGER = 49
  };

  enum {
    RuleProgram = 0, RuleHeader = 1, RuleData = 2, RuleDeclaration_list = 3, 
    RuleDeclaration = 4, RuleType = 5, RuleCode = 6, RuleCode_line_list = 7, 
    RuleCode_line = 8, RuleStatement_list = 9, RuleStatement = 10, RuleFunction = 11, 
    RuleCall = 12, RuleReturn_stm = 13, RuleAdd_stm = 14, RuleSub_stm = 15, 
    RuleMult_stm = 16, RuleDiv_stm = 17, RuleInc_stm = 18, RuleDec_stm = 19, 
    RuleIf_stm = 20, RuleWhile_stm = 21, RuleUntil_stm = 22, RulePrint_stm = 23, 
    RuleCondition_list = 24, RuleCondition = 25, RuleComperator = 26, RuleNumber = 27, 
    RuleVariable = 28
  };

  RecipeParser(antlr4::TokenStream *input);
  ~RecipeParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class HeaderContext;
  class DataContext;
  class Declaration_listContext;
  class DeclarationContext;
  class TypeContext;
  class CodeContext;
  class Code_line_listContext;
  class Code_lineContext;
  class Statement_listContext;
  class StatementContext;
  class FunctionContext;
  class CallContext;
  class Return_stmContext;
  class Add_stmContext;
  class Sub_stmContext;
  class Mult_stmContext;
  class Div_stmContext;
  class Inc_stmContext;
  class Dec_stmContext;
  class If_stmContext;
  class While_stmContext;
  class Until_stmContext;
  class Print_stmContext;
  class Condition_listContext;
  class ConditionContext;
  class ComperatorContext;
  class NumberContext;
  class VariableContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderContext *header();
    DataContext *data();
    CodeContext *code();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

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
    Declaration_listContext *declaration_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataContext* data();

  class  Declaration_listContext : public antlr4::ParserRuleContext {
  public:
    Declaration_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declaration_listContext* declaration_list();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    TypeContext *type();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_TYPE();
    antlr4::tree::TerminalNode *DEC_TYPE();
    antlr4::tree::TerminalNode *ARR_DEC_TYPE();
    antlr4::tree::TerminalNode *ARR_INT_TYPE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  CodeContext : public antlr4::ParserRuleContext {
  public:
    CodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CODE_SYM();
    Code_line_listContext *code_line_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeContext* code();

  class  Code_line_listContext : public antlr4::ParserRuleContext {
  public:
    Code_line_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Code_lineContext *> code_line();
    Code_lineContext* code_line(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Code_line_listContext* code_line_list();

  class  Code_lineContext : public antlr4::ParserRuleContext {
  public:
    Code_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    Statement_listContext *statement_list();
    antlr4::tree::TerminalNode *PERIOD();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Code_lineContext* code_line();

  class  Statement_listContext : public antlr4::ParserRuleContext {
  public:
    Statement_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_listContext* statement_list();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Add_stmContext *add_stm();
    Sub_stmContext *sub_stm();
    Mult_stmContext *mult_stm();
    Div_stmContext *div_stm();
    Inc_stmContext *inc_stm();
    Dec_stmContext *dec_stm();
    While_stmContext *while_stm();
    Until_stmContext *until_stm();
    FunctionContext *function();
    If_stmContext *if_stm();
    Print_stmContext *print_stm();
    Return_stmContext *return_stm();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_CALL();
    antlr4::tree::TerminalNode *IDENTIFIER();
    VariableContext *variable();
    CallContext *call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallContext* call();

  class  Return_stmContext : public antlr4::ParserRuleContext {
  public:
    Return_stmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmContext* return_stm();

  class  Add_stmContext : public antlr4::ParserRuleContext {
  public:
    Add_stmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *DEST();
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_stmContext* add_stm();

  class  Sub_stmContext : public antlr4::ParserRuleContext {
  public:
    Sub_stmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    antlr4::tree::TerminalNode *DEST();
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sub_stmContext* sub_stm();

  class  Mult_stmContext : public antlr4::ParserRuleContext {
  public:
    Mult_stmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULT();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    antlr4::tree::TerminalNode *DEST();
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mult_stmContext* mult_stm();

  class  Div_stmContext : public antlr4::ParserRuleContext {
  public:
    Div_stmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIV();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    antlr4::tree::TerminalNode *SRC();
    antlr4::tree::TerminalNode *INTEGER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Div_stmContext* div_stm();

  class  Inc_stmContext : public antlr4::ParserRuleContext {
  public:
    Inc_stmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INC();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inc_stmContext* inc_stm();

  class  Dec_stmContext : public antlr4::ParserRuleContext {
  public:
    Dec_stmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dec_stmContext* dec_stm();

  class  If_stmContext : public antlr4::ParserRuleContext {
  public:
    If_stmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ConditionContext *condition();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Statement_listContext *> statement_list();
    Statement_listContext* statement_list(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmContext* if_stm();

  class  While_stmContext : public antlr4::ParserRuleContext {
  public:
    While_stmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    Condition_listContext *condition_list();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *WHILE_DO();
    Statement_listContext *statement_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_stmContext* while_stm();

  class  Until_stmContext : public antlr4::ParserRuleContext {
  public:
    Until_stmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    Statement_listContext *statement_list();
    antlr4::tree::TerminalNode *UNTIL();
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Until_stmContext* until_stm();

  class  Print_stmContext : public antlr4::ParserRuleContext {
  public:
    Print_stmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Print_stmContext* print_stm();

  class  Condition_listContext : public antlr4::ParserRuleContext {
  public:
    Condition_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_listContext* condition_list();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    antlr4::tree::TerminalNode *IS();
    ComperatorContext *comperator();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *NOT();
    NumberContext *number();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  ComperatorContext : public antlr4::ParserRuleContext {
  public:
    ComperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *EQ();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComperatorContext* comperator();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INTEGER();
    antlr4::tree::TerminalNode* INTEGER(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
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

