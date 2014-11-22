#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack_hscript_Token
#include <haxe/ds/GenericStack_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_StringInput
#include <haxe/io/StringInput.h>
#endif
#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace hscript{

Void Parser_obj::__construct()
{
HX_STACK_FRAME("hscript.Parser","new",0x4b9f158c,"hscript.Parser.new","hscript/Parser.hx",46,0x98735743)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(77)
	this->uid = (int)0;
	HX_STACK_LINE(101)
	this->line = (int)1;
	HX_STACK_LINE(102)
	this->opChars = HX_CSTRING("+*/-=!><&|^%~");
	HX_STACK_LINE(103)
	this->identChars = HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_");
	HX_STACK_LINE(104)
	Array< ::Dynamic > priorities = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_CSTRING("%"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("*")).Add(HX_CSTRING("/"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("+")).Add(HX_CSTRING("-"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("<<")).Add(HX_CSTRING(">>")).Add(HX_CSTRING(">>>"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("|")).Add(HX_CSTRING("&")).Add(HX_CSTRING("^"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("==")).Add(HX_CSTRING("!=")).Add(HX_CSTRING(">")).Add(HX_CSTRING("<")).Add(HX_CSTRING(">=")).Add(HX_CSTRING("<="))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("..."))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("&&"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("||"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("=")).Add(HX_CSTRING("+=")).Add(HX_CSTRING("-=")).Add(HX_CSTRING("*=")).Add(HX_CSTRING("/=")).Add(HX_CSTRING("%=")).Add(HX_CSTRING("<<=")).Add(HX_CSTRING(">>=")).Add(HX_CSTRING(">>>=")).Add(HX_CSTRING("|=")).Add(HX_CSTRING("&=")).Add(HX_CSTRING("^=")));		HX_STACK_VAR(priorities,"priorities");
	HX_STACK_LINE(117)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(117)
	this->opPriority = _g;
	HX_STACK_LINE(118)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(118)
	this->opRightAssoc = _g1;
	HX_STACK_LINE(119)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(119)
	this->unops = _g2;
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(125)
		int _g3 = priorities->length;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(125)
		while((true)){
			HX_STACK_LINE(125)
			if ((!(((_g11 < _g3))))){
				HX_STACK_LINE(125)
				break;
			}
			HX_STACK_LINE(125)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(126)
			int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(126)
			Array< ::String > _g31 = priorities->__get(i).StaticCast< Array< ::String > >();		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				if ((!(((_g21 < _g31->length))))){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(126)
				::String x = _g31->__get(_g21);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(126)
				++(_g21);
				HX_STACK_LINE(127)
				this->opPriority->set(x,i);
				HX_STACK_LINE(128)
				if (((i == (int)9))){
					HX_STACK_LINE(128)
					this->opRightAssoc->set(x,true);
				}
			}
		}
	}
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(130)
		Array< ::String > _g11 = Array_obj< ::String >::__new().Add(HX_CSTRING("!")).Add(HX_CSTRING("++")).Add(HX_CSTRING("--")).Add(HX_CSTRING("-")).Add(HX_CSTRING("~"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(130)
		while((true)){
			HX_STACK_LINE(130)
			if ((!(((_g3 < _g11->length))))){
				HX_STACK_LINE(130)
				break;
			}
			HX_STACK_LINE(130)
			::String x = _g11->__get(_g3);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(130)
			++(_g3);
			HX_STACK_LINE(131)
			this->unops->set(x,(bool((x == HX_CSTRING("++"))) || bool((x == HX_CSTRING("--")))));
		}
	}
}
;
	return null();
}

//Parser_obj::~Parser_obj() { }

Dynamic Parser_obj::__CreateEmpty() { return  new Parser_obj; }
hx::ObjectPtr< Parser_obj > Parser_obj::__new()
{  hx::ObjectPtr< Parser_obj > result = new Parser_obj();
	result->__construct();
	return result;}

Dynamic Parser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parser_obj > result = new Parser_obj();
	result->__construct();
	return result;}

Void Parser_obj::error( ::hscript::Error err,int pmin,int pmax){
{
		HX_STACK_FRAME("hscript.Parser","error",0x9bb1b3f4,"hscript.Parser.error","hscript/Parser.hx",138,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(err,"err")
		HX_STACK_ARG(pmin,"pmin")
		HX_STACK_ARG(pmax,"pmax")
		HX_STACK_LINE(138)
		HX_STACK_DO_THROW(err);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,error,(void))

Void Parser_obj::invalidChar( int c){
{
		HX_STACK_FRAME("hscript.Parser","invalidChar",0x0ae4fe99,"hscript.Parser.invalidChar","hscript/Parser.hx",143,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(143)
		::hscript::Error err = ::hscript::Error_obj::EInvalidChar(c);		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(143)
		HX_STACK_DO_THROW(err);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,invalidChar,(void))

::hscript::Expr Parser_obj::parseString( ::String s){
	HX_STACK_FRAME("hscript.Parser","parseString",0xed832690,"hscript.Parser.parseString","hscript/Parser.hx",146,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(147)
	this->line = (int)1;
	HX_STACK_LINE(148)
	this->uid = (int)0;
	HX_STACK_LINE(149)
	::haxe::io::StringInput _g = ::haxe::io::StringInput_obj::__new(s);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(149)
	return this->parse(_g);
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseString,return )

::hscript::Expr Parser_obj::parse( ::haxe::io::Input s){
	HX_STACK_FRAME("hscript.Parser","parse",0xe5dd785f,"hscript.Parser.parse","hscript/Parser.hx",152,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(159)
	::haxe::ds::GenericStack_hscript_Token _g = ::haxe::ds::GenericStack_hscript_Token_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(159)
	this->tokens = _g;
	HX_STACK_LINE(163)
	this->_char = (int)-1;
	HX_STACK_LINE(164)
	this->input = s;
	HX_STACK_LINE(165)
	Array< bool > _g1 = Array_obj< bool >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(165)
	this->ops = _g1;
	HX_STACK_LINE(166)
	Array< bool > _g2 = Array_obj< bool >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(166)
	this->idents = _g2;
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(167)
		int _g3 = this->opChars.length;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			if ((!(((_g11 < _g3))))){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(167)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(168)
			Dynamic _g31 = this->opChars.charCodeAt(i);		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(168)
			this->ops[_g31] = true;
		}
	}
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(169)
		int _g3 = this->identChars.length;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			if ((!(((_g11 < _g3))))){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(170)
			Dynamic _g4 = this->identChars.charCodeAt(i);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(170)
			this->idents[_g4] = true;
		}
	}
	HX_STACK_LINE(171)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(172)
	while((true)){
		HX_STACK_LINE(173)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(174)
		if (((tk == ::hscript::Token_obj::TEof))){
			HX_STACK_LINE(174)
			break;
		}
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(175)
			::haxe::ds::GenericCell_hscript_Token _g5 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(175)
			_this->head = _g5;
		}
		HX_STACK_LINE(176)
		::hscript::Expr _g6 = this->parseFullExpr();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(176)
		a->push(_g6);
	}
	HX_STACK_LINE(178)
	if (((a->length == (int)1))){
		HX_STACK_LINE(178)
		return a->__get((int)0).StaticCast< ::hscript::Expr >();
	}
	else{
		HX_STACK_LINE(178)
		::hscript::Expr e = ::hscript::Expr_obj::EBlock(a);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(178)
		return e;
	}
	HX_STACK_LINE(178)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parse,return )

Dynamic Parser_obj::unexpected( ::hscript::Token tk){
	HX_STACK_FRAME("hscript.Parser","unexpected",0xb7770e25,"hscript.Parser.unexpected","hscript/Parser.hx",181,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tk,"tk")
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		::String _g = this->tokenString(tk);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(182)
		::hscript::Error err = ::hscript::Error_obj::EUnexpected(_g);		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(182)
		HX_STACK_DO_THROW(err);
	}
	HX_STACK_LINE(183)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unexpected,return )

Void Parser_obj::push( ::hscript::Token tk){
{
		HX_STACK_FRAME("hscript.Parser","push",0xe0f2532e,"hscript.Parser.push","hscript/Parser.hx",192,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tk,"tk")
		HX_STACK_LINE(192)
		::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(192)
		::haxe::ds::GenericCell_hscript_Token _g = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(192)
		_this->head = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,push,(void))

Void Parser_obj::ensure( ::hscript::Token tk){
{
		HX_STACK_FRAME("hscript.Parser","ensure",0x52df3412,"hscript.Parser.ensure","hscript/Parser.hx",196,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tk,"tk")
		HX_STACK_LINE(197)
		::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(198)
		if (((t != tk))){
			HX_STACK_LINE(198)
			this->unexpected(t);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensure,(void))

::hscript::Expr Parser_obj::expr( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","expr",0xd9af3e89,"hscript.Parser.expr","hscript/Parser.hx",205,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(205)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,expr,return )

int Parser_obj::pmin( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","pmin",0xe0ec3876,"hscript.Parser.pmin","hscript/Parser.hx",213,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(213)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmin,return )

int Parser_obj::pmax( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","pmax",0xe0ec3188,"hscript.Parser.pmax","hscript/Parser.hx",221,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(221)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmax,return )

::hscript::Expr Parser_obj::mk( ::hscript::Expr e,Dynamic pmin,Dynamic pmax){
	HX_STACK_FRAME("hscript.Parser","mk",0xd828e3b2,"hscript.Parser.mk","hscript/Parser.hx",231,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(pmin,"pmin")
	HX_STACK_ARG(pmax,"pmax")
	HX_STACK_LINE(231)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,mk,return )

bool Parser_obj::isBlock( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","isBlock",0x99f5642f,"hscript.Parser.isBlock","hscript/Parser.hx",236,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(236)
	switch( (int)(e->__Index())){
		case (int)4: case (int)21: case (int)23: {
			HX_STACK_LINE(237)
			return true;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(236)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(238)
			return this->isBlock(e1);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(236)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(239)
			if (((e1 != null()))){
				HX_STACK_LINE(239)
				return this->isBlock(e1);
			}
			else{
				HX_STACK_LINE(239)
				return false;
			}
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(236)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(236)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(240)
			if (((e2 != null()))){
				HX_STACK_LINE(240)
				return this->isBlock(e2);
			}
			else{
				HX_STACK_LINE(240)
				return this->isBlock(e1);
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(236)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(241)
			return this->isBlock(e1);
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(236)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(236)
			bool prefix = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(prefix,"prefix");
			HX_STACK_LINE(242)
			if ((!(prefix))){
				HX_STACK_LINE(242)
				return this->isBlock(e1);
			}
			else{
				HX_STACK_LINE(242)
				return false;
			}
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(236)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(243)
			return this->isBlock(e1);
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(236)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(244)
			return this->isBlock(e1);
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(236)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(245)
			if (((e1 != null()))){
				HX_STACK_LINE(245)
				return this->isBlock(e1);
			}
			else{
				HX_STACK_LINE(245)
				return false;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(246)
			return false;
		}
	}
	HX_STACK_LINE(236)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isBlock,return )

::hscript::Expr Parser_obj::parseFullExpr( ){
	HX_STACK_FRAME("hscript.Parser","parseFullExpr",0x2c8eb1e3,"hscript.Parser.parseFullExpr","hscript/Parser.hx",250,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(251)
	::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(252)
	::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(253)
	if (((bool((tk != ::hscript::Token_obj::TSemicolon)) && bool((tk != ::hscript::Token_obj::TEof))))){
		HX_STACK_LINE(254)
		if ((this->isBlock(e))){
			HX_STACK_LINE(255)
			::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(255)
			::haxe::ds::GenericCell_hscript_Token _g = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(255)
			_this->head = _g;
		}
		else{
			HX_STACK_LINE(257)
			this->unexpected(tk);
		}
	}
	HX_STACK_LINE(259)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFullExpr,return )

::hscript::Expr Parser_obj::parseObject( Dynamic p1){
	HX_STACK_FRAME("hscript.Parser","parseObject",0xf1927c7e,"hscript.Parser.parseObject","hscript/Parser.hx",262,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_LINE(264)
	Dynamic fl = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(fl,"fl");
	HX_STACK_LINE(265)
	while((true)){
		HX_STACK_LINE(266)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(267)
		::String id = null();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(268)
		int _switch_1 = (tk->__Index());
		if (  ( _switch_1==(int)2)){
			HX_STACK_LINE(268)
			::String i = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(269)
			id = i;
		}
		else if (  ( _switch_1==(int)1)){
			HX_STACK_LINE(268)
			::hscript::Const c = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(271)
				if ((!(this->allowJSON))){
					HX_STACK_LINE(272)
					this->unexpected(tk);
				}
				HX_STACK_LINE(273)
				switch( (int)(c->__Index())){
					case (int)2: {
						HX_STACK_LINE(273)
						::String s = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(274)
						id = s;
					}
					;break;
					default: {
						HX_STACK_LINE(275)
						this->unexpected(tk);
					}
				}
			}
		}
		else if (  ( _switch_1==(int)7)){
			HX_STACK_LINE(278)
			break;
		}
		else  {
			HX_STACK_LINE(280)
			this->unexpected(tk);
		}
;
;
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(282)
			if (((t != ::hscript::Token_obj::TDoubleDot))){
				HX_STACK_LINE(282)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(283)
		::hscript::Expr _g = this->parseExpr();		HX_STACK_VAR(_g,"_g");
		struct _Function_2_1{
			inline static Dynamic Block( ::hscript::Expr &_g,::String &id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",283,0x98735743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , id,false);
					__result->Add(HX_CSTRING("e") , _g,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(283)
		Dynamic _g1 = _Function_2_1::Block(_g,id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(283)
		fl->__Field(HX_CSTRING("push"),true)(_g1);
		HX_STACK_LINE(284)
		::hscript::Token _g2 = this->token();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(284)
		tk = _g2;
		HX_STACK_LINE(285)
		int _switch_2 = (tk->__Index());
		if (  ( _switch_2==(int)7)){
			HX_STACK_LINE(287)
			break;
		}
		else if (  ( _switch_2==(int)9)){
		}
		else  {
			HX_STACK_LINE(290)
			this->unexpected(tk);
		}
;
;
	}
	HX_STACK_LINE(293)
	::hscript::Expr _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(293)
		::hscript::Expr e = ::hscript::Expr_obj::EObject(fl);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(293)
		_g3 = e;
	}
	HX_STACK_LINE(293)
	return this->parseExprNext(_g3);
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseObject,return )

::hscript::Expr Parser_obj::parseExpr( ){
	HX_STACK_FRAME("hscript.Parser","parseExpr",0x8f01bd34,"hscript.Parser.parseExpr","hscript/Parser.hx",296,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(301)
	switch( (int)(tk->__Index())){
		case (int)2: {
			HX_STACK_LINE(301)
			::String id = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(303)
				::hscript::Expr e = this->parseStructure(id);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(304)
				if (((e == null()))){
					HX_STACK_LINE(305)
					::hscript::Expr _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						::hscript::Expr e1 = ::hscript::Expr_obj::EIdent(id);		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(305)
						_g = e1;
					}
					HX_STACK_LINE(305)
					e = _g;
				}
				HX_STACK_LINE(306)
				return this->parseExprNext(e);
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(301)
			::hscript::Const c = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(308)
				::hscript::Expr _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					::hscript::Expr e = ::hscript::Expr_obj::EConst(c);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(308)
					_g1 = e;
				}
				HX_STACK_LINE(308)
				return this->parseExprNext(_g1);
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(310)
			::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(311)
				if (((t != ::hscript::Token_obj::TPClose))){
					HX_STACK_LINE(311)
					this->unexpected(t);
				}
			}
			HX_STACK_LINE(312)
			::hscript::Expr _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(312)
			{
				HX_STACK_LINE(312)
				::hscript::Expr e1 = ::hscript::Expr_obj::EParent(e);		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(312)
				_g2 = e1;
			}
			HX_STACK_LINE(312)
			return this->parseExprNext(_g2);
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(314)
			::hscript::Token _g3 = this->token();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(314)
			tk = _g3;
			HX_STACK_LINE(315)
			switch( (int)(tk->__Index())){
				case (int)7: {
					HX_STACK_LINE(317)
					::hscript::Expr _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(317)
						::hscript::Expr e = ::hscript::Expr_obj::EObject(Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(317)
						_g4 = e;
					}
					HX_STACK_LINE(317)
					return this->parseExprNext(_g4);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(319)
					::hscript::Token tk2 = this->token();		HX_STACK_VAR(tk2,"tk2");
					HX_STACK_LINE(320)
					{
						HX_STACK_LINE(320)
						::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(320)
						::haxe::ds::GenericCell_hscript_Token _g5 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk2,_this->head);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(320)
						_this->head = _g5;
					}
					HX_STACK_LINE(321)
					{
						HX_STACK_LINE(321)
						::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(321)
						::haxe::ds::GenericCell_hscript_Token _g6 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(321)
						_this->head = _g6;
					}
					HX_STACK_LINE(322)
					switch( (int)(tk2->__Index())){
						case (int)14: {
							HX_STACK_LINE(324)
							::hscript::Expr _g7 = this->parseObject((int)0);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(324)
							return this->parseExprNext(_g7);
						}
						;break;
						default: {
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(315)
					::hscript::Const c = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(328)
					if ((this->allowJSON)){
						HX_STACK_LINE(329)
						switch( (int)(c->__Index())){
							case (int)2: {
								HX_STACK_LINE(331)
								::hscript::Token tk2 = this->token();		HX_STACK_VAR(tk2,"tk2");
								HX_STACK_LINE(332)
								{
									HX_STACK_LINE(332)
									::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(332)
									::haxe::ds::GenericCell_hscript_Token _g8 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk2,_this->head);		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(332)
									_this->head = _g8;
								}
								HX_STACK_LINE(333)
								{
									HX_STACK_LINE(333)
									::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(333)
									::haxe::ds::GenericCell_hscript_Token _g9 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(333)
									_this->head = _g9;
								}
								HX_STACK_LINE(334)
								switch( (int)(tk2->__Index())){
									case (int)14: {
										HX_STACK_LINE(336)
										::hscript::Expr _g10 = this->parseObject((int)0);		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(336)
										return this->parseExprNext(_g10);
									}
									;break;
									default: {
									}
								}
							}
							;break;
							default: {
								HX_STACK_LINE(340)
								::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(340)
								::haxe::ds::GenericCell_hscript_Token _g11 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(340)
								_this->head = _g11;
							}
						}
					}
					else{
						HX_STACK_LINE(343)
						::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(343)
						::haxe::ds::GenericCell_hscript_Token _g12 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(343)
						_this->head = _g12;
					}
				}
				;break;
				default: {
					HX_STACK_LINE(345)
					::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(345)
					::haxe::ds::GenericCell_hscript_Token _g13 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(345)
					_this->head = _g13;
				}
			}
			HX_STACK_LINE(347)
			Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(348)
			while((true)){
				HX_STACK_LINE(349)
				::hscript::Expr _g14 = this->parseFullExpr();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(349)
				a->push(_g14);
				HX_STACK_LINE(350)
				::hscript::Token _g15 = this->token();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(350)
				tk = _g15;
				HX_STACK_LINE(351)
				if (((tk == ::hscript::Token_obj::TBrClose))){
					HX_STACK_LINE(352)
					break;
				}
				HX_STACK_LINE(353)
				{
					HX_STACK_LINE(353)
					::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(353)
					::haxe::ds::GenericCell_hscript_Token _g16 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(353)
					_this->head = _g16;
				}
			}
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				::hscript::Expr e = ::hscript::Expr_obj::EBlock(a);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(355)
				return e;
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(301)
			::String op = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(357)
				if ((this->unops->exists(op))){
					HX_STACK_LINE(358)
					::hscript::Expr _g17 = this->parseExpr();		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(358)
					return this->makeUnop(op,_g17);
				}
				HX_STACK_LINE(359)
				return this->unexpected(tk);
			}
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(361)
			Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(362)
			::hscript::Token _g18 = this->token();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(362)
			tk = _g18;
			HX_STACK_LINE(363)
			while((true)){
				HX_STACK_LINE(363)
				if ((!(((tk != ::hscript::Token_obj::TBkClose))))){
					HX_STACK_LINE(363)
					break;
				}
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(364)
					::haxe::ds::GenericCell_hscript_Token _g19 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(364)
					_this->head = _g19;
				}
				HX_STACK_LINE(365)
				::hscript::Expr _g20 = this->parseExpr();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(365)
				a->push(_g20);
				HX_STACK_LINE(366)
				::hscript::Token _g21 = this->token();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(366)
				tk = _g21;
				HX_STACK_LINE(367)
				if (((tk == ::hscript::Token_obj::TComma))){
					HX_STACK_LINE(368)
					::hscript::Token _g22 = this->token();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(368)
					tk = _g22;
				}
			}
			HX_STACK_LINE(370)
			if (((a->length == (int)1))){
				HX_STACK_LINE(371)
				{
					HX_STACK_LINE(371)
					::hscript::Expr _g = a->__get((int)0).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(371)
					switch( (int)(_g->__Index())){
						case (int)11: case (int)10: {
							HX_STACK_LINE(373)
							int _g23 = (this->uid)++;		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(373)
							::String tmp = (HX_CSTRING("__a_") + _g23);		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(374)
							::hscript::Expr e;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(375)
								::hscript::Expr _g25;		HX_STACK_VAR(_g25,"_g25");
								HX_STACK_LINE(375)
								{
									HX_STACK_LINE(375)
									::hscript::Expr _g24;		HX_STACK_VAR(_g24,"_g24");
									HX_STACK_LINE(375)
									{
										HX_STACK_LINE(375)
										::hscript::Expr e1 = ::hscript::Expr_obj::EArrayDecl(Array_obj< ::Dynamic >::__new());		HX_STACK_VAR(e1,"e1");
										HX_STACK_LINE(375)
										_g24 = e1;
									}
									HX_STACK_LINE(375)
									::hscript::Expr e1 = ::hscript::Expr_obj::EVar(tmp,null(),_g24);		HX_STACK_VAR(e1,"e1");
									HX_STACK_LINE(375)
									_g25 = e1;
								}
								HX_STACK_LINE(376)
								::hscript::Expr _g26 = this->mapCompr(tmp,a->__get((int)0).StaticCast< ::hscript::Expr >());		HX_STACK_VAR(_g26,"_g26");
								HX_STACK_LINE(377)
								::hscript::Expr _g27;		HX_STACK_VAR(_g27,"_g27");
								HX_STACK_LINE(377)
								{
									HX_STACK_LINE(377)
									::hscript::Expr e1 = ::hscript::Expr_obj::EIdent(tmp);		HX_STACK_VAR(e1,"e1");
									HX_STACK_LINE(377)
									_g27 = e1;
								}
								HX_STACK_LINE(374)
								Array< ::Dynamic > _g28 = Array_obj< ::Dynamic >::__new().Add(_g25).Add(_g26).Add(_g27);		HX_STACK_VAR(_g28,"_g28");
								HX_STACK_LINE(374)
								::hscript::Expr e1 = ::hscript::Expr_obj::EBlock(_g28);		HX_STACK_VAR(e1,"e1");
								HX_STACK_LINE(374)
								e = e1;
							}
							HX_STACK_LINE(379)
							return this->parseExprNext(e);
						}
						;break;
						default: {
						}
					}
				}
			}
			HX_STACK_LINE(382)
			::hscript::Expr _g29;		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(382)
			{
				HX_STACK_LINE(382)
				::hscript::Expr e = ::hscript::Expr_obj::EArrayDecl(a);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(382)
				_g29 = e;
			}
			HX_STACK_LINE(382)
			return this->parseExprNext(_g29);
		}
		;break;
		default: {
			HX_STACK_LINE(384)
			return this->unexpected(tk);
		}
	}
	HX_STACK_LINE(301)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseExpr,return )

::hscript::Expr Parser_obj::mapCompr( ::String tmp,::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","mapCompr",0xde0e1f9b,"hscript.Parser.mapCompr","hscript/Parser.hx",388,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tmp,"tmp")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(389)
	::hscript::Expr edef;		HX_STACK_VAR(edef,"edef");
	HX_STACK_LINE(389)
	switch( (int)(e->__Index())){
		case (int)11: {
			HX_STACK_LINE(389)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(389)
			::hscript::Expr it = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(it,"it");
			HX_STACK_LINE(389)
			::String v = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(391)
				::hscript::Expr _g = this->mapCompr(tmp,e2);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(391)
				edef = ::hscript::Expr_obj::EFor(v,it,_g);
			}
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(389)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(389)
			::hscript::Expr cond = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(cond,"cond");
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(393)
				::hscript::Expr _g1 = this->mapCompr(tmp,e2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(393)
				edef = ::hscript::Expr_obj::EWhile(cond,_g1);
			}
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(389)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(389)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(389)
			::hscript::Expr cond = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(cond,"cond");
			HX_STACK_LINE(394)
			if (((e2 == null()))){
				HX_STACK_LINE(395)
				::hscript::Expr _g2 = this->mapCompr(tmp,e1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(395)
				edef = ::hscript::Expr_obj::EIf(cond,_g2,null());
			}
			else{
				HX_STACK_LINE(401)
				::hscript::Expr _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					::hscript::Expr _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						::hscript::Expr e3 = ::hscript::Expr_obj::EIdent(tmp);		HX_STACK_VAR(e3,"e3");
						HX_STACK_LINE(401)
						_g3 = e3;
					}
					HX_STACK_LINE(401)
					::hscript::Expr e3 = ::hscript::Expr_obj::EField(_g3,HX_CSTRING("push"));		HX_STACK_VAR(e3,"e3");
					HX_STACK_LINE(401)
					_g4 = e3;
				}
				HX_STACK_LINE(401)
				edef = ::hscript::Expr_obj::ECall(_g4,Array_obj< ::Dynamic >::__new().Add(e));
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(389)
			switch( (int)((::hscript::Expr(e))->__Param(0)->__Field(HX_CSTRING("length"),true))){
				case (int)1: {
					HX_STACK_LINE(389)
					::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0)->__GetItem((int)0);		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(397)
						::hscript::Expr _g5 = this->mapCompr(tmp,e1);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(397)
						Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new().Add(_g5);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(397)
						edef = ::hscript::Expr_obj::EBlock(_g6);
					}
				}
				;break;
				default: {
					HX_STACK_LINE(401)
					::hscript::Expr _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						::hscript::Expr _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(401)
						{
							HX_STACK_LINE(401)
							::hscript::Expr e3 = ::hscript::Expr_obj::EIdent(tmp);		HX_STACK_VAR(e3,"e3");
							HX_STACK_LINE(401)
							_g7 = e3;
						}
						HX_STACK_LINE(401)
						::hscript::Expr e3 = ::hscript::Expr_obj::EField(_g7,HX_CSTRING("push"));		HX_STACK_VAR(e3,"e3");
						HX_STACK_LINE(401)
						_g8 = e3;
					}
					HX_STACK_LINE(401)
					edef = ::hscript::Expr_obj::ECall(_g8,Array_obj< ::Dynamic >::__new().Add(e));
				}
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(389)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(398)
			{
				HX_STACK_LINE(399)
				::hscript::Expr _g9 = this->mapCompr(tmp,e2);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(399)
				edef = ::hscript::Expr_obj::EParent(_g9);
			}
		}
		;break;
		default: {
			HX_STACK_LINE(401)
			::hscript::Expr _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(401)
			{
				HX_STACK_LINE(401)
				::hscript::Expr _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					::hscript::Expr e3 = ::hscript::Expr_obj::EIdent(tmp);		HX_STACK_VAR(e3,"e3");
					HX_STACK_LINE(401)
					_g10 = e3;
				}
				HX_STACK_LINE(401)
				::hscript::Expr e3 = ::hscript::Expr_obj::EField(_g10,HX_CSTRING("push"));		HX_STACK_VAR(e3,"e3");
				HX_STACK_LINE(401)
				_g11 = e3;
			}
			HX_STACK_LINE(401)
			edef = ::hscript::Expr_obj::ECall(_g11,Array_obj< ::Dynamic >::__new().Add(e));
		}
	}
	HX_STACK_LINE(403)
	return edef;
}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,mapCompr,return )

::hscript::Expr Parser_obj::makeUnop( ::String op,::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","makeUnop",0x60b6401c,"hscript.Parser.makeUnop","hscript/Parser.hx",407,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(407)
	switch( (int)(e->__Index())){
		case (int)6: {
			HX_STACK_LINE(407)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(407)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(407)
			::String bop = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(bop,"bop");
			HX_STACK_LINE(408)
			{
				HX_STACK_LINE(408)
				::hscript::Expr _g = this->makeUnop(op,e1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(408)
				::hscript::Expr e3 = ::hscript::Expr_obj::EBinop(bop,_g,e2);		HX_STACK_VAR(e3,"e3");
				HX_STACK_LINE(408)
				return e3;
			}
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(407)
			::hscript::Expr e3 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(407)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(407)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(409)
			{
				HX_STACK_LINE(409)
				::hscript::Expr _g1 = this->makeUnop(op,e1);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(409)
				::hscript::Expr e4 = ::hscript::Expr_obj::ETernary(_g1,e2,e3);		HX_STACK_VAR(e4,"e4");
				HX_STACK_LINE(409)
				return e4;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(410)
			::hscript::Expr e1 = ::hscript::Expr_obj::EUnop(op,true,e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(410)
			return e1;
		}
	}
	HX_STACK_LINE(407)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,makeUnop,return )

::hscript::Expr Parser_obj::makeBinop( ::String op,::hscript::Expr e1,::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","makeBinop",0x4ad5ff06,"hscript.Parser.makeBinop","hscript/Parser.hx",415,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(415)
	switch( (int)(e->__Index())){
		case (int)6: {
			HX_STACK_LINE(415)
			::hscript::Expr e3 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(415)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(415)
			::String op2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(op2,"op2");
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(417)
				Dynamic _g = this->opPriority->get(op);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(417)
				Dynamic _g1 = this->opPriority->get(op2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(417)
				if (((  (((_g <= _g1))) ? bool(!(this->opRightAssoc->exists(op))) : bool(false) ))){
					HX_STACK_LINE(418)
					::hscript::Expr _g2 = this->makeBinop(op,e1,e2);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(418)
					::hscript::Expr e4 = ::hscript::Expr_obj::EBinop(op2,_g2,e3);		HX_STACK_VAR(e4,"e4");
					HX_STACK_LINE(418)
					return e4;
				}
				else{
					HX_STACK_LINE(420)
					::hscript::Expr e4 = ::hscript::Expr_obj::EBinop(op,e1,e);		HX_STACK_VAR(e4,"e4");
					HX_STACK_LINE(420)
					return e4;
				}
			}
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(415)
			::hscript::Expr e4 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e4,"e4");
			HX_STACK_LINE(415)
			::hscript::Expr e3 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(415)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(422)
			if ((this->opRightAssoc->exists(op))){
				HX_STACK_LINE(423)
				::hscript::Expr e5 = ::hscript::Expr_obj::EBinop(op,e1,e);		HX_STACK_VAR(e5,"e5");
				HX_STACK_LINE(423)
				return e5;
			}
			else{
				HX_STACK_LINE(425)
				::hscript::Expr _g3 = this->makeBinop(op,e1,e2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(425)
				::hscript::Expr e5 = ::hscript::Expr_obj::ETernary(_g3,e3,e4);		HX_STACK_VAR(e5,"e5");
				HX_STACK_LINE(425)
				return e5;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(427)
			::hscript::Expr e2 = ::hscript::Expr_obj::EBinop(op,e1,e);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(427)
			return e2;
		}
	}
	HX_STACK_LINE(415)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,makeBinop,return )

::hscript::Expr Parser_obj::parseStructure( ::String id){
	HX_STACK_FRAME("hscript.Parser","parseStructure",0x237837d4,"hscript.Parser.parseStructure","hscript/Parser.hx",435,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(435)
	::String _switch_3 = (id);
	if (  ( _switch_3==HX_CSTRING("if"))){
		HX_STACK_LINE(437)
		::hscript::Expr cond = this->parseExpr();		HX_STACK_VAR(cond,"cond");
		HX_STACK_LINE(438)
		::hscript::Expr e1 = this->parseExpr();		HX_STACK_VAR(e1,"e1");
		HX_STACK_LINE(439)
		::hscript::Expr e2 = null();		HX_STACK_VAR(e2,"e2");
		HX_STACK_LINE(440)
		bool semic = false;		HX_STACK_VAR(semic,"semic");
		HX_STACK_LINE(441)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(442)
		if (((tk == ::hscript::Token_obj::TSemicolon))){
			HX_STACK_LINE(443)
			semic = true;
			HX_STACK_LINE(444)
			::hscript::Token _g = this->token();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(444)
			tk = _g;
		}
		HX_STACK_LINE(446)
		::hscript::Token _g1 = ::hscript::Token_obj::TId(HX_CSTRING("else"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(446)
		if ((::Type_obj::enumEq(tk,_g1))){
			HX_STACK_LINE(447)
			::hscript::Expr _g2 = this->parseExpr();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(447)
			e2 = _g2;
		}
		else{
			HX_STACK_LINE(449)
			{
				HX_STACK_LINE(449)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(449)
				::haxe::ds::GenericCell_hscript_Token _g3 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(449)
				_this->head = _g3;
			}
			HX_STACK_LINE(450)
			if ((semic)){
				HX_STACK_LINE(450)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(450)
				::haxe::ds::GenericCell_hscript_Token _g4 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(::hscript::Token_obj::TSemicolon,_this->head);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(450)
				_this->head = _g4;
			}
		}
		HX_STACK_LINE(452)
		{
			HX_STACK_LINE(452)
			::hscript::Expr e = ::hscript::Expr_obj::EIf(cond,e1,e2);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(452)
			return e;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("var"))){
		HX_STACK_LINE(454)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(455)
		::String ident = null();		HX_STACK_VAR(ident,"ident");
		HX_STACK_LINE(456)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(456)
				::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(457)
				ident = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(458)
				this->unexpected(tk);
			}
		}
		HX_STACK_LINE(460)
		::hscript::Token _g5 = this->token();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(460)
		tk = _g5;
		HX_STACK_LINE(461)
		::hscript::CType t = null();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(462)
		if (((bool((tk == ::hscript::Token_obj::TDoubleDot)) && bool(this->allowTypes)))){
			HX_STACK_LINE(463)
			::hscript::CType _g6 = this->parseType();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(463)
			t = _g6;
			HX_STACK_LINE(464)
			::hscript::Token _g7 = this->token();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(464)
			tk = _g7;
		}
		HX_STACK_LINE(466)
		::hscript::Expr e = null();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(467)
		::hscript::Token _g8 = ::hscript::Token_obj::TOp(HX_CSTRING("="));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(467)
		if ((::Type_obj::enumEq(tk,_g8))){
			HX_STACK_LINE(468)
			::hscript::Expr _g9 = this->parseExpr();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(468)
			e = _g9;
		}
		else{
			HX_STACK_LINE(470)
			::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(470)
			::haxe::ds::GenericCell_hscript_Token _g10 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(470)
			_this->head = _g10;
		}
		HX_STACK_LINE(471)
		{
			HX_STACK_LINE(471)
			::hscript::Expr e1 = ::hscript::Expr_obj::EVar(ident,t,e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(471)
			return e1;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("while"))){
		HX_STACK_LINE(473)
		::hscript::Expr econd = this->parseExpr();		HX_STACK_VAR(econd,"econd");
		HX_STACK_LINE(474)
		::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			::hscript::Expr e1 = ::hscript::Expr_obj::EWhile(econd,e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(475)
			return e1;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("for"))){
		HX_STACK_LINE(477)
		{
			HX_STACK_LINE(477)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(477)
			if (((t != ::hscript::Token_obj::TPOpen))){
				HX_STACK_LINE(477)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(478)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(479)
		::String vname = null();		HX_STACK_VAR(vname,"vname");
		HX_STACK_LINE(480)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(480)
				::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(481)
				vname = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(482)
				this->unexpected(tk);
			}
		}
		HX_STACK_LINE(484)
		::hscript::Token _g11 = this->token();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(484)
		tk = _g11;
		HX_STACK_LINE(485)
		::hscript::Token _g12 = ::hscript::Token_obj::TId(HX_CSTRING("in"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(485)
		if ((!(::Type_obj::enumEq(tk,_g12)))){
			HX_STACK_LINE(485)
			this->unexpected(tk);
		}
		HX_STACK_LINE(486)
		::hscript::Expr eiter = this->parseExpr();		HX_STACK_VAR(eiter,"eiter");
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(487)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(487)
			if (((t != ::hscript::Token_obj::TPClose))){
				HX_STACK_LINE(487)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(488)
		::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(489)
		{
			HX_STACK_LINE(489)
			::hscript::Expr e1 = ::hscript::Expr_obj::EFor(vname,eiter,e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(489)
			return e1;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("break"))){
		HX_STACK_LINE(490)
		return ::hscript::Expr_obj::EBreak;
	}
	else if (  ( _switch_3==HX_CSTRING("continue"))){
		HX_STACK_LINE(491)
		return ::hscript::Expr_obj::EContinue;
	}
	else if (  ( _switch_3==HX_CSTRING("else"))){
		HX_STACK_LINE(492)
		::hscript::Token _g13 = ::hscript::Token_obj::TId(id);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(492)
		return this->unexpected(_g13);
	}
	else if (  ( _switch_3==HX_CSTRING("function"))){
		HX_STACK_LINE(494)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(495)
		::String name = null();		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(496)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(496)
				::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(497)
				name = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(498)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				::haxe::ds::GenericCell_hscript_Token _g14 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(498)
				_this->head = _g14;
			}
		}
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(500)
			if (((t != ::hscript::Token_obj::TPOpen))){
				HX_STACK_LINE(500)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(501)
		Dynamic args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(502)
		::hscript::Token _g15 = this->token();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(502)
		tk = _g15;
		HX_STACK_LINE(503)
		if (((tk != ::hscript::Token_obj::TPClose))){
			HX_STACK_LINE(504)
			bool done = false;		HX_STACK_VAR(done,"done");
			HX_STACK_LINE(505)
			while((true)){
				HX_STACK_LINE(505)
				if ((!((!(done))))){
					HX_STACK_LINE(505)
					break;
				}
				HX_STACK_LINE(506)
				::String name1 = null();		HX_STACK_VAR(name1,"name1");
				HX_STACK_LINE(506)
				bool opt = false;		HX_STACK_VAR(opt,"opt");
				HX_STACK_LINE(507)
				switch( (int)(tk->__Index())){
					case (int)13: {
						HX_STACK_LINE(509)
						opt = true;
						HX_STACK_LINE(510)
						::hscript::Token _g16 = this->token();		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(510)
						tk = _g16;
					}
					;break;
					default: {
					}
				}
				HX_STACK_LINE(513)
				switch( (int)(tk->__Index())){
					case (int)2: {
						HX_STACK_LINE(513)
						::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
						HX_STACK_LINE(514)
						name1 = id1;
					}
					;break;
					default: {
						HX_STACK_LINE(515)
						this->unexpected(tk);
					}
				}
				HX_STACK_LINE(517)
				::hscript::Token _g17 = this->token();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(517)
				tk = _g17;
				struct _Function_4_1{
					inline static Dynamic Block( ::String &name1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",518,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("name") , name1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(518)
				Dynamic arg = _Function_4_1::Block(name1);		HX_STACK_VAR(arg,"arg");
				HX_STACK_LINE(519)
				args->__Field(HX_CSTRING("push"),true)(arg);
				HX_STACK_LINE(520)
				if ((opt)){
					HX_STACK_LINE(520)
					arg->__FieldRef(HX_CSTRING("opt")) = true;
				}
				HX_STACK_LINE(521)
				if (((bool((tk == ::hscript::Token_obj::TDoubleDot)) && bool(this->allowTypes)))){
					HX_STACK_LINE(522)
					::hscript::CType _g18 = this->parseType();		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(522)
					arg->__FieldRef(HX_CSTRING("t")) = _g18;
					HX_STACK_LINE(523)
					::hscript::Token _g19 = this->token();		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(523)
					tk = _g19;
				}
				HX_STACK_LINE(525)
				switch( (int)(tk->__Index())){
					case (int)9: {
						HX_STACK_LINE(527)
						::hscript::Token _g20 = this->token();		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(527)
						tk = _g20;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(529)
						done = true;
					}
					;break;
					default: {
						HX_STACK_LINE(531)
						this->unexpected(tk);
					}
				}
			}
		}
		HX_STACK_LINE(535)
		::hscript::CType ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(536)
		if ((this->allowTypes)){
			HX_STACK_LINE(537)
			::hscript::Token _g21 = this->token();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(537)
			tk = _g21;
			HX_STACK_LINE(538)
			if (((tk != ::hscript::Token_obj::TDoubleDot))){
				HX_STACK_LINE(539)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(539)
				::haxe::ds::GenericCell_hscript_Token _g22 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(539)
				_this->head = _g22;
			}
			else{
				HX_STACK_LINE(541)
				::hscript::CType _g23 = this->parseType();		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(541)
				ret = _g23;
			}
		}
		HX_STACK_LINE(543)
		::hscript::Expr body = this->parseExpr();		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			::hscript::Expr e = ::hscript::Expr_obj::EFunction(args,body,name,ret);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(544)
			return e;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("return"))){
		HX_STACK_LINE(546)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(547)
		{
			HX_STACK_LINE(547)
			::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(547)
			::haxe::ds::GenericCell_hscript_Token _g24 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(547)
			_this->head = _g24;
		}
		HX_STACK_LINE(548)
		::hscript::Expr e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(548)
		if (((tk == ::hscript::Token_obj::TSemicolon))){
			HX_STACK_LINE(548)
			e = null();
		}
		else{
			HX_STACK_LINE(548)
			e = this->parseExpr();
		}
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			::hscript::Expr e1 = ::hscript::Expr_obj::EReturn(e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(549)
			return e1;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("new"))){
		HX_STACK_LINE(551)
		Array< ::String > a = Array_obj< ::String >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(552)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(553)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(553)
				::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(554)
				a->push(id1);
			}
			;break;
			default: {
				HX_STACK_LINE(555)
				this->unexpected(tk);
			}
		}
		HX_STACK_LINE(557)
		bool next = true;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(558)
		while((true)){
			HX_STACK_LINE(558)
			if ((!(next))){
				HX_STACK_LINE(558)
				break;
			}
			HX_STACK_LINE(559)
			::hscript::Token _g25 = this->token();		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(559)
			tk = _g25;
			HX_STACK_LINE(560)
			switch( (int)(tk->__Index())){
				case (int)8: {
					HX_STACK_LINE(562)
					::hscript::Token _g26 = this->token();		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(562)
					tk = _g26;
					HX_STACK_LINE(563)
					switch( (int)(tk->__Index())){
						case (int)2: {
							HX_STACK_LINE(563)
							::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
							HX_STACK_LINE(564)
							a->push(id1);
						}
						;break;
						default: {
							HX_STACK_LINE(565)
							this->unexpected(tk);
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(568)
					next = false;
				}
				;break;
				default: {
					HX_STACK_LINE(570)
					this->unexpected(tk);
				}
			}
		}
		HX_STACK_LINE(573)
		Array< ::Dynamic > args = this->parseExprList(::hscript::Token_obj::TPClose);		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(574)
		{
			HX_STACK_LINE(574)
			::String _g27 = a->join(HX_CSTRING("."));		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(574)
			::hscript::Expr e = ::hscript::Expr_obj::ENew(_g27,args);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(574)
			return e;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("throw"))){
		HX_STACK_LINE(576)
		::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			::hscript::Expr e1 = ::hscript::Expr_obj::EThrow(e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(577)
			return e1;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("try"))){
		HX_STACK_LINE(579)
		::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(580)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(581)
		::hscript::Token _g28 = ::hscript::Token_obj::TId(HX_CSTRING("catch"));		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(581)
		if ((!(::Type_obj::enumEq(tk,_g28)))){
			HX_STACK_LINE(581)
			this->unexpected(tk);
		}
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(582)
			if (((t != ::hscript::Token_obj::TPOpen))){
				HX_STACK_LINE(582)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(583)
		::hscript::Token _g29 = this->token();		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(583)
		tk = _g29;
		HX_STACK_LINE(584)
		::String vname;		HX_STACK_VAR(vname,"vname");
		HX_STACK_LINE(584)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(584)
				::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(585)
				vname = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(586)
				vname = this->unexpected(tk);
			}
		}
		HX_STACK_LINE(588)
		{
			HX_STACK_LINE(588)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(588)
			if (((t != ::hscript::Token_obj::TDoubleDot))){
				HX_STACK_LINE(588)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(589)
		::hscript::CType t = null();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(590)
		if ((this->allowTypes)){
			HX_STACK_LINE(591)
			::hscript::CType _g30 = this->parseType();		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(591)
			t = _g30;
		}
		else{
			HX_STACK_LINE(593)
			::hscript::Token _g31 = this->token();		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(593)
			tk = _g31;
			HX_STACK_LINE(594)
			::hscript::Token _g32 = ::hscript::Token_obj::TId(HX_CSTRING("Dynamic"));		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(594)
			if ((!(::Type_obj::enumEq(tk,_g32)))){
				HX_STACK_LINE(594)
				this->unexpected(tk);
			}
		}
		HX_STACK_LINE(596)
		{
			HX_STACK_LINE(596)
			::hscript::Token t1 = this->token();		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(596)
			if (((t1 != ::hscript::Token_obj::TPClose))){
				HX_STACK_LINE(596)
				this->unexpected(t1);
			}
		}
		HX_STACK_LINE(597)
		::hscript::Expr ec = this->parseExpr();		HX_STACK_VAR(ec,"ec");
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(598)
			::hscript::Expr e1 = ::hscript::Expr_obj::ETry(e,vname,t,ec);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(598)
			return e1;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("switch"))){
		HX_STACK_LINE(600)
		::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(601)
		::hscript::Expr def = null();		HX_STACK_VAR(def,"def");
		HX_STACK_LINE(601)
		Dynamic cases = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(cases,"cases");
		HX_STACK_LINE(602)
		{
			HX_STACK_LINE(602)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(602)
			if (((t != ::hscript::Token_obj::TBrOpen))){
				HX_STACK_LINE(602)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(603)
		while((true)){
			HX_STACK_LINE(604)
			::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
			HX_STACK_LINE(605)
			int _switch_4 = (tk->__Index());
			if (  ( _switch_4==(int)2)){
				HX_STACK_LINE(605)
				::String _switch_5 = ((::hscript::Token(tk))->__Param(0));
				if (  ( _switch_5==HX_CSTRING("case"))){
					struct _Function_5_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",607,0x98735743)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("values") , Array_obj< ::Dynamic >::__new(),false);
								__result->Add(HX_CSTRING("expr") , null(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(607)
					Dynamic c = _Function_5_1::Block();		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(608)
					cases->__Field(HX_CSTRING("push"),true)(c);
					HX_STACK_LINE(609)
					while((true)){
						HX_STACK_LINE(610)
						::hscript::Expr e1 = this->parseExpr();		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(611)
						c->__Field(HX_CSTRING("values"),true)->__Field(HX_CSTRING("push"),true)(e1);
						HX_STACK_LINE(612)
						::hscript::Token _g33 = this->token();		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(612)
						tk = _g33;
						HX_STACK_LINE(613)
						int _switch_6 = (tk->__Index());
						if (  ( _switch_6==(int)9)){
						}
						else if (  ( _switch_6==(int)14)){
							HX_STACK_LINE(617)
							break;
						}
						else  {
							HX_STACK_LINE(619)
							this->unexpected(tk);
						}
;
;
					}
					HX_STACK_LINE(622)
					Array< ::Dynamic > exprs = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(exprs,"exprs");
					HX_STACK_LINE(623)
					while((true)){
						HX_STACK_LINE(624)
						::hscript::Token _g34 = this->token();		HX_STACK_VAR(_g34,"_g34");
						HX_STACK_LINE(624)
						tk = _g34;
						HX_STACK_LINE(625)
						{
							HX_STACK_LINE(625)
							::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(625)
							::haxe::ds::GenericCell_hscript_Token _g35 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g35,"_g35");
							HX_STACK_LINE(625)
							_this->head = _g35;
						}
						HX_STACK_LINE(626)
						int _switch_7 = (tk->__Index());
						if (  ( _switch_7==(int)2)){
							HX_STACK_LINE(626)
							::String _switch_8 = ((::hscript::Token(tk))->__Param(0));
							if (  ( _switch_8==HX_CSTRING("case")) ||  ( _switch_8==HX_CSTRING("default"))){
								HX_STACK_LINE(628)
								break;
							}
							else  {
								HX_STACK_LINE(630)
								::hscript::Expr _g36 = this->parseFullExpr();		HX_STACK_VAR(_g36,"_g36");
								HX_STACK_LINE(630)
								exprs->push(_g36);
							}
;
;
						}
						else if (  ( _switch_7==(int)7)){
							HX_STACK_LINE(628)
							break;
						}
						else  {
							HX_STACK_LINE(630)
							::hscript::Expr _g37 = this->parseFullExpr();		HX_STACK_VAR(_g37,"_g37");
							HX_STACK_LINE(630)
							exprs->push(_g37);
						}
;
;
					}
					HX_STACK_LINE(633)
					::hscript::Expr _g38;		HX_STACK_VAR(_g38,"_g38");
					HX_STACK_LINE(633)
					if (((exprs->length == (int)1))){
						HX_STACK_LINE(634)
						_g38 = exprs->__get((int)0).StaticCast< ::hscript::Expr >();
					}
					else{
						HX_STACK_LINE(635)
						if (((exprs->length == (int)0))){
							HX_STACK_LINE(636)
							::hscript::Expr e1 = ::hscript::Expr_obj::EBlock(Array_obj< ::Dynamic >::__new());		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(636)
							_g38 = e1;
						}
						else{
							HX_STACK_LINE(638)
							::hscript::Expr e1 = ::hscript::Expr_obj::EBlock(exprs);		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(638)
							_g38 = e1;
						}
					}
					HX_STACK_LINE(633)
					c->__FieldRef(HX_CSTRING("expr")) = _g38;
				}
				else if (  ( _switch_5==HX_CSTRING("default"))){
					HX_STACK_LINE(640)
					if (((def != null()))){
						HX_STACK_LINE(640)
						this->unexpected(tk);
					}
					HX_STACK_LINE(641)
					{
						HX_STACK_LINE(641)
						::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(641)
						if (((t != ::hscript::Token_obj::TDoubleDot))){
							HX_STACK_LINE(641)
							this->unexpected(t);
						}
					}
					HX_STACK_LINE(642)
					Array< ::Dynamic > exprs = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(exprs,"exprs");
					HX_STACK_LINE(643)
					while((true)){
						HX_STACK_LINE(644)
						::hscript::Token _g39 = this->token();		HX_STACK_VAR(_g39,"_g39");
						HX_STACK_LINE(644)
						tk = _g39;
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(645)
							::haxe::ds::GenericCell_hscript_Token _g40 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g40,"_g40");
							HX_STACK_LINE(645)
							_this->head = _g40;
						}
						HX_STACK_LINE(646)
						int _switch_9 = (tk->__Index());
						if (  ( _switch_9==(int)2)){
							HX_STACK_LINE(646)
							::String _switch_10 = ((::hscript::Token(tk))->__Param(0));
							if (  ( _switch_10==HX_CSTRING("case")) ||  ( _switch_10==HX_CSTRING("default"))){
								HX_STACK_LINE(648)
								break;
							}
							else  {
								HX_STACK_LINE(650)
								::hscript::Expr _g41 = this->parseFullExpr();		HX_STACK_VAR(_g41,"_g41");
								HX_STACK_LINE(650)
								exprs->push(_g41);
							}
;
;
						}
						else if (  ( _switch_9==(int)7)){
							HX_STACK_LINE(648)
							break;
						}
						else  {
							HX_STACK_LINE(650)
							::hscript::Expr _g42 = this->parseFullExpr();		HX_STACK_VAR(_g42,"_g42");
							HX_STACK_LINE(650)
							exprs->push(_g42);
						}
;
;
					}
					HX_STACK_LINE(653)
					::hscript::Expr _g43;		HX_STACK_VAR(_g43,"_g43");
					HX_STACK_LINE(653)
					if (((exprs->length == (int)1))){
						HX_STACK_LINE(654)
						_g43 = exprs->__get((int)0).StaticCast< ::hscript::Expr >();
					}
					else{
						HX_STACK_LINE(655)
						if (((exprs->length == (int)0))){
							HX_STACK_LINE(656)
							::hscript::Expr e1 = ::hscript::Expr_obj::EBlock(Array_obj< ::Dynamic >::__new());		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(656)
							_g43 = e1;
						}
						else{
							HX_STACK_LINE(658)
							::hscript::Expr e1 = ::hscript::Expr_obj::EBlock(exprs);		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(658)
							_g43 = e1;
						}
					}
					HX_STACK_LINE(653)
					def = _g43;
				}
				else  {
					HX_STACK_LINE(662)
					this->unexpected(tk);
				}
;
;
			}
			else if (  ( _switch_4==(int)7)){
				HX_STACK_LINE(660)
				break;
			}
			else  {
				HX_STACK_LINE(662)
				this->unexpected(tk);
			}
;
;
		}
		HX_STACK_LINE(665)
		{
			HX_STACK_LINE(665)
			::hscript::Expr e1 = ::hscript::Expr_obj::ESwitch(e,cases,def);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(665)
			return e1;
		}
	}
	else  {
		HX_STACK_LINE(667)
		return null();
	}
;
;
	HX_STACK_LINE(435)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseStructure,return )

::hscript::Expr Parser_obj::parseExprNext( ::hscript::Expr e1){
	HX_STACK_FRAME("hscript.Parser","parseExprNext",0x83d61847,"hscript.Parser.parseExprNext","hscript/Parser.hx",671,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e1,"e1")
	HX_STACK_LINE(672)
	::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(673)
	switch( (int)(tk->__Index())){
		case (int)3: {
			HX_STACK_LINE(673)
			::String op = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(674)
			{
				HX_STACK_LINE(675)
				if ((this->unops->get(op))){
					struct _Function_4_1{
						inline static bool Block( ::hscript::Expr &e1){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",676,0x98735743)
							{
								HX_STACK_LINE(676)
								switch( (int)(e1->__Index())){
									case (int)3: {
										HX_STACK_LINE(676)
										return true;
									}
									;break;
									default: {
										HX_STACK_LINE(676)
										return false;
									}
								}
							}
							return null();
						}
					};
					HX_STACK_LINE(676)
					if (((  ((!(this->isBlock(e1)))) ? bool(_Function_4_1::Block(e1)) : bool(true) ))){
						HX_STACK_LINE(677)
						{
							HX_STACK_LINE(677)
							::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(677)
							::haxe::ds::GenericCell_hscript_Token _g = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(677)
							_this->head = _g;
						}
						HX_STACK_LINE(678)
						return e1;
					}
					HX_STACK_LINE(680)
					::hscript::Expr _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(680)
					{
						HX_STACK_LINE(680)
						::hscript::Expr e = ::hscript::Expr_obj::EUnop(op,false,e1);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(680)
						_g1 = e;
					}
					HX_STACK_LINE(680)
					return this->parseExprNext(_g1);
				}
				HX_STACK_LINE(682)
				::hscript::Expr _g2 = this->parseExpr();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(682)
				return this->makeBinop(op,e1,_g2);
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(684)
			::hscript::Token _g3 = this->token();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(684)
			tk = _g3;
			HX_STACK_LINE(685)
			::String field = null();		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(686)
			switch( (int)(tk->__Index())){
				case (int)2: {
					HX_STACK_LINE(686)
					::String id = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(687)
					field = id;
				}
				;break;
				default: {
					HX_STACK_LINE(688)
					this->unexpected(tk);
				}
			}
			HX_STACK_LINE(690)
			::hscript::Expr _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(690)
			{
				HX_STACK_LINE(690)
				::hscript::Expr e = ::hscript::Expr_obj::EField(e1,field);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(690)
				_g4 = e;
			}
			HX_STACK_LINE(690)
			return this->parseExprNext(_g4);
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(692)
			::hscript::Expr _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(692)
			{
				HX_STACK_LINE(692)
				Array< ::Dynamic > _g5 = this->parseExprList(::hscript::Token_obj::TPClose);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(692)
				::hscript::Expr e = ::hscript::Expr_obj::ECall(e1,_g5);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(692)
				_g6 = e;
			}
			HX_STACK_LINE(692)
			return this->parseExprNext(_g6);
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(694)
			::hscript::Expr e2 = this->parseExpr();		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(695)
			{
				HX_STACK_LINE(695)
				::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(695)
				if (((t != ::hscript::Token_obj::TBkClose))){
					HX_STACK_LINE(695)
					this->unexpected(t);
				}
			}
			HX_STACK_LINE(696)
			::hscript::Expr _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(696)
			{
				HX_STACK_LINE(696)
				::hscript::Expr e = ::hscript::Expr_obj::EArray(e1,e2);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(696)
				_g7 = e;
			}
			HX_STACK_LINE(696)
			return this->parseExprNext(_g7);
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(698)
			::hscript::Expr e2 = this->parseExpr();		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(699)
			{
				HX_STACK_LINE(699)
				::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(699)
				if (((t != ::hscript::Token_obj::TDoubleDot))){
					HX_STACK_LINE(699)
					this->unexpected(t);
				}
			}
			HX_STACK_LINE(700)
			::hscript::Expr e3 = this->parseExpr();		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(701)
			{
				HX_STACK_LINE(701)
				::hscript::Expr e = ::hscript::Expr_obj::ETernary(e1,e2,e3);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(701)
				return e;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(703)
			{
				HX_STACK_LINE(703)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(703)
				::haxe::ds::GenericCell_hscript_Token _g8 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(703)
				_this->head = _g8;
			}
			HX_STACK_LINE(704)
			return e1;
		}
	}
	HX_STACK_LINE(673)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprNext,return )

::hscript::CType Parser_obj::parseType( ){
	HX_STACK_FRAME("hscript.Parser","parseType",0x98ecb2b9,"hscript.Parser.parseType","hscript/Parser.hx",708,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(709)
	::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(710)
	switch( (int)(t->__Index())){
		case (int)2: {
			HX_STACK_LINE(710)
			::String v = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(711)
			{
				HX_STACK_LINE(712)
				Array< ::String > path = Array_obj< ::String >::__new().Add(v);		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(713)
				while((true)){
					HX_STACK_LINE(714)
					::hscript::Token _g = this->token();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(714)
					t = _g;
					HX_STACK_LINE(715)
					if (((t != ::hscript::Token_obj::TDot))){
						HX_STACK_LINE(716)
						break;
					}
					HX_STACK_LINE(717)
					::hscript::Token _g1 = this->token();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(717)
					t = _g1;
					HX_STACK_LINE(718)
					switch( (int)(t->__Index())){
						case (int)2: {
							HX_STACK_LINE(718)
							::String v1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(720)
							path->push(v1);
						}
						;break;
						default: {
							HX_STACK_LINE(722)
							this->unexpected(t);
						}
					}
				}
				HX_STACK_LINE(725)
				Array< ::Dynamic > params = null();		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(726)
				switch( (int)(t->__Index())){
					case (int)3: {
						HX_STACK_LINE(726)
						::String op = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(op,"op");
						HX_STACK_LINE(728)
						if (((op == HX_CSTRING("<")))){
							HX_STACK_LINE(729)
							params = Array_obj< ::Dynamic >::__new();
							HX_STACK_LINE(730)
							while((true)){
								HX_STACK_LINE(731)
								::hscript::CType _g2 = this->parseType();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(731)
								params->push(_g2);
								HX_STACK_LINE(732)
								::hscript::Token _g3 = this->token();		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(732)
								t = _g3;
								HX_STACK_LINE(733)
								int _switch_11 = (t->__Index());
								if (  ( _switch_11==(int)9)){
									HX_STACK_LINE(734)
									continue;
								}
								else if (  ( _switch_11==(int)3)){
									HX_STACK_LINE(733)
									::String op1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(op1,"op1");
									HX_STACK_LINE(735)
									if (((op1 == HX_CSTRING(">")))){
										HX_STACK_LINE(735)
										break;
									}
								}
								else  {
								}
;
;
								HX_STACK_LINE(738)
								this->unexpected(t);
							}
						}
					}
					;break;
					default: {
						HX_STACK_LINE(742)
						::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(742)
						::haxe::ds::GenericCell_hscript_Token _g4 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(t,_this->head);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(742)
						_this->head = _g4;
					}
				}
				HX_STACK_LINE(744)
				::hscript::CType _g5 = ::hscript::CType_obj::CTPath(path,params);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(744)
				return this->parseTypeNext(_g5);
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(746)
			::hscript::CType t1 = this->parseType();		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(747)
			{
				HX_STACK_LINE(747)
				::hscript::Token t2 = this->token();		HX_STACK_VAR(t2,"t2");
				HX_STACK_LINE(747)
				if (((t2 != ::hscript::Token_obj::TPClose))){
					HX_STACK_LINE(747)
					this->unexpected(t2);
				}
			}
			HX_STACK_LINE(748)
			::hscript::CType _g6 = ::hscript::CType_obj::CTParent(t1);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(748)
			return this->parseTypeNext(_g6);
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(750)
			Dynamic fields = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(fields,"fields");
			HX_STACK_LINE(751)
			while((true)){
				HX_STACK_LINE(752)
				::hscript::Token _g7 = this->token();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(752)
				t = _g7;
				HX_STACK_LINE(753)
				int _switch_12 = (t->__Index());
				if (  ( _switch_12==(int)7)){
					HX_STACK_LINE(754)
					break;
				}
				else if (  ( _switch_12==(int)2)){
					HX_STACK_LINE(753)
					::String name = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							::hscript::Token t1 = this->token();		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(756)
							if (((t1 != ::hscript::Token_obj::TDoubleDot))){
								HX_STACK_LINE(756)
								this->unexpected(t1);
							}
						}
						HX_STACK_LINE(757)
						::hscript::CType _g8 = this->parseType();		HX_STACK_VAR(_g8,"_g8");
						struct _Function_5_1{
							inline static Dynamic Block( ::hscript::CType &_g8,::String &name){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",757,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("name") , name,false);
									__result->Add(HX_CSTRING("t") , _g8,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(757)
						Dynamic _g9 = _Function_5_1::Block(_g8,name);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(757)
						fields->__Field(HX_CSTRING("push"),true)(_g9);
						HX_STACK_LINE(758)
						::hscript::Token _g10 = this->token();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(758)
						t = _g10;
						HX_STACK_LINE(759)
						int _switch_13 = (t->__Index());
						if (  ( _switch_13==(int)9)){
						}
						else if (  ( _switch_13==(int)7)){
							HX_STACK_LINE(761)
							break;
						}
						else  {
							HX_STACK_LINE(762)
							this->unexpected(t);
						}
;
;
					}
				}
				else  {
					HX_STACK_LINE(765)
					this->unexpected(t);
				}
;
;
			}
			HX_STACK_LINE(768)
			::hscript::CType _g11 = ::hscript::CType_obj::CTAnon(fields);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(768)
			return this->parseTypeNext(_g11);
		}
		;break;
		default: {
			HX_STACK_LINE(770)
			return this->unexpected(t);
		}
	}
	HX_STACK_LINE(710)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseType,return )

::hscript::CType Parser_obj::parseTypeNext( ::hscript::CType t){
	HX_STACK_FRAME("hscript.Parser","parseTypeNext",0x8b2ab44c,"hscript.Parser.parseTypeNext","hscript/Parser.hx",774,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(775)
	::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(776)
	switch( (int)(tk->__Index())){
		case (int)3: {
			HX_STACK_LINE(776)
			::String op = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(778)
			if (((op != HX_CSTRING("->")))){
				HX_STACK_LINE(779)
				{
					HX_STACK_LINE(779)
					::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(779)
					::haxe::ds::GenericCell_hscript_Token _g = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(779)
					_this->head = _g;
				}
				HX_STACK_LINE(780)
				return t;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(783)
			{
				HX_STACK_LINE(783)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(783)
				::haxe::ds::GenericCell_hscript_Token _g1 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(783)
				_this->head = _g1;
			}
			HX_STACK_LINE(784)
			return t;
		}
	}
	HX_STACK_LINE(786)
	::hscript::CType t2 = this->parseType();		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(787)
	switch( (int)(t2->__Index())){
		case (int)1: {
			HX_STACK_LINE(787)
			Array< ::Dynamic > args = (::hscript::CType(t2))->__Param(0);		HX_STACK_VAR(args,"args");
			HX_STACK_LINE(788)
			{
				HX_STACK_LINE(789)
				args->unshift(t);
				HX_STACK_LINE(790)
				return t2;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(792)
			return ::hscript::CType_obj::CTFun(Array_obj< ::Dynamic >::__new().Add(t),t2);
		}
	}
	HX_STACK_LINE(787)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseTypeNext,return )

Array< ::Dynamic > Parser_obj::parseExprList( ::hscript::Token etk){
	HX_STACK_FRAME("hscript.Parser","parseExprList",0x8286afb2,"hscript.Parser.parseExprList","hscript/Parser.hx",796,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(etk,"etk")
	HX_STACK_LINE(797)
	Array< ::Dynamic > args = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(798)
	::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(799)
	if (((tk == etk))){
		HX_STACK_LINE(800)
		return args;
	}
	HX_STACK_LINE(801)
	{
		HX_STACK_LINE(801)
		::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(801)
		::haxe::ds::GenericCell_hscript_Token _g = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(801)
		_this->head = _g;
	}
	HX_STACK_LINE(802)
	while((true)){
		HX_STACK_LINE(803)
		::hscript::Expr _g1 = this->parseExpr();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(803)
		args->push(_g1);
		HX_STACK_LINE(804)
		::hscript::Token _g2 = this->token();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(804)
		tk = _g2;
		HX_STACK_LINE(805)
		int _switch_14 = (tk->__Index());
		if (  ( _switch_14==(int)9)){
		}
		else  {
			HX_STACK_LINE(808)
			if (((tk == etk))){
				HX_STACK_LINE(808)
				break;
			}
			HX_STACK_LINE(809)
			this->unexpected(tk);
		}
;
;
	}
	HX_STACK_LINE(812)
	return args;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprList,return )

Void Parser_obj::incPos( ){
{
		HX_STACK_FRAME("hscript.Parser","incPos",0xe19d25aa,"hscript.Parser.incPos","hscript/Parser.hx",815,0x98735743)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,incPos,(void))

int Parser_obj::readChar( ){
	HX_STACK_FRAME("hscript.Parser","readChar",0x8625b4a0,"hscript.Parser.readChar","hscript/Parser.hx",823,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(823)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(823)
		return this->input->readByte();
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(823)
				return (int)0;
			}
		}
	}
	HX_STACK_LINE(823)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readChar,return )

::String Parser_obj::readString( int until){
	HX_STACK_FRAME("hscript.Parser","readString",0xfc2f051b,"hscript.Parser.readString","hscript/Parser.hx",826,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(until,"until")
	HX_STACK_LINE(827)
	int c = (int)0;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(828)
	::haxe::io::BytesOutput b = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(829)
	bool esc = false;		HX_STACK_VAR(esc,"esc");
	HX_STACK_LINE(830)
	int old = this->line;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(831)
	::haxe::io::Input s = this->input;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(835)
	while((true)){
		HX_STACK_LINE(836)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(838)
			int _g = s->readByte();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(838)
			c = _g;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(840)
					this->line = old;
					HX_STACK_LINE(841)
					HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedString);
				}
			}
		}
		HX_STACK_LINE(843)
		if ((esc)){
			HX_STACK_LINE(844)
			esc = false;
			HX_STACK_LINE(845)
			switch( (int)(c)){
				case (int)110: {
					HX_STACK_LINE(846)
					b->writeByte((int)10);
				}
				;break;
				case (int)114: {
					HX_STACK_LINE(847)
					b->writeByte((int)13);
				}
				;break;
				case (int)116: {
					HX_STACK_LINE(848)
					b->writeByte((int)9);
				}
				;break;
				case (int)39: case (int)34: case (int)92: {
					HX_STACK_LINE(849)
					b->writeByte(c);
				}
				;break;
				case (int)47: {
					HX_STACK_LINE(850)
					if ((this->allowJSON)){
						HX_STACK_LINE(850)
						b->writeByte(c);
					}
					else{
						HX_STACK_LINE(850)
						this->invalidChar(c);
					}
				}
				;break;
				case (int)117: {
					HX_STACK_LINE(852)
					if ((!(this->allowJSON))){
						HX_STACK_LINE(852)
						HX_STACK_DO_THROW(this->invalidChar(c));
					}
					HX_STACK_LINE(853)
					::String code = null();		HX_STACK_VAR(code,"code");
					HX_STACK_LINE(854)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(859)
						::String _g1 = s->readString((int)4);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(859)
						code = _g1;
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(861)
								this->line = old;
								HX_STACK_LINE(862)
								HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedString);
							}
						}
					}
					HX_STACK_LINE(864)
					int k = (int)0;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(865)
					{
						HX_STACK_LINE(865)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(865)
						while((true)){
							HX_STACK_LINE(865)
							if ((!(((_g < (int)4))))){
								HX_STACK_LINE(865)
								break;
							}
							HX_STACK_LINE(865)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(866)
							hx::ShlEq(k,(int)4);
							HX_STACK_LINE(867)
							Dynamic _char = code.charCodeAt(i);		HX_STACK_VAR(_char,"char");
							HX_STACK_LINE(868)
							switch( (int)(_char)){
								case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
									HX_STACK_LINE(870)
									hx::AddEq(k,(_char - (int)48));
								}
								;break;
								case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
									HX_STACK_LINE(872)
									hx::AddEq(k,(_char - (int)55));
								}
								;break;
								case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
									HX_STACK_LINE(874)
									hx::AddEq(k,(_char - (int)87));
								}
								;break;
								default: {
									HX_STACK_LINE(876)
									this->invalidChar(_char);
								}
							}
						}
					}
					HX_STACK_LINE(880)
					if (((k <= (int)127))){
						HX_STACK_LINE(881)
						b->writeByte(k);
					}
					else{
						HX_STACK_LINE(882)
						if (((k <= (int)2047))){
							HX_STACK_LINE(883)
							b->writeByte((int((int)192) | int((int(k) >> int((int)6)))));
							HX_STACK_LINE(884)
							b->writeByte((int((int)128) | int((int(k) & int((int)63)))));
						}
						else{
							HX_STACK_LINE(886)
							b->writeByte((int((int)224) | int((int(k) >> int((int)12)))));
							HX_STACK_LINE(887)
							b->writeByte((int((int)128) | int((int((int(k) >> int((int)6))) & int((int)63)))));
							HX_STACK_LINE(888)
							b->writeByte((int((int)128) | int((int(k) & int((int)63)))));
						}
					}
				}
				;break;
				default: {
					HX_STACK_LINE(890)
					this->invalidChar(c);
				}
			}
		}
		else{
			HX_STACK_LINE(892)
			if (((c == (int)92))){
				HX_STACK_LINE(893)
				esc = true;
			}
			else{
				HX_STACK_LINE(894)
				if (((c == until))){
					HX_STACK_LINE(895)
					break;
				}
				else{
					HX_STACK_LINE(897)
					if (((c == (int)10))){
						HX_STACK_LINE(897)
						(this->line)++;
					}
					HX_STACK_LINE(898)
					b->writeByte(c);
				}
			}
		}
	}
	HX_STACK_LINE(901)
	return b->getBytes()->toString();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readString,return )

::hscript::Token Parser_obj::token( ){
	HX_STACK_FRAME("hscript.Parser","token",0x3cb36b25,"hscript.Parser.token","hscript/Parser.hx",904,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(922)
	if ((!(((this->tokens->head == null()))))){
		HX_STACK_LINE(923)
		::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(923)
		::haxe::ds::GenericCell_hscript_Token k = _this->head;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(923)
		if (((k == null()))){
			HX_STACK_LINE(923)
			return null();
		}
		else{
			HX_STACK_LINE(923)
			_this->head = k->next;
			HX_STACK_LINE(923)
			return k->elt;
		}
	}
	HX_STACK_LINE(925)
	int _char;		HX_STACK_VAR(_char,"char");
	HX_STACK_LINE(926)
	if (((this->_char < (int)0))){
		HX_STACK_LINE(927)
		int _g = this->readChar();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(927)
		_char = _g;
	}
	else{
		HX_STACK_LINE(929)
		_char = this->_char;
		HX_STACK_LINE(930)
		this->_char = (int)-1;
	}
	HX_STACK_LINE(932)
	while((true)){
		HX_STACK_LINE(933)
		switch( (int)(_char)){
			case (int)0: {
				HX_STACK_LINE(934)
				return ::hscript::Token_obj::TEof;
			}
			;break;
			case (int)32: case (int)9: case (int)13: {
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(939)
				(this->line)++;
			}
			;break;
			case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
				HX_STACK_LINE(944)
				Float n = (((_char - (int)48)) * 1.0);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(945)
				Float exp = 0.;		HX_STACK_VAR(exp,"exp");
				HX_STACK_LINE(946)
				while((true)){
					HX_STACK_LINE(947)
					int _g1 = this->readChar();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(947)
					_char = _g1;
					HX_STACK_LINE(948)
					hx::MultEq(exp,(int)10);
					HX_STACK_LINE(949)
					switch( (int)(_char)){
						case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
							HX_STACK_LINE(951)
							n = ((n * (int)10) + ((_char - (int)48)));
						}
						;break;
						case (int)46: {
							HX_STACK_LINE(953)
							if (((exp > (int)0))){
								struct _Function_6_1{
									inline static bool Block( hx::ObjectPtr< ::hscript::Parser_obj > __this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",955,0x98735743)
										{
											HX_STACK_LINE(955)
											int _g2 = __this->readChar();		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(955)
											return (_g2 == (int)46);
										}
										return null();
									}
								};
								HX_STACK_LINE(955)
								if (((  (((exp == (int)10))) ? bool(_Function_6_1::Block(this)) : bool(false) ))){
									HX_STACK_LINE(956)
									{
										HX_STACK_LINE(956)
										::hscript::Token tk = ::hscript::Token_obj::TOp(HX_CSTRING("..."));		HX_STACK_VAR(tk,"tk");
										HX_STACK_LINE(956)
										{
											HX_STACK_LINE(956)
											::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(956)
											::haxe::ds::GenericCell_hscript_Token _g3 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(956)
											_this->head = _g3;
										}
									}
									HX_STACK_LINE(957)
									int i = ::Std_obj::_int(n);		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(958)
									::hscript::Const _g4;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(958)
									if (((i == n))){
										HX_STACK_LINE(958)
										_g4 = ::hscript::Const_obj::CInt(i);
									}
									else{
										HX_STACK_LINE(958)
										_g4 = ::hscript::Const_obj::CFloat(n);
									}
									HX_STACK_LINE(958)
									return ::hscript::Token_obj::TConst(_g4);
								}
								HX_STACK_LINE(960)
								this->invalidChar(_char);
							}
							HX_STACK_LINE(962)
							exp = 1.;
						}
						;break;
						case (int)120: {
							HX_STACK_LINE(964)
							if (((bool((n > (int)0)) || bool((exp > (int)0))))){
								HX_STACK_LINE(965)
								this->invalidChar(_char);
							}
							HX_STACK_LINE(968)
							int n1 = (int)0;		HX_STACK_VAR(n1,"n1");
							HX_STACK_LINE(969)
							while((true)){
								HX_STACK_LINE(970)
								int _g5 = this->readChar();		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(970)
								_char = _g5;
								HX_STACK_LINE(971)
								switch( (int)(_char)){
									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
										HX_STACK_LINE(973)
										n1 = ((((int(n1) << int((int)4))) + _char) - (int)48);
									}
									;break;
									case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
										HX_STACK_LINE(975)
										n1 = (((int(n1) << int((int)4))) + ((_char - (int)55)));
									}
									;break;
									case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
										HX_STACK_LINE(977)
										n1 = (((int(n1) << int((int)4))) + ((_char - (int)87)));
									}
									;break;
									default: {
										HX_STACK_LINE(979)
										this->_char = _char;
										HX_STACK_LINE(980)
										::hscript::Const _g6 = ::hscript::Const_obj::CInt(n1);		HX_STACK_VAR(_g6,"_g6");
										HX_STACK_LINE(980)
										return ::hscript::Token_obj::TConst(_g6);
									}
								}
							}
						}
						;break;
						default: {
							HX_STACK_LINE(1005)
							this->_char = _char;
							HX_STACK_LINE(1006)
							int i = ::Std_obj::_int(n);		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1007)
							::hscript::Const _g7;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1007)
							if (((exp > (int)0))){
								HX_STACK_LINE(1007)
								_g7 = ::hscript::Const_obj::CFloat((Float((n * (int)10)) / Float(exp)));
							}
							else{
								HX_STACK_LINE(1007)
								if (((i == n))){
									HX_STACK_LINE(1007)
									_g7 = ::hscript::Const_obj::CInt(i);
								}
								else{
									HX_STACK_LINE(1007)
									_g7 = ::hscript::Const_obj::CFloat(n);
								}
							}
							HX_STACK_LINE(1007)
							return ::hscript::Token_obj::TConst(_g7);
						}
					}
				}
			}
			;break;
			case (int)59: {
				HX_STACK_LINE(1010)
				return ::hscript::Token_obj::TSemicolon;
			}
			;break;
			case (int)40: {
				HX_STACK_LINE(1011)
				return ::hscript::Token_obj::TPOpen;
			}
			;break;
			case (int)41: {
				HX_STACK_LINE(1012)
				return ::hscript::Token_obj::TPClose;
			}
			;break;
			case (int)44: {
				HX_STACK_LINE(1013)
				return ::hscript::Token_obj::TComma;
			}
			;break;
			case (int)46: {
				HX_STACK_LINE(1015)
				int _g8 = this->readChar();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1015)
				_char = _g8;
				HX_STACK_LINE(1016)
				switch( (int)(_char)){
					case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
						HX_STACK_LINE(1018)
						int n = (_char - (int)48);		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(1019)
						int exp = (int)1;		HX_STACK_VAR(exp,"exp");
						HX_STACK_LINE(1020)
						while((true)){
							HX_STACK_LINE(1021)
							int _g9 = this->readChar();		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1021)
							_char = _g9;
							HX_STACK_LINE(1022)
							hx::MultEq(exp,(int)10);
							HX_STACK_LINE(1023)
							switch( (int)(_char)){
								case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
									HX_STACK_LINE(1025)
									n = ((n * (int)10) + ((_char - (int)48)));
								}
								;break;
								default: {
									HX_STACK_LINE(1027)
									this->_char = _char;
									HX_STACK_LINE(1028)
									::hscript::Const _g10 = ::hscript::Const_obj::CFloat((Float(n) / Float(exp)));		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(1028)
									return ::hscript::Token_obj::TConst(_g10);
								}
							}
						}
					}
					;break;
					case (int)46: {
						HX_STACK_LINE(1032)
						int _g11 = this->readChar();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(1032)
						_char = _g11;
						HX_STACK_LINE(1033)
						if (((_char != (int)46))){
							HX_STACK_LINE(1034)
							this->invalidChar(_char);
						}
						HX_STACK_LINE(1035)
						return ::hscript::Token_obj::TOp(HX_CSTRING("..."));
					}
					;break;
					default: {
						HX_STACK_LINE(1037)
						this->_char = _char;
						HX_STACK_LINE(1038)
						return ::hscript::Token_obj::TDot;
					}
				}
			}
			;break;
			case (int)123: {
				HX_STACK_LINE(1040)
				return ::hscript::Token_obj::TBrOpen;
			}
			;break;
			case (int)125: {
				HX_STACK_LINE(1041)
				return ::hscript::Token_obj::TBrClose;
			}
			;break;
			case (int)91: {
				HX_STACK_LINE(1042)
				return ::hscript::Token_obj::TBkOpen;
			}
			;break;
			case (int)93: {
				HX_STACK_LINE(1043)
				return ::hscript::Token_obj::TBkClose;
			}
			;break;
			case (int)39: {
				HX_STACK_LINE(1044)
				::String _g12 = this->readString((int)39);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(1044)
				::hscript::Const _g13 = ::hscript::Const_obj::CString(_g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(1044)
				return ::hscript::Token_obj::TConst(_g13);
			}
			;break;
			case (int)34: {
				HX_STACK_LINE(1045)
				::String _g14 = this->readString((int)34);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(1045)
				::hscript::Const _g15 = ::hscript::Const_obj::CString(_g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(1045)
				return ::hscript::Token_obj::TConst(_g15);
			}
			;break;
			case (int)63: {
				HX_STACK_LINE(1046)
				return ::hscript::Token_obj::TQuestion;
			}
			;break;
			case (int)58: {
				HX_STACK_LINE(1047)
				return ::hscript::Token_obj::TDoubleDot;
			}
			;break;
			default: {
				HX_STACK_LINE(1049)
				if ((this->ops->__get(_char))){
					HX_STACK_LINE(1050)
					::String op = ::String::fromCharCode(_char);		HX_STACK_VAR(op,"op");
					HX_STACK_LINE(1051)
					while((true)){
						HX_STACK_LINE(1052)
						int _g16 = this->readChar();		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(1052)
						_char = _g16;
						HX_STACK_LINE(1053)
						if ((!(this->ops->__get(_char)))){
							HX_STACK_LINE(1054)
							Dynamic _g17 = op.charCodeAt((int)0);		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(1054)
							if (((_g17 == (int)47))){
								HX_STACK_LINE(1055)
								return this->tokenComment(op,_char);
							}
							HX_STACK_LINE(1056)
							this->_char = _char;
							HX_STACK_LINE(1057)
							return ::hscript::Token_obj::TOp(op);
						}
						HX_STACK_LINE(1059)
						::String _g18 = ::String::fromCharCode(_char);		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(1059)
						hx::AddEq(op,_g18);
					}
				}
				HX_STACK_LINE(1062)
				if ((this->idents->__get(_char))){
					HX_STACK_LINE(1063)
					::String id = ::String::fromCharCode(_char);		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(1064)
					while((true)){
						HX_STACK_LINE(1065)
						int _g19 = this->readChar();		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(1065)
						_char = _g19;
						HX_STACK_LINE(1066)
						if ((!(this->idents->__get(_char)))){
							HX_STACK_LINE(1067)
							this->_char = _char;
							HX_STACK_LINE(1068)
							return ::hscript::Token_obj::TId(id);
						}
						HX_STACK_LINE(1070)
						::String _g20 = ::String::fromCharCode(_char);		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(1070)
						hx::AddEq(id,_g20);
					}
				}
				HX_STACK_LINE(1073)
				this->invalidChar(_char);
			}
		}
		HX_STACK_LINE(1075)
		int _g21 = this->readChar();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(1075)
		_char = _g21;
	}
	HX_STACK_LINE(1077)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,token,return )

::hscript::Token Parser_obj::tokenComment( ::String op,int _char){
	HX_STACK_FRAME("hscript.Parser","tokenComment",0xb86c15ba,"hscript.Parser.tokenComment","hscript/Parser.hx",1080,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(1081)
	Dynamic c = op.charCodeAt((int)1);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(1082)
	::haxe::io::Input s = this->input;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1083)
	if (((c == (int)47))){
		HX_STACK_LINE(1084)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1085)
			while((true)){
				HX_STACK_LINE(1085)
				if ((!(((bool((_char != (int)10)) && bool((_char != (int)13))))))){
					HX_STACK_LINE(1085)
					break;
				}
				HX_STACK_LINE(1087)
				int _g = s->readByte();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1087)
				_char = _g;
			}
			HX_STACK_LINE(1089)
			this->_char = _char;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
		HX_STACK_LINE(1092)
		return this->token();
	}
	HX_STACK_LINE(1094)
	if (((c == (int)42))){
		HX_STACK_LINE(1095)
		int old = this->line;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(1096)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1097)
			while((true)){
				HX_STACK_LINE(1098)
				while((true)){
					HX_STACK_LINE(1098)
					if ((!(((_char != (int)42))))){
						HX_STACK_LINE(1098)
						break;
					}
					HX_STACK_LINE(1099)
					if (((_char == (int)10))){
						HX_STACK_LINE(1099)
						(this->line)++;
					}
					HX_STACK_LINE(1101)
					int _g1 = s->readByte();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1101)
					_char = _g1;
				}
				HX_STACK_LINE(1104)
				int _g2 = s->readByte();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1104)
				_char = _g2;
				HX_STACK_LINE(1105)
				if (((_char == (int)47))){
					HX_STACK_LINE(1106)
					break;
				}
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(1109)
					this->line = old;
					HX_STACK_LINE(1110)
					HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedComment);
				}
			}
		}
		HX_STACK_LINE(1112)
		return this->token();
	}
	HX_STACK_LINE(1114)
	this->_char = _char;
	HX_STACK_LINE(1115)
	return ::hscript::Token_obj::TOp(op);
}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,tokenComment,return )

