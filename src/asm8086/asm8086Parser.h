
// Generated from asm8086.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  asm8086Parser : public antlr4::Parser {
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

  enum {
    RuleProg = 0, RuleLine = 1, RuleInstruction = 2, RuleLbl = 3, RuleAssemblerdirective = 4, 
    RuleRw = 5, RuleRb = 6, RuleRs = 7, RuleCseg = 8, RuleDseg = 9, RuleDw = 10, 
    RuleDb = 11, RuleDd = 12, RuleEqu = 13, RuleIf_ = 14, RuleAssemblerexpression = 15, 
    RuleAssemblerlogical = 16, RuleAssemblerterm = 17, RuleEndif_ = 18, 
    RuleEnd = 19, RuleOrg = 20, RuleTitle = 21, RuleInclude_ = 22, RuleExpressionlist = 23, 
    RuleLabel = 24, RuleExpression = 25, RuleMultiplyingExpression = 26, 
    RuleArgument = 27, RulePtr = 28, RuleDollar = 29, RuleRegister_ = 30, 
    RuleString_ = 31, RuleName = 32, RuleNumber = 33, RuleOpcode = 34, RuleRep = 35, 
    RuleComment = 36
  };

  explicit asm8086Parser(antlr4::TokenStream *input);
  ~asm8086Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class LineContext;
  class InstructionContext;
  class LblContext;
  class AssemblerdirectiveContext;
  class RwContext;
  class RbContext;
  class RsContext;
  class CsegContext;
  class DsegContext;
  class DwContext;
  class DbContext;
  class DdContext;
  class EquContext;
  class If_Context;
  class AssemblerexpressionContext;
  class AssemblerlogicalContext;
  class AssemblertermContext;
  class Endif_Context;
  class EndContext;
  class OrgContext;
  class TitleContext;
  class Include_Context;
  class ExpressionlistContext;
  class LabelContext;
  class ExpressionContext;
  class MultiplyingExpressionContext;
  class ArgumentContext;
  class PtrContext;
  class DollarContext;
  class Register_Context;
  class String_Context;
  class NameContext;
  class NumberContext;
  class OpcodeContext;
  class RepContext;
  class CommentContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LineContext *> line();
    LineContext* line(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LblContext *lbl();
    AssemblerdirectiveContext *assemblerdirective();
    InstructionContext *instruction();
    CommentContext *comment();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpcodeContext *opcode();
    RepContext *rep();
    ExpressionlistContext *expressionlist();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  LblContext : public antlr4::ParserRuleContext {
  public:
    LblContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LblContext* lbl();

  class  AssemblerdirectiveContext : public antlr4::ParserRuleContext {
  public:
    AssemblerdirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrgContext *org();
    EndContext *end();
    If_Context *if_();
    Endif_Context *endif_();
    EquContext *equ();
    DbContext *db();
    DwContext *dw();
    CsegContext *cseg();
    DdContext *dd();
    DsegContext *dseg();
    TitleContext *title();
    Include_Context *include_();
    RwContext *rw();
    RbContext *rb();
    RsContext *rs();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblerdirectiveContext* assemblerdirective();

  class  RwContext : public antlr4::ParserRuleContext {
  public:
    RwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RW();
    ExpressionContext *expression();
    NameContext *name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RwContext* rw();

  class  RbContext : public antlr4::ParserRuleContext {
  public:
    RbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RB();
    ExpressionContext *expression();
    NameContext *name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RbContext* rb();

  class  RsContext : public antlr4::ParserRuleContext {
  public:
    RsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RS();
    ExpressionContext *expression();
    NameContext *name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RsContext* rs();

  class  CsegContext : public antlr4::ParserRuleContext {
  public:
    CsegContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CSEG();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsegContext* cseg();

  class  DsegContext : public antlr4::ParserRuleContext {
  public:
    DsegContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DSEG();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DsegContext* dseg();

  class  DwContext : public antlr4::ParserRuleContext {
  public:
    DwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DW();
    ExpressionlistContext *expressionlist();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DwContext* dw();

  class  DbContext : public antlr4::ParserRuleContext {
  public:
    DbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DB();
    ExpressionlistContext *expressionlist();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DbContext* db();

  class  DdContext : public antlr4::ParserRuleContext {
  public:
    DdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DD();
    ExpressionlistContext *expressionlist();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DdContext* dd();

  class  EquContext : public antlr4::ParserRuleContext {
  public:
    EquContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *EQU();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EquContext* equ();

  class  If_Context : public antlr4::ParserRuleContext {
  public:
    If_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    AssemblerexpressionContext *assemblerexpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_Context* if_();

  class  AssemblerexpressionContext : public antlr4::ParserRuleContext {
  public:
    AssemblerexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssemblertermContext *> assemblerterm();
    AssemblertermContext* assemblerterm(size_t i);
    std::vector<AssemblerlogicalContext *> assemblerlogical();
    AssemblerlogicalContext* assemblerlogical(size_t i);
    AssemblerexpressionContext *assemblerexpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblerexpressionContext* assemblerexpression();

  class  AssemblerlogicalContext : public antlr4::ParserRuleContext {
  public:
    AssemblerlogicalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblerlogicalContext* assemblerlogical();

  class  AssemblertermContext : public antlr4::ParserRuleContext {
  public:
    AssemblertermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    NumberContext *number();
    antlr4::tree::TerminalNode *NOT();
    AssemblertermContext *assemblerterm();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblertermContext* assemblerterm();

  class  Endif_Context : public antlr4::ParserRuleContext {
  public:
    Endif_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDIF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Endif_Context* endif_();

  class  EndContext : public antlr4::ParserRuleContext {
  public:
    EndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndContext* end();

  class  OrgContext : public antlr4::ParserRuleContext {
  public:
    OrgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORG();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrgContext* org();

  class  TitleContext : public antlr4::ParserRuleContext {
  public:
    TitleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TITLE();
    String_Context *string_();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TitleContext* title();

  class  Include_Context : public antlr4::ParserRuleContext {
  public:
    Include_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    NameContext *name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Include_Context* include_();

  class  ExpressionlistContext : public antlr4::ParserRuleContext {
  public:
    ExpressionlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionlistContext* expressionlist();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultiplyingExpressionContext *> multiplyingExpression();
    MultiplyingExpressionContext* multiplyingExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SIGN();
    antlr4::tree::TerminalNode* SIGN(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  MultiplyingExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplyingExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplyingExpressionContext* multiplyingExpression();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    DollarContext *dollar();
    Register_Context *register_();
    NameContext *name();
    String_Context *string_();
    ExpressionContext *expression();
    PtrContext *ptr();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *LENGTH();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  PtrContext : public antlr4::ParserRuleContext {
  public:
    PtrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PTR();
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *WORD();
    antlr4::tree::TerminalNode *DWORD();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrContext* ptr();

  class  DollarContext : public antlr4::ParserRuleContext {
  public:
    DollarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DollarContext* dollar();

  class  Register_Context : public antlr4::ParserRuleContext {
  public:
    Register_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REGISTER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Register_Context* register_();

  class  String_Context : public antlr4::ParserRuleContext {
  public:
    String_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_Context* string_();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *SIGN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  OpcodeContext : public antlr4::ParserRuleContext {
  public:
    OpcodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPCODE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpcodeContext* opcode();

  class  RepContext : public antlr4::ParserRuleContext {
  public:
    RepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepContext* rep();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

