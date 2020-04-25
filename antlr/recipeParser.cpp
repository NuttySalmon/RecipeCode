
// Generated from c:\Users\thoma\repos\recipe_code_win\recipe.g4 by ANTLR 4.7.1


#include "recipeVisitor.h"

#include "recipeParser.h"


using namespace antlrcpp;
using namespace antlr4;

recipeParser::recipeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

recipeParser::~recipeParser() {
  delete _interpreter;
}

std::string recipeParser::getGrammarFileName() const {
  return "recipe.g4";
}

const std::vector<std::string>& recipeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& recipeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

recipeParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

recipeParser::HeaderContext* recipeParser::ProgramContext::header() {
  return getRuleContext<recipeParser::HeaderContext>(0);
}

recipeParser::DataContext* recipeParser::ProgramContext::data() {
  return getRuleContext<recipeParser::DataContext>(0);
}

recipeParser::CodeContext* recipeParser::ProgramContext::code() {
  return getRuleContext<recipeParser::CodeContext>(0);
}


size_t recipeParser::ProgramContext::getRuleIndex() const {
  return recipeParser::RuleProgram;
}

antlrcpp::Any recipeParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::ProgramContext* recipeParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, recipeParser::RuleProgram);
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
    if (_la == recipeParser::CODE_SYM) {
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

recipeParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* recipeParser::HeaderContext::HEADER_SYM() {
  return getToken(recipeParser::HEADER_SYM, 0);
}

tree::TerminalNode* recipeParser::HeaderContext::IDENTIFIER() {
  return getToken(recipeParser::IDENTIFIER, 0);
}

recipeParser::CallContext* recipeParser::HeaderContext::call() {
  return getRuleContext<recipeParser::CallContext>(0);
}


size_t recipeParser::HeaderContext::getRuleIndex() const {
  return recipeParser::RuleHeader;
}

antlrcpp::Any recipeParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::HeaderContext* recipeParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, recipeParser::RuleHeader);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    match(recipeParser::HEADER_SYM);
    setState(40);
    match(recipeParser::IDENTIFIER);
    setState(42);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == recipeParser::T__5) {
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

recipeParser::DataContext::DataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* recipeParser::DataContext::DECLARATION_SYM() {
  return getToken(recipeParser::DECLARATION_SYM, 0);
}

recipeParser::Declaration_listContext* recipeParser::DataContext::declaration_list() {
  return getRuleContext<recipeParser::Declaration_listContext>(0);
}


size_t recipeParser::DataContext::getRuleIndex() const {
  return recipeParser::RuleData;
}

antlrcpp::Any recipeParser::DataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitData(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::DataContext* recipeParser::data() {
  DataContext *_localctx = _tracker.createInstance<DataContext>(_ctx, getState());
  enterRule(_localctx, 4, recipeParser::RuleData);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(recipeParser::DECLARATION_SYM);
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

recipeParser::Declaration_listContext::Declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<recipeParser::DeclarationContext *> recipeParser::Declaration_listContext::declaration() {
  return getRuleContexts<recipeParser::DeclarationContext>();
}

recipeParser::DeclarationContext* recipeParser::Declaration_listContext::declaration(size_t i) {
  return getRuleContext<recipeParser::DeclarationContext>(i);
}


size_t recipeParser::Declaration_listContext::getRuleIndex() const {
  return recipeParser::RuleDeclaration_list;
}

antlrcpp::Any recipeParser::Declaration_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitDeclaration_list(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::Declaration_listContext* recipeParser::declaration_list() {
  Declaration_listContext *_localctx = _tracker.createInstance<Declaration_listContext>(_ctx, getState());
  enterRule(_localctx, 6, recipeParser::RuleDeclaration_list);
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
    } while (_la == recipeParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

recipeParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

recipeParser::NumberContext* recipeParser::DeclarationContext::number() {
  return getRuleContext<recipeParser::NumberContext>(0);
}

recipeParser::TypeContext* recipeParser::DeclarationContext::type() {
  return getRuleContext<recipeParser::TypeContext>(0);
}

tree::TerminalNode* recipeParser::DeclarationContext::OF() {
  return getToken(recipeParser::OF, 0);
}

tree::TerminalNode* recipeParser::DeclarationContext::IDENTIFIER() {
  return getToken(recipeParser::IDENTIFIER, 0);
}


size_t recipeParser::DeclarationContext::getRuleIndex() const {
  return recipeParser::RuleDeclaration;
}

antlrcpp::Any recipeParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::DeclarationContext* recipeParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, recipeParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(recipeParser::T__0);
    setState(53);
    number();
    setState(54);
    type();
    setState(55);
    match(recipeParser::OF);
    setState(56);
    match(recipeParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

recipeParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* recipeParser::TypeContext::INT_TYPE() {
  return getToken(recipeParser::INT_TYPE, 0);
}

tree::TerminalNode* recipeParser::TypeContext::DEC_TYPE() {
  return getToken(recipeParser::DEC_TYPE, 0);
}

tree::TerminalNode* recipeParser::TypeContext::ARR_DEC_TYPE() {
  return getToken(recipeParser::ARR_DEC_TYPE, 0);
}

tree::TerminalNode* recipeParser::TypeContext::ARR_INT_TYPE() {
  return getToken(recipeParser::ARR_INT_TYPE, 0);
}


size_t recipeParser::TypeContext::getRuleIndex() const {
  return recipeParser::RuleType;
}

antlrcpp::Any recipeParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::TypeContext* recipeParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, recipeParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << recipeParser::INT_TYPE)
      | (1ULL << recipeParser::DEC_TYPE)
      | (1ULL << recipeParser::ARR_INT_TYPE)
      | (1ULL << recipeParser::ARR_DEC_TYPE))) != 0))) {
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

recipeParser::CodeContext::CodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* recipeParser::CodeContext::CODE_SYM() {
  return getToken(recipeParser::CODE_SYM, 0);
}

recipeParser::Code_line_listContext* recipeParser::CodeContext::code_line_list() {
  return getRuleContext<recipeParser::Code_line_listContext>(0);
}


size_t recipeParser::CodeContext::getRuleIndex() const {
  return recipeParser::RuleCode;
}

antlrcpp::Any recipeParser::CodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitCode(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::CodeContext* recipeParser::code() {
  CodeContext *_localctx = _tracker.createInstance<CodeContext>(_ctx, getState());
  enterRule(_localctx, 12, recipeParser::RuleCode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(recipeParser::CODE_SYM);
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == recipeParser::INTEGER) {
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

recipeParser::Code_line_listContext::Code_line_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<recipeParser::Code_lineContext *> recipeParser::Code_line_listContext::code_line() {
  return getRuleContexts<recipeParser::Code_lineContext>();
}

recipeParser::Code_lineContext* recipeParser::Code_line_listContext::code_line(size_t i) {
  return getRuleContext<recipeParser::Code_lineContext>(i);
}


size_t recipeParser::Code_line_listContext::getRuleIndex() const {
  return recipeParser::RuleCode_line_list;
}

antlrcpp::Any recipeParser::Code_line_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitCode_line_list(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::Code_line_listContext* recipeParser::code_line_list() {
  Code_line_listContext *_localctx = _tracker.createInstance<Code_line_listContext>(_ctx, getState());
  enterRule(_localctx, 14, recipeParser::RuleCode_line_list);
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
    } while (_la == recipeParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Code_lineContext ------------------------------------------------------------------

recipeParser::Code_lineContext::Code_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* recipeParser::Code_lineContext::INTEGER() {
  return getToken(recipeParser::INTEGER, 0);
}

recipeParser::Statement_listContext* recipeParser::Code_lineContext::statement_list() {
  return getRuleContext<recipeParser::Statement_listContext>(0);
}

tree::TerminalNode* recipeParser::Code_lineContext::PERIOD() {
  return getToken(recipeParser::PERIOD, 0);
}


size_t recipeParser::Code_lineContext::getRuleIndex() const {
  return recipeParser::RuleCode_line;
}

antlrcpp::Any recipeParser::Code_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitCode_line(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::Code_lineContext* recipeParser::code_line() {
  Code_lineContext *_localctx = _tracker.createInstance<Code_lineContext>(_ctx, getState());
  enterRule(_localctx, 16, recipeParser::RuleCode_line);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(recipeParser::INTEGER);
    setState(70);
    match(recipeParser::PERIOD);
    setState(71);
    statement_list();
    setState(72);
    match(recipeParser::PERIOD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_listContext ------------------------------------------------------------------

recipeParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<recipeParser::StatementContext *> recipeParser::Statement_listContext::statement() {
  return getRuleContexts<recipeParser::StatementContext>();
}

recipeParser::StatementContext* recipeParser::Statement_listContext::statement(size_t i) {
  return getRuleContext<recipeParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> recipeParser::Statement_listContext::THEN() {
  return getTokens(recipeParser::THEN);
}

tree::TerminalNode* recipeParser::Statement_listContext::THEN(size_t i) {
  return getToken(recipeParser::THEN, i);
}


size_t recipeParser::Statement_listContext::getRuleIndex() const {
  return recipeParser::RuleStatement_list;
}

antlrcpp::Any recipeParser::Statement_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitStatement_list(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::Statement_listContext* recipeParser::statement_list() {
  Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, getState());
  enterRule(_localctx, 18, recipeParser::RuleStatement_list);

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
        match(recipeParser::THEN);
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

recipeParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t recipeParser::StatementContext::getRuleIndex() const {
  return recipeParser::RuleStatement;
}

void recipeParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::AddContext::ADD() {
  return getToken(recipeParser::ADD, 0);
}

std::vector<tree::TerminalNode *> recipeParser::AddContext::IDENTIFIER() {
  return getTokens(recipeParser::IDENTIFIER);
}

tree::TerminalNode* recipeParser::AddContext::IDENTIFIER(size_t i) {
  return getToken(recipeParser::IDENTIFIER, i);
}

tree::TerminalNode* recipeParser::AddContext::DEST() {
  return getToken(recipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> recipeParser::AddContext::AND() {
  return getTokens(recipeParser::AND);
}

tree::TerminalNode* recipeParser::AddContext::AND(size_t i) {
  return getToken(recipeParser::AND, i);
}

recipeParser::AddContext::AddContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::SubContext::SUB() {
  return getToken(recipeParser::SUB, 0);
}

std::vector<recipeParser::VariableContext *> recipeParser::SubContext::variable() {
  return getRuleContexts<recipeParser::VariableContext>();
}

recipeParser::VariableContext* recipeParser::SubContext::variable(size_t i) {
  return getRuleContext<recipeParser::VariableContext>(i);
}

tree::TerminalNode* recipeParser::SubContext::DEST() {
  return getToken(recipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> recipeParser::SubContext::AND() {
  return getTokens(recipeParser::AND);
}

tree::TerminalNode* recipeParser::SubContext::AND(size_t i) {
  return getToken(recipeParser::AND, i);
}

recipeParser::SubContext::SubContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::SubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::MultContext::MULT() {
  return getToken(recipeParser::MULT, 0);
}

std::vector<recipeParser::VariableContext *> recipeParser::MultContext::variable() {
  return getRuleContexts<recipeParser::VariableContext>();
}

recipeParser::VariableContext* recipeParser::MultContext::variable(size_t i) {
  return getRuleContext<recipeParser::VariableContext>(i);
}

tree::TerminalNode* recipeParser::MultContext::DEST() {
  return getToken(recipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> recipeParser::MultContext::AND() {
  return getTokens(recipeParser::AND);
}

tree::TerminalNode* recipeParser::MultContext::AND(size_t i) {
  return getToken(recipeParser::AND, i);
}

recipeParser::MultContext::MultContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::DecContext::DEC() {
  return getToken(recipeParser::DEC, 0);
}

std::vector<recipeParser::VariableContext *> recipeParser::DecContext::variable() {
  return getRuleContexts<recipeParser::VariableContext>();
}

recipeParser::VariableContext* recipeParser::DecContext::variable(size_t i) {
  return getRuleContext<recipeParser::VariableContext>(i);
}

recipeParser::DecContext::DecContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::DecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::WhileContext::WHILE() {
  return getToken(recipeParser::WHILE, 0);
}

recipeParser::Condition_listContext* recipeParser::WhileContext::condition_list() {
  return getRuleContext<recipeParser::Condition_listContext>(0);
}

tree::TerminalNode* recipeParser::WhileContext::COMMA() {
  return getToken(recipeParser::COMMA, 0);
}

tree::TerminalNode* recipeParser::WhileContext::WHILE_DO() {
  return getToken(recipeParser::WHILE_DO, 0);
}

recipeParser::Statement_listContext* recipeParser::WhileContext::statement_list() {
  return getRuleContext<recipeParser::Statement_listContext>(0);
}

recipeParser::WhileContext::WhileContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Func_callContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::Func_callContext::FUNCTION() {
  return getToken(recipeParser::FUNCTION, 0);
}

tree::TerminalNode* recipeParser::Func_callContext::IDENTIFIER() {
  return getToken(recipeParser::IDENTIFIER, 0);
}

recipeParser::VariableContext* recipeParser::Func_callContext::variable() {
  return getRuleContext<recipeParser::VariableContext>(0);
}

recipeParser::CallContext* recipeParser::Func_callContext::call() {
  return getRuleContext<recipeParser::CallContext>(0);
}

recipeParser::Func_callContext::Func_callContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitFunc_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EmptyContext ------------------------------------------------------------------

recipeParser::EmptyContext::EmptyContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::EmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitEmpty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::DivContext::DIV() {
  return getToken(recipeParser::DIV, 0);
}

std::vector<recipeParser::VariableContext *> recipeParser::DivContext::variable() {
  return getRuleContexts<recipeParser::VariableContext>();
}

recipeParser::VariableContext* recipeParser::DivContext::variable(size_t i) {
  return getRuleContext<recipeParser::VariableContext>(i);
}

tree::TerminalNode* recipeParser::DivContext::SRC() {
  return getToken(recipeParser::SRC, 0);
}

tree::TerminalNode* recipeParser::DivContext::INTEGER() {
  return getToken(recipeParser::INTEGER, 0);
}

recipeParser::DivContext::DivContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::PrintContext::PRINT() {
  return getToken(recipeParser::PRINT, 0);
}

std::vector<recipeParser::VariableContext *> recipeParser::PrintContext::variable() {
  return getRuleContexts<recipeParser::VariableContext>();
}

recipeParser::VariableContext* recipeParser::PrintContext::variable(size_t i) {
  return getRuleContext<recipeParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> recipeParser::PrintContext::AND() {
  return getTokens(recipeParser::AND);
}

tree::TerminalNode* recipeParser::PrintContext::AND(size_t i) {
  return getToken(recipeParser::AND, i);
}

recipeParser::PrintContext::PrintContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepeatContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::RepeatContext::REPEAT() {
  return getToken(recipeParser::REPEAT, 0);
}

recipeParser::Statement_listContext* recipeParser::RepeatContext::statement_list() {
  return getRuleContext<recipeParser::Statement_listContext>(0);
}

tree::TerminalNode* recipeParser::RepeatContext::UNTIL() {
  return getToken(recipeParser::UNTIL, 0);
}

recipeParser::ConditionContext* recipeParser::RepeatContext::condition() {
  return getRuleContext<recipeParser::ConditionContext>(0);
}

recipeParser::RepeatContext::RepeatContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::RepeatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitRepeat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::IfContext::IF() {
  return getToken(recipeParser::IF, 0);
}

recipeParser::ConditionContext* recipeParser::IfContext::condition() {
  return getRuleContext<recipeParser::ConditionContext>(0);
}

std::vector<tree::TerminalNode *> recipeParser::IfContext::COMMA() {
  return getTokens(recipeParser::COMMA);
}

tree::TerminalNode* recipeParser::IfContext::COMMA(size_t i) {
  return getToken(recipeParser::COMMA, i);
}

std::vector<recipeParser::Statement_listContext *> recipeParser::IfContext::statement_list() {
  return getRuleContexts<recipeParser::Statement_listContext>();
}

recipeParser::Statement_listContext* recipeParser::IfContext::statement_list(size_t i) {
  return getRuleContext<recipeParser::Statement_listContext>(i);
}

tree::TerminalNode* recipeParser::IfContext::ELSE() {
  return getToken(recipeParser::ELSE, 0);
}

recipeParser::IfContext::IfContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::ReturnContext::RETURN() {
  return getToken(recipeParser::RETURN, 0);
}

tree::TerminalNode* recipeParser::ReturnContext::IDENTIFIER() {
  return getToken(recipeParser::IDENTIFIER, 0);
}

recipeParser::ReturnContext::ReturnContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IncContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::IncContext::INC() {
  return getToken(recipeParser::INC, 0);
}

std::vector<recipeParser::VariableContext *> recipeParser::IncContext::variable() {
  return getRuleContexts<recipeParser::VariableContext>();
}

recipeParser::VariableContext* recipeParser::IncContext::variable(size_t i) {
  return getRuleContext<recipeParser::VariableContext>(i);
}

recipeParser::IncContext::IncContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::IncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitInc(this);
  else
    return visitor->visitChildren(this);
}
recipeParser::StatementContext* recipeParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 20, recipeParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(182);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case recipeParser::PERIOD:
      case recipeParser::COMMA:
      case recipeParser::THEN:
      case recipeParser::UNTIL: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::EmptyContext>(_localctx));
        enterOuterAlt(_localctx, 1);

        break;
      }

      case recipeParser::ADD: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::AddContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(83);
        match(recipeParser::ADD);
        setState(84);
        match(recipeParser::IDENTIFIER);
        setState(89);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == recipeParser::AND) {
          setState(85);
          match(recipeParser::AND);
          setState(86);
          match(recipeParser::IDENTIFIER);
          setState(91);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(92);
        match(recipeParser::DEST);
        setState(93);
        match(recipeParser::IDENTIFIER);
        break;
      }

      case recipeParser::SUB: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::SubContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(94);
        match(recipeParser::SUB);
        setState(95);
        variable();
        setState(100);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == recipeParser::AND) {
          setState(96);
          match(recipeParser::AND);
          setState(97);
          variable();
          setState(102);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(103);
        match(recipeParser::DEST);
        setState(104);
        variable();
        break;
      }

      case recipeParser::MULT: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::MultContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(106);
        match(recipeParser::MULT);
        setState(107);
        variable();
        setState(112);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == recipeParser::AND) {
          setState(108);
          match(recipeParser::AND);
          setState(109);
          variable();
          setState(114);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(115);
        match(recipeParser::DEST);
        setState(116);
        variable();
        break;
      }

      case recipeParser::DIV: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::DivContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(118);
        match(recipeParser::DIV);
        setState(119);
        variable();
        setState(120);
        match(recipeParser::SRC);
        setState(124);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case recipeParser::T__1: {
            setState(121);
            match(recipeParser::T__1);
            setState(122);
            variable();
            break;
          }

          case recipeParser::INTEGER: {
            setState(123);
            match(recipeParser::INTEGER);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case recipeParser::INC: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::IncContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(126);
        match(recipeParser::INC);
        setState(127);
        variable();
        setState(133);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case recipeParser::T__2: {
            setState(128);
            match(recipeParser::T__2);
            setState(129);
            variable();
            setState(130);
            match(recipeParser::T__3);
            break;
          }

          case recipeParser::T__4: {
            setState(132);
            match(recipeParser::T__4);
            break;
          }

          case recipeParser::PERIOD:
          case recipeParser::COMMA:
          case recipeParser::THEN:
          case recipeParser::UNTIL: {
            break;
          }

        default:
          break;
        }
        break;
      }

      case recipeParser::DEC: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::DecContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(135);
        match(recipeParser::DEC);
        setState(136);
        variable();
        setState(142);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case recipeParser::T__2: {
            setState(137);
            match(recipeParser::T__2);
            setState(138);
            variable();
            setState(139);
            match(recipeParser::T__3);
            break;
          }

          case recipeParser::T__4: {
            setState(141);
            match(recipeParser::T__4);
            break;
          }

          case recipeParser::PERIOD:
          case recipeParser::COMMA:
          case recipeParser::THEN:
          case recipeParser::UNTIL: {
            break;
          }

        default:
          break;
        }
        break;
      }

      case recipeParser::WHILE: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::WhileContext>(_localctx));
        enterOuterAlt(_localctx, 8);
        setState(144);
        match(recipeParser::WHILE);
        setState(145);
        condition_list();
        setState(146);
        match(recipeParser::COMMA);
        setState(147);
        match(recipeParser::WHILE_DO);
        setState(148);
        statement_list();
        break;
      }

      case recipeParser::REPEAT: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::RepeatContext>(_localctx));
        enterOuterAlt(_localctx, 9);
        setState(150);
        match(recipeParser::REPEAT);
        setState(151);
        statement_list();
        setState(152);
        match(recipeParser::UNTIL);
        setState(153);
        condition();
        break;
      }

      case recipeParser::FUNCTION: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::Func_callContext>(_localctx));
        enterOuterAlt(_localctx, 10);
        setState(155);
        match(recipeParser::FUNCTION);
        setState(156);
        match(recipeParser::IDENTIFIER);
        setState(157);
        match(recipeParser::T__2);
        setState(158);
        variable();
        setState(160);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == recipeParser::T__5) {
          setState(159);
          call();
        }
        break;
      }

      case recipeParser::IF: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::IfContext>(_localctx));
        enterOuterAlt(_localctx, 11);
        setState(162);
        match(recipeParser::IF);
        setState(163);
        condition();
        setState(164);
        match(recipeParser::COMMA);
        setState(165);
        statement_list();
        setState(169);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          setState(166);
          match(recipeParser::COMMA);
          setState(167);
          match(recipeParser::ELSE);
          setState(168);
          statement_list();
          break;
        }

        }
        break;
      }

      case recipeParser::PRINT: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::PrintContext>(_localctx));
        enterOuterAlt(_localctx, 12);
        setState(171);
        match(recipeParser::PRINT);
        setState(172);
        variable();
        setState(177);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == recipeParser::AND) {
          setState(173);
          match(recipeParser::AND);
          setState(174);
          variable();
          setState(179);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case recipeParser::RETURN: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<recipeParser::ReturnContext>(_localctx));
        enterOuterAlt(_localctx, 13);
        setState(180);
        match(recipeParser::RETURN);
        setState(181);
        match(recipeParser::IDENTIFIER);
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

recipeParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<recipeParser::VariableContext *> recipeParser::CallContext::variable() {
  return getRuleContexts<recipeParser::VariableContext>();
}

recipeParser::VariableContext* recipeParser::CallContext::variable(size_t i) {
  return getRuleContext<recipeParser::VariableContext>(i);
}


size_t recipeParser::CallContext::getRuleIndex() const {
  return recipeParser::RuleCall;
}

antlrcpp::Any recipeParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::CallContext* recipeParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 22, recipeParser::RuleCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(recipeParser::T__5);
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
          match(recipeParser::COMMA);
          break;
        }

        case 2: {
          setState(188);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == recipeParser::COMMA) {
            setState(187);
            match(recipeParser::COMMA);
          }
          setState(190);
          match(recipeParser::AND);
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

recipeParser::Condition_listContext::Condition_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<recipeParser::ConditionContext *> recipeParser::Condition_listContext::condition() {
  return getRuleContexts<recipeParser::ConditionContext>();
}

recipeParser::ConditionContext* recipeParser::Condition_listContext::condition(size_t i) {
  return getRuleContext<recipeParser::ConditionContext>(i);
}

std::vector<tree::TerminalNode *> recipeParser::Condition_listContext::AND() {
  return getTokens(recipeParser::AND);
}

