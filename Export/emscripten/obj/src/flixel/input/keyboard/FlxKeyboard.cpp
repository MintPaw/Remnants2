#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_KeyboardEvent
#include <openfl/_v2/events/KeyboardEvent.h>
#endif
namespace flixel{
namespace input{
namespace keyboard{

Void FlxKeyboard_obj::__construct()
{
HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","new",0xa12d657a,"flixel.input.keyboard.FlxKeyboard.new","flixel/input/keyboard/FlxKeyboard.hx",26,0x41882875)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	super::__construct(hx::ClassOf< ::flixel::input::keyboard::FlxKeyList >());
	HX_STACK_LINE(33)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->iterator());  __it->hasNext(); ){
		int code = __it->next();
		if (((bool((code != (int)-2)) && bool((code != (int)-1))))){
			HX_STACK_LINE(37)
			::flixel::input::FlxInput input = ::flixel::input::FlxInput_obj::__new(code);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(38)
			this->_keyListArray->push(input);
			HX_STACK_LINE(39)
			this->_keyListMap->set(code,input);
		}
;
	}
	HX_STACK_LINE(44)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	this->_nativeCorrection = _g;
	HX_STACK_LINE(46)
	this->_nativeCorrection->set(HX_CSTRING("0_64"),(int)45);
	HX_STACK_LINE(47)
	this->_nativeCorrection->set(HX_CSTRING("0_65"),(int)35);
	HX_STACK_LINE(48)
	this->_nativeCorrection->set(HX_CSTRING("0_67"),(int)34);
	HX_STACK_LINE(49)
	this->_nativeCorrection->set(HX_CSTRING("0_69"),(int)-1);
	HX_STACK_LINE(50)
	this->_nativeCorrection->set(HX_CSTRING("0_73"),(int)33);
	HX_STACK_LINE(51)
	this->_nativeCorrection->set(HX_CSTRING("0_266"),(int)46);
	HX_STACK_LINE(52)
	this->_nativeCorrection->set(HX_CSTRING("123_222"),(int)219);
	HX_STACK_LINE(53)
	this->_nativeCorrection->set(HX_CSTRING("125_187"),(int)221);
	HX_STACK_LINE(54)
	this->_nativeCorrection->set(HX_CSTRING("126_233"),(int)192);
	HX_STACK_LINE(56)
	this->_nativeCorrection->set(HX_CSTRING("0_80"),(int)112);
	HX_STACK_LINE(57)
	this->_nativeCorrection->set(HX_CSTRING("0_81"),(int)113);
	HX_STACK_LINE(58)
	this->_nativeCorrection->set(HX_CSTRING("0_82"),(int)114);
	HX_STACK_LINE(59)
	this->_nativeCorrection->set(HX_CSTRING("0_83"),(int)115);
	HX_STACK_LINE(60)
	this->_nativeCorrection->set(HX_CSTRING("0_84"),(int)116);
	HX_STACK_LINE(61)
	this->_nativeCorrection->set(HX_CSTRING("0_85"),(int)117);
	HX_STACK_LINE(62)
	this->_nativeCorrection->set(HX_CSTRING("0_86"),(int)118);
	HX_STACK_LINE(63)
	this->_nativeCorrection->set(HX_CSTRING("0_87"),(int)119);
	HX_STACK_LINE(64)
	this->_nativeCorrection->set(HX_CSTRING("0_88"),(int)120);
	HX_STACK_LINE(65)
	this->_nativeCorrection->set(HX_CSTRING("0_89"),(int)121);
	HX_STACK_LINE(66)
	this->_nativeCorrection->set(HX_CSTRING("0_90"),(int)122);
	HX_STACK_LINE(68)
	this->_nativeCorrection->set(HX_CSTRING("48_224"),(int)48);
	HX_STACK_LINE(69)
	this->_nativeCorrection->set(HX_CSTRING("49_38"),(int)49);
	HX_STACK_LINE(70)
	this->_nativeCorrection->set(HX_CSTRING("50_233"),(int)50);
	HX_STACK_LINE(71)
	this->_nativeCorrection->set(HX_CSTRING("51_34"),(int)51);
	HX_STACK_LINE(72)
	this->_nativeCorrection->set(HX_CSTRING("52_222"),(int)52);
	HX_STACK_LINE(73)
	this->_nativeCorrection->set(HX_CSTRING("53_40"),(int)53);
	HX_STACK_LINE(74)
	this->_nativeCorrection->set(HX_CSTRING("54_189"),(int)54);
	HX_STACK_LINE(75)
	this->_nativeCorrection->set(HX_CSTRING("55_232"),(int)55);
	HX_STACK_LINE(76)
	this->_nativeCorrection->set(HX_CSTRING("56_95"),(int)56);
	HX_STACK_LINE(77)
	this->_nativeCorrection->set(HX_CSTRING("57_231"),(int)57);
	HX_STACK_LINE(79)
	this->_nativeCorrection->set(HX_CSTRING("48_64"),(int)96);
	HX_STACK_LINE(80)
	this->_nativeCorrection->set(HX_CSTRING("49_65"),(int)97);
	HX_STACK_LINE(81)
	this->_nativeCorrection->set(HX_CSTRING("50_66"),(int)98);
	HX_STACK_LINE(82)
	this->_nativeCorrection->set(HX_CSTRING("51_67"),(int)99);
	HX_STACK_LINE(83)
	this->_nativeCorrection->set(HX_CSTRING("52_68"),(int)100);
	HX_STACK_LINE(84)
	this->_nativeCorrection->set(HX_CSTRING("53_69"),(int)101);
	HX_STACK_LINE(85)
	this->_nativeCorrection->set(HX_CSTRING("54_70"),(int)102);
	HX_STACK_LINE(86)
	this->_nativeCorrection->set(HX_CSTRING("55_71"),(int)103);
	HX_STACK_LINE(87)
	this->_nativeCorrection->set(HX_CSTRING("56_72"),(int)104);
	HX_STACK_LINE(88)
	this->_nativeCorrection->set(HX_CSTRING("57_73"),(int)105);
	HX_STACK_LINE(90)
	this->_nativeCorrection->set(HX_CSTRING("43_75"),(int)107);
	HX_STACK_LINE(91)
	this->_nativeCorrection->set(HX_CSTRING("45_77"),(int)109);
	HX_STACK_LINE(92)
	this->_nativeCorrection->set(HX_CSTRING("47_79"),(int)191);
	HX_STACK_LINE(93)
	this->_nativeCorrection->set(HX_CSTRING("46_78"),(int)110);
	HX_STACK_LINE(94)
	this->_nativeCorrection->set(HX_CSTRING("42_74"),(int)106);
}
;
	return null();
}

