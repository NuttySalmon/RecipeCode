
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
    setState(70);
    header();
    setState(71);
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
    setState(73);
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
    setState(75);
    data();
    setState(77);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::CODE_SYM) {
      setState(76);
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
    setState(79);
    match(RecipeParser::HEADER_SYM);
    setState(80);
    match(RecipeParser::IDENTIFIER);
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::T__5) {
      setState(81);
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
    setState(84);
    match(RecipeParser::DECLARATION_SYM);
    setState(85);
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
    setState(88); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(87);
      decl();
      setState(90); 
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
    setState(92);
    match(RecipeParser::T__0);
    setState(93);
    number();
    setState(94);
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
    setState(95);
    match(RecipeParser::OF);
    setState(96);
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
    setState(98);
    match(RecipeParser::CODE_SYM);
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::INTEGER) {
      setState(99);
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
    setState(103); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(102);
      codeLine();
      setState(105); 
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
    setState(107);
    match(RecipeParser::INTEGER);
    setState(108);
    match(RecipeParser::PERIOD);
    setState(109);
    statementList();
    setState(110);
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
    setState(112);
    statement();
    setState(117);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(113);
        match(RecipeParser::THEN);
        setState(114);
        statement(); 
      }
      setState(119);
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

RecipeParser::ReturnStmContext* RecipeParser::StatementContext::returnStm() {
  return getRuleContext<RecipeParser::ReturnStmContext>(0);
}

RecipeParser::AssignmentStmContext* RecipeParser::StatementContext::assignmentStm() {
  return getRuleContext<RecipeParser::AssignmentStmContext>(0);
}