tree::TerminalNode* recipeParser::Condition_listContext::AND(size_t i) {
  return getToken(recipeParser::AND, i);
}

std::vector<tree::TerminalNode *> recipeParser::Condition_listContext::OR() {
  return getTokens(recipeParser::OR);
}

tree::TerminalNode* recipeParser::Condition_listContext::OR(size_t i) {
  return getToken(recipeParser::OR, i);
}


size_t recipeParser::Condition_listContext::getRuleIndex() const {
  return recipeParser::RuleCondition_list;
}

antlrcpp::Any recipeParser::Condition_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitCondition_list(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::Condition_listContext* recipeParser::condition_list() {
  Condition_listContext *_localctx = _tracker.createInstance<Condition_listContext>(_ctx, getState());
  enterRule(_localctx, 24, recipeParser::RuleCondition_list);
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
    while (_la == recipeParser::AND

    || _la == recipeParser::OR) {
      setState(200);
      _la = _input->LA(1);
      if (!(_la == recipeParser::AND

      || _la == recipeParser::OR)) {
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

recipeParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<recipeParser::VariableContext *> recipeParser::ConditionContext::variable() {
  return getRuleContexts<recipeParser::VariableContext>();
}

recipeParser::VariableContext* recipeParser::ConditionContext::variable(size_t i) {
  return getRuleContext<recipeParser::VariableContext>(i);
}

tree::TerminalNode* recipeParser::ConditionContext::IS() {
  return getToken(recipeParser::IS, 0);
}

recipeParser::ComperatorContext* recipeParser::ConditionContext::comperator() {
  return getRuleContext<recipeParser::ComperatorContext>(0);
}

tree::TerminalNode* recipeParser::ConditionContext::TRUE() {
  return getToken(recipeParser::TRUE, 0);
}

tree::TerminalNode* recipeParser::ConditionContext::NOT() {
  return getToken(recipeParser::NOT, 0);
}

recipeParser::NumberContext* recipeParser::ConditionContext::number() {
  return getRuleContext<recipeParser::NumberContext>(0);
}


size_t recipeParser::ConditionContext::getRuleIndex() const {
  return recipeParser::RuleCondition;
}

antlrcpp::Any recipeParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::ConditionContext* recipeParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 26, recipeParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    variable();
    setState(208);
    match(recipeParser::IS);
    setState(210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == recipeParser::NOT) {
      setState(209);
      match(recipeParser::NOT);
    }
    setState(218);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case recipeParser::GT:
      case recipeParser::LT:
      case recipeParser::EQ: {
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

      case recipeParser::TRUE: {
        setState(217);
        match(recipeParser::TRUE);
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

recipeParser::ComperatorContext::ComperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* recipeParser::ComperatorContext::GT() {
  return getToken(recipeParser::GT, 0);
}

tree::TerminalNode* recipeParser::ComperatorContext::LT() {
  return getToken(recipeParser::LT, 0);
}

tree::TerminalNode* recipeParser::ComperatorContext::EQ() {
  return getToken(recipeParser::EQ, 0);
}


size_t recipeParser::ComperatorContext::getRuleIndex() const {
  return recipeParser::RuleComperator;
}

antlrcpp::Any recipeParser::ComperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitComperator(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::ComperatorContext* recipeParser::comperator() {
  ComperatorContext *_localctx = _tracker.createInstance<ComperatorContext>(_ctx, getState());
  enterRule(_localctx, 28, recipeParser::RuleComperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << recipeParser::GT)
      | (1ULL << recipeParser::LT)
      | (1ULL << recipeParser::EQ))) != 0))) {
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

recipeParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t recipeParser::NumberContext::getRuleIndex() const {
  return recipeParser::RuleNumber;
}

void recipeParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FloatContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> recipeParser::FloatContext::INTEGER() {
  return getTokens(recipeParser::INTEGER);
}

tree::TerminalNode* recipeParser::FloatContext::INTEGER(size_t i) {
  return getToken(recipeParser::INTEGER, i);
}

recipeParser::FloatContext::FloatContext(NumberContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::FloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* recipeParser::IntContext::INTEGER() {
  return getToken(recipeParser::INTEGER, 0);
}

recipeParser::IntContext::IntContext(NumberContext *ctx) { copyFrom(ctx); }

antlrcpp::Any recipeParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}
recipeParser::NumberContext* recipeParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 30, recipeParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(226);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<recipeParser::IntContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(222);
      match(recipeParser::INTEGER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<recipeParser::FloatContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(223);
      match(recipeParser::INTEGER);

      setState(224);
      match(recipeParser::PERIOD);
      setState(225);
      match(recipeParser::INTEGER);
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

recipeParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* recipeParser::VariableContext::IDENTIFIER() {
  return getToken(recipeParser::IDENTIFIER, 0);
}

tree::TerminalNode* recipeParser::VariableContext::INTEGER() {
  return getToken(recipeParser::INTEGER, 0);
}

tree::TerminalNode* recipeParser::VariableContext::ARRAY_ELEM() {
  return getToken(recipeParser::ARRAY_ELEM, 0);
}

tree::TerminalNode* recipeParser::VariableContext::OF() {
  return getToken(recipeParser::OF, 0);
}


size_t recipeParser::VariableContext::getRuleIndex() const {
  return recipeParser::RuleVariable;
}

antlrcpp::Any recipeParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<recipeVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

recipeParser::VariableContext* recipeParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 32, recipeParser::RuleVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == recipeParser::INTEGER) {
      setState(228);
      match(recipeParser::INTEGER);
      setState(229);
      match(recipeParser::ARRAY_ELEM);
      setState(230);
      match(recipeParser::OF);
    }
    setState(233);
    match(recipeParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> recipeParser::_decisionToDFA;
atn::PredictionContextCache recipeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN recipeParser::_atn;
std::vector<uint16_t> recipeParser::_serializedATN;

std::vector<std::string> recipeParser::_ruleNames = {
  "program", "header", "data", "declaration_list", "declaration", "type", 
  "code", "code_line_list", "code_line", "statement_list", "statement", 
  "call", "condition_list", "condition", "comperator", "number", "variable"
};

std::vector<std::string> recipeParser::_literalNames = {
  "", "'-'", "'size of'", "'for'", "'min'", "'mins'", "'with'", "'.'", "','", 
  "'See recipe'", "", "", "'pieces'", "'packs'", "", "'of'", "'Recipe:'", 
  "'Ingredients:'", "'Directions:'", "'Serve'", "", "'then'", "'otherwise'", 
  "", "'keep'", "", "'until'", "", "", "", "'Divide'", "'step'", "'and'", 
  "'or'", "", "'into'", "", "'is'", "'done'", "'not'", "'more than'", "'less than'", 
  "'as much as'"
};

std::vector<std::string> recipeParser::_symbolicNames = {
  "", "", "", "", "", "", "", "PERIOD", "COMMA", "FUNCTION", "INT_TYPE", 
  "DEC_TYPE", "ARR_INT_TYPE", "ARR_DEC_TYPE", "ARRAY_ELEM", "OF", "HEADER_SYM", 
  "DECLARATION_SYM", "CODE_SYM", "RETURN", "IF", "THEN", "ELSE", "WHILE", 
  "WHILE_DO", "REPEAT", "UNTIL", "ADD", "SUB", "MULT", "DIV", "STEP_SYM", 
  "AND", "OR", "DEST", "SRC", "PRINT", "IS", "TRUE", "NOT", "GT", "LT", 
  "EQ", "INC", "DEC", "WS", "NEWLINE", "COMMENT", "IDENTIFIER", "INTEGER"
};

dfa::Vocabulary recipeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> recipeParser::_tokenNames;

recipeParser::Initializer::Initializer() {
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

recipeParser::Initializer recipeParser::_init;
