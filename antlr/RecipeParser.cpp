
// Generated from f:\Git\recipe_code\Recipe.g4 by ANTLR 4.7.1


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
    setState(58);
    header();
    setState(59);
    data();
    setState(61);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::CODE_SYM) {
      setState(60);
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
    setState(63);
    match(RecipeParser::HEADER_SYM);
    setState(64);
    match(RecipeParser::IDENTIFIER);
    setState(66);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::T__2) {
      setState(65);
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
    setState(68);
    match(RecipeParser::DECLARATION_SYM);
    setState(69);
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
    setState(72); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(71);
      declaration();
      setState(74); 
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
    setState(76);
    match(RecipeParser::T__0);
    setState(77);
    number();
    setState(78);
    type();
    setState(79);
    match(RecipeParser::OF);
    setState(80);
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
    setState(82);
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
    setState(84);
    match(RecipeParser::CODE_SYM);
    setState(86);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::INTEGER) {
      setState(85);
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
    setState(89); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(88);
      code_line();
      setState(91); 
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
    setState(93);
    match(RecipeParser::INTEGER);
    setState(94);
    match(RecipeParser::PERIOD);
    setState(95);
    statement_list();
    setState(96);
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
    setState(98);
    statement();
    setState(103);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(99);
        match(RecipeParser::THEN);
        setState(100);
        statement(); 
      }
      setState(105);
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

RecipeParser::Add_stmContext* RecipeParser::StatementContext::add_stm() {
  return getRuleContext<RecipeParser::Add_stmContext>(0);
}

RecipeParser::Sub_stmContext* RecipeParser::StatementContext::sub_stm() {
  return getRuleContext<RecipeParser::Sub_stmContext>(0);
}

RecipeParser::Mult_stmContext* RecipeParser::StatementContext::mult_stm() {
  return getRuleContext<RecipeParser::Mult_stmContext>(0);
}

RecipeParser::Div_stmContext* RecipeParser::StatementContext::div_stm() {
  return getRuleContext<RecipeParser::Div_stmContext>(0);
}

RecipeParser::Inc_stmContext* RecipeParser::StatementContext::inc_stm() {
  return getRuleContext<RecipeParser::Inc_stmContext>(0);
}

RecipeParser::Dec_stmContext* RecipeParser::StatementContext::dec_stm() {
  return getRuleContext<RecipeParser::Dec_stmContext>(0);
}

RecipeParser::While_stmContext* RecipeParser::StatementContext::while_stm() {
  return getRuleContext<RecipeParser::While_stmContext>(0);
}

RecipeParser::Until_stmContext* RecipeParser::StatementContext::until_stm() {
  return getRuleContext<RecipeParser::Until_stmContext>(0);
}

RecipeParser::FunctionContext* RecipeParser::StatementContext::function() {
  return getRuleContext<RecipeParser::FunctionContext>(0);
}

RecipeParser::If_stmContext* RecipeParser::StatementContext::if_stm() {
  return getRuleContext<RecipeParser::If_stmContext>(0);
}

RecipeParser::Print_stmContext* RecipeParser::StatementContext::print_stm() {
  return getRuleContext<RecipeParser::Print_stmContext>(0);
}