//FlxKeyboard_obj::~FlxKeyboard_obj() { }

Dynamic FlxKeyboard_obj::__CreateEmpty() { return  new FlxKeyboard_obj; }
hx::ObjectPtr< FlxKeyboard_obj > FlxKeyboard_obj::__new()
{  hx::ObjectPtr< FlxKeyboard_obj > result = new FlxKeyboard_obj();
	result->__construct();
	return result;}

Dynamic FlxKeyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyboard_obj > result = new FlxKeyboard_obj();
	result->__construct();
	return result;}

Void FlxKeyboard_obj::onKeyUp( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onKeyUp",0xa36f8255,"flixel.input.keyboard.FlxKeyboard.onKeyUp","flixel/input/keyboard/FlxKeyboard.hx",100,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(100)
		this->super::onKeyUp(event);
	}
return null();
}


Void FlxKeyboard_obj::onKeyDown( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onKeyDown",0xf4d786dc,"flixel.input.keyboard.FlxKeyboard.onKeyDown","flixel/input/keyboard/FlxKeyboard.hx",113,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(113)
		this->super::onKeyDown(event);
	}
return null();
}


int FlxKeyboard_obj::resolveKeyCode( ::openfl::_v2::events::KeyboardEvent e){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","resolveKeyCode",0x581c5a06,"flixel.input.keyboard.FlxKeyboard.resolveKeyCode","flixel/input/keyboard/FlxKeyboard.hx",125,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(129)
	Dynamic code = this->_nativeCorrection->get(((e->charCode + HX_CSTRING("_")) + e->keyCode));		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(130)
	if (((code == null()))){
		HX_STACK_LINE(130)
		return e->keyCode;
	}
	else{
		HX_STACK_LINE(130)
		return code;
	}
	HX_STACK_LINE(130)
	return (int)0;
}


