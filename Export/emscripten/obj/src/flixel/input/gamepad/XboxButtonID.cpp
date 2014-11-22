#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxAxes
#include <flixel/input/gamepad/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_XboxButtonID
#include <flixel/input/gamepad/XboxButtonID.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void XboxButtonID_obj::__construct()
{
	return null();
}

//XboxButtonID_obj::~XboxButtonID_obj() { }

Dynamic XboxButtonID_obj::__CreateEmpty() { return  new XboxButtonID_obj; }
hx::ObjectPtr< XboxButtonID_obj > XboxButtonID_obj::__new()
{  hx::ObjectPtr< XboxButtonID_obj > result = new XboxButtonID_obj();
	result->__construct();
	return result;}

Dynamic XboxButtonID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XboxButtonID_obj > result = new XboxButtonID_obj();
	result->__construct();
	return result;}

int XboxButtonID_obj::A;

int XboxButtonID_obj::B;

int XboxButtonID_obj::X;

int XboxButtonID_obj::Y;

int XboxButtonID_obj::LB;

int XboxButtonID_obj::RB;

int XboxButtonID_obj::BACK;

int XboxButtonID_obj::START;

int XboxButtonID_obj::LEFT_ANALOG;

int XboxButtonID_obj::RIGHT_ANALOG;

int XboxButtonID_obj::XBOX;

int XboxButtonID_obj::DPAD_UP;

int XboxButtonID_obj::DPAD_DOWN;

int XboxButtonID_obj::DPAD_LEFT;

int XboxButtonID_obj::DPAD_RIGHT;

::haxe::ds::EnumValueMap XboxButtonID_obj::LEFT_ANALOG_STICK;

::haxe::ds::EnumValueMap XboxButtonID_obj::RIGHT_ANALOG_STICK;

int XboxButtonID_obj::LEFT_TRIGGER;

int XboxButtonID_obj::RIGHT_TRIGGER;


XboxButtonID_obj::XboxButtonID_obj()
{
}

Dynamic XboxButtonID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { return LEFT_ANALOG_STICK; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { return RIGHT_ANALOG_STICK; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic XboxButtonID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { LEFT_ANALOG_STICK=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { RIGHT_ANALOG_STICK=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void XboxButtonID_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("A"),
	HX_CSTRING("B"),
	HX_CSTRING("X"),
	HX_CSTRING("Y"),
	HX_CSTRING("LB"),
	HX_CSTRING("RB"),
	HX_CSTRING("BACK"),
	HX_CSTRING("START"),
	HX_CSTRING("LEFT_ANALOG"),
	HX_CSTRING("RIGHT_ANALOG"),
	HX_CSTRING("XBOX"),
	HX_CSTRING("DPAD_UP"),
	HX_CSTRING("DPAD_DOWN"),
	HX_CSTRING("DPAD_LEFT"),
	HX_CSTRING("DPAD_RIGHT"),
	HX_CSTRING("LEFT_ANALOG_STICK"),
	HX_CSTRING("RIGHT_ANALOG_STICK"),
	HX_CSTRING("LEFT_TRIGGER"),
	HX_CSTRING("RIGHT_TRIGGER"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::A,"A");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::B,"B");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::X,"X");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::LB,"LB");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::RB,"RB");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::START,"START");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::LEFT_ANALOG,"LEFT_ANALOG");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::RIGHT_ANALOG,"RIGHT_ANALOG");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::XBOX,"XBOX");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::A,"A");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::B,"B");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::X,"X");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::LB,"LB");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::RB,"RB");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::START,"START");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::LEFT_ANALOG,"LEFT_ANALOG");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::RIGHT_ANALOG,"RIGHT_ANALOG");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::XBOX,"XBOX");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
};

#endif

Class XboxButtonID_obj::__mClass;

void XboxButtonID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.XboxButtonID"), hx::TCanCast< XboxButtonID_obj> ,sStaticFields,sMemberFields,
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

void XboxButtonID_obj::__boot()
{
	A= (int)10;
	B= (int)11;
	X= (int)12;
	Y= (int)13;
	LB= (int)8;
	RB= (int)9;
	BACK= (int)5;
	START= (int)4;
	LEFT_ANALOG= (int)6;
	RIGHT_ANALOG= (int)7;
	XBOX= (int)14;
	DPAD_UP= (int)0;
	DPAD_DOWN= (int)1;
	DPAD_LEFT= (int)2;
	DPAD_RIGHT= (int)3;
struct _Function_0_1{
	inline static ::haxe::ds::EnumValueMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/gamepad/XboxButtonID.hx",149,0x8ba50378)
		{
			HX_STACK_LINE(149)
			::haxe::ds::EnumValueMap _g = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			_g->set(::flixel::input::gamepad::FlxAxes_obj::X,(int)0);
			HX_STACK_LINE(149)
			_g->set(::flixel::input::gamepad::FlxAxes_obj::Y,(int)1);
			HX_STACK_LINE(149)
			return _g;
		}
		return null();
	}
};
	LEFT_ANALOG_STICK= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::EnumValueMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/gamepad/XboxButtonID.hx",150,0x8ba50378)
		{
			HX_STACK_LINE(150)
			::haxe::ds::EnumValueMap _g = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(150)
			_g->set(::flixel::input::gamepad::FlxAxes_obj::X,(int)2);
			HX_STACK_LINE(150)
			_g->set(::flixel::input::gamepad::FlxAxes_obj::Y,(int)3);
			HX_STACK_LINE(150)
			return _g;
		}
		return null();
	}
};
	RIGHT_ANALOG_STICK= _Function_0_2::Block();
	LEFT_TRIGGER= (int)4;
	RIGHT_TRIGGER= (int)5;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