::String Parser_obj::constString( ::hscript::Const c){
	HX_STACK_FRAME("hscript.Parser","constString",0x0a4693c0,"hscript.Parser.constString","hscript/Parser.hx",1119,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(1119)
	switch( (int)(c->__Index())){
		case (int)0: {
			HX_STACK_LINE(1119)
			int v = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1120)
			return ::Std_obj::string(v);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1119)
			Float f = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1121)
			return ::Std_obj::string(f);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1119)
			::String s = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1122)
			return s;
		}
		;break;
	}
	HX_STACK_LINE(1119)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,constString,return )

::String Parser_obj::tokenString( ::hscript::Token t){
	HX_STACK_FRAME("hscript.Parser","tokenString",0x05f471d6,"hscript.Parser.tokenString","hscript/Parser.hx",1130,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(1130)
	switch( (int)(t->__Index())){
		case (int)0: {
			HX_STACK_LINE(1131)
			return HX_CSTRING("<eof>");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1130)
			::hscript::Const c = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1132)
			return this->constString(c);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1130)
			::String s = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1133)
			return s;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1130)
			::String s = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1134)
			return s;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(1135)
			return HX_CSTRING("(");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(1136)
			return HX_CSTRING(")");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(1137)
			return HX_CSTRING("{");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(1138)
			return HX_CSTRING("}");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(1139)
			return HX_CSTRING(".");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(1140)
			return HX_CSTRING(",");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(1141)
			return HX_CSTRING(";");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(1142)
			return HX_CSTRING("[");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(1143)
			return HX_CSTRING("]");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(1144)
			return HX_CSTRING("?");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(1145)
			return HX_CSTRING(":");
		}
		;break;
	}
	HX_STACK_LINE(1130)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenString,return )

