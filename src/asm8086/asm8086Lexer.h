
// Generated from asm8086.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  asm8086Lexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    BYTE = 15, WORD = 16, DWORD = 17, DSEG = 18, CSEG = 19, INCLUDE = 20, 
    TITLE = 21, END = 22, ORG = 23, ENDIF = 24, IF = 25, EQU = 26, DW = 27, 
    DB = 28, DD = 29, PTR = 30, NOT = 31, OFFSET = 32, RW = 33, RB = 34, 
    RS = 35, LENGTH = 36, COMMENT = 37, REGISTER = 38, OPCODE = 39, REP = 40, 
    DOLLAR = 41, SIGN = 42, NAME = 43, NUMBER = 44, STRING = 45, EOL = 46, 
    WS = 47
  };

  explicit asm8086Lexer(antlr4::CharStream *input);
  ~asm8086Lexer();

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

