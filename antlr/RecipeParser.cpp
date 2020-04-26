
// Generated from f:\repos\recipe_code\Recipe.g4 by ANTLR 4.7.1


#include "RecipeVisitor.h"

#include "RecipeParser.h"


using namespace antlrcpp;
using namespace antlr4;

RecipeParser::RecipeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

RecipeParser::~RecipeParser() {
  delete _interpreter;
}

std::string RecipeParser::getGrammarFileName() const {
  return "Recipe.g4";
}

const std::vector<std::string>& RecipeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& RecipeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

RecipeParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RecipeParser::HeaderContext* RecipeParser::ProgramContext::header() {
  return getRuleContext<RecipeParser::HeaderContext>(0);
}

RecipeParser::DataContext* RecipeParser::ProgramContext::data() {
  return getRuleContext<RecipeParser::DataContext>(0);
}

RecipeParser::CodeContext* RecipeParser::ProgramContext::code() {
  return getRuleContext<RecipeParser::CodeContext>(0);
}


size_t RecipeParser::ProgramContext::getRuleIndex() const {
  return RecipeParser::RuleProgram;
}

antlrcpp::Any RecipeParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::ProgramContext* RecipeParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, RecipeParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    header();
    setState(35);
    data();
    setState(37);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::CODE_SYM) {
      setState(36);
      code();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

RecipeParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::HeaderContext::HEADER_SYM() {
  return getToken(RecipeParser::HEADER_SYM, 0);
}

tree::TerminalNode* RecipeParser::HeaderContext::IDENTIFIER() {
  return getToken(RecipeParser::IDENTIFIER, 0);
}

RecipeParser::CallContext* RecipeParser::HeaderContext::call() {
  return getRuleContext<RecipeParser::CallContext>(0);
}


size_t RecipeParser::HeaderContext::getRuleIndex() const {
  return RecipeParser::RuleHeader;
}

antlrcpp::Any RecipeParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::HeaderContext* RecipeParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, RecipeParser::RuleHeader);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    match(RecipeParser::HEADER_SYM);
    setState(40);
    match(RecipeParser::IDENTIFIER);
    setState(42);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::T__5) {
      setState(41);
      call();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataContext ------------------------------------------------------------------

RecipeParser::DataContext::DataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::DataContext::DECLARATION_SYM() {
  return getToken(RecipeParser::DECLARATION_SYM, 0);
}

RecipeParser::Declaration_listContext* RecipeParser::DataContext::declaration_list() {
  return getRuleContext<RecipeParser::Declaration_listContext>(0);
}


size_t RecipeParser::DataContext::getRuleIndex() const {
  return RecipeParser::RuleData;
}

antlrcpp::Any RecipeParser::DataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitData(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::DataContext* RecipeParser::data() {
  DataContext *_localctx = _tracker.createInstance<DataContext>(_ctx, getState());
  enterRule(_localctx, 4, RecipeParser::RuleData);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(RecipeParser::DECLARATION_SYM);
    setState(45);
    declaration_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_listContext ------------------------------------------------------------------

RecipeParser::Declaration_listContext::Declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::DeclarationContext *> RecipeParser::Declaration_listContext::declaration() {
  return getRuleContexts<RecipeParser::DeclarationContext>();
}

RecipeParser::DeclarationContext* RecipeParser::Declaration_listContext::declaration(size_t i) {
  return getRuleContext<RecipeParser::DeclarationContext>(i);
}


size_t RecipeParser::Declaration_listContext::getRuleIndex() const {
  return RecipeParser::RuleDeclaration_list;
}

antlrcpp::Any RecipeParser::Declaration_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitDeclaration_list(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Declaration_listContext* RecipeParser::declaration_list() {
  Declaration_listContext *_localctx = _tracker.createInstance<Declaration_listContext>(_ctx, getState());
  enterRule(_localctx, 6, RecipeParser::RuleDeclaration_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(47);
      declaration();
      setState(50); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == RecipeParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

RecipeParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RecipeParser::NumberContext* RecipeParser::DeclarationContext::number() {
  return getRuleContext<RecipeParser::NumberContext>(0);
}

RecipeParser::TypeContext* RecipeParser::DeclarationContext::type() {
  return getRuleContext<RecipeParser::TypeContext>(0);
}

tree::TerminalNode* RecipeParser::DeclarationContext::OF() {
  return getToken(RecipeParser::OF, 0);
}

tree::TerminalNode* RecipeParser::DeclarationContext::IDENTIFIER() {
  return getToken(RecipeParser::IDENTIFIER, 0);
}


size_t RecipeParser::DeclarationContext::getRuleIndex() const {
  return RecipeParser::RuleDeclaration;
}

antlrcpp::Any RecipeParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::DeclarationContext* RecipeParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, RecipeParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(RecipeParser::T__0);
    setState(53);
    number();
    setState(54);
    type();
    setState(55);
    match(RecipeParser::OF);
    setState(56);
    match(RecipeParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

RecipeParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::TypeContext::INT_TYPE() {
  return getToken(RecipeParser::INT_TYPE, 0);
}

tree::TerminalNode* RecipeParser::TypeContext::DEC_TYPE() {
  return getToken(RecipeParser::DEC_TYPE, 0);
}

tree::TerminalNode* RecipeParser::TypeContext::ARR_DEC_TYPE() {
  return getToken(RecipeParser::ARR_DEC_TYPE, 0);
}

tree::TerminalNode* RecipeParser::TypeContext::ARR_INT_TYPE() {
  return getToken(RecipeParser::ARR_INT_TYPE, 0);
}


size_t RecipeParser::TypeContext::getRuleIndex() const {
  return RecipeParser::RuleType;
}

antlrcpp::Any RecipeParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::TypeContext* RecipeParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, RecipeParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << RecipeParser::INT_TYPE)
      | (1ULL << RecipeParser::DEC_TYPE)
      | (1ULL << RecipeParser::ARR_INT_TYPE)
      | (1ULL << RecipeParser::ARR_DEC_TYPE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeContext ------------------------------------------------------------------

RecipeParser::CodeContext::CodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::CodeContext::CODE_SYM() {
  return getToken(RecipeParser::CODE_SYM, 0);
}

RecipeParser::Code_line_listContext* RecipeParser::CodeContext::code_line_list() {
  return getRuleContext<RecipeParser::Code_line_listContext>(0);
}


size_t RecipeParser::CodeContext::getRuleIndex() const {
  return RecipeParser::RuleCode;
}

antlrcpp::Any RecipeParser::CodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitCode(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::CodeContext* RecipeParser::code() {
  CodeContext *_localctx = _tracker.createInstance<CodeContext>(_ctx, getState());
  enterRule(_localctx, 12, RecipeParser::RuleCode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(RecipeParser::CODE_SYM);
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::INTEGER) {
      setState(61);
      code_line_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Code_line_listContext ------------------------------------------------------------------

RecipeParser::Code_line_listContext::Code_line_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::Code_lineContext *> RecipeParser::Code_line_listContext::code_line() {
  return getRuleContexts<RecipeParser::Code_lineContext>();
}

RecipeParser::Code_lineContext* RecipeParser::Code_line_listContext::code_line(size_t i) {
  return getRuleContext<RecipeParser::Code_lineContext>(i);
}


size_t RecipeParser::Code_line_listContext::getRuleIndex() const {
  return RecipeParser::RuleCode_line_list;
}

antlrcpp::Any RecipeParser::Code_line_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitCode_line_list(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Code_line_listContext* RecipeParser::code_line_list() {
  Code_line_listContext *_localctx = _tracker.createInstance<Code_line_listContext>(_ctx, getState());
  enterRule(_localctx, 14, RecipeParser::RuleCode_line_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(64);
      code_line();
      setState(67); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == RecipeParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Code_lineContext ------------------------------------------------------------------

RecipeParser::Code_lineContext::Code_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::Code_lineContext::INTEGER() {
  return getToken(RecipeParser::INTEGER, 0);
}

RecipeParser::Statement_listContext* RecipeParser::Code_lineContext::statement_list() {
  return getRuleContext<RecipeParser::Statement_listContext>(0);
}

tree::TerminalNode* RecipeParser::Code_lineContext::PERIOD() {
  return getToken(RecipeParser::PERIOD, 0);
}


size_t RecipeParser::Code_lineContext::getRuleIndex() const {
  return RecipeParser::RuleCode_line;
}

antlrcpp::Any RecipeParser::Code_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitCode_line(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Code_lineContext* RecipeParser::code_line() {
  Code_lineContext *_localctx = _tracker.createInstance<Code_lineContext>(_ctx, getState());
  enterRule(_localctx, 16, RecipeParser::RuleCode_line);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(RecipeParser::INTEGER);
    setState(70);
    match(RecipeParser::PERIOD);
    setState(71);
    statement_list();
    setState(72);
    match(RecipeParser::PERIOD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_listContext ------------------------------------------------------------------

RecipeParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::StatementContext *> RecipeParser::Statement_listContext::statement() {
  return getRuleContexts<RecipeParser::StatementContext>();
}

RecipeParser::StatementContext* RecipeParser::Statement_listContext::statement(size_t i) {
  return getRuleContext<RecipeParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> RecipeParser::Statement_listContext::THEN() {
  return getTokens(RecipeParser::THEN);
}

tree::TerminalNode* RecipeParser::Statement_listContext::THEN(size_t i) {
  return getToken(RecipeParser::THEN, i);
}


size_t RecipeParser::Statement_listContext::getRuleIndex() const {
  return RecipeParser::RuleStatement_list;
}

antlrcpp::Any RecipeParser::Statement_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitStatement_list(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Statement_listContext* RecipeParser::statement_list() {
  Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, getState());
  enterRule(_localctx, 18, RecipeParser::RuleStatement_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(74);
    statement();
    setState(79);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(75);
        match(RecipeParser::THEN);
        setState(76);
        statement(); 
      }
      setState(81);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

RecipeParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RecipeParser::StatementContext::getRuleIndex() const {
  return RecipeParser::RuleStatement;
}

void RecipeParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::AddContext::ADD() {
  return getToken(RecipeParser::ADD, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::AddContext::IDENTIFIER() {
  return getTokens(RecipeParser::IDENTIFIER);
}

tree::TerminalNode* RecipeParser::AddContext::IDENTIFIER(size_t i) {
  return getToken(RecipeParser::IDENTIFIER, i);
}

tree::TerminalNode* RecipeParser::AddContext::DEST() {
  return getToken(RecipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::AddContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::AddContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}

RecipeParser::AddContext::AddContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::SubContext::SUB() {
  return getToken(RecipeParser::SUB, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::SubContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::SubContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::SubContext::DEST() {
  return getToken(RecipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::SubContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::SubContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}

RecipeParser::SubContext::SubContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::SubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::MultContext::MULT() {
  return getToken(RecipeParser::MULT, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::MultContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::MultContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::MultContext::DEST() {
  return getToken(RecipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::MultContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::MultContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}

RecipeParser::MultContext::MultContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::DecContext::DEC() {
  return getToken(RecipeParser::DEC, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::DecContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::DecContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

RecipeParser::DecContext::DecContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::DecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::WhileContext::WHILE() {
  return getToken(RecipeParser::WHILE, 0);
}

RecipeParser::Condition_listContext* RecipeParser::WhileContext::condition_list() {
  return getRuleContext<RecipeParser::Condition_listContext>(0);
}

tree::TerminalNode* RecipeParser::WhileContext::COMMA() {
  return getToken(RecipeParser::COMMA, 0);
}

tree::TerminalNode* RecipeParser::WhileContext::WHILE_DO() {
  return getToken(RecipeParser::WHILE_DO, 0);
}

RecipeParser::Statement_listContext* RecipeParser::WhileContext::statement_list() {
  return getRuleContext<RecipeParser::Statement_listContext>(0);
}

RecipeParser::WhileContext::WhileContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Func_callContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::Func_callContext::FUNCTION() {
  return getToken(RecipeParser::FUNCTION, 0);
}

tree::TerminalNode* RecipeParser::Func_callContext::IDENTIFIER() {
  return getToken(RecipeParser::IDENTIFIER, 0);
}

RecipeParser::VariableContext* RecipeParser::Func_callContext::variable() {
  return getRuleContext<RecipeParser::VariableContext>(0);
}

RecipeParser::CallContext* RecipeParser::Func_callContext::call() {
  return getRuleContext<RecipeParser::CallContext>(0);
}

RecipeParser::Func_callContext::Func_callContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitFunc_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EmptyContext ------------------------------------------------------------------

RecipeParser::EmptyContext::EmptyContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::EmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitEmpty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::DivContext::DIV() {
  return getToken(RecipeParser::DIV, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::DivContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::DivContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::DivContext::SRC() {
  return getToken(RecipeParser::SRC, 0);
}

tree::TerminalNode* RecipeParser::DivContext::INTEGER() {
  return getToken(RecipeParser::INTEGER, 0);
}

RecipeParser::DivContext::DivContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::PrintContext::PRINT() {
  return getToken(RecipeParser::PRINT, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::PrintContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::PrintContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> RecipeParser::PrintContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::PrintContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}

RecipeParser::PrintContext::PrintContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepeatContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::RepeatContext::REPEAT() {
  return getToken(RecipeParser::REPEAT, 0);
}

RecipeParser::Statement_listContext* RecipeParser::RepeatContext::statement_list() {
  return getRuleContext<RecipeParser::Statement_listContext>(0);
}

tree::TerminalNode* RecipeParser::RepeatContext::UNTIL() {
  return getToken(RecipeParser::UNTIL, 0);
}

RecipeParser::ConditionContext* RecipeParser::RepeatContext::condition() {
  return getRuleContext<RecipeParser::ConditionContext>(0);
}

RecipeParser::RepeatContext::RepeatContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::RepeatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitRepeat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::IfContext::IF() {
  return getToken(RecipeParser::IF, 0);
}

RecipeParser::ConditionContext* RecipeParser::IfContext::condition() {
  return getRuleContext<RecipeParser::ConditionContext>(0);
}

std::vector<tree::TerminalNode *> RecipeParser::IfContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::IfContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<RecipeParser::Statement_listContext *> RecipeParser::IfContext::statement_list() {
  return getRuleContexts<RecipeParser::Statement_listContext>();
}

RecipeParser::Statement_listContext* RecipeParser::IfContext::statement_list(size_t i) {
  return getRuleContext<RecipeParser::Statement_listContext>(i);
}

tree::TerminalNode* RecipeParser::IfContext::ELSE() {
  return getToken(RecipeParser::ELSE, 0);
}

RecipeParser::IfContext::IfContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::ReturnContext::RETURN() {
  return getToken(RecipeParser::RETURN, 0);
}

tree::TerminalNode* RecipeParser::ReturnContext::IDENTIFIER() {
  return getToken(RecipeParser::IDENTIFIER, 0);
}

RecipeParser::ReturnContext::ReturnContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IncContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::IncContext::INC() {
  return getToken(RecipeParser::INC, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::IncContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::IncContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

RecipeParser::IncContext::IncContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::IncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitInc(this);
  else
    return visitor->visitChildren(this);
}
RecipeParser::StatementContext* RecipeParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 20, RecipeParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(182);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::PERIOD:
      case RecipeParser::COMMA:
      case RecipeParser::THEN:
      case RecipeParser::UNTIL: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::EmptyContext>(_localctx));
        enterOuterAlt(_localctx, 1);

        break;
      }

      case RecipeParser::ADD: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::AddContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(83);
        match(RecipeParser::ADD);
        setState(84);
        match(RecipeParser::IDENTIFIER);
        setState(89);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == RecipeParser::AND) {
          setState(85);
          match(RecipeParser::AND);
          setState(86);
          match(RecipeParser::IDENTIFIER);
          setState(91);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(92);
        match(RecipeParser::DEST);
        setState(93);
        match(RecipeParser::IDENTIFIER);
        break;
      }

      case RecipeParser::SUB: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::SubContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(94);
        match(RecipeParser::SUB);
        setState(95);
        variable();
        setState(100);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == RecipeParser::AND) {
          setState(96);
          match(RecipeParser::AND);
          setState(97);
          variable();
          setState(102);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(103);
        match(RecipeParser::DEST);
        setState(104);
        variable();
        break;
      }

      case RecipeParser::MULT: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::MultContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(106);
        match(RecipeParser::MULT);
        setState(107);
        variable();
        setState(112);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == RecipeParser::AND) {
          setState(108);
          match(RecipeParser::AND);
          setState(109);
          variable();
          setState(114);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(115);
        match(RecipeParser::DEST);
        setState(116);
        variable();
        break;
      }

      case RecipeParser::DIV: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::DivContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(118);
        match(RecipeParser::DIV);
        setState(119);
        variable();
        setState(120);
        match(RecipeParser::SRC);
        setState(124);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case RecipeParser::T__1: {
            setState(121);
            match(RecipeParser::T__1);
            setState(122);
            variable();
            break;
          }

          case RecipeParser::INTEGER: {
            setState(123);
            match(RecipeParser::INTEGER);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case RecipeParser::INC: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::IncContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(126);
        match(RecipeParser::INC);
        setState(127);
        variable();
        setState(133);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case RecipeParser::T__2: {
            setState(128);
            match(RecipeParser::T__2);
            setState(129);
            variable();
            setState(130);
            match(RecipeParser::T__3);
            break;
          }

          case RecipeParser::T__4: {
            setState(132);
            match(RecipeParser::T__4);
            break;
          }

          case RecipeParser::PERIOD:
          case RecipeParser::COMMA:
          case RecipeParser::THEN:
          case RecipeParser::UNTIL: {
            break;
          }

        default:
          break;
        }
        break;
      }

      case RecipeParser::DEC: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::DecContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(135);
        match(RecipeParser::DEC);
        setState(136);
        variable();
        setState(142);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case RecipeParser::T__2: {
            setState(137);
            match(RecipeParser::T__2);
            setState(138);
            variable();
            setState(139);
            match(RecipeParser::T__3);
            break;
          }

          case RecipeParser::T__4: {
            setState(141);
            match(RecipeParser::T__4);
            break;
          }

          case RecipeParser::PERIOD:
          case RecipeParser::COMMA:
          case RecipeParser::THEN:
          case RecipeParser::UNTIL: {
            break;
          }

        default:
          break;
        }
        break;
      }

      case RecipeParser::WHILE: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::WhileContext>(_localctx));
        enterOuterAlt(_localctx, 8);
        setState(144);
        match(RecipeParser::WHILE);
        setState(145);
        condition_list();
        setState(146);
        match(RecipeParser::COMMA);
        setState(147);
        match(RecipeParser::WHILE_DO);
        setState(148);
        statement_list();
        break;
      }

      case RecipeParser::REPEAT: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::RepeatContext>(_localctx));
        enterOuterAlt(_localctx, 9);
        setState(150);
        match(RecipeParser::REPEAT);
        setState(151);
        statement_list();
        setState(152);
        match(RecipeParser::UNTIL);
        setState(153);
        condition();
        break;
      }

      case RecipeParser::FUNCTION: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::Func_callContext>(_localctx));
        enterOuterAlt(_localctx, 10);
        setState(155);
        match(RecipeParser::FUNCTION);
        setState(156);
        match(RecipeParser::IDENTIFIER);
        setState(157);
        match(RecipeParser::T__2);
        setState(158);
        variable();
        setState(160);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RecipeParser::T__5) {
          setState(159);
          call();
        }
        break;
      }

      case RecipeParser::IF: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::IfContext>(_localctx));
        enterOuterAlt(_localctx, 11);
        setState(162);
        match(RecipeParser::IF);
        setState(163);
        condition();
        setState(164);
        match(RecipeParser::COMMA);
        setState(165);
        statement_list();
        setState(169);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          setState(166);
          match(RecipeParser::COMMA);
          setState(167);
          match(RecipeParser::ELSE);
          setState(168);
          statement_list();
          break;
        }

        }
        break;
      }

      case RecipeParser::PRINT: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::PrintContext>(_localctx));
        enterOuterAlt(_localctx, 12);
        setState(171);
        match(RecipeParser::PRINT);
        setState(172);
        variable();
        setState(177);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == RecipeParser::AND) {
          setState(173);
          match(RecipeParser::AND);
          setState(174);
          variable();
          setState(179);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case RecipeParser::RETURN: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<RecipeParser::ReturnContext>(_localctx));
        enterOuterAlt(_localctx, 13);
        setState(180);
        match(RecipeParser::RETURN);
        setState(181);
        match(RecipeParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

RecipeParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::VariableContext *> RecipeParser::CallContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::CallContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}


size_t RecipeParser::CallContext::getRuleIndex() const {
  return RecipeParser::RuleCall;
}

antlrcpp::Any RecipeParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::CallContext* RecipeParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 22, RecipeParser::RuleCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(RecipeParser::T__5);
    setState(185);
    variable();
    setState(196);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(191);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          setState(186);
          match(RecipeParser::COMMA);
          break;
        }

        case 2: {
          setState(188);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == RecipeParser::COMMA) {
            setState(187);
            match(RecipeParser::COMMA);
          }
          setState(190);
          match(RecipeParser::AND);
          break;
        }

        }
        setState(193);
        variable(); 
      }
      setState(198);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_listContext ------------------------------------------------------------------

RecipeParser::Condition_listContext::Condition_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::ConditionContext *> RecipeParser::Condition_listContext::condition() {
  return getRuleContexts<RecipeParser::ConditionContext>();
}

RecipeParser::ConditionContext* RecipeParser::Condition_listContext::condition(size_t i) {
  return getRuleContext<RecipeParser::ConditionContext>(i);
}

std::vector<tree::TerminalNode *> RecipeParser::Condition_listContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::Condition_listContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}

std::vector<tree::TerminalNode *> RecipeParser::Condition_listContext::OR() {
  return getTokens(RecipeParser::OR);
}

tree::TerminalNode* RecipeParser::Condition_listContext::OR(size_t i) {
  return getToken(RecipeParser::OR, i);
}


size_t RecipeParser::Condition_listContext::getRuleIndex() const {
  return RecipeParser::RuleCondition_list;
}

antlrcpp::Any RecipeParser::Condition_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitCondition_list(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Condition_listContext* RecipeParser::condition_list() {
  Condition_listContext *_localctx = _tracker.createInstance<Condition_listContext>(_ctx, getState());
  enterRule(_localctx, 24, RecipeParser::RuleCondition_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    condition();
    setState(204);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::AND

    || _la == RecipeParser::OR) {
      setState(200);
      _la = _input->LA(1);
      if (!(_la == RecipeParser::AND

      || _la == RecipeParser::OR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(201);
      condition();
      setState(206);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

RecipeParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::VariableContext *> RecipeParser::ConditionContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::ConditionContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::ConditionContext::IS() {
  return getToken(RecipeParser::IS, 0);
}

RecipeParser::ComperatorContext* RecipeParser::ConditionContext::comperator() {
  return getRuleContext<RecipeParser::ComperatorContext>(0);
}

tree::TerminalNode* RecipeParser::ConditionContext::TRUE() {
  return getToken(RecipeParser::TRUE, 0);
}

tree::TerminalNode* RecipeParser::ConditionContext::NOT() {
  return getToken(RecipeParser::NOT, 0);
}

RecipeParser::NumberContext* RecipeParser::ConditionContext::number() {
  return getRuleContext<RecipeParser::NumberContext>(0);
}


size_t RecipeParser::ConditionContext::getRuleIndex() const {
  return RecipeParser::RuleCondition;
}

antlrcpp::Any RecipeParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::ConditionContext* RecipeParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 26, RecipeParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    variable();
    setState(208);
    match(RecipeParser::IS);
    setState(210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::NOT) {
      setState(209);
      match(RecipeParser::NOT);
    }
    setState(218);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::GT:
      case RecipeParser::LT:
      case RecipeParser::EQ: {
        setState(212);
        comperator();
        setState(215);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          setState(213);
          variable();
          break;
        }

        case 2: {
          setState(214);
          number();
          break;
        }

        }
        break;
      }

      case RecipeParser::TRUE: {
        setState(217);
        match(RecipeParser::TRUE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComperatorContext ------------------------------------------------------------------

RecipeParser::ComperatorContext::ComperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::ComperatorContext::GT() {
  return getToken(RecipeParser::GT, 0);
}

tree::TerminalNode* RecipeParser::ComperatorContext::LT() {
  return getToken(RecipeParser::LT, 0);
}

tree::TerminalNode* RecipeParser::ComperatorContext::EQ() {
  return getToken(RecipeParser::EQ, 0);
}


size_t RecipeParser::ComperatorContext::getRuleIndex() const {
  return RecipeParser::RuleComperator;
}

antlrcpp::Any RecipeParser::ComperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitComperator(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::ComperatorContext* RecipeParser::comperator() {
  ComperatorContext *_localctx = _tracker.createInstance<ComperatorContext>(_ctx, getState());
  enterRule(_localctx, 28, RecipeParser::RuleComperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << RecipeParser::GT)
      | (1ULL << RecipeParser::LT)
      | (1ULL << RecipeParser::EQ))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

RecipeParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RecipeParser::NumberContext::getRuleIndex() const {
  return RecipeParser::RuleNumber;
}

void RecipeParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FloatContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> RecipeParser::FloatContext::INTEGER() {
  return getTokens(RecipeParser::INTEGER);
}

tree::TerminalNode* RecipeParser::FloatContext::INTEGER(size_t i) {
  return getToken(RecipeParser::INTEGER, i);
}

RecipeParser::FloatContext::FloatContext(NumberContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::FloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* RecipeParser::IntContext::INTEGER() {
  return getToken(RecipeParser::INTEGER, 0);
}

RecipeParser::IntContext::IntContext(NumberContext *ctx) { copyFrom(ctx); }

antlrcpp::Any RecipeParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}
RecipeParser::NumberContext* RecipeParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 30, RecipeParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(226);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<RecipeParser::IntContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(222);
      match(RecipeParser::INTEGER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<RecipeParser::FloatContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(223);
      match(RecipeParser::INTEGER);

      setState(224);
      match(RecipeParser::PERIOD);
      setState(225);
      match(RecipeParser::INTEGER);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

RecipeParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::VariableContext::IDENTIFIER() {
  return getToken(RecipeParser::IDENTIFIER, 0);
}

tree::TerminalNode* RecipeParser::VariableContext::INTEGER() {
  return getToken(RecipeParser::INTEGER, 0);
}

tree::TerminalNode* RecipeParser::VariableContext::ARRAY_ELEM() {
  return getToken(RecipeParser::ARRAY_ELEM, 0);
}

tree::TerminalNode* RecipeParser::VariableContext::OF() {
  return getToken(RecipeParser::OF, 0);
}


size_t RecipeParser::VariableContext::getRuleIndex() const {
  return RecipeParser::RuleVariable;
}

antlrcpp::Any RecipeParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::VariableContext* RecipeParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 32, RecipeParser::RuleVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::INTEGER) {
      setState(228);
      match(RecipeParser::INTEGER);
      setState(229);
      match(RecipeParser::ARRAY_ELEM);
      setState(230);
      match(RecipeParser::OF);
    }
    setState(233);
    match(RecipeParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> RecipeParser::_decisionToDFA;
atn::PredictionContextCache RecipeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN RecipeParser::_atn;
std::vector<uint16_t> RecipeParser::_serializedATN;

std::vector<std::string> RecipeParser::_ruleNames = {
  "program", "header", "data", "declaration_list", "declaration", "type", 
  "code", "code_line_list", "code_line", "statement_list", "statement", 
  "call", "condition_list", "condition", "comperator", "number", "variable"
};

std::vector<std::string> RecipeParser::_literalNames = {
  "", "'-'", "'size of'", "'for'", "'min'", "'mins'", "'with'", "'.'", "','", 
  "'See recipe'", "", "", "'pieces'", "'packs'", "", "'of'", "'Recipe:'", 
  "'Ingredients:'", "'Directions:'", "'Serve'", "", "'then'", "'otherwise'", 
  "", "'keep'", "", "'until'", "", "", "", "'Divide'", "'step'", "'and'", 
  "'or'", "", "'into'", "", "'is'", "'done'", "'not'", "'more than'", "'less than'", 
  "'as much as'"
};

std::vector<std::string> RecipeParser::_symbolicNames = {
  "", "", "", "", "", "", "", "PERIOD", "COMMA", "FUNCTION", "INT_TYPE", 
  "DEC_TYPE", "ARR_INT_TYPE", "ARR_DEC_TYPE", "ARRAY_ELEM", "OF", "HEADER_SYM", 
  "DECLARATION_SYM", "CODE_SYM", "RETURN", "IF", "THEN", "ELSE", "WHILE", 
  "WHILE_DO", "REPEAT", "UNTIL", "ADD", "SUB", "MULT", "DIV", "STEP_SYM", 
  "AND", "OR", "DEST", "SRC", "PRINT", "IS", "TRUE", "NOT", "GT", "LT", 
  "EQ", "INC", "DEC", "WS", "NEWLINE", "COMMENT", "IDENTIFIER", "INTEGER"
};

dfa::Vocabulary RecipeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> RecipeParser::_tokenNames;

RecipeParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x33, 0xee, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x28, 0xa, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2d, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x6, 0x5, 0x33, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x34, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x41, 0xa, 0x8, 0x3, 0x9, 0x6, 
    0x9, 0x44, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x45, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x50, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x53, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x5a, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 
    0x5d, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x7, 0xc, 0x65, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x68, 0xb, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 
    0xc, 0x71, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x74, 0xb, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0x7f, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x88, 0xa, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x91, 
    0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xa3, 0xa, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xac, 
    0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xb2, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0xb5, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0xb9, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xbf, 
    0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0xc2, 0xa, 0xd, 0x3, 0xd, 0x7, 0xd, 0xc5, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xc8, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x7, 0xe, 0xcd, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xd0, 0xb, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xd5, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0xda, 0xa, 0xf, 0x3, 0xf, 0x5, 0xf, 0xdd, 0xa, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0xe5, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xea, 
    0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x2, 0x2, 0x13, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x2, 0x5, 0x3, 0x2, 0xc, 0xf, 0x3, 0x2, 0x22, 0x23, 0x3, 
    0x2, 0x2a, 0x2c, 0x2, 0x102, 0x2, 0x24, 0x3, 0x2, 0x2, 0x2, 0x4, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x36, 0x3, 0x2, 0x2, 0x2, 0xc, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x10, 0x43, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x14, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x16, 0xb8, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0xba, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x22, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x25, 0x5, 0x4, 0x3, 0x2, 0x25, 0x27, 0x5, 0x6, 0x4, 0x2, 
    0x26, 0x28, 0x5, 0xe, 0x8, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x3, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 
    0x7, 0x12, 0x2, 0x2, 0x2a, 0x2c, 0x7, 0x32, 0x2, 0x2, 0x2b, 0x2d, 0x5, 
    0x18, 0xd, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x2d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x13, 0x2, 
    0x2, 0x2f, 0x30, 0x5, 0x8, 0x5, 0x2, 0x30, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x33, 0x5, 0xa, 0x6, 0x2, 0x32, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x9, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 
    0x3, 0x2, 0x2, 0x37, 0x38, 0x5, 0x20, 0x11, 0x2, 0x38, 0x39, 0x5, 0xc, 
    0x7, 0x2, 0x39, 0x3a, 0x7, 0x11, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x32, 0x2, 
    0x2, 0x3b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x9, 0x2, 0x2, 0x2, 
    0x3d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x7, 0x14, 0x2, 0x2, 0x3f, 
    0x41, 0x5, 0x10, 0x9, 0x2, 0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x41, 0xf, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x5, 
    0x12, 0xa, 0x2, 0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x11, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0x33, 0x2, 0x2, 
    0x48, 0x49, 0x7, 0x9, 0x2, 0x2, 0x49, 0x4a, 0x5, 0x14, 0xb, 0x2, 0x4a, 
    0x4b, 0x7, 0x9, 0x2, 0x2, 0x4b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x51, 
    0x5, 0x16, 0xc, 0x2, 0x4d, 0x4e, 0x7, 0x17, 0x2, 0x2, 0x4e, 0x50, 0x5, 
    0x16, 0xc, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x15, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x1d, 0x2, 0x2, 0x56, 
    0x5b, 0x7, 0x32, 0x2, 0x2, 0x57, 0x58, 0x7, 0x22, 0x2, 0x2, 0x58, 0x5a, 
    0x7, 0x32, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x5e, 0x5f, 0x7, 0x24, 0x2, 0x2, 0x5f, 0xb9, 0x7, 0x32, 0x2, 0x2, 
    0x60, 0x61, 0x7, 0x1e, 0x2, 0x2, 0x61, 0x66, 0x5, 0x22, 0x12, 0x2, 0x62, 
    0x63, 0x7, 0x22, 0x2, 0x2, 0x63, 0x65, 0x5, 0x22, 0x12, 0x2, 0x64, 0x62, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x69, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x24, 0x2, 
    0x2, 0x6a, 0x6b, 0x5, 0x22, 0x12, 0x2, 0x6b, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x6d, 0x7, 0x1f, 0x2, 0x2, 0x6d, 0x72, 0x5, 0x22, 0x12, 0x2, 0x6e, 
    0x6f, 0x7, 0x22, 0x2, 0x2, 0x6f, 0x71, 0x5, 0x22, 0x12, 0x2, 0x70, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x74, 0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 0x24, 0x2, 
    0x2, 0x76, 0x77, 0x5, 0x22, 0x12, 0x2, 0x77, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x79, 0x7, 0x20, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x22, 0x12, 0x2, 0x7a, 
    0x7e, 0x7, 0x25, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x4, 0x2, 0x2, 0x7c, 0x7f, 
    0x5, 0x22, 0x12, 0x2, 0x7d, 0x7f, 0x7, 0x33, 0x2, 0x2, 0x7e, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x81, 0x7, 0x2d, 0x2, 0x2, 0x81, 0x87, 0x5, 0x22, 0x12, 
    0x2, 0x82, 0x83, 0x7, 0x5, 0x2, 0x2, 0x83, 0x84, 0x5, 0x22, 0x12, 0x2, 
    0x84, 0x85, 0x7, 0x6, 0x2, 0x2, 0x85, 0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x88, 0x7, 0x7, 0x2, 0x2, 0x87, 0x82, 0x3, 0x2, 0x2, 0x2, 0x87, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0xb9, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x2e, 0x2, 0x2, 0x8a, 0x90, 0x5, 0x22, 
    0x12, 0x2, 0x8b, 0x8c, 0x7, 0x5, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x22, 0x12, 
    0x2, 0x8d, 0x8e, 0x7, 0x6, 0x2, 0x2, 0x8e, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x8f, 0x91, 0x7, 0x7, 0x2, 0x2, 0x90, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0xb9, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 0x19, 0x2, 0x2, 0x93, 0x94, 0x5, 
    0x1a, 0xe, 0x2, 0x94, 0x95, 0x7, 0xa, 0x2, 0x2, 0x95, 0x96, 0x7, 0x1a, 
    0x2, 0x2, 0x96, 0x97, 0x5, 0x14, 0xb, 0x2, 0x97, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x99, 0x7, 0x1b, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x14, 0xb, 0x2, 
    0x9a, 0x9b, 0x7, 0x1c, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x1c, 0xf, 0x2, 0x9c, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0xb, 0x2, 0x2, 0x9e, 0x9f, 
    0x7, 0x32, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x5, 0x2, 0x2, 0xa0, 0xa2, 0x5, 
    0x22, 0x12, 0x2, 0xa1, 0xa3, 0x5, 0x18, 0xd, 0x2, 0xa2, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0xa5, 0x7, 0x16, 0x2, 0x2, 0xa5, 0xa6, 0x5, 0x1c, 0xf, 0x2, 
    0xa6, 0xa7, 0x7, 0xa, 0x2, 0x2, 0xa7, 0xab, 0x5, 0x14, 0xb, 0x2, 0xa8, 
    0xa9, 0x7, 0xa, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x18, 0x2, 0x2, 0xaa, 0xac, 
    0x5, 0x14, 0xb, 0x2, 0xab, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0x26, 
    0x2, 0x2, 0xae, 0xb3, 0x5, 0x22, 0x12, 0x2, 0xaf, 0xb0, 0x7, 0x22, 0x2, 
    0x2, 0xb0, 0xb2, 0x5, 0x22, 0x12, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x15, 0x2, 0x2, 0xb7, 0xb9, 0x7, 
    0x32, 0x2, 0x2, 0xb8, 0x54, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0x60, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0x78, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0x89, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x92, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0x98, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0x17, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x8, 
    0x2, 0x2, 0xbb, 0xc6, 0x5, 0x22, 0x12, 0x2, 0xbc, 0xc2, 0x7, 0xa, 0x2, 
    0x2, 0xbd, 0xbf, 0x7, 0xa, 0x2, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xc2, 0x7, 0x22, 0x2, 0x2, 0xc1, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc5, 0x5, 
    0x22, 0x12, 0x2, 0xc4, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xc7, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xce, 0x5, 0x1c, 0xf, 0x2, 0xca, 0xcb, 0x9, 0x3, 0x2, 0x2, 0xcb, 
    0xcd, 0x5, 0x1c, 0xf, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0xcf, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xd1, 0xd2, 0x5, 0x22, 0x12, 0x2, 0xd2, 0xd4, 0x7, 0x27, 0x2, 
    0x2, 0xd3, 0xd5, 0x7, 0x29, 0x2, 0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xd6, 
    0xd9, 0x5, 0x1e, 0x10, 0x2, 0xd7, 0xda, 0x5, 0x22, 0x12, 0x2, 0xd8, 
    0xda, 0x5, 0x20, 0x11, 0x2, 0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd8, 
    0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdd, 0x7, 
    0x28, 0x2, 0x2, 0xdc, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xdd, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x9, 0x4, 0x2, 
    0x2, 0xdf, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe5, 0x7, 0x33, 0x2, 0x2, 
    0xe1, 0xe2, 0x7, 0x33, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x9, 0x2, 0x2, 0xe3, 
    0xe5, 0x7, 0x33, 0x2, 0x2, 0xe4, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xe5, 0x21, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x7, 
    0x33, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x10, 0x2, 0x2, 0xe8, 0xea, 0x7, 0x11, 
    0x2, 0x2, 0xe9, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x32, 0x2, 0x2, 
    0xec, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x27, 0x2c, 0x34, 0x40, 0x45, 
    0x51, 0x5b, 0x66, 0x72, 0x7e, 0x87, 0x90, 0xa2, 0xab, 0xb3, 0xb8, 0xbe, 
    0xc1, 0xc6, 0xce, 0xd4, 0xd9, 0xdc, 0xe4, 0xe9, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

RecipeParser::Initializer RecipeParser::_init;