int Parser_obj::p1;

int Parser_obj::readPos;

int Parser_obj::tokenMin;

int Parser_obj::tokenMax;


Parser_obj::Parser_obj()
{
}

void Parser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parser);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(opChars,"opChars");
	HX_MARK_MEMBER_NAME(identChars,"identChars");
	HX_MARK_MEMBER_NAME(opPriority,"opPriority");
	HX_MARK_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_MARK_MEMBER_NAME(unops,"unops");
	HX_MARK_MEMBER_NAME(allowJSON,"allowJSON");
	HX_MARK_MEMBER_NAME(allowTypes,"allowTypes");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(_char,"char");
	HX_MARK_MEMBER_NAME(ops,"ops");
	HX_MARK_MEMBER_NAME(idents,"idents");
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(tokens,"tokens");
	HX_MARK_END_CLASS();
}

void Parser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(opChars,"opChars");
	HX_VISIT_MEMBER_NAME(identChars,"identChars");
	HX_VISIT_MEMBER_NAME(opPriority,"opPriority");
	HX_VISIT_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_VISIT_MEMBER_NAME(unops,"unops");
	HX_VISIT_MEMBER_NAME(allowJSON,"allowJSON");
	HX_VISIT_MEMBER_NAME(allowTypes,"allowTypes");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(_char,"char");
	HX_VISIT_MEMBER_NAME(ops,"ops");
	HX_VISIT_MEMBER_NAME(idents,"idents");
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(tokens,"tokens");
}

