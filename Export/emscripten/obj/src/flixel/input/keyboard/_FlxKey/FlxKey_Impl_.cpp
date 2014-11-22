#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace input{
namespace keyboard{
namespace _FlxKey{

Void FlxKey_Impl__obj::__construct()
{
	return null();
}

//FlxKey_Impl__obj::~FlxKey_Impl__obj() { }

Dynamic FlxKey_Impl__obj::__CreateEmpty() { return  new FlxKey_Impl__obj; }
hx::ObjectPtr< FlxKey_Impl__obj > FlxKey_Impl__obj::__new()
{  hx::ObjectPtr< FlxKey_Impl__obj > result = new FlxKey_Impl__obj();
	result->__construct();
	return result;}

Dynamic FlxKey_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKey_Impl__obj > result = new FlxKey_Impl__obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap FlxKey_Impl__obj::fromStringMap;

::haxe::ds::IntMap FlxKey_Impl__obj::toStringMap;

int FlxKey_Impl__obj::ANY;

int FlxKey_Impl__obj::NONE;

int FlxKey_Impl__obj::A;

int FlxKey_Impl__obj::B;

int FlxKey_Impl__obj::C;

int FlxKey_Impl__obj::D;

int FlxKey_Impl__obj::E;

int FlxKey_Impl__obj::F;

int FlxKey_Impl__obj::G;

int FlxKey_Impl__obj::H;

int FlxKey_Impl__obj::I;

int FlxKey_Impl__obj::J;

int FlxKey_Impl__obj::K;

int FlxKey_Impl__obj::L;

int FlxKey_Impl__obj::M;

int FlxKey_Impl__obj::N;

int FlxKey_Impl__obj::O;

int FlxKey_Impl__obj::P;

int FlxKey_Impl__obj::Q;

int FlxKey_Impl__obj::R;

int FlxKey_Impl__obj::S;

int FlxKey_Impl__obj::T;

int FlxKey_Impl__obj::U;

int FlxKey_Impl__obj::V;

int FlxKey_Impl__obj::W;

int FlxKey_Impl__obj::X;

int FlxKey_Impl__obj::Y;

int FlxKey_Impl__obj::Z;

int FlxKey_Impl__obj::ZERO;

int FlxKey_Impl__obj::ONE;

int FlxKey_Impl__obj::TWO;

int FlxKey_Impl__obj::THREE;

int FlxKey_Impl__obj::FOUR;

int FlxKey_Impl__obj::FIVE;

int FlxKey_Impl__obj::SIX;

int FlxKey_Impl__obj::SEVEN;

int FlxKey_Impl__obj::EIGHT;

int FlxKey_Impl__obj::NINE;

int FlxKey_Impl__obj::PAGEUP;

int FlxKey_Impl__obj::PAGEDOWN;

int FlxKey_Impl__obj::HOME;

int FlxKey_Impl__obj::END;

int FlxKey_Impl__obj::INSERT;

int FlxKey_Impl__obj::ESCAPE;

int FlxKey_Impl__obj::MINUS;

int FlxKey_Impl__obj::PLUS;

int FlxKey_Impl__obj::DELETE;

int FlxKey_Impl__obj::BACKSPACE;

int FlxKey_Impl__obj::LBRACKET;

int FlxKey_Impl__obj::RBRACKET;

int FlxKey_Impl__obj::BACKSLASH;

int FlxKey_Impl__obj::CAPSLOCK;

int FlxKey_Impl__obj::SEMICOLON;

int FlxKey_Impl__obj::QUOTE;

int FlxKey_Impl__obj::ENTER;

int FlxKey_Impl__obj::SHIFT;

int FlxKey_Impl__obj::COMMA;

int FlxKey_Impl__obj::PERIOD;

int FlxKey_Impl__obj::SLASH;

int FlxKey_Impl__obj::GRAVEACCENT;

int FlxKey_Impl__obj::CONTROL;

int FlxKey_Impl__obj::ALT;

int FlxKey_Impl__obj::SPACE;

int FlxKey_Impl__obj::UP;

int FlxKey_Impl__obj::DOWN;

int FlxKey_Impl__obj::LEFT;

int FlxKey_Impl__obj::RIGHT;

int FlxKey_Impl__obj::TAB;

int FlxKey_Impl__obj::PRINTSCREEN;

int FlxKey_Impl__obj::F1;

int FlxKey_Impl__obj::F2;

int FlxKey_Impl__obj::F3;

int FlxKey_Impl__obj::F4;

int FlxKey_Impl__obj::F5;

int FlxKey_Impl__obj::F6;

int FlxKey_Impl__obj::F7;

int FlxKey_Impl__obj::F8;

int FlxKey_Impl__obj::F9;

int FlxKey_Impl__obj::F10;

int FlxKey_Impl__obj::F11;

int FlxKey_Impl__obj::F12;

int FlxKey_Impl__obj::NUMPADZERO;

int FlxKey_Impl__obj::NUMPADONE;

int FlxKey_Impl__obj::NUMPADTWO;

int FlxKey_Impl__obj::NUMPADTHREE;

int FlxKey_Impl__obj::NUMPADFOUR;

int FlxKey_Impl__obj::NUMPADFIVE;

int FlxKey_Impl__obj::NUMPADSIX;

int FlxKey_Impl__obj::NUMPADSEVEN;

int FlxKey_Impl__obj::NUMPADEIGHT;

int FlxKey_Impl__obj::NUMPADNINE;

int FlxKey_Impl__obj::NUMPADMINUS;

int FlxKey_Impl__obj::NUMPADPLUS;

int FlxKey_Impl__obj::NUMPADPERIOD;

int FlxKey_Impl__obj::NUMPADMULTIPLY;

int FlxKey_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("flixel.input.keyboard._FlxKey.FlxKey_Impl_","fromString",0xcc26c669,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.fromString","flixel/input/keyboard/FlxKey.hx",113,0x46a3c741)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(114)
	::String _g = s.toUpperCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(114)
	s = _g;
	HX_STACK_LINE(115)
	if ((::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s))){
		HX_STACK_LINE(115)
		return ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get(s);
	}
	else{
		HX_STACK_LINE(115)
		return (int)-1;
	}
	HX_STACK_LINE(115)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxKey_Impl__obj,fromString,return )

::String FlxKey_Impl__obj::toString( int this1){
	HX_STACK_FRAME("flixel.input.keyboard._FlxKey.FlxKey_Impl_","toString",0xf3f689ba,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.toString","flixel/input/keyboard/FlxKey.hx",121,0x46a3c741)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(121)
	return ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get(this1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxKey_Impl__obj,toString,return )


FlxKey_Impl__obj::FlxKey_Impl__obj()
{
}

Dynamic FlxKey_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKey_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKey_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromStringMap"),
	HX_CSTRING("toStringMap"),
	HX_CSTRING("ANY"),
	HX_CSTRING("NONE"),
	HX_CSTRING("A"),
	HX_CSTRING("B"),
	HX_CSTRING("C"),
	HX_CSTRING("D"),
	HX_CSTRING("E"),
	HX_CSTRING("F"),
	HX_CSTRING("G"),
	HX_CSTRING("H"),
	HX_CSTRING("I"),
	HX_CSTRING("J"),
	HX_CSTRING("K"),
	HX_CSTRING("L"),
	HX_CSTRING("M"),
	HX_CSTRING("N"),
	HX_CSTRING("O"),
	HX_CSTRING("P"),
	HX_CSTRING("Q"),
	HX_CSTRING("R"),
	HX_CSTRING("S"),
	HX_CSTRING("T"),
	HX_CSTRING("U"),
	HX_CSTRING("V"),
	HX_CSTRING("W"),
	HX_CSTRING("X"),
	HX_CSTRING("Y"),
	HX_CSTRING("Z"),
	HX_CSTRING("ZERO"),
	HX_CSTRING("ONE"),
	HX_CSTRING("TWO"),
	HX_CSTRING("THREE"),
	HX_CSTRING("FOUR"),
	HX_CSTRING("FIVE"),
	HX_CSTRING("SIX"),
	HX_CSTRING("SEVEN"),
	HX_CSTRING("EIGHT"),
	HX_CSTRING("NINE"),
	HX_CSTRING("PAGEUP"),
	HX_CSTRING("PAGEDOWN"),
	HX_CSTRING("HOME"),
	HX_CSTRING("END"),
	HX_CSTRING("INSERT"),
	HX_CSTRING("ESCAPE"),
	HX_CSTRING("MINUS"),
	HX_CSTRING("PLUS"),
	HX_CSTRING("DELETE"),
	HX_CSTRING("BACKSPACE"),
	HX_CSTRING("LBRACKET"),
	HX_CSTRING("RBRACKET"),
	HX_CSTRING("BACKSLASH"),
	HX_CSTRING("CAPSLOCK"),
	HX_CSTRING("SEMICOLON"),
	HX_CSTRING("QUOTE"),
	HX_CSTRING("ENTER"),
	HX_CSTRING("SHIFT"),
	HX_CSTRING("COMMA"),
	HX_CSTRING("PERIOD"),
	HX_CSTRING("SLASH"),
	HX_CSTRING("GRAVEACCENT"),
	HX_CSTRING("CONTROL"),
	HX_CSTRING("ALT"),
	HX_CSTRING("SPACE"),
	HX_CSTRING("UP"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("TAB"),
	HX_CSTRING("PRINTSCREEN"),
	HX_CSTRING("F1"),
	HX_CSTRING("F2"),
	HX_CSTRING("F3"),
	HX_CSTRING("F4"),
	HX_CSTRING("F5"),
	HX_CSTRING("F6"),
	HX_CSTRING("F7"),
	HX_CSTRING("F8"),
	HX_CSTRING("F9"),
	HX_CSTRING("F10"),
	HX_CSTRING("F11"),
	HX_CSTRING("F12"),
	HX_CSTRING("NUMPADZERO"),
	HX_CSTRING("NUMPADONE"),
	HX_CSTRING("NUMPADTWO"),
	HX_CSTRING("NUMPADTHREE"),
	HX_CSTRING("NUMPADFOUR"),
	HX_CSTRING("NUMPADFIVE"),
	HX_CSTRING("NUMPADSIX"),
	HX_CSTRING("NUMPADSEVEN"),
	HX_CSTRING("NUMPADEIGHT"),
	HX_CSTRING("NUMPADNINE"),
	HX_CSTRING("NUMPADMINUS"),
	HX_CSTRING("NUMPADPLUS"),
	HX_CSTRING("NUMPADPERIOD"),
	HX_CSTRING("NUMPADMULTIPLY"),
	HX_CSTRING("fromString"),
	HX_CSTRING("toString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::toStringMap,"toStringMap");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::A,"A");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::B,"B");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::C,"C");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::D,"D");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::E,"E");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F,"F");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::G,"G");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::H,"H");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::I,"I");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::J,"J");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::K,"K");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::L,"L");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::M,"M");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::N,"N");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::O,"O");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::P,"P");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::Q,"Q");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::R,"R");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::S,"S");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::T,"T");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::U,"U");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::V,"V");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::W,"W");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::X,"X");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::Y,"Y");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::Z,"Z");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::TWO,"TWO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::THREE,"THREE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::FOUR,"FOUR");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::FIVE,"FIVE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SIX,"SIX");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SEVEN,"SEVEN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::EIGHT,"EIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NINE,"NINE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PAGEUP,"PAGEUP");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PAGEDOWN,"PAGEDOWN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::END,"END");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PLUS,"PLUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::LBRACKET,"LBRACKET");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::RBRACKET,"RBRACKET");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::CAPSLOCK,"CAPSLOCK");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PERIOD,"PERIOD");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::GRAVEACCENT,"GRAVEACCENT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PRINTSCREEN,"PRINTSCREEN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F1,"F1");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F2,"F2");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F3,"F3");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F4,"F4");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F5,"F5");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F6,"F6");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F7,"F7");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F8,"F8");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F9,"F9");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F10,"F10");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F11,"F11");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F12,"F12");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADZERO,"NUMPADZERO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADONE,"NUMPADONE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTWO,"NUMPADTWO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTHREE,"NUMPADTHREE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFOUR,"NUMPADFOUR");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFIVE,"NUMPADFIVE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSIX,"NUMPADSIX");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSEVEN,"NUMPADSEVEN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADEIGHT,"NUMPADEIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADNINE,"NUMPADNINE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMINUS,"NUMPADMINUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPLUS,"NUMPADPLUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPERIOD,"NUMPADPERIOD");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMULTIPLY,"NUMPADMULTIPLY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::toStringMap,"toStringMap");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::A,"A");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::B,"B");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::C,"C");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::D,"D");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::E,"E");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F,"F");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::G,"G");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::H,"H");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::I,"I");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::J,"J");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::K,"K");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::L,"L");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::M,"M");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::N,"N");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::O,"O");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::P,"P");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::R,"R");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::S,"S");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::T,"T");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::U,"U");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::V,"V");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::W,"W");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::X,"X");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::TWO,"TWO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::THREE,"THREE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::FOUR,"FOUR");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::FIVE,"FIVE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SIX,"SIX");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SEVEN,"SEVEN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::EIGHT,"EIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NINE,"NINE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PAGEUP,"PAGEUP");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PAGEDOWN,"PAGEDOWN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::END,"END");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PLUS,"PLUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::LBRACKET,"LBRACKET");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::RBRACKET,"RBRACKET");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::CAPSLOCK,"CAPSLOCK");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PERIOD,"PERIOD");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::GRAVEACCENT,"GRAVEACCENT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PRINTSCREEN,"PRINTSCREEN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADZERO,"NUMPADZERO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADONE,"NUMPADONE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTWO,"NUMPADTWO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTHREE,"NUMPADTHREE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFOUR,"NUMPADFOUR");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFIVE,"NUMPADFIVE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSIX,"NUMPADSIX");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSEVEN,"NUMPADSEVEN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADEIGHT,"NUMPADEIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADNINE,"NUMPADNINE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMINUS,"NUMPADMINUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPLUS,"NUMPADPLUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPERIOD,"NUMPADPERIOD");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMULTIPLY,"NUMPADMULTIPLY");
};

