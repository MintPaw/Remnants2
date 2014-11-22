#include <hxcpp.h>

#ifndef INCLUDED_flixel_input__FlxInput_FlxInputState_Impl_
#include <flixel/input/_FlxInput/FlxInputState_Impl_.h>
#endif
namespace flixel{
namespace input{
namespace _FlxInput{

Void FlxInputState_Impl__obj::__construct()
{
	return null();
}

//FlxInputState_Impl__obj::~FlxInputState_Impl__obj() { }

Dynamic FlxInputState_Impl__obj::__CreateEmpty() { return  new FlxInputState_Impl__obj; }
hx::ObjectPtr< FlxInputState_Impl__obj > FlxInputState_Impl__obj::__new()
{  hx::ObjectPtr< FlxInputState_Impl__obj > result = new FlxInputState_Impl__obj();
	result->__construct();
	return result;}

Dynamic FlxInputState_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxInputState_Impl__obj > result = new FlxInputState_Impl__obj();
	result->__construct();
	return result;}

int FlxInputState_Impl__obj::JUST_RELEASED;

int FlxInputState_Impl__obj::RELEASED;

int FlxInputState_Impl__obj::PRESSED;

int FlxInputState_Impl__obj::JUST_PRESSED;


FlxInputState_Impl__obj::FlxInputState_Impl__obj()
{
}

Dynamic FlxInputState_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxInputState_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInputState_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("JUST_RELEASED"),
	HX_CSTRING("RELEASED"),
	HX_CSTRING("PRESSED"),
	HX_CSTRING("JUST_PRESSED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInputState_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxInputState_Impl__obj::JUST_RELEASED,"JUST_RELEASED");
	HX_MARK_MEMBER_NAME(FlxInputState_Impl__obj::RELEASED,"RELEASED");
	HX_MARK_MEMBER_NAME(FlxInputState_Impl__obj::PRESSED,"PRESSED");
	HX_MARK_MEMBER_NAME(FlxInputState_Impl__obj::JUST_PRESSED,"JUST_PRESSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInputState_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxInputState_Impl__obj::JUST_RELEASED,"JUST_RELEASED");
	HX_VISIT_MEMBER_NAME(FlxInputState_Impl__obj::RELEASED,"RELEASED");
	HX_VISIT_MEMBER_NAME(FlxInputState_Impl__obj::PRESSED,"PRESSED");
	HX_VISIT_MEMBER_NAME(FlxInputState_Impl__obj::JUST_PRESSED,"JUST_PRESSED");
};

#endif

Class FlxInputState_Impl__obj::__mClass;

void FlxInputState_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input._FlxInput.FlxInputState_Impl_"), hx::TCanCast< FlxInputState_Impl__obj> ,sStaticFields,sMemberFields,
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

void FlxInputState_Impl__obj::__boot()
{
	JUST_RELEASED= (int)-1;
	RELEASED= (int)0;
	PRESSED= (int)1;
	JUST_PRESSED= (int)2;
}

} // end namespace flixel
} // end namespace input
} // end namespace _FlxInput
