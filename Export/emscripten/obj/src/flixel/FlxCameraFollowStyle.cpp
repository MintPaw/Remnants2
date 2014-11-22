#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
namespace flixel{

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::LOCKON;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::NO_DEAD_ZONE;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::PLATFORMER;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::TOPDOWN;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::TOPDOWN_TIGHT;

HX_DEFINE_CREATE_ENUM(FlxCameraFollowStyle_obj)

int FlxCameraFollowStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LOCKON")) return 0;
	if (inName==HX_CSTRING("NO_DEAD_ZONE")) return 5;
	if (inName==HX_CSTRING("PLATFORMER")) return 1;
	if (inName==HX_CSTRING("SCREEN_BY_SCREEN")) return 4;
	if (inName==HX_CSTRING("TOPDOWN")) return 2;
	if (inName==HX_CSTRING("TOPDOWN_TIGHT")) return 3;
	return super::__FindIndex(inName);
}

int FlxCameraFollowStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LOCKON")) return 0;
	if (inName==HX_CSTRING("NO_DEAD_ZONE")) return 0;
	if (inName==HX_CSTRING("PLATFORMER")) return 0;
	if (inName==HX_CSTRING("SCREEN_BY_SCREEN")) return 0;
	if (inName==HX_CSTRING("TOPDOWN")) return 0;
	if (inName==HX_CSTRING("TOPDOWN_TIGHT")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxCameraFollowStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LOCKON")) return LOCKON;
	if (inName==HX_CSTRING("NO_DEAD_ZONE")) return NO_DEAD_ZONE;
	if (inName==HX_CSTRING("PLATFORMER")) return PLATFORMER;
	if (inName==HX_CSTRING("SCREEN_BY_SCREEN")) return SCREEN_BY_SCREEN;
	if (inName==HX_CSTRING("TOPDOWN")) return TOPDOWN;
	if (inName==HX_CSTRING("TOPDOWN_TIGHT")) return TOPDOWN_TIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LOCKON"),
	HX_CSTRING("PLATFORMER"),
	HX_CSTRING("TOPDOWN"),
	HX_CSTRING("TOPDOWN_TIGHT"),
	HX_CSTRING("SCREEN_BY_SCREEN"),
	HX_CSTRING("NO_DEAD_ZONE"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::LOCKON,"LOCKON");
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::NO_DEAD_ZONE,"NO_DEAD_ZONE");
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::PLATFORMER,"PLATFORMER");
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN,"SCREEN_BY_SCREEN");
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::TOPDOWN,"TOPDOWN");
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::TOPDOWN_TIGHT,"TOPDOWN_TIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::LOCKON,"LOCKON");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::NO_DEAD_ZONE,"NO_DEAD_ZONE");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::PLATFORMER,"PLATFORMER");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN,"SCREEN_BY_SCREEN");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::TOPDOWN,"TOPDOWN");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::TOPDOWN_TIGHT,"TOPDOWN_TIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FlxCameraFollowStyle_obj::__mClass;

Dynamic __Create_FlxCameraFollowStyle_obj() { return new FlxCameraFollowStyle_obj; }

void FlxCameraFollowStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxCameraFollowStyle"), hx::TCanCast< FlxCameraFollowStyle_obj >,sStaticFields,sMemberFields,
	&__Create_FlxCameraFollowStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFlxCameraFollowStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxCameraFollowStyle_obj::__boot()
{
hx::Static(LOCKON) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_CSTRING("LOCKON"),0);
hx::Static(NO_DEAD_ZONE) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_CSTRING("NO_DEAD_ZONE"),5);
hx::Static(PLATFORMER) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_CSTRING("PLATFORMER"),1);
hx::Static(SCREEN_BY_SCREEN) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_CSTRING("SCREEN_BY_SCREEN"),4);
hx::Static(TOPDOWN) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_CSTRING("TOPDOWN"),2);
hx::Static(TOPDOWN_TIGHT) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_CSTRING("TOPDOWN_TIGHT"),3);
}


} // end namespace flixel