RecipeParser::Return_stmContext* RecipeParser::StatementContext::return_stm() {
  return getRuleContext<RecipeParser::Return_stmContext>(0);
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
  enterRule(_localctx, 20, RecipeParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(119);
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
        setState(107);
        add_stm();
        break;
      }

      case RecipeParser::SUB: {
        enterOuterAlt(_localctx, 3);
        setState(108);
        sub_stm();
        break;
      }

      case RecipeParser::MULT: {
        enterOuterAlt(_localctx, 4);
        setState(109);
        mult_stm();
        break;
      }

      case RecipeParser::DIV: {
        enterOuterAlt(_localctx, 5);
        setState(110);
        div_stm();
        break;
      }

      case RecipeParser::INC: {
        enterOuterAlt(_localctx, 6);
        setState(111);
        inc_stm();
        break;
      }

      case RecipeParser::DEC: {
        enterOuterAlt(_localctx, 7);
        setState(112);
        dec_stm();
        break;
      }

      case RecipeParser::WHILE: {
        enterOuterAlt(_localctx, 8);
        setState(113);
        while_stm();
        break;
      }

      case RecipeParser::REPEAT: {
        enterOuterAlt(_localctx, 9);
        setState(114);
        until_stm();
        break;
      }

      case RecipeParser::FUNCTION_CALL: {
        enterOuterAlt(_localctx, 10);
        setState(115);
        function();
        break;
      }

      case RecipeParser::IF: {
        enterOuterAlt(_localctx, 11);
        setState(116);
        if_stm();
        break;
      }

      case RecipeParser::PRINT: {
        enterOuterAlt(_localctx, 12);
        setState(117);
        print_stm();
        break;
      }

      case RecipeParser::RETURN: {
        enterOuterAlt(_localctx, 13);
        setState(118);
        return_stm();
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

//----------------- FunctionContext ------------------------------------------------------------------

RecipeParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::FunctionContext::FUNCTION_CALL() {
  return getToken(RecipeParser::FUNCTION_CALL, 0);
}

tree::TerminalNode* RecipeParser::FunctionContext::IDENTIFIER() {
  return getToken(RecipeParser::IDENTIFIER, 0);
}

RecipeParser::VariableContext* RecipeParser::FunctionContext::variable() {
  return getRuleContext<RecipeParser::VariableContext>(0);
}

RecipeParser::CallContext* RecipeParser::FunctionContext::call() {
  return getRuleContext<RecipeParser::CallContext>(0);
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
  enterRule(_localctx, 22, RecipeParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(RecipeParser::FUNCTION_CALL);
    setState(122);
    match(RecipeParser::IDENTIFIER);
    setState(123);
    match(RecipeParser::T__1);
    setState(124);
    variable();
    setState(126);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::T__2) {
      setState(125);
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
  enterRule(_localctx, 24, RecipeParser::RuleCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(RecipeParser::T__2);
    setState(129);
    variable();
    setState(140);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(135);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(130);
          match(RecipeParser::COMMA);
          break;
        }

        case 2: {
          setState(132);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == RecipeParser::COMMA) {
            setState(131);
            match(RecipeParser::COMMA);
          }
          setState(134);
          match(RecipeParser::AND);
          break;
        }

        }
        setState(137);
        variable(); 
      }
      setState(142);
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

//----------------- Return_stmContext ------------------------------------------------------------------

RecipeParser::Return_stmContext::Return_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::Return_stmContext::RETURN() {
  return getToken(RecipeParser::RETURN, 0);
}

tree::TerminalNode* RecipeParser::Return_stmContext::IDENTIFIER() {
  return getToken(RecipeParser::IDENTIFIER, 0);
}


size_t RecipeParser::Return_stmContext::getRuleIndex() const {
  return RecipeParser::RuleReturn_stm;
}

antlrcpp::Any RecipeParser::Return_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitReturn_stm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Return_stmContext* RecipeParser::return_stm() {
  Return_stmContext *_localctx = _tracker.createInstance<Return_stmContext>(_ctx, getState());
  enterRule(_localctx, 26, RecipeParser::RuleReturn_stm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(RecipeParser::RETURN);
    setState(144);
    match(RecipeParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_stmContext ------------------------------------------------------------------

RecipeParser::Add_stmContext::Add_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::Add_stmContext::ADD() {
  return getToken(RecipeParser::ADD, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::Add_stmContext::IDENTIFIER() {
  return getTokens(RecipeParser::IDENTIFIER);
}

tree::TerminalNode* RecipeParser::Add_stmContext::IDENTIFIER(size_t i) {
  return getToken(RecipeParser::IDENTIFIER, i);
}

tree::TerminalNode* RecipeParser::Add_stmContext::DEST() {
  return getToken(RecipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::Add_stmContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::Add_stmContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::Add_stmContext::getRuleIndex() const {
  return RecipeParser::RuleAdd_stm;
}

antlrcpp::Any RecipeParser::Add_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitAdd_stm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Add_stmContext* RecipeParser::add_stm() {
  Add_stmContext *_localctx = _tracker.createInstance<Add_stmContext>(_ctx, getState());
  enterRule(_localctx, 28, RecipeParser::RuleAdd_stm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(RecipeParser::ADD);
    setState(147);
    match(RecipeParser::IDENTIFIER);
    setState(152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::AND) {
      setState(148);
      match(RecipeParser::AND);
      setState(149);
      match(RecipeParser::IDENTIFIER);
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(155);
    match(RecipeParser::DEST);
    setState(156);
    match(RecipeParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sub_stmContext ------------------------------------------------------------------

RecipeParser::Sub_stmContext::Sub_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::Sub_stmContext::SUB() {
  return getToken(RecipeParser::SUB, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::Sub_stmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::Sub_stmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::Sub_stmContext::DEST() {
  return getToken(RecipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::Sub_stmContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::Sub_stmContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::Sub_stmContext::getRuleIndex() const {
  return RecipeParser::RuleSub_stm;
}

antlrcpp::Any RecipeParser::Sub_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitSub_stm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Sub_stmContext* RecipeParser::sub_stm() {
  Sub_stmContext *_localctx = _tracker.createInstance<Sub_stmContext>(_ctx, getState());
  enterRule(_localctx, 30, RecipeParser::RuleSub_stm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(RecipeParser::SUB);
    setState(159);
    variable();
    setState(164);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::AND) {
      setState(160);
      match(RecipeParser::AND);
      setState(161);
      variable();
      setState(166);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(167);
    match(RecipeParser::DEST);
    setState(168);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mult_stmContext ------------------------------------------------------------------

RecipeParser::Mult_stmContext::Mult_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::Mult_stmContext::MULT() {
  return getToken(RecipeParser::MULT, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::Mult_stmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::Mult_stmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::Mult_stmContext::DEST() {
  return getToken(RecipeParser::DEST, 0);
}

std::vector<tree::TerminalNode *> RecipeParser::Mult_stmContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::Mult_stmContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::Mult_stmContext::getRuleIndex() const {
  return RecipeParser::RuleMult_stm;
}

antlrcpp::Any RecipeParser::Mult_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitMult_stm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Mult_stmContext* RecipeParser::mult_stm() {
  Mult_stmContext *_localctx = _tracker.createInstance<Mult_stmContext>(_ctx, getState());
  enterRule(_localctx, 32, RecipeParser::RuleMult_stm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(RecipeParser::MULT);
    setState(171);
    variable();
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::AND) {
      setState(172);
      match(RecipeParser::AND);
      setState(173);
      variable();
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(179);
    match(RecipeParser::DEST);
    setState(180);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Div_stmContext ------------------------------------------------------------------

RecipeParser::Div_stmContext::Div_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::Div_stmContext::DIV() {
  return getToken(RecipeParser::DIV, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::Div_stmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::Div_stmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

tree::TerminalNode* RecipeParser::Div_stmContext::SRC() {
  return getToken(RecipeParser::SRC, 0);
}

tree::TerminalNode* RecipeParser::Div_stmContext::INTEGER() {
  return getToken(RecipeParser::INTEGER, 0);
}


size_t RecipeParser::Div_stmContext::getRuleIndex() const {
  return RecipeParser::RuleDiv_stm;
}

antlrcpp::Any RecipeParser::Div_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitDiv_stm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Div_stmContext* RecipeParser::div_stm() {
  Div_stmContext *_localctx = _tracker.createInstance<Div_stmContext>(_ctx, getState());
  enterRule(_localctx, 34, RecipeParser::RuleDiv_stm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(RecipeParser::DIV);
    setState(183);
    variable();
    setState(184);
    match(RecipeParser::SRC);
    setState(188);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::T__3: {
        setState(185);
        match(RecipeParser::T__3);
        setState(186);
        variable();
        break;
      }

      case RecipeParser::INTEGER: {
        setState(187);
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

//----------------- Inc_stmContext ------------------------------------------------------------------

RecipeParser::Inc_stmContext::Inc_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::Inc_stmContext::INC() {
  return getToken(RecipeParser::INC, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::Inc_stmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::Inc_stmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}


size_t RecipeParser::Inc_stmContext::getRuleIndex() const {
  return RecipeParser::RuleInc_stm;
}

antlrcpp::Any RecipeParser::Inc_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitInc_stm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Inc_stmContext* RecipeParser::inc_stm() {
  Inc_stmContext *_localctx = _tracker.createInstance<Inc_stmContext>(_ctx, getState());
  enterRule(_localctx, 36, RecipeParser::RuleInc_stm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(RecipeParser::INC);
    setState(191);
    variable();
    setState(197);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::T__1: {
        setState(192);
        match(RecipeParser::T__1);
        setState(193);
        variable();
        setState(194);
        match(RecipeParser::T__4);
        break;
      }

      case RecipeParser::T__5: {
        setState(196);
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

//----------------- Dec_stmContext ------------------------------------------------------------------

RecipeParser::Dec_stmContext::Dec_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::Dec_stmContext::DEC() {
  return getToken(RecipeParser::DEC, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::Dec_stmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::Dec_stmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}


size_t RecipeParser::Dec_stmContext::getRuleIndex() const {
  return RecipeParser::RuleDec_stm;
}

antlrcpp::Any RecipeParser::Dec_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitDec_stm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Dec_stmContext* RecipeParser::dec_stm() {
  Dec_stmContext *_localctx = _tracker.createInstance<Dec_stmContext>(_ctx, getState());
  enterRule(_localctx, 38, RecipeParser::RuleDec_stm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(RecipeParser::DEC);
    setState(200);
    variable();
    setState(206);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::T__1: {
        setState(201);
        match(RecipeParser::T__1);
        setState(202);
        variable();
        setState(203);
        match(RecipeParser::T__4);
        break;
      }

      case RecipeParser::T__5: {
        setState(205);
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

//----------------- If_stmContext ------------------------------------------------------------------

RecipeParser::If_stmContext::If_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::If_stmContext::IF() {
  return getToken(RecipeParser::IF, 0);
}

RecipeParser::ConditionContext* RecipeParser::If_stmContext::condition() {
  return getRuleContext<RecipeParser::ConditionContext>(0);
}

std::vector<tree::TerminalNode *> RecipeParser::If_stmContext::COMMA() {
  return getTokens(RecipeParser::COMMA);
}

tree::TerminalNode* RecipeParser::If_stmContext::COMMA(size_t i) {
  return getToken(RecipeParser::COMMA, i);
}

std::vector<RecipeParser::Statement_listContext *> RecipeParser::If_stmContext::statement_list() {
  return getRuleContexts<RecipeParser::Statement_listContext>();
}

RecipeParser::Statement_listContext* RecipeParser::If_stmContext::statement_list(size_t i) {
  return getRuleContext<RecipeParser::Statement_listContext>(i);
}

tree::TerminalNode* RecipeParser::If_stmContext::ELSE() {
  return getToken(RecipeParser::ELSE, 0);
}


size_t RecipeParser::If_stmContext::getRuleIndex() const {
  return RecipeParser::RuleIf_stm;
}

antlrcpp::Any RecipeParser::If_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitIf_stm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::If_stmContext* RecipeParser::if_stm() {
  If_stmContext *_localctx = _tracker.createInstance<If_stmContext>(_ctx, getState());
  enterRule(_localctx, 40, RecipeParser::RuleIf_stm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(RecipeParser::IF);
    setState(209);
    condition();
    setState(210);
    match(RecipeParser::COMMA);
    setState(211);
    statement_list();
    setState(215);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(212);
      match(RecipeParser::COMMA);
      setState(213);
      match(RecipeParser::ELSE);
      setState(214);
      statement_list();
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

//----------------- While_stmContext ------------------------------------------------------------------

RecipeParser::While_stmContext::While_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::While_stmContext::WHILE() {
  return getToken(RecipeParser::WHILE, 0);
}

RecipeParser::Condition_listContext* RecipeParser::While_stmContext::condition_list() {
  return getRuleContext<RecipeParser::Condition_listContext>(0);
}

tree::TerminalNode* RecipeParser::While_stmContext::COMMA() {
  return getToken(RecipeParser::COMMA, 0);
}

tree::TerminalNode* RecipeParser::While_stmContext::WHILE_DO() {
  return getToken(RecipeParser::WHILE_DO, 0);
}

RecipeParser::Statement_listContext* RecipeParser::While_stmContext::statement_list() {
  return getRuleContext<RecipeParser::Statement_listContext>(0);
}


size_t RecipeParser::While_stmContext::getRuleIndex() const {
  return RecipeParser::RuleWhile_stm;
}

antlrcpp::Any RecipeParser::While_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitWhile_stm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::While_stmContext* RecipeParser::while_stm() {
  While_stmContext *_localctx = _tracker.createInstance<While_stmContext>(_ctx, getState());
  enterRule(_localctx, 42, RecipeParser::RuleWhile_stm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    match(RecipeParser::WHILE);
    setState(218);
    condition_list();
    setState(219);
    match(RecipeParser::COMMA);
    setState(220);
    match(RecipeParser::WHILE_DO);
    setState(221);
    statement_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Until_stmContext ------------------------------------------------------------------

RecipeParser::Until_stmContext::Until_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::Until_stmContext::REPEAT() {
  return getToken(RecipeParser::REPEAT, 0);
}

RecipeParser::Statement_listContext* RecipeParser::Until_stmContext::statement_list() {
  return getRuleContext<RecipeParser::Statement_listContext>(0);
}

tree::TerminalNode* RecipeParser::Until_stmContext::UNTIL() {
  return getToken(RecipeParser::UNTIL, 0);
}

RecipeParser::ConditionContext* RecipeParser::Until_stmContext::condition() {
  return getRuleContext<RecipeParser::ConditionContext>(0);
}


size_t RecipeParser::Until_stmContext::getRuleIndex() const {
  return RecipeParser::RuleUntil_stm;
}

antlrcpp::Any RecipeParser::Until_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitUntil_stm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Until_stmContext* RecipeParser::until_stm() {
  Until_stmContext *_localctx = _tracker.createInstance<Until_stmContext>(_ctx, getState());
  enterRule(_localctx, 44, RecipeParser::RuleUntil_stm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(RecipeParser::REPEAT);
    setState(224);
    statement_list();
    setState(225);
    match(RecipeParser::UNTIL);
    setState(226);
    condition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_stmContext ------------------------------------------------------------------

RecipeParser::Print_stmContext::Print_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeParser::Print_stmContext::PRINT() {
  return getToken(RecipeParser::PRINT, 0);
}

std::vector<RecipeParser::VariableContext *> RecipeParser::Print_stmContext::variable() {
  return getRuleContexts<RecipeParser::VariableContext>();
}

RecipeParser::VariableContext* RecipeParser::Print_stmContext::variable(size_t i) {
  return getRuleContext<RecipeParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> RecipeParser::Print_stmContext::AND() {
  return getTokens(RecipeParser::AND);
}

tree::TerminalNode* RecipeParser::Print_stmContext::AND(size_t i) {
  return getToken(RecipeParser::AND, i);
}


size_t RecipeParser::Print_stmContext::getRuleIndex() const {
  return RecipeParser::RulePrint_stm;
}

antlrcpp::Any RecipeParser::Print_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitPrint_stm(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::Print_stmContext* RecipeParser::print_stm() {
  Print_stmContext *_localctx = _tracker.createInstance<Print_stmContext>(_ctx, getState());
  enterRule(_localctx, 46, RecipeParser::RulePrint_stm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    match(RecipeParser::PRINT);
    setState(229);
    variable();
    setState(234);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::AND) {
      setState(230);
      match(RecipeParser::AND);
      setState(231);
      variable();
      setState(236);
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
  enterRule(_localctx, 48, RecipeParser::RuleCondition_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    condition();
    setState(242);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeParser::AND

    || _la == RecipeParser::OR) {
      setState(238);
      _la = _input->LA(1);
      if (!(_la == RecipeParser::AND

      || _la == RecipeParser::OR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(239);
      condition();
      setState(244);
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
  enterRule(_localctx, 50, RecipeParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    variable();
    setState(246);
    match(RecipeParser::IS);
    setState(248);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::NOT) {
      setState(247);
      match(RecipeParser::NOT);
    }
    setState(256);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RecipeParser::GT:
      case RecipeParser::LT:
      case RecipeParser::EQ: {
        setState(250);
        comperator();
        setState(253);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          setState(251);
          variable();
          break;
        }

        case 2: {
          setState(252);
          number();
          break;
        }

        }
        break;
      }

      case RecipeParser::TRUE: {
        setState(255);
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
  enterRule(_localctx, 52, RecipeParser::RuleComperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
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

std::vector<tree::TerminalNode *> RecipeParser::NumberContext::INTEGER() {
  return getTokens(RecipeParser::INTEGER);
}

tree::TerminalNode* RecipeParser::NumberContext::INTEGER(size_t i) {
  return getToken(RecipeParser::INTEGER, i);
}


size_t RecipeParser::NumberContext::getRuleIndex() const {
  return RecipeParser::RuleNumber;
}

antlrcpp::Any RecipeParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

RecipeParser::NumberContext* RecipeParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 54, RecipeParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    match(RecipeParser::INTEGER);
    setState(263);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(261);
      match(RecipeParser::PERIOD);
      setState(262);
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
  enterRule(_localctx, 56, RecipeParser::RuleVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeParser::INTEGER) {
      setState(265);
      match(RecipeParser::INTEGER);
      setState(266);
      match(RecipeParser::ARRAY_ELEM);
      setState(267);
      match(RecipeParser::OF);
    }
    setState(270);
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
  "function", "call", "return_stm", "add_stm", "sub_stm", "mult_stm", "div_stm", 
  "inc_stm", "dec_stm", "if_stm", "while_stm", "until_stm", "print_stm", 
  "condition_list", "condition", "comperator", "number", "variable"
};

std::vector<std::string> RecipeParser::_literalNames = {
  "", "'-'", "'for'", "'with'", "'size of'", "'min'", "'mins'", "'.'", "','", 
  "'See recipe'", "", "", "'pieces'", "'packs'", "", "'of'", "'Recipe:'", 
  "'Ingredients:'", "'Directions:'", "'Serve'", "", "'then'", "'otherwise'", 
  "", "'keep'", "", "'until'", "", "", "", "'Divide'", "'step'", "'and'", 
  "'or'", "", "'into'", "", "'is'", "'done'", "'not'", "'more than'", "'less than'", 
  "'as much as'"
};

std::vector<std::string> RecipeParser::_symbolicNames = {
  "", "", "", "", "", "", "", "PERIOD", "COMMA", "FUNCTION_CALL", "INT_TYPE", 
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
    0x3, 0x33, 0x113, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x40, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x45, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x6, 0x5, 0x4b, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x4c, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0x59, 0xa, 0x8, 0x3, 0x9, 0x6, 0x9, 0x5c, 0xa, 
    0x9, 0xd, 0x9, 0xe, 0x9, 0x5d, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x68, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0x6b, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x7a, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x81, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x87, 0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 0x8a, 
    0xa, 0xe, 0x3, 0xe, 0x7, 0xe, 0x8d, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x90, 
    0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0x99, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x9c, 0xb, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x7, 0x11, 0xa5, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xa8, 0xb, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0xb1, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xb4, 0xb, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xbf, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 
    0x14, 0xc8, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xd1, 0xa, 0x15, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0xda, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0xeb, 0xa, 0x19, 0xc, 
    0x19, 0xe, 0x19, 0xee, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 
    0x1a, 0xf3, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0xf6, 0xb, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0xfb, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x5, 0x1b, 0x100, 0xa, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x103, 
    0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 
    0x1d, 0x10a, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 
    0x10f, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x2, 0x2, 0x1f, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x3a, 0x2, 0x5, 0x3, 0x2, 0xc, 0xf, 0x3, 0x2, 0x22, 0x23, 
    0x3, 0x2, 0x2a, 0x2c, 0x2, 0x11b, 0x2, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x6, 0x46, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4a, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x4e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x56, 0x3, 0x2, 0x2, 0x2, 0x10, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x14, 0x64, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x79, 0x3, 0x2, 0x2, 0x2, 0x18, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x82, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x91, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x22, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x32, 0xef, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0x36, 0x104, 0x3, 0x2, 0x2, 0x2, 0x38, 0x106, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x5, 
    0x4, 0x3, 0x2, 0x3d, 0x3f, 0x5, 0x6, 0x4, 0x2, 0x3e, 0x40, 0x5, 0xe, 
    0x8, 0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x3, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x7, 0x12, 0x2, 0x2, 
    0x42, 0x44, 0x7, 0x32, 0x2, 0x2, 0x43, 0x45, 0x5, 0x1a, 0xe, 0x2, 0x44, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0x13, 0x2, 0x2, 0x47, 0x48, 0x5, 
    0x8, 0x5, 0x2, 0x48, 0x7, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x5, 0xa, 
    0x6, 0x2, 0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x3, 0x2, 0x2, 0x4f, 
    0x50, 0x5, 0x38, 0x1d, 0x2, 0x50, 0x51, 0x5, 0xc, 0x7, 0x2, 0x51, 0x52, 
    0x7, 0x11, 0x2, 0x2, 0x52, 0x53, 0x7, 0x32, 0x2, 0x2, 0x53, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x55, 0x9, 0x2, 0x2, 0x2, 0x55, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x58, 0x7, 0x14, 0x2, 0x2, 0x57, 0x59, 0x5, 0x10, 0x9, 
    0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x59, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5c, 0x5, 0x12, 0xa, 0x2, 0x5b, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x33, 0x2, 0x2, 0x60, 0x61, 0x7, 0x9, 
    0x2, 0x2, 0x61, 0x62, 0x5, 0x14, 0xb, 0x2, 0x62, 0x63, 0x7, 0x9, 0x2, 
    0x2, 0x63, 0x13, 0x3, 0x2, 0x2, 0x2, 0x64, 0x69, 0x5, 0x16, 0xc, 0x2, 
    0x65, 0x66, 0x7, 0x17, 0x2, 0x2, 0x66, 0x68, 0x5, 0x16, 0xc, 0x2, 0x67, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x7a, 0x5, 0x1e, 0x10, 0x2, 0x6e, 0x7a, 0x5, 0x20, 0x11, 
    0x2, 0x6f, 0x7a, 0x5, 0x22, 0x12, 0x2, 0x70, 0x7a, 0x5, 0x24, 0x13, 
    0x2, 0x71, 0x7a, 0x5, 0x26, 0x14, 0x2, 0x72, 0x7a, 0x5, 0x28, 0x15, 
    0x2, 0x73, 0x7a, 0x5, 0x2c, 0x17, 0x2, 0x74, 0x7a, 0x5, 0x2e, 0x18, 
    0x2, 0x75, 0x7a, 0x5, 0x18, 0xd, 0x2, 0x76, 0x7a, 0x5, 0x2a, 0x16, 0x2, 
    0x77, 0x7a, 0x5, 0x30, 0x19, 0x2, 0x78, 0x7a, 0x5, 0x1c, 0xf, 0x2, 0x79, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x79, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x79, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x79, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x79, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x71, 0x3, 0x2, 0x2, 0x2, 0x79, 0x72, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x73, 0x3, 0x2, 0x2, 0x2, 0x79, 0x74, 0x3, 0x2, 0x2, 
    0x2, 0x79, 0x75, 0x3, 0x2, 0x2, 0x2, 0x79, 0x76, 0x3, 0x2, 0x2, 0x2, 
    0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0xb, 0x2, 0x2, 0x7c, 0x7d, 
    0x7, 0x32, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x4, 0x2, 0x2, 0x7e, 0x80, 0x5, 
    0x3a, 0x1e, 0x2, 0x7f, 0x81, 0x5, 0x1a, 0xe, 0x2, 0x80, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x83, 0x7, 0x5, 0x2, 0x2, 0x83, 0x8e, 0x5, 0x3a, 0x1e, 0x2, 
    0x84, 0x8a, 0x7, 0xa, 0x2, 0x2, 0x85, 0x87, 0x7, 0xa, 0x2, 0x2, 0x86, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 0x7, 0x22, 0x2, 0x2, 0x89, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x86, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x8b, 0x8d, 0x5, 0x3a, 0x1e, 0x2, 0x8c, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x8d, 0x90, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0x15, 0x2, 0x2, 0x92, 0x93, 
    0x7, 0x32, 0x2, 0x2, 0x93, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 
    0x1d, 0x2, 0x2, 0x95, 0x9a, 0x7, 0x32, 0x2, 0x2, 0x96, 0x97, 0x7, 0x22, 
    0x2, 0x2, 0x97, 0x99, 0x7, 0x32, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9c, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x24, 0x2, 0x2, 0x9e, 0x9f, 
    0x7, 0x32, 0x2, 0x2, 0x9f, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 
    0x1e, 0x2, 0x2, 0xa1, 0xa6, 0x5, 0x3a, 0x1e, 0x2, 0xa2, 0xa3, 0x7, 0x22, 
    0x2, 0x2, 0xa3, 0xa5, 0x5, 0x3a, 0x1e, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 
    0x2, 0xa5, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0xa6, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x24, 0x2, 0x2, 0xaa, 0xab, 
    0x5, 0x3a, 0x1e, 0x2, 0xab, 0x21, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x7, 
    0x1f, 0x2, 0x2, 0xad, 0xb2, 0x5, 0x3a, 0x1e, 0x2, 0xae, 0xaf, 0x7, 0x22, 
    0x2, 0x2, 0xaf, 0xb1, 0x5, 0x3a, 0x1e, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xb2, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x24, 0x2, 0x2, 0xb6, 0xb7, 
    0x5, 0x3a, 0x1e, 0x2, 0xb7, 0x23, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 
    0x20, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x3a, 0x1e, 0x2, 0xba, 0xbe, 0x7, 0x25, 
    0x2, 0x2, 0xbb, 0xbc, 0x7, 0x6, 0x2, 0x2, 0xbc, 0xbf, 0x5, 0x3a, 0x1e, 
    0x2, 0xbd, 0xbf, 0x7, 0x33, 0x2, 0x2, 0xbe, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0x25, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xc1, 0x7, 0x2d, 0x2, 0x2, 0xc1, 0xc7, 0x5, 0x3a, 0x1e, 0x2, 0xc2, 0xc3, 
    0x7, 0x4, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0x3a, 0x1e, 0x2, 0xc4, 0xc5, 0x7, 
    0x7, 0x2, 0x2, 0xc5, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc8, 0x7, 0x8, 
    0x2, 0x2, 0xc7, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xca, 0x7, 0x2e, 0x2, 0x2, 0xca, 0xd0, 0x5, 0x3a, 0x1e, 0x2, 0xcb, 
    0xcc, 0x7, 0x4, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x3a, 0x1e, 0x2, 0xcd, 0xce, 
    0x7, 0x7, 0x2, 0x2, 0xce, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd1, 0x7, 
    0x8, 0x2, 0x2, 0xd0, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcf, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0xd3, 0x7, 0x16, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x34, 0x1b, 0x2, 
    0xd4, 0xd5, 0x7, 0xa, 0x2, 0x2, 0xd5, 0xd9, 0x5, 0x14, 0xb, 0x2, 0xd6, 
    0xd7, 0x7, 0xa, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x18, 0x2, 0x2, 0xd8, 0xda, 
    0x5, 0x14, 0xb, 0x2, 0xd9, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 
    0x2, 0x2, 0x2, 0xda, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x19, 
    0x2, 0x2, 0xdc, 0xdd, 0x5, 0x32, 0x1a, 0x2, 0xdd, 0xde, 0x7, 0xa, 0x2, 
    0x2, 0xde, 0xdf, 0x7, 0x1a, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0x14, 0xb, 0x2, 
    0xe0, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x1b, 0x2, 0x2, 0xe2, 
    0xe3, 0x5, 0x14, 0xb, 0x2, 0xe3, 0xe4, 0x7, 0x1c, 0x2, 0x2, 0xe4, 0xe5, 
    0x5, 0x34, 0x1b, 0x2, 0xe5, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x7, 
    0x26, 0x2, 0x2, 0xe7, 0xec, 0x5, 0x3a, 0x1e, 0x2, 0xe8, 0xe9, 0x7, 0x22, 
    0x2, 0x2, 0xe9, 0xeb, 0x5, 0x3a, 0x1e, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xee, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0x31, 0x3, 0x2, 0x2, 0x2, 0xee, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf4, 0x5, 0x34, 0x1b, 0x2, 0xf0, 0xf1, 
    0x9, 0x3, 0x2, 0x2, 0xf1, 0xf3, 0x5, 0x34, 0x1b, 0x2, 0xf2, 0xf0, 0x3, 
    0x2, 0x2, 0x2, 0xf3, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 
    0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x5, 0x3a, 0x1e, 0x2, 
    0xf8, 0xfa, 0x7, 0x27, 0x2, 0x2, 0xf9, 0xfb, 0x7, 0x29, 0x2, 0x2, 0xfa, 
    0xf9, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0xff, 0x5, 0x36, 0x1c, 0x2, 0xfd, 0x100, 0x5, 
    0x3a, 0x1e, 0x2, 0xfe, 0x100, 0x5, 0x38, 0x1d, 0x2, 0xff, 0xfd, 0x3, 
    0x2, 0x2, 0x2, 0xff, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x101, 0x103, 0x7, 0x28, 0x2, 0x2, 0x102, 0xfc, 0x3, 0x2, 
    0x2, 0x2, 0x102, 0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x104, 0x105, 0x9, 0x4, 0x2, 0x2, 0x105, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x109, 0x7, 0x33, 0x2, 0x2, 0x107, 0x108, 0x7, 0x9, 0x2, 0x2, 
    0x108, 0x10a, 0x7, 0x33, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0x10c, 0x7, 0x33, 0x2, 0x2, 0x10c, 0x10d, 0x7, 0x10, 0x2, 0x2, 0x10d, 
    0x10f, 0x7, 0x11, 0x2, 0x2, 0x10e, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 
    0x111, 0x7, 0x32, 0x2, 0x2, 0x111, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x3f, 
    0x44, 0x4c, 0x58, 0x5d, 0x69, 0x79, 0x80, 0x86, 0x89, 0x8e, 0x9a, 0xa6, 
    0xb2, 0xbe, 0xc7, 0xd0, 0xd9, 0xec, 0xf4, 0xfa, 0xff, 0x102, 0x109, 
    0x10e, 
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
