
#include "../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from /home/thomas/recipe_code/Recipe.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  RecipeLexer : public antlr4::Lexer {
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

