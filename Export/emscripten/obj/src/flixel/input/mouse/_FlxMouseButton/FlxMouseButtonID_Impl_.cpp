#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_mouse__FlxMouseButton_FlxMouseButtonID_Impl_
#include <flixel/input/mouse/_FlxMouseButton/FlxMouseButtonID_Impl_.h>
#endif
namespace flixel{
namespace input{
namespace mouse{
namespace _FlxMouseButton{

Void FlxMouseButtonID_Impl__obj::__construct()
{
	return null();
}

//FlxMouseButtonID_Impl__obj::~FlxMouseButtonID_Impl__obj() { }

Dynamic FlxMouseButtonID_Impl__obj::__CreateEmpty() { return  new FlxMouseButtonID_Impl__obj; }
hx::ObjectPtr< FlxMouseButtonID_Impl__obj > FlxMouseButtonID_Impl__obj::__new()
{  hx::ObjectPtr< FlxMouseButtonID_Impl__obj > result = new FlxMouseButtonID_Impl__obj();
	result->__construct();
	return result;}

Dynamic FlxMouseButtonID_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouseButtonID_Impl__obj > result = new FlxMouseButtonID_Impl__obj();
	result->__construct();
	return result;}

int FlxMouseButtonID_Impl__obj::LEFT;

int FlxMouseButtonID_Impl__obj::MIDDLE;

int FlxMouseButtonID_Impl__obj::RIGHT;


FlxMouseButtonID_Impl__obj::FlxMouseButtonID_Impl__obj()
{
}

Dynamic FlxMouseButtonID_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouseButtonID_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseButtonID_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("MIDDLE"),
	HX_CSTRING("RIGHT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseButtonID_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMouseButtonID_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxMouseButtonID_Impl__obj::MIDDLE,"MIDDLE");
	HX_MARK_MEMBER_NAME(FlxMouseButtonID_Impl__obj::RIGHT,"RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseButtonID_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMouseButtonID_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxMouseButtonID_Impl__obj::MIDDLE,"MIDDLE");
	HX_VISIT_MEMBER_NAME(FlxMouseButtonID_Impl__obj::RIGHT,"RIGHT");
};

#endif

Class FlxMouseButtonID_Impl__obj::__mClass;

void FlxMouseButtonID_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.mouse._FlxMouseButton.FlxMouseButtonID_Impl_"), hx::TCanCast< FlxMouseButtonID_Impl__obj> ,sStaticFields,sMemberFields,
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

void FlxMouseButtonID_Impl__obj::__boot()
{
	LEFT= (int)-1;
	MIDDLE= (int)-2;
	RIGHT= (int)-3;
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
} // end namespace _FlxMouseButton
