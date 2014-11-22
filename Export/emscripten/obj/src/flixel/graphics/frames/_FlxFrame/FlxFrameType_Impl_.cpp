#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_frames__FlxFrame_FlxFrameType_Impl_
#include <flixel/graphics/frames/_FlxFrame/FlxFrameType_Impl_.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{
namespace _FlxFrame{

Void FlxFrameType_Impl__obj::__construct()
{
	return null();
}

//FlxFrameType_Impl__obj::~FlxFrameType_Impl__obj() { }

Dynamic FlxFrameType_Impl__obj::__CreateEmpty() { return  new FlxFrameType_Impl__obj; }
hx::ObjectPtr< FlxFrameType_Impl__obj > FlxFrameType_Impl__obj::__new()
{  hx::ObjectPtr< FlxFrameType_Impl__obj > result = new FlxFrameType_Impl__obj();
	result->__construct();
	return result;}

Dynamic FlxFrameType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFrameType_Impl__obj > result = new FlxFrameType_Impl__obj();
	result->__construct();
	return result;}

int FlxFrameType_Impl__obj::REGULAR;

int FlxFrameType_Impl__obj::ROTATED;

int FlxFrameType_Impl__obj::EMPTY;

int FlxFrameType_Impl__obj::GLYPH;

int FlxFrameType_Impl__obj::FILTER;


FlxFrameType_Impl__obj::FlxFrameType_Impl__obj()
{
}

Dynamic FlxFrameType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxFrameType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFrameType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("REGULAR"),
	HX_CSTRING("ROTATED"),
	HX_CSTRING("EMPTY"),
	HX_CSTRING("GLYPH"),
	HX_CSTRING("FILTER"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrameType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxFrameType_Impl__obj::REGULAR,"REGULAR");
	HX_MARK_MEMBER_NAME(FlxFrameType_Impl__obj::ROTATED,"ROTATED");
	HX_MARK_MEMBER_NAME(FlxFrameType_Impl__obj::EMPTY,"EMPTY");
	HX_MARK_MEMBER_NAME(FlxFrameType_Impl__obj::GLYPH,"GLYPH");
	HX_MARK_MEMBER_NAME(FlxFrameType_Impl__obj::FILTER,"FILTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrameType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxFrameType_Impl__obj::REGULAR,"REGULAR");
	HX_VISIT_MEMBER_NAME(FlxFrameType_Impl__obj::ROTATED,"ROTATED");
	HX_VISIT_MEMBER_NAME(FlxFrameType_Impl__obj::EMPTY,"EMPTY");
	HX_VISIT_MEMBER_NAME(FlxFrameType_Impl__obj::GLYPH,"GLYPH");
	HX_VISIT_MEMBER_NAME(FlxFrameType_Impl__obj::FILTER,"FILTER");
};

#endif

Class FlxFrameType_Impl__obj::__mClass;

void FlxFrameType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames._FlxFrame.FlxFrameType_Impl_"), hx::TCanCast< FlxFrameType_Impl__obj> ,sStaticFields,sMemberFields,
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

void FlxFrameType_Impl__obj::__boot()
{
	REGULAR= (int)0;
	ROTATED= (int)1;
	EMPTY= (int)2;
	GLYPH= (int)3;
	FILTER= (int)4;
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace _FlxFrame
