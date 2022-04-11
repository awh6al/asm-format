
// Generated from asm8086.g4 by ANTLR 4.9.3


#include "asm8086Visitor.h"

#include "asm8086Parser.h"


using namespace antlrcpp;
using namespace antlr4;

asm8086Parser::asm8086Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

asm8086Parser::~asm8086Parser() {
  delete _interpreter;
}

std::string asm8086Parser::getGrammarFileName() const {
  return "asm8086.g4";
}

const std::vector<std::string>& asm8086Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& asm8086Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

asm8086Parser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<asm8086Parser::LineContext *> asm8086Parser::ProgContext::line() {
  return getRuleContexts<asm8086Parser::LineContext>();
}

asm8086Parser::LineContext* asm8086Parser::ProgContext::line(size_t i) {
  return getRuleContext<asm8086Parser::LineContext>(i);
}

std::vector<tree::TerminalNode *> asm8086Parser::ProgContext::EOL() {
  return getTokens(asm8086Parser::EOL);
}

tree::TerminalNode* asm8086Parser::ProgContext::EOL(size_t i) {
  return getToken(asm8086Parser::EOL, i);
}


size_t asm8086Parser::ProgContext::getRuleIndex() const {
  return asm8086Parser::RuleProg;
}


antlrcpp::Any asm8086Parser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::ProgContext* asm8086Parser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, asm8086Parser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << asm8086Parser::T__0)
      | (1ULL << asm8086Parser::T__2)
      | (1ULL << asm8086Parser::DSEG)
      | (1ULL << asm8086Parser::CSEG)
      | (1ULL << asm8086Parser::INCLUDE)
      | (1ULL << asm8086Parser::TITLE)
      | (1ULL << asm8086Parser::END)
      | (1ULL << asm8086Parser::ORG)
      | (1ULL << asm8086Parser::ENDIF)
      | (1ULL << asm8086Parser::IF)
      | (1ULL << asm8086Parser::DW)
      | (1ULL << asm8086Parser::DB)
      | (1ULL << asm8086Parser::DD)
      | (1ULL << asm8086Parser::RW)
      | (1ULL << asm8086Parser::RB)
      | (1ULL << asm8086Parser::RS)
      | (1ULL << asm8086Parser::COMMENT)
      | (1ULL << asm8086Parser::OPCODE)
      | (1ULL << asm8086Parser::REP)
      | (1ULL << asm8086Parser::NAME)
      | (1ULL << asm8086Parser::EOL))) != 0)) {
      setState(74);
      line();
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == asm8086Parser::T__0) {
        setState(75);
        match(asm8086Parser::T__0);
        setState(76);
        line();
        setState(81);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(82);
      match(asm8086Parser::EOL);
      setState(88);
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

//----------------- LineContext ------------------------------------------------------------------

asm8086Parser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm8086Parser::LblContext* asm8086Parser::LineContext::lbl() {
  return getRuleContext<asm8086Parser::LblContext>(0);
}

asm8086Parser::AssemblerdirectiveContext* asm8086Parser::LineContext::assemblerdirective() {
  return getRuleContext<asm8086Parser::AssemblerdirectiveContext>(0);
}

asm8086Parser::InstructionContext* asm8086Parser::LineContext::instruction() {
  return getRuleContext<asm8086Parser::InstructionContext>(0);
}

asm8086Parser::CommentContext* asm8086Parser::LineContext::comment() {
  return getRuleContext<asm8086Parser::CommentContext>(0);
}


size_t asm8086Parser::LineContext::getRuleIndex() const {
  return asm8086Parser::RuleLine;
}


antlrcpp::Any asm8086Parser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::LineContext* asm8086Parser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, asm8086Parser::RuleLine);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(89);
      lbl();
      break;
    }

    default:
      break;
    }
    setState(94);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case asm8086Parser::T__2:
      case asm8086Parser::DSEG:
      case asm8086Parser::CSEG:
      case asm8086Parser::INCLUDE:
      case asm8086Parser::TITLE:
      case asm8086Parser::END:
      case asm8086Parser::ORG:
      case asm8086Parser::ENDIF:
      case asm8086Parser::IF:
      case asm8086Parser::DW:
      case asm8086Parser::DB:
      case asm8086Parser::DD:
      case asm8086Parser::RW:
      case asm8086Parser::RB:
      case asm8086Parser::RS:
      case asm8086Parser::NAME: {
        setState(92);
        assemblerdirective();
        break;
      }

      case asm8086Parser::OPCODE:
      case asm8086Parser::REP: {
        setState(93);
        instruction();
        break;
      }

      case asm8086Parser::T__0:
      case asm8086Parser::COMMENT:
      case asm8086Parser::EOL: {
        break;
      }

    default:
      break;
    }
    setState(97);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == asm8086Parser::COMMENT) {
      setState(96);
      comment();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

asm8086Parser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm8086Parser::OpcodeContext* asm8086Parser::InstructionContext::opcode() {
  return getRuleContext<asm8086Parser::OpcodeContext>(0);
}

asm8086Parser::RepContext* asm8086Parser::InstructionContext::rep() {
  return getRuleContext<asm8086Parser::RepContext>(0);
}

asm8086Parser::ExpressionlistContext* asm8086Parser::InstructionContext::expressionlist() {
  return getRuleContext<asm8086Parser::ExpressionlistContext>(0);
}


size_t asm8086Parser::InstructionContext::getRuleIndex() const {
  return asm8086Parser::RuleInstruction;
}


antlrcpp::Any asm8086Parser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::InstructionContext* asm8086Parser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 4, asm8086Parser::RuleInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == asm8086Parser::REP) {
      setState(99);
      rep();
    }
    setState(102);
    opcode();
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << asm8086Parser::T__3)
      | (1ULL << asm8086Parser::T__12)
      | (1ULL << asm8086Parser::BYTE)
      | (1ULL << asm8086Parser::WORD)
      | (1ULL << asm8086Parser::DWORD)
      | (1ULL << asm8086Parser::PTR)
      | (1ULL << asm8086Parser::NOT)
      | (1ULL << asm8086Parser::OFFSET)
      | (1ULL << asm8086Parser::LENGTH)
      | (1ULL << asm8086Parser::REGISTER)
      | (1ULL << asm8086Parser::DOLLAR)
      | (1ULL << asm8086Parser::SIGN)
      | (1ULL << asm8086Parser::NAME)
      | (1ULL << asm8086Parser::NUMBER)
      | (1ULL << asm8086Parser::STRING))) != 0)) {
      setState(103);
      expressionlist();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LblContext ------------------------------------------------------------------

asm8086Parser::LblContext::LblContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm8086Parser::LabelContext* asm8086Parser::LblContext::label() {
  return getRuleContext<asm8086Parser::LabelContext>(0);
}


size_t asm8086Parser::LblContext::getRuleIndex() const {
  return asm8086Parser::RuleLbl;
}


antlrcpp::Any asm8086Parser::LblContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitLbl(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::LblContext* asm8086Parser::lbl() {
  LblContext *_localctx = _tracker.createInstance<LblContext>(_ctx, getState());
  enterRule(_localctx, 6, asm8086Parser::RuleLbl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    label();
    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == asm8086Parser::T__1) {
      setState(107);
      match(asm8086Parser::T__1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblerdirectiveContext ------------------------------------------------------------------

asm8086Parser::AssemblerdirectiveContext::AssemblerdirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm8086Parser::OrgContext* asm8086Parser::AssemblerdirectiveContext::org() {
  return getRuleContext<asm8086Parser::OrgContext>(0);
}

asm8086Parser::EndContext* asm8086Parser::AssemblerdirectiveContext::end() {
  return getRuleContext<asm8086Parser::EndContext>(0);
}

asm8086Parser::If_Context* asm8086Parser::AssemblerdirectiveContext::if_() {
  return getRuleContext<asm8086Parser::If_Context>(0);
}

asm8086Parser::Endif_Context* asm8086Parser::AssemblerdirectiveContext::endif_() {
  return getRuleContext<asm8086Parser::Endif_Context>(0);
}

asm8086Parser::EquContext* asm8086Parser::AssemblerdirectiveContext::equ() {
  return getRuleContext<asm8086Parser::EquContext>(0);
}

asm8086Parser::DbContext* asm8086Parser::AssemblerdirectiveContext::db() {
  return getRuleContext<asm8086Parser::DbContext>(0);
}

asm8086Parser::DwContext* asm8086Parser::AssemblerdirectiveContext::dw() {
  return getRuleContext<asm8086Parser::DwContext>(0);
}

asm8086Parser::CsegContext* asm8086Parser::AssemblerdirectiveContext::cseg() {
  return getRuleContext<asm8086Parser::CsegContext>(0);
}

asm8086Parser::DdContext* asm8086Parser::AssemblerdirectiveContext::dd() {
  return getRuleContext<asm8086Parser::DdContext>(0);
}

asm8086Parser::DsegContext* asm8086Parser::AssemblerdirectiveContext::dseg() {
  return getRuleContext<asm8086Parser::DsegContext>(0);
}

asm8086Parser::TitleContext* asm8086Parser::AssemblerdirectiveContext::title() {
  return getRuleContext<asm8086Parser::TitleContext>(0);
}

asm8086Parser::Include_Context* asm8086Parser::AssemblerdirectiveContext::include_() {
  return getRuleContext<asm8086Parser::Include_Context>(0);
}

asm8086Parser::RwContext* asm8086Parser::AssemblerdirectiveContext::rw() {
  return getRuleContext<asm8086Parser::RwContext>(0);
}

asm8086Parser::RbContext* asm8086Parser::AssemblerdirectiveContext::rb() {
  return getRuleContext<asm8086Parser::RbContext>(0);
}

asm8086Parser::RsContext* asm8086Parser::AssemblerdirectiveContext::rs() {
  return getRuleContext<asm8086Parser::RsContext>(0);
}


size_t asm8086Parser::AssemblerdirectiveContext::getRuleIndex() const {
  return asm8086Parser::RuleAssemblerdirective;
}


antlrcpp::Any asm8086Parser::AssemblerdirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitAssemblerdirective(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::AssemblerdirectiveContext* asm8086Parser::assemblerdirective() {
  AssemblerdirectiveContext *_localctx = _tracker.createInstance<AssemblerdirectiveContext>(_ctx, getState());
  enterRule(_localctx, 8, asm8086Parser::RuleAssemblerdirective);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(126);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(110);
      org();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(111);
      end();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(112);
      if_();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(113);
      endif_();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(114);
      equ();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(115);
      db();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(116);
      dw();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(117);
      cseg();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(118);
      dd();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(119);
      dseg();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(120);
      title();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(121);
      include_();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(122);
      rw();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(123);
      rb();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(124);
      rs();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(125);
      match(asm8086Parser::T__2);
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

//----------------- RwContext ------------------------------------------------------------------

asm8086Parser::RwContext::RwContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::RwContext::RW() {
  return getToken(asm8086Parser::RW, 0);
}

asm8086Parser::ExpressionContext* asm8086Parser::RwContext::expression() {
  return getRuleContext<asm8086Parser::ExpressionContext>(0);
}

asm8086Parser::NameContext* asm8086Parser::RwContext::name() {
  return getRuleContext<asm8086Parser::NameContext>(0);
}


size_t asm8086Parser::RwContext::getRuleIndex() const {
  return asm8086Parser::RuleRw;
}


antlrcpp::Any asm8086Parser::RwContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitRw(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::RwContext* asm8086Parser::rw() {
  RwContext *_localctx = _tracker.createInstance<RwContext>(_ctx, getState());
  enterRule(_localctx, 10, asm8086Parser::RuleRw);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == asm8086Parser::NAME) {
      setState(128);
      name();
    }
    setState(131);
    match(asm8086Parser::RW);
    setState(132);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RbContext ------------------------------------------------------------------

asm8086Parser::RbContext::RbContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::RbContext::RB() {
  return getToken(asm8086Parser::RB, 0);
}

asm8086Parser::ExpressionContext* asm8086Parser::RbContext::expression() {
  return getRuleContext<asm8086Parser::ExpressionContext>(0);
}

asm8086Parser::NameContext* asm8086Parser::RbContext::name() {
  return getRuleContext<asm8086Parser::NameContext>(0);
}


size_t asm8086Parser::RbContext::getRuleIndex() const {
  return asm8086Parser::RuleRb;
}


antlrcpp::Any asm8086Parser::RbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitRb(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::RbContext* asm8086Parser::rb() {
  RbContext *_localctx = _tracker.createInstance<RbContext>(_ctx, getState());
  enterRule(_localctx, 12, asm8086Parser::RuleRb);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == asm8086Parser::NAME) {
      setState(134);
      name();
    }
    setState(137);
    match(asm8086Parser::RB);
    setState(138);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RsContext ------------------------------------------------------------------

asm8086Parser::RsContext::RsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::RsContext::RS() {
  return getToken(asm8086Parser::RS, 0);
}

asm8086Parser::ExpressionContext* asm8086Parser::RsContext::expression() {
  return getRuleContext<asm8086Parser::ExpressionContext>(0);
}

asm8086Parser::NameContext* asm8086Parser::RsContext::name() {
  return getRuleContext<asm8086Parser::NameContext>(0);
}


size_t asm8086Parser::RsContext::getRuleIndex() const {
  return asm8086Parser::RuleRs;
}


antlrcpp::Any asm8086Parser::RsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitRs(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::RsContext* asm8086Parser::rs() {
  RsContext *_localctx = _tracker.createInstance<RsContext>(_ctx, getState());
  enterRule(_localctx, 14, asm8086Parser::RuleRs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == asm8086Parser::NAME) {
      setState(140);
      name();
    }
    setState(143);
    match(asm8086Parser::RS);
    setState(144);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CsegContext ------------------------------------------------------------------

asm8086Parser::CsegContext::CsegContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::CsegContext::CSEG() {
  return getToken(asm8086Parser::CSEG, 0);
}

asm8086Parser::ExpressionContext* asm8086Parser::CsegContext::expression() {
  return getRuleContext<asm8086Parser::ExpressionContext>(0);
}


size_t asm8086Parser::CsegContext::getRuleIndex() const {
  return asm8086Parser::RuleCseg;
}


antlrcpp::Any asm8086Parser::CsegContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitCseg(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::CsegContext* asm8086Parser::cseg() {
  CsegContext *_localctx = _tracker.createInstance<CsegContext>(_ctx, getState());
  enterRule(_localctx, 16, asm8086Parser::RuleCseg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(asm8086Parser::CSEG);
    setState(148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << asm8086Parser::T__3)
      | (1ULL << asm8086Parser::T__12)
      | (1ULL << asm8086Parser::BYTE)
      | (1ULL << asm8086Parser::WORD)
      | (1ULL << asm8086Parser::DWORD)
      | (1ULL << asm8086Parser::PTR)
      | (1ULL << asm8086Parser::NOT)
      | (1ULL << asm8086Parser::OFFSET)
      | (1ULL << asm8086Parser::LENGTH)
      | (1ULL << asm8086Parser::REGISTER)
      | (1ULL << asm8086Parser::DOLLAR)
      | (1ULL << asm8086Parser::SIGN)
      | (1ULL << asm8086Parser::NAME)
      | (1ULL << asm8086Parser::NUMBER)
      | (1ULL << asm8086Parser::STRING))) != 0)) {
      setState(147);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DsegContext ------------------------------------------------------------------

asm8086Parser::DsegContext::DsegContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::DsegContext::DSEG() {
  return getToken(asm8086Parser::DSEG, 0);
}

asm8086Parser::ExpressionContext* asm8086Parser::DsegContext::expression() {
  return getRuleContext<asm8086Parser::ExpressionContext>(0);
}


size_t asm8086Parser::DsegContext::getRuleIndex() const {
  return asm8086Parser::RuleDseg;
}


antlrcpp::Any asm8086Parser::DsegContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitDseg(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::DsegContext* asm8086Parser::dseg() {
  DsegContext *_localctx = _tracker.createInstance<DsegContext>(_ctx, getState());
  enterRule(_localctx, 18, asm8086Parser::RuleDseg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(asm8086Parser::DSEG);
    setState(152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << asm8086Parser::T__3)
      | (1ULL << asm8086Parser::T__12)
      | (1ULL << asm8086Parser::BYTE)
      | (1ULL << asm8086Parser::WORD)
      | (1ULL << asm8086Parser::DWORD)
      | (1ULL << asm8086Parser::PTR)
      | (1ULL << asm8086Parser::NOT)
      | (1ULL << asm8086Parser::OFFSET)
      | (1ULL << asm8086Parser::LENGTH)
      | (1ULL << asm8086Parser::REGISTER)
      | (1ULL << asm8086Parser::DOLLAR)
      | (1ULL << asm8086Parser::SIGN)
      | (1ULL << asm8086Parser::NAME)
      | (1ULL << asm8086Parser::NUMBER)
      | (1ULL << asm8086Parser::STRING))) != 0)) {
      setState(151);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DwContext ------------------------------------------------------------------

asm8086Parser::DwContext::DwContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::DwContext::DW() {
  return getToken(asm8086Parser::DW, 0);
}

asm8086Parser::ExpressionlistContext* asm8086Parser::DwContext::expressionlist() {
  return getRuleContext<asm8086Parser::ExpressionlistContext>(0);
}


size_t asm8086Parser::DwContext::getRuleIndex() const {
  return asm8086Parser::RuleDw;
}


antlrcpp::Any asm8086Parser::DwContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitDw(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::DwContext* asm8086Parser::dw() {
  DwContext *_localctx = _tracker.createInstance<DwContext>(_ctx, getState());
  enterRule(_localctx, 20, asm8086Parser::RuleDw);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(asm8086Parser::DW);
    setState(155);
    expressionlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DbContext ------------------------------------------------------------------

asm8086Parser::DbContext::DbContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::DbContext::DB() {
  return getToken(asm8086Parser::DB, 0);
}

asm8086Parser::ExpressionlistContext* asm8086Parser::DbContext::expressionlist() {
  return getRuleContext<asm8086Parser::ExpressionlistContext>(0);
}


size_t asm8086Parser::DbContext::getRuleIndex() const {
  return asm8086Parser::RuleDb;
}


antlrcpp::Any asm8086Parser::DbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitDb(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::DbContext* asm8086Parser::db() {
  DbContext *_localctx = _tracker.createInstance<DbContext>(_ctx, getState());
  enterRule(_localctx, 22, asm8086Parser::RuleDb);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(asm8086Parser::DB);
    setState(158);
    expressionlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DdContext ------------------------------------------------------------------

asm8086Parser::DdContext::DdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::DdContext::DD() {
  return getToken(asm8086Parser::DD, 0);
}

asm8086Parser::ExpressionlistContext* asm8086Parser::DdContext::expressionlist() {
  return getRuleContext<asm8086Parser::ExpressionlistContext>(0);
}


size_t asm8086Parser::DdContext::getRuleIndex() const {
  return asm8086Parser::RuleDd;
}


antlrcpp::Any asm8086Parser::DdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitDd(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::DdContext* asm8086Parser::dd() {
  DdContext *_localctx = _tracker.createInstance<DdContext>(_ctx, getState());
  enterRule(_localctx, 24, asm8086Parser::RuleDd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(asm8086Parser::DD);
    setState(161);
    expressionlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EquContext ------------------------------------------------------------------

asm8086Parser::EquContext::EquContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm8086Parser::NameContext* asm8086Parser::EquContext::name() {
  return getRuleContext<asm8086Parser::NameContext>(0);
}

tree::TerminalNode* asm8086Parser::EquContext::EQU() {
  return getToken(asm8086Parser::EQU, 0);
}

asm8086Parser::ExpressionContext* asm8086Parser::EquContext::expression() {
  return getRuleContext<asm8086Parser::ExpressionContext>(0);
}


size_t asm8086Parser::EquContext::getRuleIndex() const {
  return asm8086Parser::RuleEqu;
}


antlrcpp::Any asm8086Parser::EquContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitEqu(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::EquContext* asm8086Parser::equ() {
  EquContext *_localctx = _tracker.createInstance<EquContext>(_ctx, getState());
  enterRule(_localctx, 26, asm8086Parser::RuleEqu);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    name();
    setState(164);
    match(asm8086Parser::EQU);
    setState(165);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_Context ------------------------------------------------------------------

asm8086Parser::If_Context::If_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::If_Context::IF() {
  return getToken(asm8086Parser::IF, 0);
}

asm8086Parser::AssemblerexpressionContext* asm8086Parser::If_Context::assemblerexpression() {
  return getRuleContext<asm8086Parser::AssemblerexpressionContext>(0);
}


size_t asm8086Parser::If_Context::getRuleIndex() const {
  return asm8086Parser::RuleIf_;
}


antlrcpp::Any asm8086Parser::If_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitIf_(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::If_Context* asm8086Parser::if_() {
  If_Context *_localctx = _tracker.createInstance<If_Context>(_ctx, getState());
  enterRule(_localctx, 28, asm8086Parser::RuleIf_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(asm8086Parser::IF);
    setState(168);
    assemblerexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblerexpressionContext ------------------------------------------------------------------

asm8086Parser::AssemblerexpressionContext::AssemblerexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<asm8086Parser::AssemblertermContext *> asm8086Parser::AssemblerexpressionContext::assemblerterm() {
  return getRuleContexts<asm8086Parser::AssemblertermContext>();
}

asm8086Parser::AssemblertermContext* asm8086Parser::AssemblerexpressionContext::assemblerterm(size_t i) {
  return getRuleContext<asm8086Parser::AssemblertermContext>(i);
}

std::vector<asm8086Parser::AssemblerlogicalContext *> asm8086Parser::AssemblerexpressionContext::assemblerlogical() {
  return getRuleContexts<asm8086Parser::AssemblerlogicalContext>();
}

asm8086Parser::AssemblerlogicalContext* asm8086Parser::AssemblerexpressionContext::assemblerlogical(size_t i) {
  return getRuleContext<asm8086Parser::AssemblerlogicalContext>(i);
}

asm8086Parser::AssemblerexpressionContext* asm8086Parser::AssemblerexpressionContext::assemblerexpression() {
  return getRuleContext<asm8086Parser::AssemblerexpressionContext>(0);
}


size_t asm8086Parser::AssemblerexpressionContext::getRuleIndex() const {
  return asm8086Parser::RuleAssemblerexpression;
}


antlrcpp::Any asm8086Parser::AssemblerexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitAssemblerexpression(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::AssemblerexpressionContext* asm8086Parser::assemblerexpression() {
  AssemblerexpressionContext *_localctx = _tracker.createInstance<AssemblerexpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, asm8086Parser::RuleAssemblerexpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case asm8086Parser::NOT:
      case asm8086Parser::SIGN:
      case asm8086Parser::NAME:
      case asm8086Parser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(170);
        assemblerterm();
        setState(176);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == asm8086Parser::T__5

        || _la == asm8086Parser::T__6) {
          setState(171);
          assemblerlogical();
          setState(172);
          assemblerterm();
          setState(178);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case asm8086Parser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(179);
        match(asm8086Parser::T__3);
        setState(180);
        assemblerexpression();
        setState(181);
        match(asm8086Parser::T__4);
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

//----------------- AssemblerlogicalContext ------------------------------------------------------------------

asm8086Parser::AssemblerlogicalContext::AssemblerlogicalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t asm8086Parser::AssemblerlogicalContext::getRuleIndex() const {
  return asm8086Parser::RuleAssemblerlogical;
}


antlrcpp::Any asm8086Parser::AssemblerlogicalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitAssemblerlogical(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::AssemblerlogicalContext* asm8086Parser::assemblerlogical() {
  AssemblerlogicalContext *_localctx = _tracker.createInstance<AssemblerlogicalContext>(_ctx, getState());
  enterRule(_localctx, 32, asm8086Parser::RuleAssemblerlogical);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    _la = _input->LA(1);
    if (!(_la == asm8086Parser::T__5

    || _la == asm8086Parser::T__6)) {
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

//----------------- AssemblertermContext ------------------------------------------------------------------

asm8086Parser::AssemblertermContext::AssemblertermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm8086Parser::NameContext* asm8086Parser::AssemblertermContext::name() {
  return getRuleContext<asm8086Parser::NameContext>(0);
}

asm8086Parser::NumberContext* asm8086Parser::AssemblertermContext::number() {
  return getRuleContext<asm8086Parser::NumberContext>(0);
}

tree::TerminalNode* asm8086Parser::AssemblertermContext::NOT() {
  return getToken(asm8086Parser::NOT, 0);
}

asm8086Parser::AssemblertermContext* asm8086Parser::AssemblertermContext::assemblerterm() {
  return getRuleContext<asm8086Parser::AssemblertermContext>(0);
}


size_t asm8086Parser::AssemblertermContext::getRuleIndex() const {
  return asm8086Parser::RuleAssemblerterm;
}


antlrcpp::Any asm8086Parser::AssemblertermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitAssemblerterm(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::AssemblertermContext* asm8086Parser::assemblerterm() {
  AssemblertermContext *_localctx = _tracker.createInstance<AssemblertermContext>(_ctx, getState());
  enterRule(_localctx, 34, asm8086Parser::RuleAssemblerterm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(191);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case asm8086Parser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(187);
        name();
        break;
      }

      case asm8086Parser::SIGN:
      case asm8086Parser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(188);
        number();
        break;
      }

      case asm8086Parser::NOT: {
        enterOuterAlt(_localctx, 3);
        setState(189);
        match(asm8086Parser::NOT);
        setState(190);
        assemblerterm();
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

//----------------- Endif_Context ------------------------------------------------------------------

asm8086Parser::Endif_Context::Endif_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::Endif_Context::ENDIF() {
  return getToken(asm8086Parser::ENDIF, 0);
}


size_t asm8086Parser::Endif_Context::getRuleIndex() const {
  return asm8086Parser::RuleEndif_;
}


antlrcpp::Any asm8086Parser::Endif_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitEndif_(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::Endif_Context* asm8086Parser::endif_() {
  Endif_Context *_localctx = _tracker.createInstance<Endif_Context>(_ctx, getState());
  enterRule(_localctx, 36, asm8086Parser::RuleEndif_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    match(asm8086Parser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndContext ------------------------------------------------------------------

asm8086Parser::EndContext::EndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::EndContext::END() {
  return getToken(asm8086Parser::END, 0);
}


size_t asm8086Parser::EndContext::getRuleIndex() const {
  return asm8086Parser::RuleEnd;
}


antlrcpp::Any asm8086Parser::EndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitEnd(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::EndContext* asm8086Parser::end() {
  EndContext *_localctx = _tracker.createInstance<EndContext>(_ctx, getState());
  enterRule(_localctx, 38, asm8086Parser::RuleEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(asm8086Parser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrgContext ------------------------------------------------------------------

asm8086Parser::OrgContext::OrgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::OrgContext::ORG() {
  return getToken(asm8086Parser::ORG, 0);
}

asm8086Parser::ExpressionContext* asm8086Parser::OrgContext::expression() {
  return getRuleContext<asm8086Parser::ExpressionContext>(0);
}


size_t asm8086Parser::OrgContext::getRuleIndex() const {
  return asm8086Parser::RuleOrg;
}


antlrcpp::Any asm8086Parser::OrgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitOrg(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::OrgContext* asm8086Parser::org() {
  OrgContext *_localctx = _tracker.createInstance<OrgContext>(_ctx, getState());
  enterRule(_localctx, 40, asm8086Parser::RuleOrg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(asm8086Parser::ORG);
    setState(198);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TitleContext ------------------------------------------------------------------

asm8086Parser::TitleContext::TitleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::TitleContext::TITLE() {
  return getToken(asm8086Parser::TITLE, 0);
}

asm8086Parser::String_Context* asm8086Parser::TitleContext::string_() {
  return getRuleContext<asm8086Parser::String_Context>(0);
}


size_t asm8086Parser::TitleContext::getRuleIndex() const {
  return asm8086Parser::RuleTitle;
}


antlrcpp::Any asm8086Parser::TitleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitTitle(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::TitleContext* asm8086Parser::title() {
  TitleContext *_localctx = _tracker.createInstance<TitleContext>(_ctx, getState());
  enterRule(_localctx, 42, asm8086Parser::RuleTitle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(asm8086Parser::TITLE);
    setState(201);
    string_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Include_Context ------------------------------------------------------------------

asm8086Parser::Include_Context::Include_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::Include_Context::INCLUDE() {
  return getToken(asm8086Parser::INCLUDE, 0);
}

asm8086Parser::NameContext* asm8086Parser::Include_Context::name() {
  return getRuleContext<asm8086Parser::NameContext>(0);
}


size_t asm8086Parser::Include_Context::getRuleIndex() const {
  return asm8086Parser::RuleInclude_;
}


antlrcpp::Any asm8086Parser::Include_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitInclude_(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::Include_Context* asm8086Parser::include_() {
  Include_Context *_localctx = _tracker.createInstance<Include_Context>(_ctx, getState());
  enterRule(_localctx, 44, asm8086Parser::RuleInclude_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    match(asm8086Parser::INCLUDE);
    setState(204);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionlistContext ------------------------------------------------------------------

asm8086Parser::ExpressionlistContext::ExpressionlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<asm8086Parser::ExpressionContext *> asm8086Parser::ExpressionlistContext::expression() {
  return getRuleContexts<asm8086Parser::ExpressionContext>();
}

asm8086Parser::ExpressionContext* asm8086Parser::ExpressionlistContext::expression(size_t i) {
  return getRuleContext<asm8086Parser::ExpressionContext>(i);
}


size_t asm8086Parser::ExpressionlistContext::getRuleIndex() const {
  return asm8086Parser::RuleExpressionlist;
}


antlrcpp::Any asm8086Parser::ExpressionlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitExpressionlist(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::ExpressionlistContext* asm8086Parser::expressionlist() {
  ExpressionlistContext *_localctx = _tracker.createInstance<ExpressionlistContext>(_ctx, getState());
  enterRule(_localctx, 46, asm8086Parser::RuleExpressionlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    expression();
    setState(211);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == asm8086Parser::T__7) {
      setState(207);
      match(asm8086Parser::T__7);
      setState(208);
      expression();
      setState(213);
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

//----------------- LabelContext ------------------------------------------------------------------

asm8086Parser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm8086Parser::NameContext* asm8086Parser::LabelContext::name() {
  return getRuleContext<asm8086Parser::NameContext>(0);
}


size_t asm8086Parser::LabelContext::getRuleIndex() const {
  return asm8086Parser::RuleLabel;
}


antlrcpp::Any asm8086Parser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::LabelContext* asm8086Parser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 48, asm8086Parser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

asm8086Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<asm8086Parser::MultiplyingExpressionContext *> asm8086Parser::ExpressionContext::multiplyingExpression() {
  return getRuleContexts<asm8086Parser::MultiplyingExpressionContext>();
}

asm8086Parser::MultiplyingExpressionContext* asm8086Parser::ExpressionContext::multiplyingExpression(size_t i) {
  return getRuleContext<asm8086Parser::MultiplyingExpressionContext>(i);
}

std::vector<tree::TerminalNode *> asm8086Parser::ExpressionContext::SIGN() {
  return getTokens(asm8086Parser::SIGN);
}

tree::TerminalNode* asm8086Parser::ExpressionContext::SIGN(size_t i) {
  return getToken(asm8086Parser::SIGN, i);
}


size_t asm8086Parser::ExpressionContext::getRuleIndex() const {
  return asm8086Parser::RuleExpression;
}


antlrcpp::Any asm8086Parser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::ExpressionContext* asm8086Parser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 50, asm8086Parser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(216);
    multiplyingExpression();
    setState(221);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(217);
        match(asm8086Parser::SIGN);
        setState(218);
        multiplyingExpression(); 
      }
      setState(223);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplyingExpressionContext ------------------------------------------------------------------

asm8086Parser::MultiplyingExpressionContext::MultiplyingExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<asm8086Parser::ArgumentContext *> asm8086Parser::MultiplyingExpressionContext::argument() {
  return getRuleContexts<asm8086Parser::ArgumentContext>();
}

asm8086Parser::ArgumentContext* asm8086Parser::MultiplyingExpressionContext::argument(size_t i) {
  return getRuleContext<asm8086Parser::ArgumentContext>(i);
}


size_t asm8086Parser::MultiplyingExpressionContext::getRuleIndex() const {
  return asm8086Parser::RuleMultiplyingExpression;
}


antlrcpp::Any asm8086Parser::MultiplyingExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitMultiplyingExpression(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::MultiplyingExpressionContext* asm8086Parser::multiplyingExpression() {
  MultiplyingExpressionContext *_localctx = _tracker.createInstance<MultiplyingExpressionContext>(_ctx, getState());
  enterRule(_localctx, 52, asm8086Parser::RuleMultiplyingExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(224);
    argument();
    setState(229);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(225);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << asm8086Parser::T__8)
          | (1ULL << asm8086Parser::T__9)
          | (1ULL << asm8086Parser::T__10)
          | (1ULL << asm8086Parser::T__11))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(226);
        argument(); 
      }
      setState(231);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

asm8086Parser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm8086Parser::NumberContext* asm8086Parser::ArgumentContext::number() {
  return getRuleContext<asm8086Parser::NumberContext>(0);
}

asm8086Parser::DollarContext* asm8086Parser::ArgumentContext::dollar() {
  return getRuleContext<asm8086Parser::DollarContext>(0);
}

asm8086Parser::Register_Context* asm8086Parser::ArgumentContext::register_() {
  return getRuleContext<asm8086Parser::Register_Context>(0);
}

asm8086Parser::NameContext* asm8086Parser::ArgumentContext::name() {
  return getRuleContext<asm8086Parser::NameContext>(0);
}

asm8086Parser::String_Context* asm8086Parser::ArgumentContext::string_() {
  return getRuleContext<asm8086Parser::String_Context>(0);
}

asm8086Parser::ExpressionContext* asm8086Parser::ArgumentContext::expression() {
  return getRuleContext<asm8086Parser::ExpressionContext>(0);
}

asm8086Parser::PtrContext* asm8086Parser::ArgumentContext::ptr() {
  return getRuleContext<asm8086Parser::PtrContext>(0);
}

tree::TerminalNode* asm8086Parser::ArgumentContext::NOT() {
  return getToken(asm8086Parser::NOT, 0);
}

tree::TerminalNode* asm8086Parser::ArgumentContext::OFFSET() {
  return getToken(asm8086Parser::OFFSET, 0);
}

tree::TerminalNode* asm8086Parser::ArgumentContext::LENGTH() {
  return getToken(asm8086Parser::LENGTH, 0);
}


size_t asm8086Parser::ArgumentContext::getRuleIndex() const {
  return asm8086Parser::RuleArgument;
}


antlrcpp::Any asm8086Parser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::ArgumentContext* asm8086Parser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 54, asm8086Parser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(263);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(232);
      number();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(233);
      dollar();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(234);
      register_();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(235);
      name();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(236);
      string_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(237);
      match(asm8086Parser::T__3);
      setState(238);
      expression();
      setState(239);
      match(asm8086Parser::T__4);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(243);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case asm8086Parser::SIGN:
        case asm8086Parser::NUMBER: {
          setState(241);
          number();
          break;
        }

        case asm8086Parser::NAME: {
          setState(242);
          name();
          break;
        }

        case asm8086Parser::T__12: {
          break;
        }

      default:
        break;
      }
      setState(245);
      match(asm8086Parser::T__12);
      setState(246);
      expression();
      setState(247);
      match(asm8086Parser::T__13);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(249);
      ptr();
      setState(250);
      expression();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(252);
      match(asm8086Parser::NOT);
      setState(253);
      expression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(254);
      match(asm8086Parser::OFFSET);
      setState(255);
      expression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(256);
      match(asm8086Parser::LENGTH);
      setState(257);
      expression();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(258);
      register_();
      setState(259);
      match(asm8086Parser::T__1);
      setState(261);
      expression();
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

//----------------- PtrContext ------------------------------------------------------------------

asm8086Parser::PtrContext::PtrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::PtrContext::PTR() {
  return getToken(asm8086Parser::PTR, 0);
}

tree::TerminalNode* asm8086Parser::PtrContext::BYTE() {
  return getToken(asm8086Parser::BYTE, 0);
}

tree::TerminalNode* asm8086Parser::PtrContext::WORD() {
  return getToken(asm8086Parser::WORD, 0);
}

tree::TerminalNode* asm8086Parser::PtrContext::DWORD() {
  return getToken(asm8086Parser::DWORD, 0);
}


size_t asm8086Parser::PtrContext::getRuleIndex() const {
  return asm8086Parser::RulePtr;
}


antlrcpp::Any asm8086Parser::PtrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitPtr(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::PtrContext* asm8086Parser::ptr() {
  PtrContext *_localctx = _tracker.createInstance<PtrContext>(_ctx, getState());
  enterRule(_localctx, 56, asm8086Parser::RulePtr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << asm8086Parser::BYTE)
      | (1ULL << asm8086Parser::WORD)
      | (1ULL << asm8086Parser::DWORD))) != 0)) {
      setState(265);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << asm8086Parser::BYTE)
        | (1ULL << asm8086Parser::WORD)
        | (1ULL << asm8086Parser::DWORD))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(268);
    match(asm8086Parser::PTR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DollarContext ------------------------------------------------------------------

asm8086Parser::DollarContext::DollarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::DollarContext::DOLLAR() {
  return getToken(asm8086Parser::DOLLAR, 0);
}


size_t asm8086Parser::DollarContext::getRuleIndex() const {
  return asm8086Parser::RuleDollar;
}


antlrcpp::Any asm8086Parser::DollarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitDollar(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::DollarContext* asm8086Parser::dollar() {
  DollarContext *_localctx = _tracker.createInstance<DollarContext>(_ctx, getState());
  enterRule(_localctx, 58, asm8086Parser::RuleDollar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(asm8086Parser::DOLLAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Register_Context ------------------------------------------------------------------

asm8086Parser::Register_Context::Register_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::Register_Context::REGISTER() {
  return getToken(asm8086Parser::REGISTER, 0);
}


size_t asm8086Parser::Register_Context::getRuleIndex() const {
  return asm8086Parser::RuleRegister_;
}


antlrcpp::Any asm8086Parser::Register_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitRegister_(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::Register_Context* asm8086Parser::register_() {
  Register_Context *_localctx = _tracker.createInstance<Register_Context>(_ctx, getState());
  enterRule(_localctx, 60, asm8086Parser::RuleRegister_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(asm8086Parser::REGISTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_Context ------------------------------------------------------------------

asm8086Parser::String_Context::String_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::String_Context::STRING() {
  return getToken(asm8086Parser::STRING, 0);
}


size_t asm8086Parser::String_Context::getRuleIndex() const {
  return asm8086Parser::RuleString_;
}


antlrcpp::Any asm8086Parser::String_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitString_(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::String_Context* asm8086Parser::string_() {
  String_Context *_localctx = _tracker.createInstance<String_Context>(_ctx, getState());
  enterRule(_localctx, 62, asm8086Parser::RuleString_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(asm8086Parser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

asm8086Parser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::NameContext::NAME() {
  return getToken(asm8086Parser::NAME, 0);
}


size_t asm8086Parser::NameContext::getRuleIndex() const {
  return asm8086Parser::RuleName;
}


antlrcpp::Any asm8086Parser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::NameContext* asm8086Parser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 64, asm8086Parser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(asm8086Parser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

asm8086Parser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::NumberContext::NUMBER() {
  return getToken(asm8086Parser::NUMBER, 0);
}

tree::TerminalNode* asm8086Parser::NumberContext::SIGN() {
  return getToken(asm8086Parser::SIGN, 0);
}


size_t asm8086Parser::NumberContext::getRuleIndex() const {
  return asm8086Parser::RuleNumber;
}


antlrcpp::Any asm8086Parser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::NumberContext* asm8086Parser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 66, asm8086Parser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == asm8086Parser::SIGN) {
      setState(278);
      match(asm8086Parser::SIGN);
    }
    setState(281);
    match(asm8086Parser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpcodeContext ------------------------------------------------------------------

asm8086Parser::OpcodeContext::OpcodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::OpcodeContext::OPCODE() {
  return getToken(asm8086Parser::OPCODE, 0);
}


size_t asm8086Parser::OpcodeContext::getRuleIndex() const {
  return asm8086Parser::RuleOpcode;
}


antlrcpp::Any asm8086Parser::OpcodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitOpcode(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::OpcodeContext* asm8086Parser::opcode() {
  OpcodeContext *_localctx = _tracker.createInstance<OpcodeContext>(_ctx, getState());
  enterRule(_localctx, 68, asm8086Parser::RuleOpcode);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    match(asm8086Parser::OPCODE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepContext ------------------------------------------------------------------

asm8086Parser::RepContext::RepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::RepContext::REP() {
  return getToken(asm8086Parser::REP, 0);
}


size_t asm8086Parser::RepContext::getRuleIndex() const {
  return asm8086Parser::RuleRep;
}


antlrcpp::Any asm8086Parser::RepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitRep(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::RepContext* asm8086Parser::rep() {
  RepContext *_localctx = _tracker.createInstance<RepContext>(_ctx, getState());
  enterRule(_localctx, 70, asm8086Parser::RuleRep);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    match(asm8086Parser::REP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommentContext ------------------------------------------------------------------

asm8086Parser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm8086Parser::CommentContext::COMMENT() {
  return getToken(asm8086Parser::COMMENT, 0);
}


size_t asm8086Parser::CommentContext::getRuleIndex() const {
  return asm8086Parser::RuleComment;
}


antlrcpp::Any asm8086Parser::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<asm8086Visitor*>(visitor))
    return parserVisitor->visitComment(this);
  else
    return visitor->visitChildren(this);
}

asm8086Parser::CommentContext* asm8086Parser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 72, asm8086Parser::RuleComment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    match(asm8086Parser::COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> asm8086Parser::_decisionToDFA;
atn::PredictionContextCache asm8086Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN asm8086Parser::_atn;
std::vector<uint16_t> asm8086Parser::_serializedATN;

std::vector<std::string> asm8086Parser::_ruleNames = {
  "prog", "line", "instruction", "lbl", "assemblerdirective", "rw", "rb", 
  "rs", "cseg", "dseg", "dw", "db", "dd", "equ", "if_", "assemblerexpression", 
  "assemblerlogical", "assemblerterm", "endif_", "end", "org", "title", 
  "include_", "expressionlist", "label", "expression", "multiplyingExpression", 
  "argument", "ptr", "dollar", "register_", "string_", "name", "number", 
  "opcode", "rep", "comment"
};

std::vector<std::string> asm8086Parser::_literalNames = {
  "", "'!'", "':'", "'.'", "'('", "')'", "'eq'", "'ne'", "','", "'*'", "'/'", 
  "'mod'", "'and'", "'['", "']'", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'$'"
};

std::vector<std::string> asm8086Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "BYTE", "WORD", 
  "DWORD", "DSEG", "CSEG", "INCLUDE", "TITLE", "END", "ORG", "ENDIF", "IF", 
  "EQU", "DW", "DB", "DD", "PTR", "NOT", "OFFSET", "RW", "RB", "RS", "LENGTH", 
  "COMMENT", "REGISTER", "OPCODE", "REP", "DOLLAR", "SIGN", "NAME", "NUMBER", 
  "STRING", "EOL", "WS"
};

dfa::Vocabulary asm8086Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> asm8086Parser::_tokenNames;

asm8086Parser::Initializer::Initializer() {
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x31, 0x124, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x50, 0xa, 0x2, 
       0xc, 0x2, 0xe, 0x2, 0x53, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 
       0x57, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x5a, 0xb, 0x2, 0x3, 0x3, 0x5, 
       0x3, 0x5d, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x61, 0xa, 0x3, 
       0x3, 0x3, 0x5, 0x3, 0x64, 0xa, 0x3, 0x3, 0x4, 0x5, 0x4, 0x67, 0xa, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x6b, 0xa, 0x4, 0x3, 0x5, 0x3, 
       0x5, 0x5, 0x5, 0x6f, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
       0x6, 0x81, 0xa, 0x6, 0x3, 0x7, 0x5, 0x7, 0x84, 0xa, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x5, 0x8, 0x8a, 0xa, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x5, 0x9, 0x90, 0xa, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x97, 0xa, 0xa, 
       0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x9b, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 
       0xb1, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xb4, 0xb, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xba, 0xa, 0x11, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 
       0x13, 0xc2, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x7, 0x19, 0xd4, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0xd7, 0xb, 0x19, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 
       0xde, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0xe1, 0xb, 0x1b, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0xe6, 0xa, 0x1c, 0xc, 0x1c, 0xe, 
       0x1c, 0xe9, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x5, 0x1d, 0xf6, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x10a, 0xa, 0x1d, 
       0x3, 0x1e, 0x5, 0x1e, 0x10d, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x23, 0x5, 0x23, 0x11a, 0xa, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x2, 0x2, 0x27, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
       0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
       0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
       0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x2, 0x5, 0x3, 
       0x2, 0x8, 0x9, 0x3, 0x2, 0xb, 0xe, 0x3, 0x2, 0x11, 0x13, 0x2, 0x131, 
       0x2, 0x58, 0x3, 0x2, 0x2, 0x2, 0x4, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x6, 
       0x66, 0x3, 0x2, 0x2, 0x2, 0x8, 0x6c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x80, 
       0x3, 0x2, 0x2, 0x2, 0xc, 0x83, 0x3, 0x2, 0x2, 0x2, 0xe, 0x89, 0x3, 
       0x2, 0x2, 0x2, 0x10, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x94, 0x3, 0x2, 
       0x2, 0x2, 0x14, 0x98, 0x3, 0x2, 0x2, 0x2, 0x16, 0x9c, 0x3, 0x2, 0x2, 
       0x2, 0x18, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa2, 0x3, 0x2, 0x2, 0x2, 
       0x1c, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0xb9, 0x3, 0x2, 0x2, 0x2, 0x22, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x24, 0xc1, 
       0x3, 0x2, 0x2, 0x2, 0x26, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x28, 0xc5, 0x3, 
       0x2, 0x2, 0x2, 0x2a, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xca, 0x3, 0x2, 
       0x2, 0x2, 0x2e, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x30, 0xd0, 0x3, 0x2, 0x2, 
       0x2, 0x32, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x34, 0xda, 0x3, 0x2, 0x2, 0x2, 
       0x36, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x38, 0x109, 0x3, 0x2, 0x2, 0x2, 
       0x3a, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x110, 0x3, 0x2, 0x2, 0x2, 
       0x3e, 0x112, 0x3, 0x2, 0x2, 0x2, 0x40, 0x114, 0x3, 0x2, 0x2, 0x2, 
       0x42, 0x116, 0x3, 0x2, 0x2, 0x2, 0x44, 0x119, 0x3, 0x2, 0x2, 0x2, 
       0x46, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x48, 0x11f, 0x3, 0x2, 0x2, 0x2, 
       0x4a, 0x121, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x51, 0x5, 0x4, 0x3, 0x2, 
       0x4d, 0x4e, 0x7, 0x3, 0x2, 0x2, 0x4e, 0x50, 0x5, 0x4, 0x3, 0x2, 0x4f, 
       0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x54, 0x3, 
       0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0x30, 
       0x2, 0x2, 0x55, 0x57, 0x3, 0x2, 0x2, 0x2, 0x56, 0x4c, 0x3, 0x2, 0x2, 
       0x2, 0x57, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 
       0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x3, 0x3, 0x2, 0x2, 0x2, 0x5a, 
       0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5d, 0x5, 0x8, 0x5, 0x2, 0x5c, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x60, 0x3, 
       0x2, 0x2, 0x2, 0x5e, 0x61, 0x5, 0xa, 0x6, 0x2, 0x5f, 0x61, 0x5, 0x6, 
       0x4, 0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 
       0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x63, 0x3, 0x2, 0x2, 0x2, 
       0x62, 0x64, 0x5, 0x4a, 0x26, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 
       0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x5, 0x3, 0x2, 0x2, 0x2, 0x65, 
       0x67, 0x5, 0x48, 0x25, 0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x66, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6a, 
       0x5, 0x46, 0x24, 0x2, 0x69, 0x6b, 0x5, 0x30, 0x19, 0x2, 0x6a, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x7, 0x3, 
       0x2, 0x2, 0x2, 0x6c, 0x6e, 0x5, 0x32, 0x1a, 0x2, 0x6d, 0x6f, 0x7, 
       0x4, 0x2, 0x2, 0x6e, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 
       0x2, 0x2, 0x6f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x70, 0x81, 0x5, 0x2a, 0x16, 
       0x2, 0x71, 0x81, 0x5, 0x28, 0x15, 0x2, 0x72, 0x81, 0x5, 0x1e, 0x10, 
       0x2, 0x73, 0x81, 0x5, 0x26, 0x14, 0x2, 0x74, 0x81, 0x5, 0x1c, 0xf, 
       0x2, 0x75, 0x81, 0x5, 0x18, 0xd, 0x2, 0x76, 0x81, 0x5, 0x16, 0xc, 
       0x2, 0x77, 0x81, 0x5, 0x12, 0xa, 0x2, 0x78, 0x81, 0x5, 0x1a, 0xe, 
       0x2, 0x79, 0x81, 0x5, 0x14, 0xb, 0x2, 0x7a, 0x81, 0x5, 0x2c, 0x17, 
       0x2, 0x7b, 0x81, 0x5, 0x2e, 0x18, 0x2, 0x7c, 0x81, 0x5, 0xc, 0x7, 
       0x2, 0x7d, 0x81, 0x5, 0xe, 0x8, 0x2, 0x7e, 0x81, 0x5, 0x10, 0x9, 
       0x2, 0x7f, 0x81, 0x7, 0x5, 0x2, 0x2, 0x80, 0x70, 0x3, 0x2, 0x2, 0x2, 
       0x80, 0x71, 0x3, 0x2, 0x2, 0x2, 0x80, 0x72, 0x3, 0x2, 0x2, 0x2, 0x80, 
       0x73, 0x3, 0x2, 0x2, 0x2, 0x80, 0x74, 0x3, 0x2, 0x2, 0x2, 0x80, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x80, 0x76, 0x3, 0x2, 0x2, 0x2, 0x80, 0x77, 0x3, 
       0x2, 0x2, 0x2, 0x80, 0x78, 0x3, 0x2, 0x2, 0x2, 0x80, 0x79, 0x3, 0x2, 
       0x2, 0x2, 0x80, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7b, 0x3, 0x2, 0x2, 
       0x2, 0x80, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7d, 0x3, 0x2, 0x2, 0x2, 
       0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0x82, 0x84, 0x5, 0x42, 0x22, 0x2, 0x83, 
       0x82, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x23, 0x2, 0x2, 0x86, 0x87, 
       0x5, 0x34, 0x1b, 0x2, 0x87, 0xd, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 
       0x5, 0x42, 0x22, 0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 
       0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 
       0x24, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x34, 0x1b, 0x2, 0x8d, 0xf, 0x3, 
       0x2, 0x2, 0x2, 0x8e, 0x90, 0x5, 0x42, 0x22, 0x2, 0x8f, 0x8e, 0x3, 
       0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 
       0x2, 0x2, 0x91, 0x92, 0x7, 0x25, 0x2, 0x2, 0x92, 0x93, 0x5, 0x34, 
       0x1b, 0x2, 0x93, 0x11, 0x3, 0x2, 0x2, 0x2, 0x94, 0x96, 0x7, 0x15, 
       0x2, 0x2, 0x95, 0x97, 0x5, 0x34, 0x1b, 0x2, 0x96, 0x95, 0x3, 0x2, 
       0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x13, 0x3, 0x2, 0x2, 
       0x2, 0x98, 0x9a, 0x7, 0x14, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x34, 0x1b, 
       0x2, 0x9a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 
       0x9b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x1d, 0x2, 0x2, 
       0x9d, 0x9e, 0x5, 0x30, 0x19, 0x2, 0x9e, 0x17, 0x3, 0x2, 0x2, 0x2, 
       0x9f, 0xa0, 0x7, 0x1e, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x30, 0x19, 0x2, 
       0xa1, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x1f, 0x2, 0x2, 
       0xa3, 0xa4, 0x5, 0x30, 0x19, 0x2, 0xa4, 0x1b, 0x3, 0x2, 0x2, 0x2, 
       0xa5, 0xa6, 0x5, 0x42, 0x22, 0x2, 0xa6, 0xa7, 0x7, 0x1c, 0x2, 0x2, 
       0xa7, 0xa8, 0x5, 0x34, 0x1b, 0x2, 0xa8, 0x1d, 0x3, 0x2, 0x2, 0x2, 
       0xa9, 0xaa, 0x7, 0x1b, 0x2, 0x2, 0xaa, 0xab, 0x5, 0x20, 0x11, 0x2, 
       0xab, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xac, 0xb2, 0x5, 0x24, 0x13, 0x2, 
       0xad, 0xae, 0x5, 0x22, 0x12, 0x2, 0xae, 0xaf, 0x5, 0x24, 0x13, 0x2, 
       0xaf, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb1, 
       0xb4, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 
       0x3, 0x2, 0x2, 0x2, 0xb3, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 
       0x2, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x6, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0x20, 
       0x11, 0x2, 0xb7, 0xb8, 0x7, 0x7, 0x2, 0x2, 0xb8, 0xba, 0x3, 0x2, 
       0x2, 0x2, 0xb9, 0xac, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb5, 0x3, 0x2, 0x2, 
       0x2, 0xba, 0x21, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x9, 0x2, 0x2, 0x2, 
       0xbc, 0x23, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xc2, 0x5, 0x42, 0x22, 0x2, 
       0xbe, 0xc2, 0x5, 0x44, 0x23, 0x2, 0xbf, 0xc0, 0x7, 0x21, 0x2, 0x2, 
       0xc0, 0xc2, 0x5, 0x24, 0x13, 0x2, 0xc1, 0xbd, 0x3, 0x2, 0x2, 0x2, 
       0xc1, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc2, 
       0x25, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x1a, 0x2, 0x2, 0xc4, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x18, 0x2, 0x2, 0xc6, 
       0x29, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x19, 0x2, 0x2, 0xc8, 
       0xc9, 0x5, 0x34, 0x1b, 0x2, 0xc9, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xca, 
       0xcb, 0x7, 0x17, 0x2, 0x2, 0xcb, 0xcc, 0x5, 0x40, 0x21, 0x2, 0xcc, 
       0x2d, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x16, 0x2, 0x2, 0xce, 
       0xcf, 0x5, 0x42, 0x22, 0x2, 0xcf, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xd0, 
       0xd5, 0x5, 0x34, 0x1b, 0x2, 0xd1, 0xd2, 0x7, 0xa, 0x2, 0x2, 0xd2, 
       0xd4, 0x5, 0x34, 0x1b, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 
       0xd7, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 
       0x3, 0x2, 0x2, 0x2, 0xd6, 0x31, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd5, 0x3, 
       0x2, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x42, 0x22, 0x2, 0xd9, 0x33, 0x3, 
       0x2, 0x2, 0x2, 0xda, 0xdf, 0x5, 0x36, 0x1c, 0x2, 0xdb, 0xdc, 0x7, 
       0x2c, 0x2, 0x2, 0xdc, 0xde, 0x5, 0x36, 0x1c, 0x2, 0xdd, 0xdb, 0x3, 
       0x2, 0x2, 0x2, 0xde, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 
       0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x35, 0x3, 0x2, 0x2, 
       0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe7, 0x5, 0x38, 0x1d, 
       0x2, 0xe3, 0xe4, 0x9, 0x3, 0x2, 0x2, 0xe4, 0xe6, 0x5, 0x38, 0x1d, 
       0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe9, 0x3, 0x2, 0x2, 0x2, 
       0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xea, 0x10a, 
       0x5, 0x44, 0x23, 0x2, 0xeb, 0x10a, 0x5, 0x3c, 0x1f, 0x2, 0xec, 0x10a, 
       0x5, 0x3e, 0x20, 0x2, 0xed, 0x10a, 0x5, 0x42, 0x22, 0x2, 0xee, 0x10a, 
       0x5, 0x40, 0x21, 0x2, 0xef, 0xf0, 0x7, 0x6, 0x2, 0x2, 0xf0, 0xf1, 
       0x5, 0x34, 0x1b, 0x2, 0xf1, 0xf2, 0x7, 0x7, 0x2, 0x2, 0xf2, 0x10a, 
       0x3, 0x2, 0x2, 0x2, 0xf3, 0xf6, 0x5, 0x44, 0x23, 0x2, 0xf4, 0xf6, 
       0x5, 0x42, 0x22, 0x2, 0xf5, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf4, 
       0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 
       0x2, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0xf, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x34, 
       0x1b, 0x2, 0xf9, 0xfa, 0x7, 0x10, 0x2, 0x2, 0xfa, 0x10a, 0x3, 0x2, 
       0x2, 0x2, 0xfb, 0xfc, 0x5, 0x3a, 0x1e, 0x2, 0xfc, 0xfd, 0x5, 0x34, 
       0x1b, 0x2, 0xfd, 0x10a, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x21, 
       0x2, 0x2, 0xff, 0x10a, 0x5, 0x34, 0x1b, 0x2, 0x100, 0x101, 0x7, 0x22, 
       0x2, 0x2, 0x101, 0x10a, 0x5, 0x34, 0x1b, 0x2, 0x102, 0x103, 0x7, 
       0x26, 0x2, 0x2, 0x103, 0x10a, 0x5, 0x34, 0x1b, 0x2, 0x104, 0x105, 
       0x5, 0x3e, 0x20, 0x2, 0x105, 0x106, 0x7, 0x4, 0x2, 0x2, 0x106, 0x107, 
       0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x5, 0x34, 0x1b, 0x2, 0x108, 0x10a, 
       0x3, 0x2, 0x2, 0x2, 0x109, 0xea, 0x3, 0x2, 0x2, 0x2, 0x109, 0xeb, 
       0x3, 0x2, 0x2, 0x2, 0x109, 0xec, 0x3, 0x2, 0x2, 0x2, 0x109, 0xed, 
       0x3, 0x2, 0x2, 0x2, 0x109, 0xee, 0x3, 0x2, 0x2, 0x2, 0x109, 0xef, 
       0x3, 0x2, 0x2, 0x2, 0x109, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x109, 0xfb, 
       0x3, 0x2, 0x2, 0x2, 0x109, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x109, 0x100, 
       0x3, 0x2, 0x2, 0x2, 0x109, 0x102, 0x3, 0x2, 0x2, 0x2, 0x109, 0x104, 
       0x3, 0x2, 0x2, 0x2, 0x10a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10d, 
       0x9, 0x4, 0x2, 0x2, 0x10c, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 
       0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 
       0x7, 0x20, 0x2, 0x2, 0x10f, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 
       0x7, 0x2b, 0x2, 0x2, 0x111, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 
       0x7, 0x28, 0x2, 0x2, 0x113, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 
       0x7, 0x2f, 0x2, 0x2, 0x115, 0x41, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 
       0x7, 0x2d, 0x2, 0x2, 0x117, 0x43, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11a, 
       0x7, 0x2c, 0x2, 0x2, 0x119, 0x118, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 
       0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 
       0x7, 0x2e, 0x2, 0x2, 0x11c, 0x45, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 
       0x7, 0x29, 0x2, 0x2, 0x11e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 
       0x7, 0x2a, 0x2, 0x2, 0x120, 0x49, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
       0x7, 0x27, 0x2, 0x2, 0x122, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x51, 
       0x58, 0x5c, 0x60, 0x63, 0x66, 0x6a, 0x6e, 0x80, 0x83, 0x89, 0x8f, 
       0x96, 0x9a, 0xb2, 0xb9, 0xc1, 0xd5, 0xdf, 0xe7, 0xf5, 0x109, 0x10c, 
       0x119, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

asm8086Parser::Initializer asm8086Parser::_init;
