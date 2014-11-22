#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_frames__FlxFrame_FlxFrameAngle_Impl_
#include <flixel/graphics/frames/_FlxFrame/FlxFrameAngle_Impl_.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{
namespace _FlxFrame{

Void FlxFrameAngle_Impl__obj::__construct()
{
	return null();
}

//FlxFrameAngle_Impl__obj::~FlxFrameAngle_Impl__obj() { }

Dynamic FlxFrameAngle_Impl__obj::__CreateEmpty() { return  new FlxFrameAngle_Impl__obj; }
hx::ObjectPtr< FlxFrameAngle_Impl__obj > FlxFrameAngle_Impl__obj::__new()
{  hx::ObjectPtr< FlxFrameAngle_Impl__obj > result = new FlxFrameAngle_Impl__obj();
	result->__construct();
	return result;}

Dynamic FlxFrameAngle_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFrameAngle_Impl__obj > result = new FlxFrameAngle_Impl__obj();
	result->__construct();
	return result;}

int FlxFrameAngle_Impl__obj::ANGLE_0;

int FlxFrameAngle_Impl__obj::ANGLE_90;

int FlxFrameAngle_Impl__obj::ANGLE_NEG_90;


FlxFrameAngle_Impl__obj::FlxFrameAngle_Impl__obj()
{
}

Dynamic FlxFrameAngle_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxFrameAngle_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFrameAngle_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ANGLE_0"),
	HX_CSTRING("ANGLE_90"),
	HX_CSTRING("ANGLE_NEG_90"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrameAngle_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxFrameAngle_Impl__obj::ANGLE_0,"ANGLE_0");
	HX_MARK_MEMBER_NAME(FlxFrameAngle_Impl__obj::ANGLE_90,"ANGLE_90");
	HX_MARK_MEMBER_NAME(FlxFrameAngle_Impl__obj::ANGLE_NEG_90,"ANGLE_NEG_90");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrameAngle_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxFrameAngle_Impl__obj::ANGLE_0,"ANGLE_0");
	HX_VISIT_MEMBER_NAME(FlxFrameAngle_Impl__obj::ANGLE_90,"ANGLE_90");
	HX_VISIT_MEMBER_NAME(FlxFrameAngle_Impl__obj::ANGLE_NEG_90,"ANGLE_NEG_90");
};

#endif

Class FlxFrameAngle_Impl__obj::__mClass;

void FlxFrameAngle_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames._FlxFrame.FlxFrameAngle_Impl_"), hx::TCanCast< FlxFrameAngle_Impl__obj> ,sStaticFields,sMemberFields,
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

void FlxFrameAngle_Impl__obj::__boot()
{
	ANGLE_0= (int)0;
	ANGLE_90= (int)90;
	ANGLE_NEG_90= (int)-90;
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace _FlxFrame
