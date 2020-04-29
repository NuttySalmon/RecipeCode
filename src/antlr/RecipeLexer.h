
#include "../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from /home/thomas/recipe_code/Recipe.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  RecipeLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    PERIOD = 8, COMMA = 9, FUNCTION = 10, INT_TYPE = 11, FLOAT_TYPE = 12, 
    ARR_INT_TYPE = 13, ARR_FLOAT_TYPE = 14, ARRAY_ELEM = 15, OF = 16, HEADER_SYM = 17, 
    DECLARATION_SYM = 18, CODE_SYM = 19, RETURN = 20, IF = 21, THEN = 22, 
    ELSE = 23, WHILE = 24, WHILE_DO = 25, REPEAT = 26, UNTIL = 27, ADD = 28, 
    SUB = 29, MUL = 30, DIV = 31, STEP_SYM = 32, AND = 33, OR = 34, DEST = 35, 
    PRINT = 36, PRINT_CHAR = 37, IS = 38, TRUE_SYM = 39, NOT = 40, GT = 41, 
    LT = 42, EQ = 43, GE = 44, LE = 45, INC = 46, DEC = 47, WS = 48, NEWLINE = 49, 
    COMMENT = 50, IDENTIFIER = 51, INTEGER = 52
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