Array< ::Dynamic > FlxKeyboard_obj::record( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","record",0x38ad8db7,"flixel.input.keyboard.FlxKeyboard.record","flixel/input/keyboard/FlxKeyboard.hx",142,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(143)
	Array< ::Dynamic > data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(145)
	{
		HX_STACK_LINE(145)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(145)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(145)
		while((true)){
			HX_STACK_LINE(145)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(145)
				break;
			}
			HX_STACK_LINE(145)
			::flixel::input::FlxInput key = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(145)
			++(_g);
			HX_STACK_LINE(147)
			if (((bool((key == null())) || bool(((bool((key->current == (int)0)) || bool((key->current == (int)-1)))))))){
				HX_STACK_LINE(149)
				continue;
			}
			HX_STACK_LINE(152)
			if (((data == null()))){
				HX_STACK_LINE(154)
				Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(154)
				data = _g2;
			}
			HX_STACK_LINE(157)
			::flixel::system::replay::CodeValuePair _g11 = ::flixel::system::replay::CodeValuePair_obj::__new(key->ID,key->current);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(157)
			data->push(_g11);
		}
	}
	HX_STACK_LINE(160)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,record,return )

Void FlxKeyboard_obj::playback( Array< ::Dynamic > Record){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","playback",0x84dcbec1,"flixel.input.keyboard.FlxKeyboard.playback","flixel/input/keyboard/FlxKeyboard.hx",170,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Record,"Record")
		HX_STACK_LINE(171)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(172)
		int l = Record->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(173)
		::flixel::system::replay::CodeValuePair o;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(174)
		::flixel::input::FlxInput o2;		HX_STACK_VAR(o2,"o2");
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			if ((!(((i < l))))){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(178)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(178)
			::flixel::system::replay::CodeValuePair _g1 = Record->__get(_g).StaticCast< ::flixel::system::replay::CodeValuePair >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(178)
			o = _g1;
			HX_STACK_LINE(179)
			::flixel::input::FlxInput _g2 = this->_keyListMap->get(o->code);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(179)
			o2 = _g2;
			HX_STACK_LINE(180)
			o2->current = o->value;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,playback,(void))


FlxKeyboard_obj::FlxKeyboard_obj()
{
}

void FlxKeyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyboard);
	HX_MARK_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
	::flixel::input::FlxKeyManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxKeyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
	::flixel::input::FlxKeyManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxKeyboard_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resolveKeyCode") ) { return resolveKeyCode_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { return _nativeCorrection; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKeyboard_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { _nativeCorrection=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_nativeCorrection"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxKeyboard_obj,_nativeCorrection),HX_CSTRING("_nativeCorrection")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_nativeCorrection"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("resolveKeyCode"),
	HX_CSTRING("record"),
	HX_CSTRING("playback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
};

#endif

Class FlxKeyboard_obj::__mClass;

void FlxKeyboard_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.keyboard.FlxKeyboard"), hx::TCanCast< FlxKeyboard_obj> ,sStaticFields,sMemberFields,
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

void FlxKeyboard_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