RecipeParser::JumpStmContext* RecipeParser::StatementContext::jumpStm() {
  return getRuleContext<RecipeParser::JumpStmContext>(0);
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
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::PERIOD:
      case RecipeParser::COMMA:
      case RecipeParser::THEN:
      case RecipeParser::UNTIL: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case RecipeParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(121);
        match(RecipeParser::T__1);
        break;
      }

      case RecipeParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(122);
        match(RecipeParser::T__2);
        break;
      }

      case RecipeParser::ADD:
      case RecipeParser::SUB: {
        enterOuterAlt(_localctx, 4);
        setState(123);
        addSubStm();
        break;
      }

      case RecipeParser::MUL: {
        enterOuterAlt(_localctx, 5);
        setState(124);
        mulStm();
        break;
      }

      case RecipeParser::DIV: {
        enterOuterAlt(_localctx, 6);
        setState(125);
        divStm();
        break;
      }

      case RecipeParser::INC:
      case RecipeParser::DEC: {
        enterOuterAlt(_localctx, 7);
        setState(126);
        incDecStm();
        break;
      }

      case RecipeParser::WHILE: {
        enterOuterAlt(_localctx, 8);
        setState(127);
        whileStm();
        break;
      }

      case RecipeParser::REPEAT: {
        enterOuterAlt(_localctx, 9);
        setState(128);
        untilStm();
        break;
      }

      case RecipeParser::FUNCTION: {
        enterOuterAlt(_localctx, 10);
        setState(129);
        functionCall();
        break;
      }

      case RecipeParser::IF: {
        enterOuterAlt(_localctx, 11);
        setState(130);
        ifStm();
        break;
      }

      case RecipeParser::PRINT: {
        enterOuterAlt(_localctx, 12);
        setState(131);
        printStm();
        break;
      }

      case RecipeParser::PRINT_CHAR: {
        enterOuterAlt(_localctx, 13);
        setState(132);
        printCharStm();
        break;
      }

      case RecipeParser::RETURN: {
        enterOuterAlt(_localctx, 14);
        setState(133);
        returnStm();
        break;
      }

      case RecipeParser::ASSIGN: {
        enterOuterAlt(_localctx, 15);
        setState(134);
        assignmentStm();
        break;
      }

      case RecipeParser::GOTO: {
        enterOuterAlt(_localctx, 16);
        setState(135);
        jumpStm();
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

//----------------- AssignmentStmContext ------------------------------------------------------------------

RecipeParser::AssignmentStmContext::AssignmentStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::AssignmentStmContext::ASSIGN() {
  return getToken(RecipeParser::ASSIGN, 0);
}

RecipeParser::VariableContext* RecipeParser::AssignmentStmContext::variable() {
  return getRuleContext<RecipeParser::VariableContext>(0);
}

RecipeParser::OperandContext* RecipeParser::AssignmentStmContext::operand() {
  return getRuleContext<RecipeParser::OperandContext>(0);
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
  enterRule(_localctx, 24, RecipeParser::RuleAssignmentStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(RecipeParser::ASSIGN);
    setState(139);
    variable();
    setState(140);
    match(RecipeParser::T__3);
    setState(141);
    operand();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStmContext ------------------------------------------------------------------

RecipeParser::JumpStmContext::JumpStmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::JumpStmContext::GOTO() {
  return getToken(RecipeParser::GOTO, 0);
}

tree::TerminalNode* RecipeParser::JumpStmContext::INTEGER() {
  return getToken(RecipeParser::INTEGER, 0);
}


size_t RecipeParser::JumpStmContext::getRuleIndex() const {
  return RecipeParser::RuleJumpStm;
}

antlrcpp::Any RecipeParser::JumpStmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitJumpStm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::JumpStmContext* RecipeParser::jumpStm() {
  JumpStmContext *_localctx = _tracker.createInstance<JumpStmContext>(_ctx, getState());
  enterRule(_localctx, 26, RecipeParser::RuleJumpStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(RecipeParser::GOTO);
    setState(144);
    match(RecipeParser::INTEGER);
   
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
  enterRule(_localctx, 28, RecipeParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(RecipeParser::FUNCTION);
    setState(147);
    match(RecipeParser::IDENTIFIER);
    setState(148);
    match(RecipeParser::T__4);
    setState(149);
    variable();
    setState(151);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::T__5) {
      setState(150);
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
  enterRule(_localctx, 30, RecipeParser::RuleCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(RecipeParser::T__5);
    setState(154);
    variable();
    setState(165);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(160);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(155);
          match(RecipeParser::COMMA);
          break;
        }

        case 2: {
          setState(157);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == RecipeParser::COMMA) {
            setState(156);
            match(RecipeParser::COMMA);
          }
          setState(159);
          match(RecipeParser::AND);
          break;
        }

        }
        setState(162);
        variable(); 
      }
      setState(167);
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
  enterRule(_localctx, 32, RecipeParser::RuleReturnStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(RecipeParser::RETURN);
    setState(169);
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
  enterRule(_localctx, 34, RecipeParser::RuleAddSubStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
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
    setState(172);
    variable();
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::COMMA

    || _la == RecipeParser::AND) {
      setState(178);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(173);
        match(RecipeParser::COMMA);
        break;
      }

      case 2: {
        setState(175);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RecipeParser::COMMA) {
          setState(174);
          match(RecipeParser::COMMA);
        }
        setState(177);
        match(RecipeParser::AND);
        break;
      }

      }
      setState(180);
      variable();
      setState(185);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(186);
    match(RecipeParser::DEST);
    setState(187);
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
  enterRule(_localctx, 36, RecipeParser::RuleMulStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(RecipeParser::MUL);
    setState(190);
    variable();
    setState(201);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::COMMA

    || _la == RecipeParser::AND) {
      setState(196);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(191);
        match(RecipeParser::COMMA);
        break;
      }

      case 2: {
        setState(193);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RecipeParser::COMMA) {
          setState(192);
          match(RecipeParser::COMMA);
        }
        setState(195);
        match(RecipeParser::AND);
        break;
      }

      }
      setState(198);
      variable();
      setState(203);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(204);
    match(RecipeParser::DEST);
    setState(205);
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
  enterRule(_localctx, 38, RecipeParser::RuleDivStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    match(RecipeParser::DIV);
    setState(208);
    variable();
    setState(220); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(210);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RecipeParser::T__6) {
        setState(209);
        match(RecipeParser::T__6);
      }
      setState(212);
      match(RecipeParser::DEST);
      setState(214);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RecipeParser::T__7) {
        setState(213);
        match(RecipeParser::T__7);
      }
      setState(218);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(216);
        variable();
        break;
      }

      case 2: {
        setState(217);
        number();
        break;
      }

      }
      setState(222); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == RecipeParser::T__6

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
  enterRule(_localctx, 40, RecipeParser::RuleIncDecStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
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
    setState(225);
    variable();
    setState(230);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::T__4) {
      setState(226);
      match(RecipeParser::T__4);
      setState(227);
      number();
      setState(228);
      _la = _input->LA(1);
      if (!(_la == RecipeParser::T__8

      || _la == RecipeParser::T__9)) {
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
  enterRule(_localctx, 42, RecipeParser::RuleIfStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(RecipeParser::IF);
    setState(233);
    conditionList();
    setState(234);
    match(RecipeParser::COMMA);
    setState(235);
    statementList();
    setState(239);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(236);
      match(RecipeParser::COMMA);
      setState(237);
      match(RecipeParser::ELSE);
      setState(238);
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
    setState(241);
    match(RecipeParser::WHILE);
    setState(242);
    conditionList();
    setState(243);
    match(RecipeParser::COMMA);
    setState(244);
    match(RecipeParser::WHILE_DO);
    setState(245);
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
  enterRule(_localctx, 46, RecipeParser::RuleUntilStm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(RecipeParser::REPEAT);
    setState(248);
    statementList();
    setState(249);
    match(RecipeParser::UNTIL);
    setState(250);
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
  enterRule(_localctx, 48, RecipeParser::RulePrintStm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(RecipeParser::PRINT);
    setState(253);
    variable();
    setState(264);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(259);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
        case 1: {
          setState(254);
          match(RecipeParser::COMMA);
          break;
        }

        case 2: {
          setState(256);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == RecipeParser::COMMA) {
            setState(255);
            match(RecipeParser::COMMA);
          }
          setState(258);
          match(RecipeParser::AND);
          break;
        }

        }
        setState(261);
        variable(); 
      }
      setState(266);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
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
    setState(267);
    match(RecipeParser::PRINT_CHAR);
    setState(268);
    variable();
    setState(279);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(274);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
        case 1: {
          setState(269);
          match(RecipeParser::COMMA);
          break;
        }

        case 2: {
          setState(271);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == RecipeParser::COMMA) {
            setState(270);
            match(RecipeParser::COMMA);
          }
          setState(273);
          match(RecipeParser::AND);
          break;
        }

        }
        setState(276);
        variable(); 
      }
      setState(281);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
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
  enterRule(_localctx, 52, RecipeParser::RuleConditionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    condition();
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::AND

    || _la == RecipeParser::OR) {
      setState(285);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RecipeParser::AND: {
          setState(283);
          andCond();
          break;
        }

        case RecipeParser::OR: {
          setState(284);
          orCond();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(289);
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
  enterRule(_localctx, 54, RecipeParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    operand();
    setState(291);
    match(RecipeParser::IS);
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::NOT) {
      setState(292);
      match(RecipeParser::NOT);
    }

    setState(296);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << RecipeParser::GT)
      | (1ULL << RecipeParser::LT)
      | (1ULL << RecipeParser::EQ)
      | (1ULL << RecipeParser::GE)
      | (1ULL << RecipeParser::LE))) != 0)) {
      setState(295);
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
    setState(298);
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
  enterRule(_localctx, 56, RecipeParser::RuleOperand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(302);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(300);
      variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(301);
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
  enterRule(_localctx, 58, RecipeParser::RuleConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(306);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(304);
        number();
        break;
      }

      case RecipeParser::TRUE_SYM: {
        enterOuterAlt(_localctx, 2);
        setState(305);
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
  enterRule(_localctx, 60, RecipeParser::RuleTrueSym);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
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
  enterRule(_localctx, 62, RecipeParser::RuleAndCond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    match(RecipeParser::AND);
    setState(311);
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
  enterRule(_localctx, 64, RecipeParser::RuleOrCond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    match(RecipeParser::OR);
    setState(314);
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
  enterRule(_localctx, 66, RecipeParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(320);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<RecipeParser::IntContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(316);
      match(RecipeParser::INTEGER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<RecipeParser::FloatContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(317);
      match(RecipeParser::INTEGER);
      setState(318);
      match(RecipeParser::PERIOD);
      setState(319);
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
  enterRule(_localctx, 68, RecipeParser::RuleVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::INTEGER) {
      setState(322);
      match(RecipeParser::INTEGER);
      setState(323);
      match(RecipeParser::ARRAY_ELEM);
      setState(324);
      match(RecipeParser::OF);
    }
    setState(327);
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
  "code", "codeLineList", "codeLine", "statementList", "statement", "assignmentStm", 
  "jumpStm", "functionCall", "call", "returnStm", "addSubStm", "mulStm", 
  "divStm", "incDecStm", "ifStm", "whileStm", "untilStm", "printStm", "printCharStm", 
  "conditionList", "condition", "operand", "constant", "trueSym", "andCond", 
  "orCond", "number", "variable"
};

std::vector<std::string> RecipeParser::_literalNames = {
  "", "'-'", "'Done'", "'Wait'", "'as'", "'for'", "'with'", "'and again'", 
  "'size of'", "'min'", "'mins'", "", "'.'", "", "'See recipe'", "", "", 
  "'pieces'", "'packs'", "", "'of'", "'Recipe:'", "'Ingredients:'", "'Directions:'", 
  "'Serve'", "", "", "'then'", "'otherwise'", "", "'keep'", "", "'until'", 
  "", "", "", "", "'step'", "'and'", "'or'", "", "", "", "'is'", "'done'", 
  "'not'", "'more than'", "'less than'", "'as much as'", "'more than or equal to'", 
  "'less than or equal to'"
};

std::vector<std::string> RecipeParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "GOTO", "PERIOD", "COMMA", 
  "FUNCTION", "INT_TYPE", "FLOAT_TYPE", "ARR_INT_TYPE", "ARR_FLOAT_TYPE", 
  "ARRAY_ELEM", "OF", "HEADER_SYM", "DECLARATION_SYM", "CODE_SYM", "RETURN", 
  "ASSIGN", "IF", "THEN", "ELSE", "WHILE", "WHILE_DO", "REPEAT", "UNTIL", 
  "ADD", "SUB", "MUL", "DIV", "STEP_SYM", "AND", "OR", "DEST", "PRINT", 
  "PRINT_CHAR", "IS", "TRUE_SYM", "NOT", "GT", "LT", "EQ", "GE", "LE", "INC", 
  "DEC", "WS", "NEWLINE", "COMMENT", "IDENTIFIER", "INTEGER"
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
    0x3, 0x3b, 0x14c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x50, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x55, 0xa, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x6, 0x7, 0x5b, 0xa, 0x7, 0xd, 0x7, 
    0xe, 0x7, 0x5c, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x67, 0xa, 0x9, 0x3, 0xa, 0x6, 0xa, 
    0x6a, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x6b, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x76, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0x79, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x8b, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0x9a, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0xa0, 0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 0xa3, 0xa, 
    0x11, 0x3, 0x11, 0x7, 0x11, 0xa6, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xa9, 
    0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x5, 0x13, 0xb2, 0xa, 0x13, 0x3, 0x13, 0x5, 0x13, 0xb5, 
    0xa, 0x13, 0x3, 0x13, 0x7, 0x13, 0xb8, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 
    0xbb, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xc4, 0xa, 0x14, 0x3, 0x14, 0x5, 0x14, 
    0xc7, 0xa, 0x14, 0x3, 0x14, 0x7, 0x14, 0xca, 0xa, 0x14, 0xc, 0x14, 0xe, 
    0x14, 0xcd, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x5, 0x15, 0xd5, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 
    0x15, 0xd9, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xdd, 0xa, 0x15, 
    0x6, 0x15, 0xdf, 0xa, 0x15, 0xd, 0x15, 0xe, 0x15, 0xe0, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xe9, 0xa, 
    0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0xf2, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
    0x103, 0xa, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x106, 0xa, 0x1a, 0x3, 0x1a, 
    0x7, 0x1a, 0x109, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x10c, 0xb, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x112, 0xa, 0x1b, 
    0x3, 0x1b, 0x5, 0x1b, 0x115, 0xa, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x118, 
    0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x11b, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x7, 0x1c, 0x120, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x123, 
    0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x128, 0xa, 0x1d, 
    0x3, 0x1d, 0x5, 0x1d, 0x12b, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x5, 0x1e, 0x131, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 
    0x135, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x5, 0x23, 0x143, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x5, 0x24, 0x148, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x2, 0x2, 
    0x25, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x2, 
    0x7, 0x3, 0x2, 0x11, 0x14, 0x3, 0x2, 0x23, 0x24, 0x3, 0x2, 0x35, 0x36, 
    0x3, 0x2, 0xb, 0xc, 0x3, 0x2, 0x30, 0x34, 0x2, 0x15b, 0x2, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x51, 0x3, 0x2, 0x2, 0x2, 0xa, 0x56, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0xe, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x10, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x69, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x72, 0x3, 0x2, 0x2, 0x2, 0x18, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x94, 0x3, 0x2, 0x2, 0x2, 0x20, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x24, 0xad, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xe2, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0xea, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xf3, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x32, 0xfe, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x36, 0x11c, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x124, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x130, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x134, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x136, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x138, 0x3, 0x2, 0x2, 0x2, 0x42, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x44, 0x142, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x147, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x5, 
    0x8, 0x5, 0x2, 0x49, 0x4a, 0x5, 0x4, 0x3, 0x2, 0x4a, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x4c, 0x5, 0x6, 0x4, 0x2, 0x4c, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4f, 0x5, 0xa, 0x6, 0x2, 0x4e, 0x50, 0x5, 0x10, 0x9, 0x2, 
    0x4f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0x17, 0x2, 0x2, 0x52, 0x54, 
    0x7, 0x3a, 0x2, 0x2, 0x53, 0x55, 0x5, 0x20, 0x11, 0x2, 0x54, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x57, 0x7, 0x18, 0x2, 0x2, 0x57, 0x58, 0x5, 0xc, 0x7, 
    0x2, 0x58, 0xb, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x5, 0xe, 0x8, 0x2, 
    0x5a, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x3, 0x2, 0x2, 0x5f, 0x60, 0x5, 
    0x44, 0x23, 0x2, 0x60, 0x61, 0x9, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0x16, 
    0x2, 0x2, 0x62, 0x63, 0x7, 0x3a, 0x2, 0x2, 0x63, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x66, 0x7, 0x19, 0x2, 0x2, 0x65, 0x67, 0x5, 0x12, 0xa, 0x2, 
    0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6a, 0x5, 0x14, 0xb, 0x2, 0x69, 0x68, 
    0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x6e, 0x7, 0x3b, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0xe, 0x2, 
    0x2, 0x6f, 0x70, 0x5, 0x16, 0xc, 0x2, 0x70, 0x71, 0x7, 0xe, 0x2, 0x2, 
    0x71, 0x15, 0x3, 0x2, 0x2, 0x2, 0x72, 0x77, 0x5, 0x18, 0xd, 0x2, 0x73, 
    0x74, 0x7, 0x1d, 0x2, 0x2, 0x74, 0x76, 0x5, 0x18, 0xd, 0x2, 0x75, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x79, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0x8b, 0x7, 0x4, 0x2, 0x2, 0x7c, 0x8b, 0x7, 0x5, 0x2, 0x2, 
    0x7d, 0x8b, 0x5, 0x24, 0x13, 0x2, 0x7e, 0x8b, 0x5, 0x26, 0x14, 0x2, 
    0x7f, 0x8b, 0x5, 0x28, 0x15, 0x2, 0x80, 0x8b, 0x5, 0x2a, 0x16, 0x2, 
    0x81, 0x8b, 0x5, 0x2e, 0x18, 0x2, 0x82, 0x8b, 0x5, 0x30, 0x19, 0x2, 
    0x83, 0x8b, 0x5, 0x1e, 0x10, 0x2, 0x84, 0x8b, 0x5, 0x2c, 0x17, 0x2, 
    0x85, 0x8b, 0x5, 0x32, 0x1a, 0x2, 0x86, 0x8b, 0x5, 0x34, 0x1b, 0x2, 
    0x87, 0x8b, 0x5, 0x22, 0x12, 0x2, 0x88, 0x8b, 0x5, 0x1a, 0xe, 0x2, 0x89, 
    0x8b, 0x5, 0x1c, 0xf, 0x2, 0x8a, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x80, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x82, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x84, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x86, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x87, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x1b, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x46, 
    0x24, 0x2, 0x8e, 0x8f, 0x7, 0x6, 0x2, 0x2, 0x8f, 0x90, 0x5, 0x3a, 0x1e, 
    0x2, 0x90, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0xd, 0x2, 0x2, 
    0x92, 0x93, 0x7, 0x3b, 0x2, 0x2, 0x93, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x95, 0x7, 0x10, 0x2, 0x2, 0x95, 0x96, 0x7, 0x3a, 0x2, 0x2, 0x96, 0x97, 
    0x7, 0x7, 0x2, 0x2, 0x97, 0x99, 0x5, 0x46, 0x24, 0x2, 0x98, 0x9a, 0x5, 
    0x20, 0x11, 0x2, 0x99, 0x98, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x8, 0x2, 
    0x2, 0x9c, 0xa7, 0x5, 0x46, 0x24, 0x2, 0x9d, 0xa3, 0x7, 0xf, 0x2, 0x2, 
    0x9e, 0xa0, 0x7, 0xf, 0x2, 0x2, 0x9f, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9f, 
    0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa3, 
    0x7, 0x28, 0x2, 0x2, 0xa2, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9f, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x5, 0x46, 
    0x24, 0x2, 0xa5, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0x21, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0xab, 0x7, 0x1a, 0x2, 0x2, 0xab, 0xac, 0x5, 0x46, 0x24, 0x2, 0xac, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x9, 0x3, 0x2, 0x2, 0xae, 0xb9, 0x5, 
    0x46, 0x24, 0x2, 0xaf, 0xb5, 0x7, 0xf, 0x2, 0x2, 0xb0, 0xb2, 0x7, 0xf, 
    0x2, 0x2, 0xb1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x7, 0x28, 0x2, 0x2, 
    0xb4, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb5, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb8, 0x5, 0x46, 0x24, 0x2, 0xb7, 0xb4, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbc, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x2a, 0x2, 
    0x2, 0xbd, 0xbe, 0x5, 0x46, 0x24, 0x2, 0xbe, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0xbf, 0xc0, 0x7, 0x25, 0x2, 0x2, 0xc0, 0xcb, 0x5, 0x46, 0x24, 0x2, 0xc1, 
    0xc7, 0x7, 0xf, 0x2, 0x2, 0xc2, 0xc4, 0x7, 0xf, 0x2, 0x2, 0xc3, 0xc2, 
    0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 
    0x2, 0x2, 0x2, 0xc5, 0xc7, 0x7, 0x28, 0x2, 0x2, 0xc6, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xc6, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xca, 0x5, 0x46, 0x24, 0x2, 0xc9, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x2a, 0x2, 0x2, 0xcf, 0xd0, 0x5, 
    0x46, 0x24, 0x2, 0xd0, 0x27, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x26, 
    0x2, 0x2, 0xd2, 0xde, 0x5, 0x46, 0x24, 0x2, 0xd3, 0xd5, 0x7, 0x9, 0x2, 
    0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 0x7, 0x2a, 0x2, 0x2, 0xd7, 
    0xd9, 0x7, 0xa, 0x2, 0x2, 0xd8, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x5, 
    0x46, 0x24, 0x2, 0xdb, 0xdd, 0x5, 0x44, 0x23, 0x2, 0xdc, 0xda, 0x3, 
    0x2, 0x2, 0x2, 0xdc, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdf, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0xe1, 0x29, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x9, 0x4, 0x2, 0x2, 0xe3, 
    0xe8, 0x5, 0x46, 0x24, 0x2, 0xe4, 0xe5, 0x7, 0x7, 0x2, 0x2, 0xe5, 0xe6, 
    0x5, 0x44, 0x23, 0x2, 0xe6, 0xe7, 0x9, 0x5, 0x2, 0x2, 0xe7, 0xe9, 0x3, 
    0x2, 0x2, 0x2, 0xe8, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 
    0x2, 0x2, 0xe9, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x1c, 0x2, 
    0x2, 0xeb, 0xec, 0x5, 0x36, 0x1c, 0x2, 0xec, 0xed, 0x7, 0xf, 0x2, 0x2, 
    0xed, 0xf1, 0x5, 0x16, 0xc, 0x2, 0xee, 0xef, 0x7, 0xf, 0x2, 0x2, 0xef, 
    0xf0, 0x7, 0x1e, 0x2, 0x2, 0xf0, 0xf2, 0x5, 0x16, 0xc, 0x2, 0xf1, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x1f, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x36, 
    0x1c, 0x2, 0xf5, 0xf6, 0x7, 0xf, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x20, 0x2, 
    0x2, 0xf7, 0xf8, 0x5, 0x16, 0xc, 0x2, 0xf8, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xfa, 0x7, 0x21, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x16, 0xc, 0x2, 0xfb, 
    0xfc, 0x7, 0x22, 0x2, 0x2, 0xfc, 0xfd, 0x5, 0x36, 0x1c, 0x2, 0xfd, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x2b, 0x2, 0x2, 0xff, 0x10a, 0x5, 
    0x46, 0x24, 0x2, 0x100, 0x106, 0x7, 0xf, 0x2, 0x2, 0x101, 0x103, 0x7, 
    0xf, 0x2, 0x2, 0x102, 0x101, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 0x7, 
    0x28, 0x2, 0x2, 0x105, 0x100, 0x3, 0x2, 0x2, 0x2, 0x105, 0x102, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x109, 0x5, 
    0x46, 0x24, 0x2, 0x108, 0x105, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10c, 0x3, 
    0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 
    0x2, 0x2, 0x2, 0x10b, 0x33, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10a, 0x3, 0x2, 
    0x2, 0x2, 0x10d, 0x10e, 0x7, 0x2c, 0x2, 0x2, 0x10e, 0x119, 0x5, 0x46, 
    0x24, 0x2, 0x10f, 0x115, 0x7, 0xf, 0x2, 0x2, 0x110, 0x112, 0x7, 0xf, 
    0x2, 0x2, 0x111, 0x110, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 
    0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x115, 0x7, 0x28, 
    0x2, 0x2, 0x114, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x114, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x118, 0x5, 0x46, 
    0x24, 0x2, 0x117, 0x114, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 
    0x2, 0x2, 0x11a, 0x35, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 0x2, 
    0x2, 0x11c, 0x121, 0x5, 0x38, 0x1d, 0x2, 0x11d, 0x120, 0x5, 0x40, 0x21, 
    0x2, 0x11e, 0x120, 0x5, 0x42, 0x22, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 
    0x2, 0x11f, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 0x3, 0x2, 0x2, 
    0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 0x2, 
    0x2, 0x122, 0x37, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 
    0x124, 0x125, 0x5, 0x3a, 0x1e, 0x2, 0x125, 0x127, 0x7, 0x2d, 0x2, 0x2, 
    0x126, 0x128, 0x7, 0x2f, 0x2, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 
    0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12a, 0x3, 0x2, 0x2, 0x2, 
    0x129, 0x12b, 0x9, 0x6, 0x2, 0x2, 0x12a, 0x129, 0x3, 0x2, 0x2, 0x2, 
    0x12a, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 
    0x12c, 0x12d, 0x5, 0x3a, 0x1e, 0x2, 0x12d, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x12e, 0x131, 0x5, 0x46, 0x24, 0x2, 0x12f, 0x131, 0x5, 0x3c, 0x1f, 0x2, 
    0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x12f, 0x3, 0x2, 0x2, 0x2, 
    0x131, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x132, 0x135, 0x5, 0x44, 0x23, 0x2, 
    0x133, 0x135, 0x5, 0x3e, 0x20, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 
    0x134, 0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x137, 0x7, 0x2e, 0x2, 0x2, 0x137, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x139, 0x7, 0x28, 0x2, 0x2, 0x139, 0x13a, 0x5, 0x38, 0x1d, 0x2, 0x13a, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x7, 0x29, 0x2, 0x2, 0x13c, 
    0x13d, 0x5, 0x38, 0x1d, 0x2, 0x13d, 0x43, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x143, 0x7, 0x3b, 0x2, 0x2, 0x13f, 0x140, 0x7, 0x3b, 0x2, 0x2, 0x140, 
    0x141, 0x7, 0xe, 0x2, 0x2, 0x141, 0x143, 0x7, 0x3b, 0x2, 0x2, 0x142, 
    0x13e, 0x3, 0x2, 0x2, 0x2, 0x142, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x143, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x7, 0x3b, 0x2, 0x2, 0x145, 
    0x146, 0x7, 0x15, 0x2, 0x2, 0x146, 0x148, 0x7, 0x16, 0x2, 0x2, 0x147, 
    0x144, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 
    0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x3a, 0x2, 0x2, 0x14a, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x27, 0x4f, 0x54, 0x5c, 0x66, 0x6b, 0x77, 
    0x8a, 0x99, 0x9f, 0xa2, 0xa7, 0xb1, 0xb4, 0xb9, 0xc3, 0xc6, 0xcb, 0xd4, 
    0xd8, 0xdc, 0xe0, 0xe8, 0xf1, 0x102, 0x105, 0x10a, 0x111, 0x114, 0x119, 
    0x11f, 0x121, 0x127, 0x12a, 0x130, 0x134, 0x142, 0x147, 
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