Dynamic Parser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { return mk_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { return ops; }
		if (HX_FIELD_EQ(inName,"uid") ) { return uid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line; }
		if (HX_FIELD_EQ(inName,"char") ) { return _char; }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"expr") ) { return expr_dyn(); }
		if (HX_FIELD_EQ(inName,"pmin") ) { return pmin_dyn(); }
		if (HX_FIELD_EQ(inName,"pmax") ) { return pmax_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { return unops; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		if (HX_FIELD_EQ(inName,"token") ) { return token_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { return idents; }
		if (HX_FIELD_EQ(inName,"tokens") ) { return tokens; }
		if (HX_FIELD_EQ(inName,"ensure") ) { return ensure_dyn(); }
		if (HX_FIELD_EQ(inName,"incPos") ) { return incPos_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { return opChars; }
		if (HX_FIELD_EQ(inName,"isBlock") ) { return isBlock_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapCompr") ) { return mapCompr_dyn(); }
		if (HX_FIELD_EQ(inName,"makeUnop") ) { return makeUnop_dyn(); }
		if (HX_FIELD_EQ(inName,"readChar") ) { return readChar_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { return allowJSON; }
		if (HX_FIELD_EQ(inName,"parseExpr") ) { return parseExpr_dyn(); }
		if (HX_FIELD_EQ(inName,"makeBinop") ) { return makeBinop_dyn(); }
		if (HX_FIELD_EQ(inName,"parseType") ) { return parseType_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { return identChars; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { return opPriority; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { return allowTypes; }
		if (HX_FIELD_EQ(inName,"unexpected") ) { return unexpected_dyn(); }
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return invalidChar_dyn(); }
		if (HX_FIELD_EQ(inName,"parseString") ) { return parseString_dyn(); }
		if (HX_FIELD_EQ(inName,"parseObject") ) { return parseObject_dyn(); }
		if (HX_FIELD_EQ(inName,"constString") ) { return constString_dyn(); }
		if (HX_FIELD_EQ(inName,"tokenString") ) { return tokenString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { return opRightAssoc; }
		if (HX_FIELD_EQ(inName,"tokenComment") ) { return tokenComment_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseFullExpr") ) { return parseFullExpr_dyn(); }
		if (HX_FIELD_EQ(inName,"parseExprNext") ) { return parseExprNext_dyn(); }
		if (HX_FIELD_EQ(inName,"parseTypeNext") ) { return parseTypeNext_dyn(); }
		if (HX_FIELD_EQ(inName,"parseExprList") ) { return parseExprList_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseStructure") ) { return parseStructure_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Parser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { ops=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"char") ) { _char=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { unops=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { idents=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokens") ) { tokens=inValue.Cast< ::haxe::ds::GenericStack_hscript_Token >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { opChars=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { allowJSON=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { identChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { opPriority=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { allowTypes=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { opRightAssoc=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("line"));
	outFields->push(HX_CSTRING("opChars"));
	outFields->push(HX_CSTRING("identChars"));
	outFields->push(HX_CSTRING("opPriority"));
	outFields->push(HX_CSTRING("opRightAssoc"));
	outFields->push(HX_CSTRING("unops"));
	outFields->push(HX_CSTRING("allowJSON"));
	outFields->push(HX_CSTRING("allowTypes"));
	outFields->push(HX_CSTRING("input"));
	outFields->push(HX_CSTRING("char"));
	outFields->push(HX_CSTRING("ops"));
	outFields->push(HX_CSTRING("idents"));
	outFields->push(HX_CSTRING("uid"));
	outFields->push(HX_CSTRING("tokens"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("p1"),
	HX_CSTRING("readPos"),
	HX_CSTRING("tokenMin"),
	HX_CSTRING("tokenMax"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Parser_obj,line),HX_CSTRING("line")},
	{hx::fsString,(int)offsetof(Parser_obj,opChars),HX_CSTRING("opChars")},
	{hx::fsString,(int)offsetof(Parser_obj,identChars),HX_CSTRING("identChars")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,opPriority),HX_CSTRING("opPriority")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,opRightAssoc),HX_CSTRING("opRightAssoc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,unops),HX_CSTRING("unops")},
	{hx::fsBool,(int)offsetof(Parser_obj,allowJSON),HX_CSTRING("allowJSON")},
	{hx::fsBool,(int)offsetof(Parser_obj,allowTypes),HX_CSTRING("allowTypes")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Parser_obj,input),HX_CSTRING("input")},
	{hx::fsInt,(int)offsetof(Parser_obj,_char),HX_CSTRING("char")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Parser_obj,ops),HX_CSTRING("ops")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Parser_obj,idents),HX_CSTRING("idents")},
	{hx::fsInt,(int)offsetof(Parser_obj,uid),HX_CSTRING("uid")},
	{hx::fsObject /*::haxe::ds::GenericStack_hscript_Token*/ ,(int)offsetof(Parser_obj,tokens),HX_CSTRING("tokens")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("line"),
	HX_CSTRING("opChars"),
	HX_CSTRING("identChars"),
	HX_CSTRING("opPriority"),
	HX_CSTRING("opRightAssoc"),
	HX_CSTRING("unops"),
	HX_CSTRING("allowJSON"),
	HX_CSTRING("allowTypes"),
	HX_CSTRING("input"),
	HX_CSTRING("char"),
	HX_CSTRING("ops"),
	HX_CSTRING("idents"),
	HX_CSTRING("uid"),
	HX_CSTRING("tokens"),
	HX_CSTRING("error"),
	HX_CSTRING("invalidChar"),
	HX_CSTRING("parseString"),
	HX_CSTRING("parse"),
	HX_CSTRING("unexpected"),
	HX_CSTRING("push"),
	HX_CSTRING("ensure"),
	HX_CSTRING("expr"),
	HX_CSTRING("pmin"),
	HX_CSTRING("pmax"),
	HX_CSTRING("mk"),
	HX_CSTRING("isBlock"),
	HX_CSTRING("parseFullExpr"),
	HX_CSTRING("parseObject"),
	HX_CSTRING("parseExpr"),
	HX_CSTRING("mapCompr"),
	HX_CSTRING("makeUnop"),
	HX_CSTRING("makeBinop"),
	HX_CSTRING("parseStructure"),
	HX_CSTRING("parseExprNext"),
	HX_CSTRING("parseType"),
	HX_CSTRING("parseTypeNext"),
	HX_CSTRING("parseExprList"),
	HX_CSTRING("incPos"),
	HX_CSTRING("readChar"),
	HX_CSTRING("readString"),
	HX_CSTRING("token"),
	HX_CSTRING("tokenComment"),
	HX_CSTRING("constString"),
	HX_CSTRING("tokenString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_MARK_MEMBER_NAME(Parser_obj::readPos,"readPos");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_VISIT_MEMBER_NAME(Parser_obj::readPos,"readPos");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#endif

Class Parser_obj::__mClass;

void Parser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("hscript.Parser"), hx::TCanCast< Parser_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Parser_obj::__boot()
{
	p1= (int)0;
	readPos= (int)0;
	tokenMin= (int)0;
	tokenMax= (int)0;
}

} // end namespace hscript