#endif

Class FlxKey_Impl__obj::__mClass;

void FlxKey_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.keyboard._FlxKey.FlxKey_Impl_"), hx::TCanCast< FlxKey_Impl__obj> ,sStaticFields,sMemberFields,
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

void FlxKey_Impl__obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/macros/FlxMacroUtil.hx",52,0x8cc0f087)
		{
			HX_STACK_LINE(52)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("ANY"),(int)-2);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("A"),(int)65);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("B"),(int)66);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("C"),(int)67);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("D"),(int)68);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("E"),(int)69);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F"),(int)70);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("G"),(int)71);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("H"),(int)72);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("I"),(int)73);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("J"),(int)74);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("K"),(int)75);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("L"),(int)76);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("M"),(int)77);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("N"),(int)78);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("O"),(int)79);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("P"),(int)80);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("Q"),(int)81);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("R"),(int)82);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("S"),(int)83);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("T"),(int)84);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("U"),(int)85);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("V"),(int)86);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("W"),(int)87);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("X"),(int)88);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("Y"),(int)89);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("Z"),(int)90);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("ZERO"),(int)48);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("ONE"),(int)49);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("TWO"),(int)50);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("THREE"),(int)51);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("FOUR"),(int)52);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("FIVE"),(int)53);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("SIX"),(int)54);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("SEVEN"),(int)55);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("EIGHT"),(int)56);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NINE"),(int)57);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("PAGEUP"),(int)33);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("PAGEDOWN"),(int)34);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("HOME"),(int)36);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("END"),(int)35);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("INSERT"),(int)45);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("ESCAPE"),(int)27);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("MINUS"),(int)189);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("PLUS"),(int)187);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("DELETE"),(int)46);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("BACKSPACE"),(int)8);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("LBRACKET"),(int)219);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("RBRACKET"),(int)221);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("BACKSLASH"),(int)220);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("CAPSLOCK"),(int)20);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("SEMICOLON"),(int)186);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("QUOTE"),(int)222);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("ENTER"),(int)13);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("SHIFT"),(int)16);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("COMMA"),(int)188);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("PERIOD"),(int)190);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("SLASH"),(int)191);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("GRAVEACCENT"),(int)192);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("CONTROL"),(int)17);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("ALT"),(int)18);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("SPACE"),(int)32);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("UP"),(int)38);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("DOWN"),(int)40);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("LEFT"),(int)37);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("RIGHT"),(int)39);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("TAB"),(int)9);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("PRINTSCREEN"),(int)301);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F1"),(int)112);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F2"),(int)113);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F3"),(int)114);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F4"),(int)115);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F5"),(int)116);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F6"),(int)117);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F7"),(int)118);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F8"),(int)119);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F9"),(int)120);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F10"),(int)121);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F11"),(int)122);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("F12"),(int)123);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADZERO"),(int)96);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADONE"),(int)97);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADTWO"),(int)98);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADTHREE"),(int)99);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADFOUR"),(int)100);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADFIVE"),(int)101);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADSIX"),(int)102);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADSEVEN"),(int)103);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADEIGHT"),(int)104);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADNINE"),(int)105);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADMINUS"),(int)109);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADPLUS"),(int)107);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADPERIOD"),(int)110);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("NUMPADMULTIPLY"),(int)106);
			HX_STACK_LINE(52)
			return _g;
		}
		return null();
	}
};
	fromStringMap= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/macros/FlxMacroUtil.hx",52,0x8cc0f087)
		{
			HX_STACK_LINE(52)
			::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			_g->set((int)-2,HX_CSTRING("ANY"));
			HX_STACK_LINE(52)
			_g->set((int)65,HX_CSTRING("A"));
			HX_STACK_LINE(52)
			_g->set((int)66,HX_CSTRING("B"));
			HX_STACK_LINE(52)
			_g->set((int)67,HX_CSTRING("C"));
			HX_STACK_LINE(52)
			_g->set((int)68,HX_CSTRING("D"));
			HX_STACK_LINE(52)
			_g->set((int)69,HX_CSTRING("E"));
			HX_STACK_LINE(52)
			_g->set((int)70,HX_CSTRING("F"));
			HX_STACK_LINE(52)
			_g->set((int)71,HX_CSTRING("G"));
			HX_STACK_LINE(52)
			_g->set((int)72,HX_CSTRING("H"));
			HX_STACK_LINE(52)
			_g->set((int)73,HX_CSTRING("I"));
			HX_STACK_LINE(52)
			_g->set((int)74,HX_CSTRING("J"));
			HX_STACK_LINE(52)
			_g->set((int)75,HX_CSTRING("K"));
			HX_STACK_LINE(52)
			_g->set((int)76,HX_CSTRING("L"));
			HX_STACK_LINE(52)
			_g->set((int)77,HX_CSTRING("M"));
			HX_STACK_LINE(52)
			_g->set((int)78,HX_CSTRING("N"));
			HX_STACK_LINE(52)
			_g->set((int)79,HX_CSTRING("O"));
			HX_STACK_LINE(52)
			_g->set((int)80,HX_CSTRING("P"));
			HX_STACK_LINE(52)
			_g->set((int)81,HX_CSTRING("Q"));
			HX_STACK_LINE(52)
			_g->set((int)82,HX_CSTRING("R"));
			HX_STACK_LINE(52)
			_g->set((int)83,HX_CSTRING("S"));
			HX_STACK_LINE(52)
			_g->set((int)84,HX_CSTRING("T"));
			HX_STACK_LINE(52)
			_g->set((int)85,HX_CSTRING("U"));
			HX_STACK_LINE(52)
			_g->set((int)86,HX_CSTRING("V"));
			HX_STACK_LINE(52)
			_g->set((int)87,HX_CSTRING("W"));
			HX_STACK_LINE(52)
			_g->set((int)88,HX_CSTRING("X"));
			HX_STACK_LINE(52)
			_g->set((int)89,HX_CSTRING("Y"));
			HX_STACK_LINE(52)
			_g->set((int)90,HX_CSTRING("Z"));
			HX_STACK_LINE(52)
			_g->set((int)48,HX_CSTRING("ZERO"));
			HX_STACK_LINE(52)
			_g->set((int)49,HX_CSTRING("ONE"));
			HX_STACK_LINE(52)
			_g->set((int)50,HX_CSTRING("TWO"));
			HX_STACK_LINE(52)
			_g->set((int)51,HX_CSTRING("THREE"));
			HX_STACK_LINE(52)
			_g->set((int)52,HX_CSTRING("FOUR"));
			HX_STACK_LINE(52)
			_g->set((int)53,HX_CSTRING("FIVE"));
			HX_STACK_LINE(52)
			_g->set((int)54,HX_CSTRING("SIX"));
			HX_STACK_LINE(52)
			_g->set((int)55,HX_CSTRING("SEVEN"));
			HX_STACK_LINE(52)
			_g->set((int)56,HX_CSTRING("EIGHT"));
			HX_STACK_LINE(52)
			_g->set((int)57,HX_CSTRING("NINE"));
			HX_STACK_LINE(52)
			_g->set((int)33,HX_CSTRING("PAGEUP"));
			HX_STACK_LINE(52)
			_g->set((int)34,HX_CSTRING("PAGEDOWN"));
			HX_STACK_LINE(52)
			_g->set((int)36,HX_CSTRING("HOME"));
			HX_STACK_LINE(52)
			_g->set((int)35,HX_CSTRING("END"));
			HX_STACK_LINE(52)
			_g->set((int)45,HX_CSTRING("INSERT"));
			HX_STACK_LINE(52)
			_g->set((int)27,HX_CSTRING("ESCAPE"));
			HX_STACK_LINE(52)
			_g->set((int)189,HX_CSTRING("MINUS"));
			HX_STACK_LINE(52)
			_g->set((int)187,HX_CSTRING("PLUS"));
			HX_STACK_LINE(52)
			_g->set((int)46,HX_CSTRING("DELETE"));
			HX_STACK_LINE(52)
			_g->set((int)8,HX_CSTRING("BACKSPACE"));
			HX_STACK_LINE(52)
			_g->set((int)219,HX_CSTRING("LBRACKET"));
			HX_STACK_LINE(52)
			_g->set((int)221,HX_CSTRING("RBRACKET"));
			HX_STACK_LINE(52)
			_g->set((int)220,HX_CSTRING("BACKSLASH"));
			HX_STACK_LINE(52)
			_g->set((int)20,HX_CSTRING("CAPSLOCK"));
			HX_STACK_LINE(52)
			_g->set((int)186,HX_CSTRING("SEMICOLON"));
			HX_STACK_LINE(52)
			_g->set((int)222,HX_CSTRING("QUOTE"));
			HX_STACK_LINE(52)
			_g->set((int)13,HX_CSTRING("ENTER"));
			HX_STACK_LINE(52)
			_g->set((int)16,HX_CSTRING("SHIFT"));
			HX_STACK_LINE(52)
			_g->set((int)188,HX_CSTRING("COMMA"));
			HX_STACK_LINE(52)
			_g->set((int)190,HX_CSTRING("PERIOD"));
			HX_STACK_LINE(52)
			_g->set((int)191,HX_CSTRING("SLASH"));
			HX_STACK_LINE(52)
			_g->set((int)192,HX_CSTRING("GRAVEACCENT"));
			HX_STACK_LINE(52)
			_g->set((int)17,HX_CSTRING("CONTROL"));
			HX_STACK_LINE(52)
			_g->set((int)18,HX_CSTRING("ALT"));
			HX_STACK_LINE(52)
			_g->set((int)32,HX_CSTRING("SPACE"));
			HX_STACK_LINE(52)
			_g->set((int)38,HX_CSTRING("UP"));
			HX_STACK_LINE(52)
			_g->set((int)40,HX_CSTRING("DOWN"));
			HX_STACK_LINE(52)
			_g->set((int)37,HX_CSTRING("LEFT"));
			HX_STACK_LINE(52)
			_g->set((int)39,HX_CSTRING("RIGHT"));
			HX_STACK_LINE(52)
			_g->set((int)9,HX_CSTRING("TAB"));
			HX_STACK_LINE(52)
			_g->set((int)301,HX_CSTRING("PRINTSCREEN"));
			HX_STACK_LINE(52)
			_g->set((int)112,HX_CSTRING("F1"));
			HX_STACK_LINE(52)
			_g->set((int)113,HX_CSTRING("F2"));
			HX_STACK_LINE(52)
			_g->set((int)114,HX_CSTRING("F3"));
			HX_STACK_LINE(52)
			_g->set((int)115,HX_CSTRING("F4"));
			HX_STACK_LINE(52)
			_g->set((int)116,HX_CSTRING("F5"));
			HX_STACK_LINE(52)
			_g->set((int)117,HX_CSTRING("F6"));
			HX_STACK_LINE(52)
			_g->set((int)118,HX_CSTRING("F7"));
			HX_STACK_LINE(52)
			_g->set((int)119,HX_CSTRING("F8"));
			HX_STACK_LINE(52)
			_g->set((int)120,HX_CSTRING("F9"));
			HX_STACK_LINE(52)
			_g->set((int)121,HX_CSTRING("F10"));
			HX_STACK_LINE(52)
			_g->set((int)122,HX_CSTRING("F11"));
			HX_STACK_LINE(52)
			_g->set((int)123,HX_CSTRING("F12"));
			HX_STACK_LINE(52)
			_g->set((int)96,HX_CSTRING("NUMPADZERO"));
			HX_STACK_LINE(52)
			_g->set((int)97,HX_CSTRING("NUMPADONE"));
			HX_STACK_LINE(52)
			_g->set((int)98,HX_CSTRING("NUMPADTWO"));
			HX_STACK_LINE(52)
			_g->set((int)99,HX_CSTRING("NUMPADTHREE"));
			HX_STACK_LINE(52)
			_g->set((int)100,HX_CSTRING("NUMPADFOUR"));
			HX_STACK_LINE(52)
			_g->set((int)101,HX_CSTRING("NUMPADFIVE"));
			HX_STACK_LINE(52)
			_g->set((int)102,HX_CSTRING("NUMPADSIX"));
			HX_STACK_LINE(52)
			_g->set((int)103,HX_CSTRING("NUMPADSEVEN"));
			HX_STACK_LINE(52)
			_g->set((int)104,HX_CSTRING("NUMPADEIGHT"));
			HX_STACK_LINE(52)
			_g->set((int)105,HX_CSTRING("NUMPADNINE"));
			HX_STACK_LINE(52)
			_g->set((int)109,HX_CSTRING("NUMPADMINUS"));
			HX_STACK_LINE(52)
			_g->set((int)107,HX_CSTRING("NUMPADPLUS"));
			HX_STACK_LINE(52)
			_g->set((int)110,HX_CSTRING("NUMPADPERIOD"));
			HX_STACK_LINE(52)
			_g->set((int)106,HX_CSTRING("NUMPADMULTIPLY"));
			HX_STACK_LINE(52)
			return _g;
		}
		return null();
	}
};
	toStringMap= _Function_0_2::Block();
	ANY= (int)-2;
	NONE= (int)-1;
	A= (int)65;
	B= (int)66;
	C= (int)67;
	D= (int)68;
	E= (int)69;
	F= (int)70;
	G= (int)71;
	H= (int)72;
	I= (int)73;
	J= (int)74;
	K= (int)75;
	L= (int)76;
	M= (int)77;
	N= (int)78;
	O= (int)79;
	P= (int)80;
	Q= (int)81;
	R= (int)82;
	S= (int)83;
	T= (int)84;
	U= (int)85;
	V= (int)86;
	W= (int)87;
	X= (int)88;
	Y= (int)89;
	Z= (int)90;
	ZERO= (int)48;
	ONE= (int)49;
	TWO= (int)50;
	THREE= (int)51;
	FOUR= (int)52;
	FIVE= (int)53;
	SIX= (int)54;
	SEVEN= (int)55;
	EIGHT= (int)56;
	NINE= (int)57;
	PAGEUP= (int)33;
	PAGEDOWN= (int)34;
	HOME= (int)36;
	END= (int)35;
	INSERT= (int)45;
	ESCAPE= (int)27;
	MINUS= (int)189;
	PLUS= (int)187;
	DELETE= (int)46;
	BACKSPACE= (int)8;
	LBRACKET= (int)219;
	RBRACKET= (int)221;
	BACKSLASH= (int)220;
	CAPSLOCK= (int)20;
	SEMICOLON= (int)186;
	QUOTE= (int)222;
	ENTER= (int)13;
	SHIFT= (int)16;
	COMMA= (int)188;
	PERIOD= (int)190;
	SLASH= (int)191;
	GRAVEACCENT= (int)192;
	CONTROL= (int)17;
	ALT= (int)18;
	SPACE= (int)32;
	UP= (int)38;
	DOWN= (int)40;
	LEFT= (int)37;
	RIGHT= (int)39;
	TAB= (int)9;
	PRINTSCREEN= (int)301;
	F1= (int)112;
	F2= (int)113;
	F3= (int)114;
	F4= (int)115;
	F5= (int)116;
	F6= (int)117;
	F7= (int)118;
	F8= (int)119;
	F9= (int)120;
	F10= (int)121;
	F11= (int)122;
	F12= (int)123;
	NUMPADZERO= (int)96;
	NUMPADONE= (int)97;
	NUMPADTWO= (int)98;
	NUMPADTHREE= (int)99;
	NUMPADFOUR= (int)100;
	NUMPADFIVE= (int)101;
	NUMPADSIX= (int)102;
	NUMPADSEVEN= (int)103;
	NUMPADEIGHT= (int)104;
	NUMPADNINE= (int)105;
	NUMPADMINUS= (int)109;
	NUMPADPLUS= (int)107;
	NUMPADPERIOD= (int)110;
	NUMPADMULTIPLY= (int)106;
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
} // end namespace _FlxKey
