
#include "../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from /home/thomas/recipe_code/Recipe.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  RecipeLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, PERIOD = 9, COMMA = 10, CALL = 11, INT_TYPE = 12, FLOAT_TYPE = 13, 
    ARR_INT_TYPE = 14, ARR_FLOAT_TYPE = 15, ARRAY_ELEM = 16, OF = 17, HEADER_SYM = 18, 
    DECLARATION_SYM = 19, CODE_SYM = 20, RETURN = 21, ASSIGN = 22, IF = 23, 
    THEN = 24, ELSE = 25, WHILE = 26, WHILE_DO = 27, REPEAT = 28, UNTIL = 29, 
    ADD = 30, SUB = 31, MUL = 32, DIV = 33, STEP_SYM = 34, AND = 35, OR = 36, 
    DEST = 37, PRINT = 38, PRINT_CHAR = 39, IS = 40, TRUE_SYM = 41, NOT = 42, 
    GT = 43, LT = 44, EQ = 45, GE = 46, LE = 47, INC = 48, DEC = 49, WS = 50, 
    NEWLINE = 51, COMMENT = 52, IDENTIFIER = 53, INTEGER = 54, PARAM_INT = 55, 
    PARAM_FLOAT = 56
  };

  RecipeLexer(antlr4::CharStream *input);
  ~RecipeLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

