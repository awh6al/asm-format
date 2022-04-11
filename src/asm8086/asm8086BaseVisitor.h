
// Generated from asm8086.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "asm8086Visitor.h"


/**
 * This class provides an empty implementation of asm8086Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  asm8086BaseVisitor : public asm8086Visitor {
public:

  virtual antlrcpp::Any visitProg(asm8086Parser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLine(asm8086Parser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(asm8086Parser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLbl(asm8086Parser::LblContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblerdirective(asm8086Parser::AssemblerdirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRw(asm8086Parser::RwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRb(asm8086Parser::RbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRs(asm8086Parser::RsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCseg(asm8086Parser::CsegContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDseg(asm8086Parser::DsegContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDw(asm8086Parser::DwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDb(asm8086Parser::DbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDd(asm8086Parser::DdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqu(asm8086Parser::EquContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_(asm8086Parser::If_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblerexpression(asm8086Parser::AssemblerexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblerlogical(asm8086Parser::AssemblerlogicalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblerterm(asm8086Parser::AssemblertermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndif_(asm8086Parser::Endif_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnd(asm8086Parser::EndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrg(asm8086Parser::OrgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTitle(asm8086Parser::TitleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclude_(asm8086Parser::Include_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionlist(asm8086Parser::ExpressionlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel(asm8086Parser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(asm8086Parser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplyingExpression(asm8086Parser::MultiplyingExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(asm8086Parser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtr(asm8086Parser::PtrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDollar(asm8086Parser::DollarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegister_(asm8086Parser::Register_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_(asm8086Parser::String_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(asm8086Parser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(asm8086Parser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpcode(asm8086Parser::OpcodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRep(asm8086Parser::RepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment(asm8086Parser::CommentContext *ctx) override {
    return visitChildren(ctx);
  }


};

