
// Generated from asm8086.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "asm8086Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by asm8086Parser.
 */
class  asm8086Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by asm8086Parser.
   */
    virtual antlrcpp::Any visitProg(asm8086Parser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitLine(asm8086Parser::LineContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(asm8086Parser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitLbl(asm8086Parser::LblContext *context) = 0;

    virtual antlrcpp::Any visitAssemblerdirective(asm8086Parser::AssemblerdirectiveContext *context) = 0;

    virtual antlrcpp::Any visitRw(asm8086Parser::RwContext *context) = 0;

    virtual antlrcpp::Any visitRb(asm8086Parser::RbContext *context) = 0;

    virtual antlrcpp::Any visitRs(asm8086Parser::RsContext *context) = 0;

    virtual antlrcpp::Any visitCseg(asm8086Parser::CsegContext *context) = 0;

    virtual antlrcpp::Any visitDseg(asm8086Parser::DsegContext *context) = 0;

    virtual antlrcpp::Any visitDw(asm8086Parser::DwContext *context) = 0;

    virtual antlrcpp::Any visitDb(asm8086Parser::DbContext *context) = 0;

    virtual antlrcpp::Any visitDd(asm8086Parser::DdContext *context) = 0;

    virtual antlrcpp::Any visitEqu(asm8086Parser::EquContext *context) = 0;

    virtual antlrcpp::Any visitIf_(asm8086Parser::If_Context *context) = 0;

    virtual antlrcpp::Any visitAssemblerexpression(asm8086Parser::AssemblerexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssemblerlogical(asm8086Parser::AssemblerlogicalContext *context) = 0;

    virtual antlrcpp::Any visitAssemblerterm(asm8086Parser::AssemblertermContext *context) = 0;

    virtual antlrcpp::Any visitEndif_(asm8086Parser::Endif_Context *context) = 0;

    virtual antlrcpp::Any visitEnd(asm8086Parser::EndContext *context) = 0;

    virtual antlrcpp::Any visitOrg(asm8086Parser::OrgContext *context) = 0;

    virtual antlrcpp::Any visitTitle(asm8086Parser::TitleContext *context) = 0;

    virtual antlrcpp::Any visitInclude_(asm8086Parser::Include_Context *context) = 0;

    virtual antlrcpp::Any visitExpressionlist(asm8086Parser::ExpressionlistContext *context) = 0;

    virtual antlrcpp::Any visitLabel(asm8086Parser::LabelContext *context) = 0;

    virtual antlrcpp::Any visitExpression(asm8086Parser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplyingExpression(asm8086Parser::MultiplyingExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArgument(asm8086Parser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitPtr(asm8086Parser::PtrContext *context) = 0;

    virtual antlrcpp::Any visitDollar(asm8086Parser::DollarContext *context) = 0;

    virtual antlrcpp::Any visitRegister_(asm8086Parser::Register_Context *context) = 0;

    virtual antlrcpp::Any visitString_(asm8086Parser::String_Context *context) = 0;

    virtual antlrcpp::Any visitName(asm8086Parser::NameContext *context) = 0;

    virtual antlrcpp::Any visitNumber(asm8086Parser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitOpcode(asm8086Parser::OpcodeContext *context) = 0;

    virtual antlrcpp::Any visitRep(asm8086Parser::RepContext *context) = 0;

    virtual antlrcpp::Any visitComment(asm8086Parser::CommentContext *context) = 0;


};

