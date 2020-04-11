
// Generated from f:\Git\recipe_code\recipe.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  RecipeLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, PERIOD = 7, 
    COMMA = 8, FUNCTION_CALL = 9, INT_TYPE = 10, DEC_TYPE = 11, ARR_INT_TYPE = 12, 
    ARR_DEC_TYPE = 13, ARRAY_ELEM = 14, OF = 15, HEADER_SYM = 16, DECLARATION_SYM = 17, 
    CODE_SYM = 18, RETURN = 19, IF = 20, THEN = 21, ELSE = 22, WHILE = 23, 
    WHILE_DO = 24, REPEAT = 25, UNTIL = 26, ADD = 27, SUB = 28, MULT = 29, 
    DIV = 30, STEP_SYM = 31, AND = 32, OR = 33, DEST = 34, SRC = 35, PRINT = 36, 
    IS = 37, TRUE = 38, NOT = 39, GT = 40, LT = 41, EQ = 42, INC = 43, DEC = 44, 
    WS = 45, NEWLINE = 46, COMMENT = 47, IDENTIFIER = 48, INTEGER = 49
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

