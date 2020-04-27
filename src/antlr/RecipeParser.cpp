
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

RecipeParser::HeaderContext* RecipeParser::ProgramContext::header() {
  return getRuleContext<RecipeParser::HeaderContext>(0);
}

RecipeParser::MainBlockContext* RecipeParser::ProgramContext::mainBlock() {
  return getRuleContext<RecipeParser::MainBlockContext>(0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    header();
    setState(61);
    mainBlock();
   
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
  enterRule(_localctx, 2, RecipeParser::RuleMainBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
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
  enterRule(_localctx, 4, RecipeParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    data();
    setState(67);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::CODE_SYM) {
      setState(66);
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
  enterRule(_localctx, 6, RecipeParser::RuleHeader);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(RecipeParser::HEADER_SYM);
    setState(70);
    match(RecipeParser::IDENTIFIER);
    setState(72);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::T__2) {
      setState(71);
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
  enterRule(_localctx, 8, RecipeParser::RuleData);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(RecipeParser::DECLARATION_SYM);
    setState(75);
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
  enterRule(_localctx, 10, RecipeParser::RuleDeclList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(77);
      decl();
      setState(80); 
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
  enterRule(_localctx, 12, RecipeParser::RuleDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(RecipeParser::T__0);
    setState(83);
    number();
    setState(84);
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
    setState(85);
    match(RecipeParser::OF);
    setState(86);
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
  enterRule(_localctx, 14, RecipeParser::RuleCode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(RecipeParser::CODE_SYM);
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::INTEGER) {
      setState(89);
      codeLineList();
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
  enterRule(_localctx, 16, RecipeParser::RuleCodeLineList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(92);
      codeLine();
      setState(95); 
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
  enterRule(_localctx, 18, RecipeParser::RuleCodeLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(RecipeParser::INTEGER);
    setState(98);
    match(RecipeParser::PERIOD);
    setState(99);
    statementList();
    setState(100);
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
  enterRule(_localctx, 20, RecipeParser::RuleStatementList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(102);
    statement();
    setState(107);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(103);
        match(RecipeParser::THEN);
        setState(104);
        statement(); 
      }
      setState(109);
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

RecipeParser::AddStmContext* RecipeParser::StatementContext::addStm() {
  return getRuleContext<RecipeParser::AddStmContext>(0);
}

RecipeParser::SubStmContext* RecipeParser::StatementContext::subStm() {
  return getRuleContext<RecipeParser::SubStmContext>(0);
}

RecipeParser::MultStmContext* RecipeParser::StatementContext::multStm() {
  return getRuleContext<RecipeParser::MultStmContext>(0);
}

RecipeParser::DivStmContext* RecipeParser::StatementContext::divStm() {
  return getRuleContext<RecipeParser::DivStmContext>(0);
}

RecipeParser::IncStmContext* RecipeParser::StatementContext::incStm() {
  return getRuleContext<RecipeParser::IncStmContext>(0);
}

RecipeParser::DecStmContext* RecipeParser::StatementContext::decStm() {
  return getRuleContext<RecipeParser::DecStmContext>(0);
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

RecipeParser::ReturnStmContext* RecipeParser::StatementContext::returnStm() {
  return getRuleContext<RecipeParser::ReturnStmContext>(0);
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
  enterRule(_localctx, 22, RecipeParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::PERIOD:
      case RecipeParser::COMMA:
      case RecipeParser::THEN:
      case RecipeParser::UNTIL: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case RecipeParser::ADD: {
        enterOuterAlt(_localctx, 2);
        setState(111);
        addStm();
        break;
      }

      case RecipeParser::SUB: {
        enterOuterAlt(_localctx, 3);
        setState(112);
        subStm();
        break;
      }

      case RecipeParser::MULT: {
        enterOuterAlt(_localctx, 4);
        setState(113);
        multStm();
        break;
      }

      case RecipeParser::DIV: {
        enterOuterAlt(_localctx, 5);
        setState(114);
        divStm();
        break;
      }

      case RecipeParser::INC: {
        enterOuterAlt(_localctx, 6);
        setState(115);
        incStm();
        break;
      }

      case RecipeParser::DEC: {
        enterOuterAlt(_localctx, 7);
        setState(116);
        decStm();
        break;
      }

      case RecipeParser::WHILE: {
        enterOuterAlt(_localctx, 8);
        setState(117);
        whileStm();
        break;
      }

      case RecipeParser::REPEAT: {
        enterOuterAlt(_localctx, 9);
        setState(118);
        untilStm();
        break;
      }

      case RecipeParser::FUNCTION: {
        enterOuterAlt(_localctx, 10);
        setState(119);
        functionCall();
        break;
      }

      case RecipeParser::IF: {
        enterOuterAlt(_localctx, 11);
        setState(120);
        ifStm();
        break;
      }

      case RecipeParser::PRINT: {
        enterOuterAlt(_localctx, 12);
        setState(121);
        printStm();
        break;
      }

      case RecipeParser::PRINT_CHAR: {
        enterOuterAlt(_localctx, 13);
        setState(122);
        printCharStm();
        break;
      }

      case RecipeParser::RETURN: {
        enterOuterAlt(_localctx, 14);
        setState(123);
        returnStm();
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

//----------------- FunctionCallContext ------------------------------------------------------------------

RecipeParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::FunctionCallContext::FUNCTION() {
  return getToken(RecipeParser::FUNCTION, 0);
}

tree::TerminalNode* RecipeParser::FunctionCallContext::IDENTIFIER() {
  return getToken(RecipeParser::IDENTIFIER, 0);
}

RecipeParser::VariableContext* RecipeParser::FunctionCallContext::variable() {
  return getRuleContext<RecipeParser::VariableContext>(0);
}

RecipeParser::CallContext* RecipeParser::FunctionCallContext::call() {
  return getRuleContext<RecipeParser::CallContext>(0);
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
  enterRule(_localctx, 24, RecipeParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(RecipeParser::FUNCTION);
    setState(127);
    match(RecipeParser::IDENTIFIER);
    setState(128);
    match(RecipeParser::T__1);
    setState(129);
    variable();
    setState(131);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::T__2) {
      setState(130);
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

std::vector<tree::TerminalNode *> RecipeParser::CallContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::CallContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<tree::TerminalNode *> RecipeParser::CallContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::CallContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
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
  enterRule(_localctx, 26, RecipeParser::RuleCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(RecipeParser::T__2);
    setState(134);
    variable();
    setState(145);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(140);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(135);
          match(RecipeParser::COMMA);
          break;
        }

        case 2: {
          setState(137);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == RecipeParser::COMMA) {
            setState(136);
            match(RecipeParser::COMMA);
          }
          setState(139);
          match(RecipeParser::AND);
          break;
        }

        }
        setState(142);
        variable(); 
      }
      setState(147);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
   
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
  enterRule(_localctx, 28, RecipeParser::RuleReturnStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(RecipeParser::RETURN);
    setState(149);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddStmContext ------------------------------------------------------------------

RecipeParser::AddStmContext::AddStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::AddStmContext::ADD() {
  return getToken(RecipeParser::ADD, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::AddStmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::AddStmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::AddStmContext::DEST() {
  return getToken(RecipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::AddStmContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::AddStmContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<tree::TerminalNode *> RecipeParser::AddStmContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::AddStmContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::AddStmContext::getRuleIndex() const {
  return RecipeParser::RuleAddStm;
}

antlrcpp::Any RecipeParser::AddStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitAddStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::AddStmContext* RecipeParser::addStm() {
  AddStmContext *_localctx = _tracker.createInstance<AddStmContext>(_ctx, getState());
  enterRule(_localctx, 30, RecipeParser::RuleAddStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    match(RecipeParser::ADD);
    setState(152);
    variable();
    setState(163);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::COMMA

    || _la == RecipeParser::AND) {
      setState(158);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(153);
        match(RecipeParser::COMMA);
        break;
      }

      case 2: {
        setState(155);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RecipeParser::COMMA) {
          setState(154);
          match(RecipeParser::COMMA);
        }
        setState(157);
        match(RecipeParser::AND);
        break;
      }

      }
      setState(160);
      variable();
      setState(165);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(166);
    match(RecipeParser::DEST);
    setState(167);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubStmContext ------------------------------------------------------------------

RecipeParser::SubStmContext::SubStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::SubStmContext::SUB() {
  return getToken(RecipeParser::SUB, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::SubStmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::SubStmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::SubStmContext::DEST() {
  return getToken(RecipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::SubStmContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::SubStmContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<tree::TerminalNode *> RecipeParser::SubStmContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::SubStmContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::SubStmContext::getRuleIndex() const {
  return RecipeParser::RuleSubStm;
}

antlrcpp::Any RecipeParser::SubStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitSubStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::SubStmContext* RecipeParser::subStm() {
  SubStmContext *_localctx = _tracker.createInstance<SubStmContext>(_ctx, getState());
  enterRule(_localctx, 32, RecipeParser::RuleSubStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(RecipeParser::SUB);
    setState(170);
    variable();
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::COMMA

    || _la == RecipeParser::AND) {
      setState(176);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
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
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(184);
    match(RecipeParser::DEST);
    setState(185);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultStmContext ------------------------------------------------------------------

RecipeParser::MultStmContext::MultStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::MultStmContext::MULT() {
  return getToken(RecipeParser::MULT, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::MultStmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::MultStmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::MultStmContext::DEST() {
  return getToken(RecipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::MultStmContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::MultStmContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<tree::TerminalNode *> RecipeParser::MultStmContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::MultStmContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::MultStmContext::getRuleIndex() const {
  return RecipeParser::RuleMultStm;
}

antlrcpp::Any RecipeParser::MultStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitMultStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::MultStmContext* RecipeParser::multStm() {
  MultStmContext *_localctx = _tracker.createInstance<MultStmContext>(_ctx, getState());
  enterRule(_localctx, 34, RecipeParser::RuleMultStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(RecipeParser::MULT);
    setState(188);
    variable();
    setState(199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::COMMA

    || _la == RecipeParser::AND) {
      setState(194);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(189);
        match(RecipeParser::COMMA);
        break;
      }

      case 2: {
        setState(191);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RecipeParser::COMMA) {
          setState(190);
          match(RecipeParser::COMMA);
        }
        setState(193);
        match(RecipeParser::AND);
        break;
      }

      }
      setState(196);
      variable();
      setState(201);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(202);
    match(RecipeParser::DEST);
    setState(203);
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

tree::TerminalNode* RecipeParser::DivStmContext::SRC() {
  return getToken(RecipeParser::SRC, 0);
}

tree::TerminalNode* RecipeParser::DivStmContext::INTEGER() {
  return getToken(RecipeParser::INTEGER, 0);
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
  enterRule(_localctx, 36, RecipeParser::RuleDivStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(RecipeParser::DIV);
    setState(206);
    variable();
    setState(207);
    match(RecipeParser::SRC);
    setState(211);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::T__3: {
        setState(208);
        match(RecipeParser::T__3);
        setState(209);
        variable();
        break;
      }

      case RecipeParser::INTEGER: {
        setState(210);
        match(RecipeParser::INTEGER);
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

//----------------- IncStmContext ------------------------------------------------------------------

RecipeParser::IncStmContext::IncStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::IncStmContext::INC() {
  return getToken(RecipeParser::INC, 0);
}

RecipeParser::VariableContext* RecipeParser::IncStmContext::variable() {
  return getRuleContext<RecipeParser::VariableContext>(0);
}

tree::TerminalNode* RecipeParser::IncStmContext::INTEGER() {
  return getToken(RecipeParser::INTEGER, 0);
}


size_t RecipeParser::IncStmContext::getRuleIndex() const {
  return RecipeParser::RuleIncStm;
}

antlrcpp::Any RecipeParser::IncStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitIncStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::IncStmContext* RecipeParser::incStm() {
  IncStmContext *_localctx = _tracker.createInstance<IncStmContext>(_ctx, getState());
  enterRule(_localctx, 38, RecipeParser::RuleIncStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(RecipeParser::INC);
    setState(214);
    variable();
    setState(219);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::T__1: {
        setState(215);
        match(RecipeParser::T__1);
        setState(216);
        match(RecipeParser::INTEGER);
        setState(217);
        match(RecipeParser::T__4);
        break;
      }

      case RecipeParser::T__5: {
        setState(218);
        match(RecipeParser::T__5);
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
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecStmContext ------------------------------------------------------------------

RecipeParser::DecStmContext::DecStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::DecStmContext::DEC() {
  return getToken(RecipeParser::DEC, 0);
}

RecipeParser::VariableContext* RecipeParser::DecStmContext::variable() {
  return getRuleContext<RecipeParser::VariableContext>(0);
}

tree::TerminalNode* RecipeParser::DecStmContext::INTEGER() {
  return getToken(RecipeParser::INTEGER, 0);
}


size_t RecipeParser::DecStmContext::getRuleIndex() const {
  return RecipeParser::RuleDecStm;
}

antlrcpp::Any RecipeParser::DecStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitDecStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::DecStmContext* RecipeParser::decStm() {
  DecStmContext *_localctx = _tracker.createInstance<DecStmContext>(_ctx, getState());
  enterRule(_localctx, 40, RecipeParser::RuleDecStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    match(RecipeParser::DEC);
    setState(222);
    variable();
    setState(227);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::T__1: {
        setState(223);
        match(RecipeParser::T__1);
        setState(224);
        match(RecipeParser::INTEGER);
        setState(225);
        match(RecipeParser::T__4);
        break;
      }

      case RecipeParser::T__5: {
        setState(226);
        match(RecipeParser::T__5);
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
  enterRule(_localctx, 42, RecipeParser::RuleIfStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(RecipeParser::IF);
    setState(230);
    conditionList();
    setState(231);
    match(RecipeParser::COMMA);
    setState(232);
    statementList();
    setState(236);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(233);
      match(RecipeParser::COMMA);
      setState(234);
      match(RecipeParser::ELSE);
      setState(235);
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
  enterRule(_localctx, 44, RecipeParser::RuleWhileStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(RecipeParser::WHILE);
    setState(239);
    conditionList();
    setState(240);
    match(RecipeParser::COMMA);
    setState(241);
    match(RecipeParser::WHILE_DO);
    setState(242);
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

RecipeParser::ConditionContext* RecipeParser::UntilStmContext::condition() {
  return getRuleContext<RecipeParser::ConditionContext>(0);
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
  enterRule(_localctx, 46, RecipeParser::RuleUntilStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    match(RecipeParser::REPEAT);
    setState(245);
    statementList();
    setState(246);
    match(RecipeParser::UNTIL);
    setState(247);
    condition();
   
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
  enterRule(_localctx, 48, RecipeParser::RulePrintStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(RecipeParser::PRINT);
    setState(250);
    variable();
    setState(261);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(256);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          setState(251);
          match(RecipeParser::COMMA);
          break;
        }

        case 2: {
          setState(253);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == RecipeParser::COMMA) {
            setState(252);
            match(RecipeParser::COMMA);
          }
          setState(255);
          match(RecipeParser::AND);
          break;
        }

        }
        setState(258);
        variable(); 
      }
      setState(263);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
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
  enterRule(_localctx, 50, RecipeParser::RulePrintCharStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(RecipeParser::PRINT_CHAR);
    setState(265);
    variable();
    setState(276);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(271);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          setState(266);
          match(RecipeParser::COMMA);
          break;
        }

        case 2: {
          setState(268);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == RecipeParser::COMMA) {
            setState(267);
            match(RecipeParser::COMMA);
          }
          setState(270);
          match(RecipeParser::AND);
          break;
        }

        }
        setState(273);
        variable(); 
      }
      setState(278);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
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

std::vector<RecipeParser::ConditionContext *> RecipeParser::ConditionListContext::condition() {
  return getRuleContexts<RecipeParser::ConditionContext>();
}

RecipeParser::ConditionContext* RecipeParser::ConditionListContext::condition(size_t i) {
  return getRuleContext<RecipeParser::ConditionContext>(i);
}

std::vector<tree::TerminalNode *> RecipeParser::ConditionListContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::ConditionListContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}

std::vector<tree::TerminalNode *> RecipeParser::ConditionListContext::OR() {
  return getTokens(RecipeParser::OR);
}

tree::TerminalNode* RecipeParser::ConditionListContext::OR(size_t i) {
  return getToken(RecipeParser::OR, i);
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
  enterRule(_localctx, 52, RecipeParser::RuleConditionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    condition();
    setState(284);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::AND

    || _la == RecipeParser::OR) {
      setState(280);
      _la = _input->LA(1);
      if (!(_la == RecipeParser::AND

      || _la == RecipeParser::OR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(281);
      condition();
      setState(286);
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

tree::TerminalNode* RecipeParser::ConditionContext::TRUE() {
  return getToken(RecipeParser::TRUE, 0);
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
  enterRule(_localctx, 54, RecipeParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    variable();
    setState(288);
    match(RecipeParser::IS);
    setState(290);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::NOT) {
      setState(289);
      match(RecipeParser::NOT);
    }
    setState(298);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::GT:
      case RecipeParser::LT:
      case RecipeParser::EQ: {
        setState(292);
        dynamic_cast<ConditionContext *>(_localctx)->comp = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << RecipeParser::GT)
          | (1ULL << RecipeParser::LT)
          | (1ULL << RecipeParser::EQ))) != 0))) {
          dynamic_cast<ConditionContext *>(_localctx)->comp = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(295);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
        case 1: {
          setState(293);
          variable();
          break;
        }

        case 2: {
          setState(294);
          number();
          break;
        }

        }
        break;
      }

      case RecipeParser::TRUE: {
        setState(297);
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
  enterRule(_localctx, 56, RecipeParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(304);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<RecipeParser::IntContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(300);
      match(RecipeParser::INTEGER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<RecipeParser::FloatContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(301);
      match(RecipeParser::INTEGER);
      setState(302);
      match(RecipeParser::PERIOD);
      setState(303);
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
  enterRule(_localctx, 58, RecipeParser::RuleVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::INTEGER) {
      setState(306);
      match(RecipeParser::INTEGER);
      setState(307);
      match(RecipeParser::ARRAY_ELEM);
      setState(308);
      match(RecipeParser::OF);
    }
    setState(311);
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
  "program", "mainBlock", "block", "header", "data", "declList", "decl", 
  "code", "codeLineList", "codeLine", "statementList", "statement", "functionCall", 
  "call", "returnStm", "addStm", "subStm", "multStm", "divStm", "incStm", 
  "decStm", "ifStm", "whileStm", "untilStm", "printStm", "printCharStm", 
  "conditionList", "condition", "number", "variable"
};

std::vector<std::string> RecipeParser::_literalNames = {
  "", "'-'", "'for'", "'with'", "'size of'", "'min'", "'mins'", "'.'", "", 
  "'See recipe'", "", "", "'pieces'", "'packs'", "", "'of'", "'Recipe:'", 
  "'Ingredients:'", "'Directions:'", "'Serve'", "", "'then'", "'otherwise'", 
  "", "'keep'", "", "'until'", "", "", "", "'Divide'", "'step'", "'and'", 
  "'or'", "", "'into'", "", "", "'is'", "'done'", "'not'", "'more than'", 
  "'less than'", "'as much as'"
};

std::vector<std::string> RecipeParser::_symbolicNames = {
  "", "", "", "", "", "", "", "PERIOD", "COMMA", "FUNCTION", "INT_TYPE", 
  "FLOAT_TYPE", "ARR_INT_TYPE", "ARR_FLOAT_TYPE", "ARRAY_ELEM", "OF", "HEADER_SYM", 
  "DECLARATION_SYM", "CODE_SYM", "RETURN", "IF", "THEN", "ELSE", "WHILE", 
  "WHILE_DO", "REPEAT", "UNTIL", "ADD", "SUB", "MULT", "DIV", "STEP_SYM", 
  "AND", "OR", "DEST", "SRC", "PRINT", "PRINT_CHAR", "IS", "TRUE", "NOT", 
  "GT", "LT", "EQ", "INC", "DEC", "WS", "NEWLINE", "COMMENT", "IDENTIFIER", 
  "INTEGER"
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
    0x3, 0x34, 0x13c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x46, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x4b, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x6, 
    0x7, 0x51, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x52, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x5d, 
    0xa, 0x9, 0x3, 0xa, 0x6, 0xa, 0x60, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x61, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x7, 0xc, 0x6c, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x6f, 0xb, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0x7f, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0x86, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0x8c, 0xa, 0xf, 0x3, 0xf, 0x5, 0xf, 0x8f, 0xa, 0xf, 0x3, 0xf, 
    0x7, 0xf, 0x92, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x95, 0xb, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x9e, 0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 0xa1, 0xa, 0x11, 0x3, 0x11, 
    0x7, 0x11, 0xa4, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xa7, 0xb, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0xb0, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0xb3, 0xa, 0x12, 0x3, 
    0x12, 0x7, 0x12, 0xb6, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xb9, 0xb, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x5, 0x13, 0xc2, 0xa, 0x13, 0x3, 0x13, 0x5, 0x13, 0xc5, 0xa, 0x13, 
    0x3, 0x13, 0x7, 0x13, 0xc8, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xcb, 0xb, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xd6, 0xa, 0x14, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xde, 
    0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x5, 0x16, 0xe6, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xef, 0xa, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x100, 0xa, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
    0x103, 0xa, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x106, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x109, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x5, 0x1b, 0x10f, 0xa, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x112, 0xa, 0x1b, 
    0x3, 0x1b, 0x7, 0x1b, 0x115, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x118, 
    0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x11d, 0xa, 0x1c, 
    0xc, 0x1c, 0xe, 0x1c, 0x120, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x5, 0x1d, 0x125, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0x12a, 0xa, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x12d, 0xa, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x133, 0xa, 0x1e, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x138, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x2, 0x2, 0x20, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x2, 0x5, 
    0x3, 0x2, 0xc, 0xf, 0x3, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2b, 0x2d, 0x2, 
    0x14f, 0x2, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x43, 0x3, 0x2, 0x2, 0x2, 0x8, 0x47, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4c, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x50, 0x3, 0x2, 0x2, 0x2, 0xe, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x63, 0x3, 0x2, 0x2, 0x2, 0x16, 0x68, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x80, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x96, 0x3, 0x2, 0x2, 0x2, 0x20, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0xab, 0x3, 0x2, 0x2, 0x2, 0x24, 0xbd, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd7, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x30, 0xf6, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x34, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x119, 0x3, 0x2, 0x2, 0x2, 0x38, 0x121, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x137, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x5, 
    0x8, 0x5, 0x2, 0x3f, 0x40, 0x5, 0x4, 0x3, 0x2, 0x40, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x42, 0x5, 0x6, 0x4, 0x2, 0x42, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x43, 0x45, 0x5, 0xa, 0x6, 0x2, 0x44, 0x46, 0x5, 0x10, 0x9, 0x2, 
    0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0x12, 0x2, 0x2, 0x48, 0x4a, 
    0x7, 0x33, 0x2, 0x2, 0x49, 0x4b, 0x5, 0x1c, 0xf, 0x2, 0x4a, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4d, 0x7, 0x13, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0xc, 0x7, 
    0x2, 0x4e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x51, 0x5, 0xe, 0x8, 0x2, 
    0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0x3, 0x2, 0x2, 0x55, 0x56, 0x5, 
    0x3a, 0x1e, 0x2, 0x56, 0x57, 0x9, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 0x11, 
    0x2, 0x2, 0x58, 0x59, 0x7, 0x33, 0x2, 0x2, 0x59, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x5c, 0x7, 0x14, 0x2, 0x2, 0x5b, 0x5d, 0x5, 0x12, 0xa, 0x2, 
    0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x60, 0x5, 0x14, 0xb, 0x2, 0x5f, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x64, 0x7, 0x34, 0x2, 0x2, 0x64, 0x65, 0x7, 0x9, 0x2, 
    0x2, 0x65, 0x66, 0x5, 0x16, 0xc, 0x2, 0x66, 0x67, 0x7, 0x9, 0x2, 0x2, 
    0x67, 0x15, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6d, 0x5, 0x18, 0xd, 0x2, 0x69, 
    0x6a, 0x7, 0x17, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x18, 0xd, 0x2, 0x6b, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x70, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x7f, 0x5, 0x20, 0x11, 0x2, 0x72, 0x7f, 0x5, 0x22, 0x12, 
    0x2, 0x73, 0x7f, 0x5, 0x24, 0x13, 0x2, 0x74, 0x7f, 0x5, 0x26, 0x14, 
    0x2, 0x75, 0x7f, 0x5, 0x28, 0x15, 0x2, 0x76, 0x7f, 0x5, 0x2a, 0x16, 
    0x2, 0x77, 0x7f, 0x5, 0x2e, 0x18, 0x2, 0x78, 0x7f, 0x5, 0x30, 0x19, 
    0x2, 0x79, 0x7f, 0x5, 0x1a, 0xe, 0x2, 0x7a, 0x7f, 0x5, 0x2c, 0x17, 0x2, 
    0x7b, 0x7f, 0x5, 0x32, 0x1a, 0x2, 0x7c, 0x7f, 0x5, 0x34, 0x1b, 0x2, 
    0x7d, 0x7f, 0x5, 0x1e, 0x10, 0x2, 0x7e, 0x70, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x72, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x74, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0xb, 0x2, 0x2, 0x81, 0x82, 
    0x7, 0x33, 0x2, 0x2, 0x82, 0x83, 0x7, 0x4, 0x2, 0x2, 0x83, 0x85, 0x5, 
    0x3c, 0x1f, 0x2, 0x84, 0x86, 0x5, 0x1c, 0xf, 0x2, 0x85, 0x84, 0x3, 0x2, 
    0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x87, 0x88, 0x7, 0x5, 0x2, 0x2, 0x88, 0x93, 0x5, 0x3c, 0x1f, 0x2, 
    0x89, 0x8f, 0x7, 0xa, 0x2, 0x2, 0x8a, 0x8c, 0x7, 0xa, 0x2, 0x2, 0x8b, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0x8d, 0x8f, 0x7, 0x22, 0x2, 0x2, 0x8e, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x92, 0x5, 0x3c, 0x1f, 0x2, 0x91, 0x8e, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x15, 0x2, 0x2, 0x97, 0x98, 
    0x5, 0x3c, 0x1f, 0x2, 0x98, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x7, 
    0x1d, 0x2, 0x2, 0x9a, 0xa5, 0x5, 0x3c, 0x1f, 0x2, 0x9b, 0xa1, 0x7, 0xa, 
    0x2, 0x2, 0x9c, 0x9e, 0x7, 0xa, 0x2, 0x2, 0x9d, 0x9c, 0x3, 0x2, 0x2, 
    0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0xa1, 0x7, 0x22, 0x2, 0x2, 0xa0, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa4, 
    0x5, 0x3c, 0x1f, 0x2, 0xa3, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0xa9, 0x7, 0x24, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0x3c, 0x1f, 0x2, 
    0xaa, 0x21, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x1e, 0x2, 0x2, 0xac, 
    0xb7, 0x5, 0x3c, 0x1f, 0x2, 0xad, 0xb3, 0x7, 0xa, 0x2, 0x2, 0xae, 0xb0, 
    0x7, 0xa, 0x2, 0x2, 0xaf, 0xae, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb3, 0x7, 0x22, 
    0x2, 0x2, 0xb2, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 0x5, 0x3c, 0x1f, 0x2, 
    0xb5, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb7, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 
    0x24, 0x2, 0x2, 0xbb, 0xbc, 0x5, 0x3c, 0x1f, 0x2, 0xbc, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0xbe, 0x7, 0x1f, 0x2, 0x2, 0xbe, 0xc9, 0x5, 0x3c, 0x1f, 
    0x2, 0xbf, 0xc5, 0x7, 0xa, 0x2, 0x2, 0xc0, 0xc2, 0x7, 0xa, 0x2, 0x2, 
    0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc5, 0x7, 0x22, 0x2, 0x2, 0xc4, 0xbf, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0xc8, 0x5, 0x3c, 0x1f, 0x2, 0xc7, 0xc4, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcc, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x24, 0x2, 0x2, 0xcd, 
    0xce, 0x5, 0x3c, 0x1f, 0x2, 0xce, 0x25, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 
    0x7, 0x20, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x3c, 0x1f, 0x2, 0xd1, 0xd5, 0x7, 
    0x25, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x6, 0x2, 0x2, 0xd3, 0xd6, 0x5, 0x3c, 
    0x1f, 0x2, 0xd4, 0xd6, 0x7, 0x34, 0x2, 0x2, 0xd5, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xd7, 0xd8, 0x7, 0x2e, 0x2, 0x2, 0xd8, 0xdd, 0x5, 0x3c, 0x1f, 0x2, 0xd9, 
    0xda, 0x7, 0x4, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x34, 0x2, 0x2, 0xdb, 0xde, 
    0x7, 0x7, 0x2, 0x2, 0xdc, 0xde, 0x7, 0x8, 0x2, 0x2, 0xdd, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0x29, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x2f, 0x2, 
    0x2, 0xe0, 0xe5, 0x5, 0x3c, 0x1f, 0x2, 0xe1, 0xe2, 0x7, 0x4, 0x2, 0x2, 
    0xe2, 0xe3, 0x7, 0x34, 0x2, 0x2, 0xe3, 0xe6, 0x7, 0x7, 0x2, 0x2, 0xe4, 
    0xe6, 0x7, 0x8, 0x2, 0x2, 0xe5, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe4, 
    0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x16, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x36, 
    0x1c, 0x2, 0xe9, 0xea, 0x7, 0xa, 0x2, 0x2, 0xea, 0xee, 0x5, 0x16, 0xc, 
    0x2, 0xeb, 0xec, 0x7, 0xa, 0x2, 0x2, 0xec, 0xed, 0x7, 0x18, 0x2, 0x2, 
    0xed, 0xef, 0x5, 0x16, 0xc, 0x2, 0xee, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xee, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 
    0x7, 0x19, 0x2, 0x2, 0xf1, 0xf2, 0x5, 0x36, 0x1c, 0x2, 0xf2, 0xf3, 0x7, 
    0xa, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x1a, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x16, 
    0xc, 0x2, 0xf5, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x1b, 0x2, 
    0x2, 0xf7, 0xf8, 0x5, 0x16, 0xc, 0x2, 0xf8, 0xf9, 0x7, 0x1c, 0x2, 0x2, 
    0xf9, 0xfa, 0x5, 0x38, 0x1d, 0x2, 0xfa, 0x31, 0x3, 0x2, 0x2, 0x2, 0xfb, 
    0xfc, 0x7, 0x26, 0x2, 0x2, 0xfc, 0x107, 0x5, 0x3c, 0x1f, 0x2, 0xfd, 
    0x103, 0x7, 0xa, 0x2, 0x2, 0xfe, 0x100, 0x7, 0xa, 0x2, 0x2, 0xff, 0xfe, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0x103, 0x7, 0x22, 0x2, 0x2, 0x102, 0xfd, 0x3, 
    0x2, 0x2, 0x2, 0x102, 0xff, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 
    0x2, 0x2, 0x104, 0x106, 0x5, 0x3c, 0x1f, 0x2, 0x105, 0x102, 0x3, 0x2, 
    0x2, 0x2, 0x106, 0x109, 0x3, 0x2, 0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 
    0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0x27, 0x2, 
    0x2, 0x10b, 0x116, 0x5, 0x3c, 0x1f, 0x2, 0x10c, 0x112, 0x7, 0xa, 0x2, 
    0x2, 0x10d, 0x10f, 0x7, 0xa, 0x2, 0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 
    0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x112, 0x7, 0x22, 0x2, 0x2, 0x111, 0x10c, 0x3, 0x2, 0x2, 
    0x2, 0x111, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 
    0x2, 0x113, 0x115, 0x5, 0x3c, 0x1f, 0x2, 0x114, 0x111, 0x3, 0x2, 0x2, 
    0x2, 0x115, 0x118, 0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11e, 0x5, 0x38, 0x1d, 0x2, 
    0x11a, 0x11b, 0x9, 0x3, 0x2, 0x2, 0x11b, 0x11d, 0x5, 0x38, 0x1d, 0x2, 
    0x11c, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x120, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x3, 0x2, 0x2, 0x2, 
    0x11f, 0x37, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x121, 
    0x122, 0x5, 0x3c, 0x1f, 0x2, 0x122, 0x124, 0x7, 0x28, 0x2, 0x2, 0x123, 
    0x125, 0x7, 0x2a, 0x2, 0x2, 0x124, 0x123, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x126, 
    0x129, 0x9, 0x4, 0x2, 0x2, 0x127, 0x12a, 0x5, 0x3c, 0x1f, 0x2, 0x128, 
    0x12a, 0x5, 0x3a, 0x1e, 0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 
    0x128, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12b, 
    0x12d, 0x7, 0x29, 0x2, 0x2, 0x12c, 0x126, 0x3, 0x2, 0x2, 0x2, 0x12c, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x133, 
    0x7, 0x34, 0x2, 0x2, 0x12f, 0x130, 0x7, 0x34, 0x2, 0x2, 0x130, 0x131, 
    0x7, 0x9, 0x2, 0x2, 0x131, 0x133, 0x7, 0x34, 0x2, 0x2, 0x132, 0x12e, 
    0x3, 0x2, 0x2, 0x2, 0x132, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x133, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x134, 0x135, 0x7, 0x34, 0x2, 0x2, 0x135, 0x136, 0x7, 
    0x10, 0x2, 0x2, 0x136, 0x138, 0x7, 0x11, 0x2, 0x2, 0x137, 0x134, 0x3, 
    0x2, 0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 
    0x2, 0x2, 0x2, 0x139, 0x13a, 0x7, 0x33, 0x2, 0x2, 0x13a, 0x3d, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x45, 0x4a, 0x52, 0x5c, 0x61, 0x6d, 0x7e, 0x85, 
    0x8b, 0x8e, 0x93, 0x9d, 0xa0, 0xa5, 0xaf, 0xb2, 0xb7, 0xc1, 0xc4, 0xc9, 
    0xd5, 0xdd, 0xe5, 0xee, 0xff, 0x102, 0x107, 0x10e, 0x111, 0x116, 0x11e, 
    0x124, 0x129, 0x12c, 0x132, 0x137, 
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
