
#include "../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from /home/thomas/recipe_code/Recipe.g4 by ANTLR 4.7.1


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

std::vector<RecipeParser::FunctionContext *> RecipeParser::ProgramContext::function() {
  return getRuleContexts<RecipeParser::FunctionContext>();
}

RecipeParser::FunctionContext* RecipeParser::ProgramContext::function(size_t i) {
  return getRuleContext<RecipeParser::FunctionContext>(i);
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
    setState(76);
    function();
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::HEADER_SYM) {
      setState(77);
      function();
      setState(82);
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

//----------------- FunctionContext ------------------------------------------------------------------

RecipeParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RecipeParser::HeaderContext* RecipeParser::FunctionContext::header() {
  return getRuleContext<RecipeParser::HeaderContext>(0);
}

RecipeParser::MainBlockContext* RecipeParser::FunctionContext::mainBlock() {
  return getRuleContext<RecipeParser::MainBlockContext>(0);
}

RecipeParser::ReturnCallContext* RecipeParser::FunctionContext::returnCall() {
  return getRuleContext<RecipeParser::ReturnCallContext>(0);
}


size_t RecipeParser::FunctionContext::getRuleIndex() const {
  return RecipeParser::RuleFunction;
}

antlrcpp::Any RecipeParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::FunctionContext* RecipeParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, RecipeParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    header();
    setState(84);
    mainBlock();
    setState(86);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::INTEGER) {
      setState(85);
      returnCall();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainBlockContext ------------------------------------------------------------------

RecipeParser::MainBlockContext::MainBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RecipeParser::BlockContext* RecipeParser::MainBlockContext::block() {
  return getRuleContext<RecipeParser::BlockContext>(0);
}


size_t RecipeParser::MainBlockContext::getRuleIndex() const {
  return RecipeParser::RuleMainBlock;
}

antlrcpp::Any RecipeParser::MainBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitMainBlock(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::MainBlockContext* RecipeParser::mainBlock() {
  MainBlockContext *_localctx = _tracker.createInstance<MainBlockContext>(_ctx, getState());
  enterRule(_localctx, 4, RecipeParser::RuleMainBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

RecipeParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RecipeParser::DataContext* RecipeParser::BlockContext::data() {
  return getRuleContext<RecipeParser::DataContext>(0);
}

RecipeParser::CodeContext* RecipeParser::BlockContext::code() {
  return getRuleContext<RecipeParser::CodeContext>(0);
}


size_t RecipeParser::BlockContext::getRuleIndex() const {
  return RecipeParser::RuleBlock;
}

antlrcpp::Any RecipeParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::BlockContext* RecipeParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, RecipeParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::DECLARATION_SYM) {
      setState(90);
      data();
    }
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::CODE_SYM) {
      setState(93);
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

tree::TerminalNode* RecipeParser::HeaderContext::PARAM_INT() {
  return getToken(RecipeParser::PARAM_INT, 0);
}

tree::TerminalNode* RecipeParser::HeaderContext::PARAM_FLOAT() {
  return getToken(RecipeParser::PARAM_FLOAT, 0);
}

RecipeParser::ParamsContext* RecipeParser::HeaderContext::params() {
  return getRuleContext<RecipeParser::ParamsContext>(0);
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
  enterRule(_localctx, 8, RecipeParser::RuleHeader);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(RecipeParser::HEADER_SYM);
    setState(97);
    dynamic_cast<HeaderContext *>(_localctx)->dtype = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == RecipeParser::PARAM_INT

    || _la == RecipeParser::PARAM_FLOAT)) {
      dynamic_cast<HeaderContext *>(_localctx)->dtype = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(98);
    match(RecipeParser::IDENTIFIER);
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::T__0) {
      setState(99);
      match(RecipeParser::T__0);
      setState(100);
      params();
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

RecipeParser::DeclListContext* RecipeParser::DataContext::declList() {
  return getRuleContext<RecipeParser::DeclListContext>(0);
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
  enterRule(_localctx, 10, RecipeParser::RuleData);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(RecipeParser::DECLARATION_SYM);
    setState(104);
    declList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclListContext ------------------------------------------------------------------

RecipeParser::DeclListContext::DeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::DeclContext *> RecipeParser::DeclListContext::decl() {
  return getRuleContexts<RecipeParser::DeclContext>();
}

RecipeParser::DeclContext* RecipeParser::DeclListContext::decl(size_t i) {
  return getRuleContext<RecipeParser::DeclContext>(i);
}


size_t RecipeParser::DeclListContext::getRuleIndex() const {
  return RecipeParser::RuleDeclList;
}

antlrcpp::Any RecipeParser::DeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitDeclList(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::DeclListContext* RecipeParser::declList() {
  DeclListContext *_localctx = _tracker.createInstance<DeclListContext>(_ctx, getState());
  enterRule(_localctx, 12, RecipeParser::RuleDeclList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(106);
      decl();
      setState(109); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == RecipeParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

RecipeParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RecipeParser::NumberContext* RecipeParser::DeclContext::number() {
  return getRuleContext<RecipeParser::NumberContext>(0);
}

tree::TerminalNode* RecipeParser::DeclContext::OF() {
  return getToken(RecipeParser::OF, 0);
}

tree::TerminalNode* RecipeParser::DeclContext::IDENTIFIER() {
  return getToken(RecipeParser::IDENTIFIER, 0);
}

tree::TerminalNode* RecipeParser::DeclContext::INT_TYPE() {
  return getToken(RecipeParser::INT_TYPE, 0);
}

tree::TerminalNode* RecipeParser::DeclContext::FLOAT_TYPE() {
  return getToken(RecipeParser::FLOAT_TYPE, 0);
}

tree::TerminalNode* RecipeParser::DeclContext::ARR_FLOAT_TYPE() {
  return getToken(RecipeParser::ARR_FLOAT_TYPE, 0);
}

tree::TerminalNode* RecipeParser::DeclContext::ARR_INT_TYPE() {
  return getToken(RecipeParser::ARR_INT_TYPE, 0);
}


size_t RecipeParser::DeclContext::getRuleIndex() const {
  return RecipeParser::RuleDecl;
}

antlrcpp::Any RecipeParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::DeclContext* RecipeParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 14, RecipeParser::RuleDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(RecipeParser::T__1);
    setState(112);
    number();
    setState(113);
    dynamic_cast<DeclContext *>(_localctx)->dtype = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << RecipeParser::INT_TYPE)
      | (1ULL << RecipeParser::FLOAT_TYPE)
      | (1ULL << RecipeParser::ARR_INT_TYPE)
      | (1ULL << RecipeParser::ARR_FLOAT_TYPE))) != 0))) {
      dynamic_cast<DeclContext *>(_localctx)->dtype = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(114);
    match(RecipeParser::OF);
    setState(115);
    match(RecipeParser::IDENTIFIER);
   
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

RecipeParser::CodeLineListContext* RecipeParser::CodeContext::codeLineList() {
  return getRuleContext<RecipeParser::CodeLineListContext>(0);
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
  enterRule(_localctx, 16, RecipeParser::RuleCode);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(RecipeParser::CODE_SYM);
    setState(119);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(118);
      codeLineList();
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

//----------------- CodeLineListContext ------------------------------------------------------------------

RecipeParser::CodeLineListContext::CodeLineListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::CodeLineContext *> RecipeParser::CodeLineListContext::codeLine() {
  return getRuleContexts<RecipeParser::CodeLineContext>();
}

RecipeParser::CodeLineContext* RecipeParser::CodeLineListContext::codeLine(size_t i) {
  return getRuleContext<RecipeParser::CodeLineContext>(i);
}


size_t RecipeParser::CodeLineListContext::getRuleIndex() const {
  return RecipeParser::RuleCodeLineList;
}

antlrcpp::Any RecipeParser::CodeLineListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitCodeLineList(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::CodeLineListContext* RecipeParser::codeLineList() {
  CodeLineListContext *_localctx = _tracker.createInstance<CodeLineListContext>(_ctx, getState());
  enterRule(_localctx, 18, RecipeParser::RuleCodeLineList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(122); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(121);
              codeLine();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(124); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeLineContext ------------------------------------------------------------------

RecipeParser::CodeLineContext::CodeLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::CodeLineContext::INTEGER() {
  return getToken(RecipeParser::INTEGER, 0);
}

RecipeParser::StatementListContext* RecipeParser::CodeLineContext::statementList() {
  return getRuleContext<RecipeParser::StatementListContext>(0);
}

tree::TerminalNode* RecipeParser::CodeLineContext::PERIOD() {
  return getToken(RecipeParser::PERIOD, 0);
}


size_t RecipeParser::CodeLineContext::getRuleIndex() const {
  return RecipeParser::RuleCodeLine;
}

antlrcpp::Any RecipeParser::CodeLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitCodeLine(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::CodeLineContext* RecipeParser::codeLine() {
  CodeLineContext *_localctx = _tracker.createInstance<CodeLineContext>(_ctx, getState());
  enterRule(_localctx, 20, RecipeParser::RuleCodeLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(RecipeParser::INTEGER);
    setState(127);
    match(RecipeParser::PERIOD);
    setState(128);
    statementList();
    setState(129);
    match(RecipeParser::PERIOD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementListContext ------------------------------------------------------------------

RecipeParser::StatementListContext::StatementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::StatementContext *> RecipeParser::StatementListContext::statement() {
  return getRuleContexts<RecipeParser::StatementContext>();
}

RecipeParser::StatementContext* RecipeParser::StatementListContext::statement(size_t i) {
  return getRuleContext<RecipeParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> RecipeParser::StatementListContext::THEN() {
  return getTokens(RecipeParser::THEN);
}

tree::TerminalNode* RecipeParser::StatementListContext::THEN(size_t i) {
  return getToken(RecipeParser::THEN, i);
}


size_t RecipeParser::StatementListContext::getRuleIndex() const {
  return RecipeParser::RuleStatementList;
}

antlrcpp::Any RecipeParser::StatementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitStatementList(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::StatementListContext* RecipeParser::statementList() {
  StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, getState());
  enterRule(_localctx, 22, RecipeParser::RuleStatementList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(131);
    statement();
    setState(136);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(132);
        match(RecipeParser::THEN);
        setState(133);
        statement(); 
      }
      setState(138);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
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

RecipeParser::AddSubStmContext* RecipeParser::StatementContext::addSubStm() {
  return getRuleContext<RecipeParser::AddSubStmContext>(0);
}

RecipeParser::MulStmContext* RecipeParser::StatementContext::mulStm() {
  return getRuleContext<RecipeParser::MulStmContext>(0);
}

RecipeParser::DivStmContext* RecipeParser::StatementContext::divStm() {
  return getRuleContext<RecipeParser::DivStmContext>(0);
}

RecipeParser::IncDecStmContext* RecipeParser::StatementContext::incDecStm() {
  return getRuleContext<RecipeParser::IncDecStmContext>(0);
}

RecipeParser::WhileStmContext* RecipeParser::StatementContext::whileStm() {
  return getRuleContext<RecipeParser::WhileStmContext>(0);
}

RecipeParser::UntilStmContext* RecipeParser::StatementContext::untilStm() {
  return getRuleContext<RecipeParser::UntilStmContext>(0);
}

RecipeParser::FunctionCallContext* RecipeParser::StatementContext::functionCall() {
  return getRuleContext<RecipeParser::FunctionCallContext>(0);
}

RecipeParser::IfStmContext* RecipeParser::StatementContext::ifStm() {
  return getRuleContext<RecipeParser::IfStmContext>(0);
}

RecipeParser::PrintStmContext* RecipeParser::StatementContext::printStm() {
  return getRuleContext<RecipeParser::PrintStmContext>(0);
}

RecipeParser::PrintCharStmContext* RecipeParser::StatementContext::printCharStm() {
  return getRuleContext<RecipeParser::PrintCharStmContext>(0);
}

RecipeParser::AssignmentStmContext* RecipeParser::StatementContext::assignmentStm() {
  return getRuleContext<RecipeParser::AssignmentStmContext>(0);
}


size_t RecipeParser::StatementContext::getRuleIndex() const {
  return RecipeParser::RuleStatement;
}

antlrcpp::Any RecipeParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::StatementContext* RecipeParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 24, RecipeParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::PERIOD:
      case RecipeParser::COMMA:
      case RecipeParser::THEN:
      case RecipeParser::UNTIL: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case RecipeParser::ADD:
      case RecipeParser::SUB: {
        enterOuterAlt(_localctx, 2);
        setState(140);
        addSubStm();
        break;
      }

      case RecipeParser::MUL: {
        enterOuterAlt(_localctx, 3);
        setState(141);
        mulStm();
        break;
      }

      case RecipeParser::DIV: {
        enterOuterAlt(_localctx, 4);
        setState(142);
        divStm();
        break;
      }

      case RecipeParser::INC:
      case RecipeParser::DEC: {
        enterOuterAlt(_localctx, 5);
        setState(143);
        incDecStm();
        break;
      }

      case RecipeParser::WHILE: {
        enterOuterAlt(_localctx, 6);
        setState(144);
        whileStm();
        break;
      }

      case RecipeParser::REPEAT: {
        enterOuterAlt(_localctx, 7);
        setState(145);
        untilStm();
        break;
      }

      case RecipeParser::CALL: {
        enterOuterAlt(_localctx, 8);
        setState(146);
        functionCall();
        break;
      }

      case RecipeParser::IF: {
        enterOuterAlt(_localctx, 9);
        setState(147);
        ifStm();
        break;
      }

      case RecipeParser::PRINT: {
        enterOuterAlt(_localctx, 10);
        setState(148);
        printStm();
        break;
      }

      case RecipeParser::PRINT_CHAR: {
        enterOuterAlt(_localctx, 11);
        setState(149);
        printCharStm();
        break;
      }

      case RecipeParser::ASSIGN: {
        enterOuterAlt(_localctx, 12);
        setState(150);
        assignmentStm();
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

//----------------- ReturnCallContext ------------------------------------------------------------------

RecipeParser::ReturnCallContext::ReturnCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::ReturnCallContext::INTEGER() {
  return getToken(RecipeParser::INTEGER, 0);
}

RecipeParser::ReturnStmContext* RecipeParser::ReturnCallContext::returnStm() {
  return getRuleContext<RecipeParser::ReturnStmContext>(0);
}


size_t RecipeParser::ReturnCallContext::getRuleIndex() const {
  return RecipeParser::RuleReturnCall;
}

antlrcpp::Any RecipeParser::ReturnCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitReturnCall(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::ReturnCallContext* RecipeParser::returnCall() {
  ReturnCallContext *_localctx = _tracker.createInstance<ReturnCallContext>(_ctx, getState());
  enterRule(_localctx, 26, RecipeParser::RuleReturnCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(RecipeParser::INTEGER);
    setState(154);
    match(RecipeParser::PERIOD);
    setState(155);
    returnStm();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStmContext ------------------------------------------------------------------

RecipeParser::AssignmentStmContext::AssignmentStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::AssignmentStmContext::ASSIGN() {
  return getToken(RecipeParser::ASSIGN, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::AssignmentStmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::AssignmentStmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}


size_t RecipeParser::AssignmentStmContext::getRuleIndex() const {
  return RecipeParser::RuleAssignmentStm;
}

antlrcpp::Any RecipeParser::AssignmentStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitAssignmentStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::AssignmentStmContext* RecipeParser::assignmentStm() {
  AssignmentStmContext *_localctx = _tracker.createInstance<AssignmentStmContext>(_ctx, getState());
  enterRule(_localctx, 28, RecipeParser::RuleAssignmentStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(RecipeParser::ASSIGN);
    setState(158);
    variable();
    setState(159);
    match(RecipeParser::T__2);
    setState(160);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

RecipeParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::FunctionCallContext::CALL() {
  return getToken(RecipeParser::CALL, 0);
}

tree::TerminalNode* RecipeParser::FunctionCallContext::IDENTIFIER() {
  return getToken(RecipeParser::IDENTIFIER, 0);
}

RecipeParser::VariableContext* RecipeParser::FunctionCallContext::variable() {
  return getRuleContext<RecipeParser::VariableContext>(0);
}

RecipeParser::PassContext* RecipeParser::FunctionCallContext::pass() {
  return getRuleContext<RecipeParser::PassContext>(0);
}


size_t RecipeParser::FunctionCallContext::getRuleIndex() const {
  return RecipeParser::RuleFunctionCall;
}

antlrcpp::Any RecipeParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::FunctionCallContext* RecipeParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 30, RecipeParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(RecipeParser::CALL);
    setState(163);
    match(RecipeParser::IDENTIFIER);
    setState(164);
    match(RecipeParser::T__3);
    setState(165);
    variable();
    setState(168);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::T__0) {
      setState(166);
      match(RecipeParser::T__0);
      setState(167);
      pass();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PassContext ------------------------------------------------------------------

RecipeParser::PassContext::PassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::VariableContext *> RecipeParser::PassContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::PassContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> RecipeParser::PassContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::PassContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<tree::TerminalNode *> RecipeParser::PassContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::PassContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::PassContext::getRuleIndex() const {
  return RecipeParser::RulePass;
}

antlrcpp::Any RecipeParser::PassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitPass(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::PassContext* RecipeParser::pass() {
  PassContext *_localctx = _tracker.createInstance<PassContext>(_ctx, getState());
  enterRule(_localctx, 32, RecipeParser::RulePass);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(170);
    variable();
    setState(181);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(176);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          setState(171);
          match(RecipeParser::COMMA);
          break;
        }

        case 2: {
          setState(173);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == RecipeParser::COMMA) {
            setState(172);
            match(RecipeParser::COMMA);
          }
          setState(175);
          match(RecipeParser::AND);
          break;
        }

        }
        setState(178);
        variable(); 
      }
      setState(183);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

RecipeParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::ParamContext *> RecipeParser::ParamsContext::param() {
  return getRuleContexts<RecipeParser::ParamContext>();
}

RecipeParser::ParamContext* RecipeParser::ParamsContext::param(size_t i) {
  return getRuleContext<RecipeParser::ParamContext>(i);
}

std::vector<tree::TerminalNode *> RecipeParser::ParamsContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::ParamsContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<tree::TerminalNode *> RecipeParser::ParamsContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::ParamsContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::ParamsContext::getRuleIndex() const {
  return RecipeParser::RuleParams;
}

antlrcpp::Any RecipeParser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::ParamsContext* RecipeParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 34, RecipeParser::RuleParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    param();
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::COMMA

    || _la == RecipeParser::AND) {
      setState(190);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(185);
        match(RecipeParser::COMMA);
        break;
      }

      case 2: {
        setState(187);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RecipeParser::COMMA) {
          setState(186);
          match(RecipeParser::COMMA);
        }
        setState(189);
        match(RecipeParser::AND);
        break;
      }

      }
      setState(192);
      param();
      setState(197);
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

//----------------- ParamContext ------------------------------------------------------------------

RecipeParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::ParamContext::IDENTIFIER() {
  return getToken(RecipeParser::IDENTIFIER, 0);
}

tree::TerminalNode* RecipeParser::ParamContext::PARAM_INT() {
  return getToken(RecipeParser::PARAM_INT, 0);
}

tree::TerminalNode* RecipeParser::ParamContext::PARAM_FLOAT() {
  return getToken(RecipeParser::PARAM_FLOAT, 0);
}


size_t RecipeParser::ParamContext::getRuleIndex() const {
  return RecipeParser::RuleParam;
}

antlrcpp::Any RecipeParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::ParamContext* RecipeParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 36, RecipeParser::RuleParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    dynamic_cast<ParamContext *>(_localctx)->dtype = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == RecipeParser::PARAM_INT

    || _la == RecipeParser::PARAM_FLOAT)) {
      dynamic_cast<ParamContext *>(_localctx)->dtype = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(199);
    match(RecipeParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmContext ------------------------------------------------------------------

RecipeParser::ReturnStmContext::ReturnStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::ReturnStmContext::RETURN() {
  return getToken(RecipeParser::RETURN, 0);
}

RecipeParser::VariableContext* RecipeParser::ReturnStmContext::variable() {
  return getRuleContext<RecipeParser::VariableContext>(0);
}


size_t RecipeParser::ReturnStmContext::getRuleIndex() const {
  return RecipeParser::RuleReturnStm;
}

antlrcpp::Any RecipeParser::ReturnStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitReturnStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::ReturnStmContext* RecipeParser::returnStm() {
  ReturnStmContext *_localctx = _tracker.createInstance<ReturnStmContext>(_ctx, getState());
  enterRule(_localctx, 38, RecipeParser::RuleReturnStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(RecipeParser::RETURN);
    setState(202);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddSubStmContext ------------------------------------------------------------------

RecipeParser::AddSubStmContext::AddSubStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeParser::VariableContext *> RecipeParser::AddSubStmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::AddSubStmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::AddSubStmContext::DEST() {
  return getToken(RecipeParser::DEST, 0);
}

tree::TerminalNode* RecipeParser::AddSubStmContext::ADD() {
  return getToken(RecipeParser::ADD, 0);
}

tree::TerminalNode* RecipeParser::AddSubStmContext::SUB() {
  return getToken(RecipeParser::SUB, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::AddSubStmContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::AddSubStmContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<tree::TerminalNode *> RecipeParser::AddSubStmContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::AddSubStmContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::AddSubStmContext::getRuleIndex() const {
  return RecipeParser::RuleAddSubStm;
}

antlrcpp::Any RecipeParser::AddSubStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitAddSubStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::AddSubStmContext* RecipeParser::addSubStm() {
  AddSubStmContext *_localctx = _tracker.createInstance<AddSubStmContext>(_ctx, getState());
  enterRule(_localctx, 40, RecipeParser::RuleAddSubStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    dynamic_cast<AddSubStmContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == RecipeParser::ADD

    || _la == RecipeParser::SUB)) {
      dynamic_cast<AddSubStmContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(205);
    variable();
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::COMMA

    || _la == RecipeParser::AND) {
      setState(211);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(206);
        match(RecipeParser::COMMA);
        break;
      }

      case 2: {
        setState(208);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RecipeParser::COMMA) {
          setState(207);
          match(RecipeParser::COMMA);
        }
        setState(210);
        match(RecipeParser::AND);
        break;
      }

      }
      setState(213);
      variable();
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(219);
    match(RecipeParser::DEST);
    setState(220);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulStmContext ------------------------------------------------------------------

RecipeParser::MulStmContext::MulStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::MulStmContext::MUL() {
  return getToken(RecipeParser::MUL, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::MulStmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::MulStmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::MulStmContext::DEST() {
  return getToken(RecipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::MulStmContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::MulStmContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<tree::TerminalNode *> RecipeParser::MulStmContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::MulStmContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::MulStmContext::getRuleIndex() const {
  return RecipeParser::RuleMulStm;
}

antlrcpp::Any RecipeParser::MulStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitMulStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::MulStmContext* RecipeParser::mulStm() {
  MulStmContext *_localctx = _tracker.createInstance<MulStmContext>(_ctx, getState());
  enterRule(_localctx, 42, RecipeParser::RuleMulStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(RecipeParser::MUL);
    setState(223);
    variable();
    setState(234);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::COMMA

    || _la == RecipeParser::AND) {
      setState(229);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
        setState(224);
        match(RecipeParser::COMMA);
        break;
      }

      case 2: {
        setState(226);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RecipeParser::COMMA) {
          setState(225);
          match(RecipeParser::COMMA);
        }
        setState(228);
        match(RecipeParser::AND);
        break;
      }

      }
      setState(231);
      variable();
      setState(236);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(237);
    match(RecipeParser::DEST);
    setState(238);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DivStmContext ------------------------------------------------------------------

RecipeParser::DivStmContext::DivStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::DivStmContext::DIV() {
  return getToken(RecipeParser::DIV, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::DivStmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::DivStmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> RecipeParser::DivStmContext::DEST() {
  return getTokens(RecipeParser::DEST);
}

tree::TerminalNode* RecipeParser::DivStmContext::DEST(size_t i) {
  return getToken(RecipeParser::DEST, i);
}

std::vector<RecipeParser::NumberContext *> RecipeParser::DivStmContext::number() {
  return getRuleContexts<RecipeParser::NumberContext>();
}

RecipeParser::NumberContext* RecipeParser::DivStmContext::number(size_t i) {
  return getRuleContext<RecipeParser::NumberContext>(i);
}


size_t RecipeParser::DivStmContext::getRuleIndex() const {
  return RecipeParser::RuleDivStm;
}

antlrcpp::Any RecipeParser::DivStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitDivStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::DivStmContext* RecipeParser::divStm() {
  DivStmContext *_localctx = _tracker.createInstance<DivStmContext>(_ctx, getState());
  enterRule(_localctx, 44, RecipeParser::RuleDivStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(RecipeParser::DIV);
    setState(241);
    variable();
    setState(253); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(243);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RecipeParser::T__4) {
        setState(242);
        match(RecipeParser::T__4);
      }
      setState(245);
      match(RecipeParser::DEST);
      setState(247);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RecipeParser::T__5) {
        setState(246);
        match(RecipeParser::T__5);
      }
      setState(251);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(249);
        variable();
        break;
      }

      case 2: {
        setState(250);
        number();
        break;
      }

      }
      setState(255); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == RecipeParser::T__4

    || _la == RecipeParser::DEST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncDecStmContext ------------------------------------------------------------------

RecipeParser::IncDecStmContext::IncDecStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RecipeParser::VariableContext* RecipeParser::IncDecStmContext::variable() {
  return getRuleContext<RecipeParser::VariableContext>(0);
}

tree::TerminalNode* RecipeParser::IncDecStmContext::INC() {
  return getToken(RecipeParser::INC, 0);
}

tree::TerminalNode* RecipeParser::IncDecStmContext::DEC() {
  return getToken(RecipeParser::DEC, 0);
}

RecipeParser::NumberContext* RecipeParser::IncDecStmContext::number() {
  return getRuleContext<RecipeParser::NumberContext>(0);
}


size_t RecipeParser::IncDecStmContext::getRuleIndex() const {
  return RecipeParser::RuleIncDecStm;
}

antlrcpp::Any RecipeParser::IncDecStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitIncDecStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::IncDecStmContext* RecipeParser::incDecStm() {
  IncDecStmContext *_localctx = _tracker.createInstance<IncDecStmContext>(_ctx, getState());
  enterRule(_localctx, 46, RecipeParser::RuleIncDecStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    dynamic_cast<IncDecStmContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == RecipeParser::INC

    || _la == RecipeParser::DEC)) {
      dynamic_cast<IncDecStmContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(258);
    variable();
    setState(263);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::T__3) {
      setState(259);
      match(RecipeParser::T__3);
      setState(260);
      number();
      setState(261);
      _la = _input->LA(1);
      if (!(_la == RecipeParser::T__6

      || _la == RecipeParser::T__7)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
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

//----------------- IfStmContext ------------------------------------------------------------------

RecipeParser::IfStmContext::IfStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::IfStmContext::IF() {
  return getToken(RecipeParser::IF, 0);
}

RecipeParser::ConditionListContext* RecipeParser::IfStmContext::conditionList() {
  return getRuleContext<RecipeParser::ConditionListContext>(0);
}

std::vector<tree::TerminalNode *> RecipeParser::IfStmContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::IfStmContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<RecipeParser::StatementListContext *> RecipeParser::IfStmContext::statementList() {
  return getRuleContexts<RecipeParser::StatementListContext>();
}

RecipeParser::StatementListContext* RecipeParser::IfStmContext::statementList(size_t i) {
  return getRuleContext<RecipeParser::StatementListContext>(i);
}

tree::TerminalNode* RecipeParser::IfStmContext::ELSE() {
  return getToken(RecipeParser::ELSE, 0);
}


size_t RecipeParser::IfStmContext::getRuleIndex() const {
  return RecipeParser::RuleIfStm;
}

antlrcpp::Any RecipeParser::IfStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitIfStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::IfStmContext* RecipeParser::ifStm() {
  IfStmContext *_localctx = _tracker.createInstance<IfStmContext>(_ctx, getState());
  enterRule(_localctx, 48, RecipeParser::RuleIfStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(RecipeParser::IF);
    setState(266);
    conditionList();
    setState(267);
    match(RecipeParser::COMMA);
    setState(268);
    statementList();
    setState(272);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(269);
      match(RecipeParser::COMMA);
      setState(270);
      match(RecipeParser::ELSE);
      setState(271);
      statementList();
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

//----------------- WhileStmContext ------------------------------------------------------------------

RecipeParser::WhileStmContext::WhileStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::WhileStmContext::WHILE() {
  return getToken(RecipeParser::WHILE, 0);
}

RecipeParser::ConditionListContext* RecipeParser::WhileStmContext::conditionList() {
  return getRuleContext<RecipeParser::ConditionListContext>(0);
}

tree::TerminalNode* RecipeParser::WhileStmContext::COMMA() {
  return getToken(RecipeParser::COMMA, 0);
}

tree::TerminalNode* RecipeParser::WhileStmContext::WHILE_DO() {
  return getToken(RecipeParser::WHILE_DO, 0);
}

RecipeParser::StatementListContext* RecipeParser::WhileStmContext::statementList() {
  return getRuleContext<RecipeParser::StatementListContext>(0);
}


size_t RecipeParser::WhileStmContext::getRuleIndex() const {
  return RecipeParser::RuleWhileStm;
}

antlrcpp::Any RecipeParser::WhileStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitWhileStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::WhileStmContext* RecipeParser::whileStm() {
  WhileStmContext *_localctx = _tracker.createInstance<WhileStmContext>(_ctx, getState());
  enterRule(_localctx, 50, RecipeParser::RuleWhileStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(RecipeParser::WHILE);
    setState(275);
    conditionList();
    setState(276);
    match(RecipeParser::COMMA);
    setState(277);
    match(RecipeParser::WHILE_DO);
    setState(278);
    statementList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UntilStmContext ------------------------------------------------------------------

RecipeParser::UntilStmContext::UntilStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::UntilStmContext::REPEAT() {
  return getToken(RecipeParser::REPEAT, 0);
}

RecipeParser::StatementListContext* RecipeParser::UntilStmContext::statementList() {
  return getRuleContext<RecipeParser::StatementListContext>(0);
}

tree::TerminalNode* RecipeParser::UntilStmContext::UNTIL() {
  return getToken(RecipeParser::UNTIL, 0);
}

RecipeParser::ConditionListContext* RecipeParser::UntilStmContext::conditionList() {
  return getRuleContext<RecipeParser::ConditionListContext>(0);
}


size_t RecipeParser::UntilStmContext::getRuleIndex() const {
  return RecipeParser::RuleUntilStm;
}

antlrcpp::Any RecipeParser::UntilStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitUntilStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::UntilStmContext* RecipeParser::untilStm() {
  UntilStmContext *_localctx = _tracker.createInstance<UntilStmContext>(_ctx, getState());
  enterRule(_localctx, 52, RecipeParser::RuleUntilStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(RecipeParser::REPEAT);
    setState(281);
    statementList();
    setState(282);
    match(RecipeParser::UNTIL);
    setState(283);
    conditionList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStmContext ------------------------------------------------------------------

RecipeParser::PrintStmContext::PrintStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::PrintStmContext::PRINT() {
  return getToken(RecipeParser::PRINT, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::PrintStmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::PrintStmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> RecipeParser::PrintStmContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::PrintStmContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<tree::TerminalNode *> RecipeParser::PrintStmContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::PrintStmContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::PrintStmContext::getRuleIndex() const {
  return RecipeParser::RulePrintStm;
}

antlrcpp::Any RecipeParser::PrintStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitPrintStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::PrintStmContext* RecipeParser::printStm() {
  PrintStmContext *_localctx = _tracker.createInstance<PrintStmContext>(_ctx, getState());
  enterRule(_localctx, 54, RecipeParser::RulePrintStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(285);
    match(RecipeParser::PRINT);
    setState(286);
    variable();
    setState(297);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(292);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
        case 1: {
          setState(287);
          match(RecipeParser::COMMA);
          break;
        }

        case 2: {
          setState(289);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == RecipeParser::COMMA) {
            setState(288);
            match(RecipeParser::COMMA);
          }
          setState(291);
          match(RecipeParser::AND);
          break;
        }

        }
        setState(294);
        variable(); 
      }
      setState(299);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintCharStmContext ------------------------------------------------------------------

RecipeParser::PrintCharStmContext::PrintCharStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::PrintCharStmContext::PRINT_CHAR() {
  return getToken(RecipeParser::PRINT_CHAR, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::PrintCharStmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::PrintCharStmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> RecipeParser::PrintCharStmContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::PrintCharStmContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<tree::TerminalNode *> RecipeParser::PrintCharStmContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::PrintCharStmContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::PrintCharStmContext::getRuleIndex() const {
  return RecipeParser::RulePrintCharStm;
}

antlrcpp::Any RecipeParser::PrintCharStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitPrintCharStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::PrintCharStmContext* RecipeParser::printCharStm() {
  PrintCharStmContext *_localctx = _tracker.createInstance<PrintCharStmContext>(_ctx, getState());
  enterRule(_localctx, 56, RecipeParser::RulePrintCharStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(300);
    match(RecipeParser::PRINT_CHAR);
    setState(301);
    variable();
    setState(312);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(307);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
        case 1: {
          setState(302);
          match(RecipeParser::COMMA);
          break;
        }

        case 2: {
          setState(304);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == RecipeParser::COMMA) {
            setState(303);
            match(RecipeParser::COMMA);
          }
          setState(306);
          match(RecipeParser::AND);
          break;
        }

        }
        setState(309);
        variable(); 
      }
      setState(314);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionListContext ------------------------------------------------------------------

RecipeParser::ConditionListContext::ConditionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RecipeParser::ConditionContext* RecipeParser::ConditionListContext::condition() {
  return getRuleContext<RecipeParser::ConditionContext>(0);
}

std::vector<RecipeParser::AndCondContext *> RecipeParser::ConditionListContext::andCond() {
  return getRuleContexts<RecipeParser::AndCondContext>();
}

RecipeParser::AndCondContext* RecipeParser::ConditionListContext::andCond(size_t i) {
  return getRuleContext<RecipeParser::AndCondContext>(i);
}

std::vector<RecipeParser::OrCondContext *> RecipeParser::ConditionListContext::orCond() {
  return getRuleContexts<RecipeParser::OrCondContext>();
}

RecipeParser::OrCondContext* RecipeParser::ConditionListContext::orCond(size_t i) {
  return getRuleContext<RecipeParser::OrCondContext>(i);
}


size_t RecipeParser::ConditionListContext::getRuleIndex() const {
  return RecipeParser::RuleConditionList;
}

antlrcpp::Any RecipeParser::ConditionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitConditionList(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::ConditionListContext* RecipeParser::conditionList() {
  ConditionListContext *_localctx = _tracker.createInstance<ConditionListContext>(_ctx, getState());
  enterRule(_localctx, 58, RecipeParser::RuleConditionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    condition();
    setState(320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::AND

    || _la == RecipeParser::OR) {
      setState(318);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RecipeParser::AND: {
          setState(316);
          andCond();
          break;
        }

        case RecipeParser::OR: {
          setState(317);
          orCond();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(322);
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

std::vector<RecipeParser::OperandContext *> RecipeParser::ConditionContext::operand() {
  return getRuleContexts<RecipeParser::OperandContext>();
}

RecipeParser::OperandContext* RecipeParser::ConditionContext::operand(size_t i) {
  return getRuleContext<RecipeParser::OperandContext>(i);
}

tree::TerminalNode* RecipeParser::ConditionContext::IS() {
  return getToken(RecipeParser::IS, 0);
}

tree::TerminalNode* RecipeParser::ConditionContext::NOT() {
  return getToken(RecipeParser::NOT, 0);
}

tree::TerminalNode* RecipeParser::ConditionContext::GT() {
  return getToken(RecipeParser::GT, 0);
}

tree::TerminalNode* RecipeParser::ConditionContext::LT() {
  return getToken(RecipeParser::LT, 0);
}

tree::TerminalNode* RecipeParser::ConditionContext::EQ() {
  return getToken(RecipeParser::EQ, 0);
}

tree::TerminalNode* RecipeParser::ConditionContext::GE() {
  return getToken(RecipeParser::GE, 0);
}

tree::TerminalNode* RecipeParser::ConditionContext::LE() {
  return getToken(RecipeParser::LE, 0);
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
  enterRule(_localctx, 60, RecipeParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    operand();
    setState(324);
    match(RecipeParser::IS);
    setState(326);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::NOT) {
      setState(325);
      match(RecipeParser::NOT);
    }

    setState(329);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << RecipeParser::GT)
      | (1ULL << RecipeParser::LT)
      | (1ULL << RecipeParser::EQ)
      | (1ULL << RecipeParser::GE)
      | (1ULL << RecipeParser::LE))) != 0)) {
      setState(328);
      dynamic_cast<ConditionContext *>(_localctx)->comp = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << RecipeParser::GT)
        | (1ULL << RecipeParser::LT)
        | (1ULL << RecipeParser::EQ)
        | (1ULL << RecipeParser::GE)
        | (1ULL << RecipeParser::LE))) != 0))) {
        dynamic_cast<ConditionContext *>(_localctx)->comp = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(331);
    operand();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperandContext ------------------------------------------------------------------

RecipeParser::OperandContext::OperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RecipeParser::VariableContext* RecipeParser::OperandContext::variable() {
  return getRuleContext<RecipeParser::VariableContext>(0);
}

RecipeParser::ConstantContext* RecipeParser::OperandContext::constant() {
  return getRuleContext<RecipeParser::ConstantContext>(0);
}


size_t RecipeParser::OperandContext::getRuleIndex() const {
  return RecipeParser::RuleOperand;
}

antlrcpp::Any RecipeParser::OperandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitOperand(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::OperandContext* RecipeParser::operand() {
  OperandContext *_localctx = _tracker.createInstance<OperandContext>(_ctx, getState());
  enterRule(_localctx, 62, RecipeParser::RuleOperand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(335);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(333);
      variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(334);
      constant();
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

//----------------- ConstantContext ------------------------------------------------------------------

RecipeParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RecipeParser::NumberContext* RecipeParser::ConstantContext::number() {
  return getRuleContext<RecipeParser::NumberContext>(0);
}

RecipeParser::TrueSymContext* RecipeParser::ConstantContext::trueSym() {
  return getRuleContext<RecipeParser::TrueSymContext>(0);
}


size_t RecipeParser::ConstantContext::getRuleIndex() const {
  return RecipeParser::RuleConstant;
}

antlrcpp::Any RecipeParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::ConstantContext* RecipeParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 64, RecipeParser::RuleConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(339);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(337);
        number();
        break;
      }

      case RecipeParser::TRUE_SYM: {
        enterOuterAlt(_localctx, 2);
        setState(338);
        trueSym();
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

//----------------- TrueSymContext ------------------------------------------------------------------

RecipeParser::TrueSymContext::TrueSymContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::TrueSymContext::TRUE_SYM() {
  return getToken(RecipeParser::TRUE_SYM, 0);
}


size_t RecipeParser::TrueSymContext::getRuleIndex() const {
  return RecipeParser::RuleTrueSym;
}

antlrcpp::Any RecipeParser::TrueSymContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitTrueSym(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::TrueSymContext* RecipeParser::trueSym() {
  TrueSymContext *_localctx = _tracker.createInstance<TrueSymContext>(_ctx, getState());
  enterRule(_localctx, 66, RecipeParser::RuleTrueSym);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    match(RecipeParser::TRUE_SYM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndCondContext ------------------------------------------------------------------

RecipeParser::AndCondContext::AndCondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::AndCondContext::AND() {
  return getToken(RecipeParser::AND, 0);
}

RecipeParser::ConditionContext* RecipeParser::AndCondContext::condition() {
  return getRuleContext<RecipeParser::ConditionContext>(0);
}


size_t RecipeParser::AndCondContext::getRuleIndex() const {
  return RecipeParser::RuleAndCond;
}

antlrcpp::Any RecipeParser::AndCondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitAndCond(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::AndCondContext* RecipeParser::andCond() {
  AndCondContext *_localctx = _tracker.createInstance<AndCondContext>(_ctx, getState());
  enterRule(_localctx, 68, RecipeParser::RuleAndCond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    match(RecipeParser::AND);
    setState(344);
    condition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrCondContext ------------------------------------------------------------------

RecipeParser::OrCondContext::OrCondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::OrCondContext::OR() {
  return getToken(RecipeParser::OR, 0);
}

RecipeParser::ConditionContext* RecipeParser::OrCondContext::condition() {
  return getRuleContext<RecipeParser::ConditionContext>(0);
}


size_t RecipeParser::OrCondContext::getRuleIndex() const {
  return RecipeParser::RuleOrCond;
}

antlrcpp::Any RecipeParser::OrCondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitOrCond(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::OrCondContext* RecipeParser::orCond() {
  OrCondContext *_localctx = _tracker.createInstance<OrCondContext>(_ctx, getState());
  enterRule(_localctx, 70, RecipeParser::RuleOrCond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    match(RecipeParser::OR);
    setState(347);
    condition();
   
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
  this->type = ctx->type;
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
  enterRule(_localctx, 72, RecipeParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(353);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<RecipeParser::IntContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(349);
      match(RecipeParser::INTEGER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<RecipeParser::FloatContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(350);
      match(RecipeParser::INTEGER);
      setState(351);
      match(RecipeParser::PERIOD);
      setState(352);
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
  enterRule(_localctx, 74, RecipeParser::RuleVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::INTEGER) {
      setState(355);
      match(RecipeParser::INTEGER);
      setState(356);
      match(RecipeParser::ARRAY_ELEM);
      setState(357);
      match(RecipeParser::OF);
    }
    setState(360);
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
  "program", "function", "mainBlock", "block", "header", "data", "declList", 
  "decl", "code", "codeLineList", "codeLine", "statementList", "statement", 
  "returnCall", "assignmentStm", "functionCall", "pass", "params", "param", 
  "returnStm", "addSubStm", "mulStm", "divStm", "incDecStm", "ifStm", "whileStm", 
  "untilStm", "printStm", "printCharStm", "conditionList", "condition", 
  "operand", "constant", "trueSym", "andCond", "orCond", "number", "variable"
};

std::vector<std::string> RecipeParser::_literalNames = {
  "", "'with'", "'-'", "'as'", "'for'", "'and again'", "'size of'", "'min'", 
  "'mins'", "'.'", "", "'See recipe'", "", "", "'pieces'", "'packs'", "", 
  "'of'", "'Recipe:'", "'Ingredients:'", "'Directions:'", "'Serve'", "", 
  "", "'then'", "'otherwise'", "", "'keep'", "", "'until'", "", "", "", 
  "", "'step'", "'and'", "'or'", "", "", "", "'is'", "'done'", "'not'", 
  "'more than'", "'less than'", "'as much as'", "'more than or equal to'", 
  "'less than or equal to'"
};

std::vector<std::string> RecipeParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "PERIOD", "COMMA", "CALL", "INT_TYPE", 
  "FLOAT_TYPE", "ARR_INT_TYPE", "ARR_FLOAT_TYPE", "ARRAY_ELEM", "OF", "HEADER_SYM", 
  "DECLARATION_SYM", "CODE_SYM", "RETURN", "ASSIGN", "IF", "THEN", "ELSE", 
  "WHILE", "WHILE_DO", "REPEAT", "UNTIL", "ADD", "SUB", "MUL", "DIV", "STEP_SYM", 
  "AND", "OR", "DEST", "PRINT", "PRINT_CHAR", "IS", "TRUE_SYM", "NOT", "GT", 
  "LT", "EQ", "GE", "LE", "INC", "DEC", "WS", "NEWLINE", "COMMENT", "IDENTIFIER", 
  "INTEGER", "PARAM_INT", "PARAM_FLOAT"
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
    0x3, 0x3a, 0x16d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x3, 0x2, 0x3, 0x2, 
    0x7, 0x2, 0x51, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x54, 0xb, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x59, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x5, 0x5, 0x5e, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x61, 0xa, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x68, 0xa, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x6, 0x8, 0x6e, 0xa, 0x8, 0xd, 
    0x8, 0xe, 0x8, 0x6f, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x7a, 0xa, 0xa, 0x3, 0xb, 0x6, 
    0xb, 0x7d, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x7e, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x89, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x8c, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x9a, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0xab, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0xb0, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0xb3, 0xa, 0x12, 0x3, 0x12, 0x7, 
    0x12, 0xb6, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xb9, 0xb, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xbe, 0xa, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0xc1, 0xa, 0x13, 0x3, 0x13, 0x7, 0x13, 0xc4, 0xa, 0x13, 0xc, 0x13, 0xe, 
    0x13, 0xc7, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0xd3, 0xa, 0x16, 0x3, 0x16, 0x5, 0x16, 0xd6, 0xa, 0x16, 0x3, 0x16, 0x7, 
    0x16, 0xd9, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xdc, 0xb, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 
    0x17, 0xe5, 0xa, 0x17, 0x3, 0x17, 0x5, 0x17, 0xe8, 0xa, 0x17, 0x3, 0x17, 
    0x7, 0x17, 0xeb, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0xee, 0xb, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0xf6, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0xfa, 0xa, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x5, 0x18, 0xfe, 0xa, 0x18, 0x6, 0x18, 0x100, 0xa, 
    0x18, 0xd, 0x18, 0xe, 0x18, 0x101, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x10a, 0xa, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 
    0x1a, 0x113, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x124, 
    0xa, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x127, 0xa, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 
    0x12a, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x12d, 0xb, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x133, 0xa, 0x1e, 0x3, 0x1e, 
    0x5, 0x1e, 0x136, 0xa, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x139, 0xa, 0x1e, 
    0xc, 0x1e, 0xe, 0x1e, 0x13c, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x7, 0x1f, 0x141, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x144, 0xb, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x149, 0xa, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x14c, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 
    0x5, 0x21, 0x152, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x156, 
    0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x5, 0x26, 0x164, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 
    0x169, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x2, 0x2, 0x28, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 
    0x2, 0x8, 0x3, 0x2, 0x39, 0x3a, 0x3, 0x2, 0xe, 0x11, 0x3, 0x2, 0x20, 
    0x21, 0x3, 0x2, 0x32, 0x33, 0x3, 0x2, 0x9, 0xa, 0x3, 0x2, 0x2d, 0x31, 
    0x2, 0x17b, 0x2, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5d, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0xc, 0x69, 0x3, 0x2, 0x2, 0x2, 0xe, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x71, 0x3, 0x2, 0x2, 0x2, 0x12, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x85, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x9f, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x22, 0xac, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xba, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x28, 0xcb, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xce, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x30, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x34, 0x114, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x11f, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x145, 0x3, 0x2, 0x2, 0x2, 0x40, 0x151, 0x3, 0x2, 0x2, 0x2, 0x42, 0x155, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x157, 0x3, 0x2, 0x2, 0x2, 0x46, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x168, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x52, 0x5, 0x4, 0x3, 
    0x2, 0x4f, 0x51, 0x5, 0x4, 0x3, 0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x54, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x3, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x5, 0xa, 0x6, 0x2, 0x56, 0x58, 0x5, 
    0x6, 0x4, 0x2, 0x57, 0x59, 0x5, 0x1c, 0xf, 0x2, 0x58, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x5b, 0x5, 0x8, 0x5, 0x2, 0x5b, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x5e, 0x5, 0xc, 0x7, 0x2, 0x5d, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x60, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x61, 
    0x5, 0x12, 0xa, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x9, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0x14, 
    0x2, 0x2, 0x63, 0x64, 0x9, 0x2, 0x2, 0x2, 0x64, 0x67, 0x7, 0x37, 0x2, 
    0x2, 0x65, 0x66, 0x7, 0x3, 0x2, 0x2, 0x66, 0x68, 0x5, 0x24, 0x13, 0x2, 
    0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x15, 0x2, 0x2, 0x6a, 0x6b, 
    0x5, 0xe, 0x8, 0x2, 0x6b, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6e, 0x5, 
    0x10, 0x9, 0x2, 0x6d, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0xf, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0x4, 0x2, 0x2, 
    0x72, 0x73, 0x5, 0x4a, 0x26, 0x2, 0x73, 0x74, 0x9, 0x3, 0x2, 0x2, 0x74, 
    0x75, 0x7, 0x13, 0x2, 0x2, 0x75, 0x76, 0x7, 0x37, 0x2, 0x2, 0x76, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x79, 0x7, 0x16, 0x2, 0x2, 0x78, 0x7a, 0x5, 
    0x14, 0xb, 0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x5, 0x16, 0xc, 
    0x2, 0x7c, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0x38, 0x2, 0x2, 0x81, 0x82, 
    0x7, 0xb, 0x2, 0x2, 0x82, 0x83, 0x5, 0x18, 0xd, 0x2, 0x83, 0x84, 0x7, 
    0xb, 0x2, 0x2, 0x84, 0x17, 0x3, 0x2, 0x2, 0x2, 0x85, 0x8a, 0x5, 0x1a, 
    0xe, 0x2, 0x86, 0x87, 0x7, 0x1a, 0x2, 0x2, 0x87, 0x89, 0x5, 0x1a, 0xe, 
    0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x9a, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x9a, 0x5, 0x2a, 0x16, 0x2, 0x8f, 0x9a, 0x5, 
    0x2c, 0x17, 0x2, 0x90, 0x9a, 0x5, 0x2e, 0x18, 0x2, 0x91, 0x9a, 0x5, 
    0x30, 0x19, 0x2, 0x92, 0x9a, 0x5, 0x34, 0x1b, 0x2, 0x93, 0x9a, 0x5, 
    0x36, 0x1c, 0x2, 0x94, 0x9a, 0x5, 0x20, 0x11, 0x2, 0x95, 0x9a, 0x5, 
    0x32, 0x1a, 0x2, 0x96, 0x9a, 0x5, 0x38, 0x1d, 0x2, 0x97, 0x9a, 0x5, 
    0x3a, 0x1e, 0x2, 0x98, 0x9a, 0x5, 0x1e, 0x10, 0x2, 0x99, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x99, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x90, 0x3, 0x2, 0x2, 0x2, 0x99, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x92, 0x3, 0x2, 0x2, 0x2, 0x99, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x94, 0x3, 0x2, 0x2, 0x2, 0x99, 0x95, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x98, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x7, 
    0x38, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0xb, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x28, 
    0x15, 0x2, 0x9e, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x18, 0x2, 
    0x2, 0xa0, 0xa1, 0x5, 0x4c, 0x27, 0x2, 0xa1, 0xa2, 0x7, 0x5, 0x2, 0x2, 
    0xa2, 0xa3, 0x5, 0x4c, 0x27, 0x2, 0xa3, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0xa5, 0x7, 0xd, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x37, 0x2, 0x2, 0xa6, 0xa7, 
    0x7, 0x6, 0x2, 0x2, 0xa7, 0xaa, 0x5, 0x4c, 0x27, 0x2, 0xa8, 0xa9, 0x7, 
    0x3, 0x2, 0x2, 0xa9, 0xab, 0x5, 0x22, 0x12, 0x2, 0xaa, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0xac, 0xb7, 0x5, 0x4c, 0x27, 0x2, 0xad, 0xb3, 0x7, 0xc, 0x2, 0x2, 
    0xae, 0xb0, 0x7, 0xc, 0x2, 0x2, 0xaf, 0xae, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb3, 
    0x7, 0x25, 0x2, 0x2, 0xb2, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xaf, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 0x5, 0x4c, 
    0x27, 0x2, 0xb5, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0x23, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xc5, 0x5, 0x26, 0x14, 0x2, 0xbb, 0xc1, 0x7, 0xc, 0x2, 0x2, 0xbc, 0xbe, 
    0x7, 0xc, 0x2, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc1, 0x7, 0x25, 
    0x2, 0x2, 0xc0, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc4, 0x5, 0x26, 0x14, 0x2, 
    0xc3, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x9, 
    0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x37, 0x2, 0x2, 0xca, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xcc, 0x7, 0x17, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x4c, 0x27, 
    0x2, 0xcd, 0x29, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x9, 0x4, 0x2, 0x2, 
    0xcf, 0xda, 0x5, 0x4c, 0x27, 0x2, 0xd0, 0xd6, 0x7, 0xc, 0x2, 0x2, 0xd1, 
    0xd3, 0x7, 0xc, 0x2, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd6, 0x7, 
    0x25, 0x2, 0x2, 0xd5, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd2, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd9, 0x5, 0x4c, 0x27, 
    0x2, 0xd8, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 
    0x7, 0x27, 0x2, 0x2, 0xde, 0xdf, 0x5, 0x4c, 0x27, 0x2, 0xdf, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x22, 0x2, 0x2, 0xe1, 0xec, 0x5, 0x4c, 
    0x27, 0x2, 0xe2, 0xe8, 0x7, 0xc, 0x2, 0x2, 0xe3, 0xe5, 0x7, 0xc, 0x2, 
    0x2, 0xe4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe8, 0x7, 0x25, 0x2, 0x2, 0xe7, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0xe9, 0xeb, 0x5, 0x4c, 0x27, 0x2, 0xea, 0xe7, 0x3, 
    0x2, 0x2, 0x2, 0xeb, 0xee, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 
    0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xef, 0x3, 0x2, 0x2, 
    0x2, 0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x27, 0x2, 0x2, 
    0xf0, 0xf1, 0x5, 0x4c, 0x27, 0x2, 0xf1, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xf2, 
    0xf3, 0x7, 0x23, 0x2, 0x2, 0xf3, 0xff, 0x5, 0x4c, 0x27, 0x2, 0xf4, 0xf6, 
    0x7, 0x7, 0x2, 0x2, 0xf5, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf9, 0x7, 0x27, 
    0x2, 0x2, 0xf8, 0xfa, 0x7, 0x8, 0x2, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfd, 0x3, 0x2, 0x2, 0x2, 
    0xfb, 0xfe, 0x5, 0x4c, 0x27, 0x2, 0xfc, 0xfe, 0x5, 0x4a, 0x26, 0x2, 
    0xfd, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0x100, 0x3, 0x2, 0x2, 0x2, 0xff, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 
    0x2, 0x2, 0x2, 0x102, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x9, 0x5, 
    0x2, 0x2, 0x104, 0x109, 0x5, 0x4c, 0x27, 0x2, 0x105, 0x106, 0x7, 0x6, 
    0x2, 0x2, 0x106, 0x107, 0x5, 0x4a, 0x26, 0x2, 0x107, 0x108, 0x9, 0x6, 
    0x2, 0x2, 0x108, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x109, 0x105, 0x3, 0x2, 
    0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x10b, 0x10c, 0x7, 0x19, 0x2, 0x2, 0x10c, 0x10d, 0x5, 0x3c, 0x1f, 
    0x2, 0x10d, 0x10e, 0x7, 0xc, 0x2, 0x2, 0x10e, 0x112, 0x5, 0x18, 0xd, 
    0x2, 0x10f, 0x110, 0x7, 0xc, 0x2, 0x2, 0x110, 0x111, 0x7, 0x1b, 0x2, 
    0x2, 0x111, 0x113, 0x5, 0x18, 0xd, 0x2, 0x112, 0x10f, 0x3, 0x2, 0x2, 
    0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x114, 0x115, 0x7, 0x1c, 0x2, 0x2, 0x115, 0x116, 0x5, 0x3c, 0x1f, 0x2, 
    0x116, 0x117, 0x7, 0xc, 0x2, 0x2, 0x117, 0x118, 0x7, 0x1d, 0x2, 0x2, 
    0x118, 0x119, 0x5, 0x18, 0xd, 0x2, 0x119, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x11a, 0x11b, 0x7, 0x1e, 0x2, 0x2, 0x11b, 0x11c, 0x5, 0x18, 0xd, 0x2, 
    0x11c, 0x11d, 0x7, 0x1f, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0x3c, 0x1f, 0x2, 
    0x11e, 0x37, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x7, 0x28, 0x2, 0x2, 
    0x120, 0x12b, 0x5, 0x4c, 0x27, 0x2, 0x121, 0x127, 0x7, 0xc, 0x2, 0x2, 
    0x122, 0x124, 0x7, 0xc, 0x2, 0x2, 0x123, 0x122, 0x3, 0x2, 0x2, 0x2, 
    0x123, 0x124, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 0x2, 0x2, 0x2, 
    0x125, 0x127, 0x7, 0x25, 0x2, 0x2, 0x126, 0x121, 0x3, 0x2, 0x2, 0x2, 
    0x126, 0x123, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 
    0x128, 0x12a, 0x5, 0x4c, 0x27, 0x2, 0x129, 0x126, 0x3, 0x2, 0x2, 0x2, 
    0x12a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x129, 0x3, 0x2, 0x2, 0x2, 
    0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x39, 0x3, 0x2, 0x2, 0x2, 0x12d, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x7, 0x29, 0x2, 0x2, 0x12f, 
    0x13a, 0x5, 0x4c, 0x27, 0x2, 0x130, 0x136, 0x7, 0xc, 0x2, 0x2, 0x131, 
    0x133, 0x7, 0xc, 0x2, 0x2, 0x132, 0x131, 0x3, 0x2, 0x2, 0x2, 0x132, 
    0x133, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x136, 0x7, 0x25, 0x2, 0x2, 0x135, 0x130, 0x3, 0x2, 0x2, 0x2, 0x135, 
    0x132, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 
    0x139, 0x5, 0x4c, 0x27, 0x2, 0x138, 0x135, 0x3, 0x2, 0x2, 0x2, 0x139, 
    0x13c, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13a, 
    0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13a, 
    0x3, 0x2, 0x2, 0x2, 0x13d, 0x142, 0x5, 0x3e, 0x20, 0x2, 0x13e, 0x141, 
    0x5, 0x46, 0x24, 0x2, 0x13f, 0x141, 0x5, 0x48, 0x25, 0x2, 0x140, 0x13e, 
    0x3, 0x2, 0x2, 0x2, 0x140, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x144, 
    0x3, 0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 
    0x3, 0x2, 0x2, 0x2, 0x143, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x144, 0x142, 0x3, 
    0x2, 0x2, 0x2, 0x145, 0x146, 0x5, 0x40, 0x21, 0x2, 0x146, 0x148, 0x7, 
    0x2a, 0x2, 0x2, 0x147, 0x149, 0x7, 0x2c, 0x2, 0x2, 0x148, 0x147, 0x3, 
    0x2, 0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14b, 0x3, 
    0x2, 0x2, 0x2, 0x14a, 0x14c, 0x9, 0x7, 0x2, 0x2, 0x14b, 0x14a, 0x3, 
    0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x3, 
    0x2, 0x2, 0x2, 0x14d, 0x14e, 0x5, 0x40, 0x21, 0x2, 0x14e, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x14f, 0x152, 0x5, 0x4c, 0x27, 0x2, 0x150, 0x152, 0x5, 
    0x42, 0x22, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x150, 0x3, 
    0x2, 0x2, 0x2, 0x152, 0x41, 0x3, 0x2, 0x2, 0x2, 0x153, 0x156, 0x5, 0x4a, 
    0x26, 0x2, 0x154, 0x156, 0x5, 0x44, 0x23, 0x2, 0x155, 0x153, 0x3, 0x2, 
    0x2, 0x2, 0x155, 0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x157, 0x158, 0x7, 0x2b, 0x2, 0x2, 0x158, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x159, 0x15a, 0x7, 0x25, 0x2, 0x2, 0x15a, 0x15b, 0x5, 0x3e, 0x20, 
    0x2, 0x15b, 0x47, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x7, 0x26, 0x2, 
    0x2, 0x15d, 0x15e, 0x5, 0x3e, 0x20, 0x2, 0x15e, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x164, 0x7, 0x38, 0x2, 0x2, 0x160, 0x161, 0x7, 0x38, 0x2, 
    0x2, 0x161, 0x162, 0x7, 0xb, 0x2, 0x2, 0x162, 0x164, 0x7, 0x38, 0x2, 
    0x2, 0x163, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x163, 0x160, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x7, 0x38, 0x2, 
    0x2, 0x166, 0x167, 0x7, 0x12, 0x2, 0x2, 0x167, 0x169, 0x7, 0x13, 0x2, 
    0x2, 0x168, 0x165, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0x37, 0x2, 
    0x2, 0x16b, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x52, 0x58, 0x5d, 0x60, 
    0x67, 0x6f, 0x79, 0x7e, 0x8a, 0x99, 0xaa, 0xaf, 0xb2, 0xb7, 0xbd, 0xc0, 
    0xc5, 0xd2, 0xd5, 0xda, 0xe4, 0xe7, 0xec, 0xf5, 0xf9, 0xfd, 0x101, 0x109, 
    0x112, 0x123, 0x126, 0x12b, 0x132, 0x135, 0x13a, 0x140, 0x142, 0x148, 
    0x14b, 0x151, 0x155, 0x163, 0x168, 
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
