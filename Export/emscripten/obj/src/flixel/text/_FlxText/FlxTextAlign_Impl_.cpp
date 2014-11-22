#include <hxcpp.h>

#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
namespace flixel{
namespace text{
namespace _FlxText{

Void FlxTextAlign_Impl__obj::__construct()
{
	return null();
}

//FlxTextAlign_Impl__obj::~FlxTextAlign_Impl__obj() { }

Dynamic FlxTextAlign_Impl__obj::__CreateEmpty() { return  new FlxTextAlign_Impl__obj; }
hx::ObjectPtr< FlxTextAlign_Impl__obj > FlxTextAlign_Impl__obj::__new()
{  hx::ObjectPtr< FlxTextAlign_Impl__obj > result = new FlxTextAlign_Impl__obj();
	result->__construct();
	return result;}

Dynamic FlxTextAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTextAlign_Impl__obj > result = new FlxTextAlign_Impl__obj();
	result->__construct();
	return result;}

::String FlxTextAlign_Impl__obj::LEFT;

::String FlxTextAlign_Impl__obj::CENTER;

::String FlxTextAlign_Impl__obj::RIGHT;

::String FlxTextAlign_Impl__obj::JUSTIFY;


FlxTextAlign_Impl__obj::FlxTextAlign_Impl__obj()
{
}

Dynamic FlxTextAlign_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTextAlign_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTextAlign_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("CENTER"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("JUSTIFY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::JUSTIFY,"JUSTIFY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::JUSTIFY,"JUSTIFY");
};

#endif

Class FlxTextAlign_Impl__obj::__mClass;

void FlxTextAlign_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text._FlxText.FlxTextAlign_Impl_"), hx::TCanCast< FlxTextAlign_Impl__obj> ,sStaticFields,sMemberFields,
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

void FlxTextAlign_Impl__obj::__boot()
{
	LEFT= HX_CSTRING("left");
	CENTER= HX_CSTRING("center");
	RIGHT= HX_CSTRING("right");
	JUSTIFY= HX_CSTRING("justify");
}

} // end namespace flixel
} // end namespace text
} // end namespace _FlxText
