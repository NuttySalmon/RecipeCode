
#include "../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from /home/thomas/recipe_code/Recipe.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  RecipeLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, GOTO = 9, PERIOD = 10, COMMA = 11, FUNCTION = 12, INT_TYPE = 13, 
    FLOAT_TYPE = 14, ARR_INT_TYPE = 15, ARR_FLOAT_TYPE = 16, ARRAY_ELEM = 17, 
    OF = 18, HEADER_SYM = 19, DECLARATION_SYM = 20, CODE_SYM = 21, RETURN = 22, 
    ASSIGN = 23, IF = 24, THEN = 25, ELSE = 26, WHILE = 27, WHILE_DO = 28, 
    REPEAT = 29, UNTIL = 30, ADD = 31, SUB = 32, MUL = 33, DIV = 34, STEP_SYM = 35, 
    AND = 36, OR = 37, DEST = 38, PRINT = 39, PRINT_CHAR = 40, IS = 41, 
    TRUE_SYM = 42, NOT = 43, GT = 44, LT = 45, EQ = 46, GE = 47, LE = 48, 
    INC = 49, DEC = 50, WS = 51, NEWLINE = 52, COMMENT = 53, IDENTIFIER = 54, 
    INTEGER = 55
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

