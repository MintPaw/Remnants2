#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_FlxButtonAlignment
#include <flixel/system/debug/FlxButtonAlignment.h>
#endif
namespace flixel{
namespace system{
namespace debug{

::flixel::system::debug::FlxButtonAlignment FlxButtonAlignment_obj::LEFT;

::flixel::system::debug::FlxButtonAlignment FlxButtonAlignment_obj::MIDDLE;

::flixel::system::debug::FlxButtonAlignment FlxButtonAlignment_obj::RIGHT;

HX_DEFINE_CREATE_ENUM(FlxButtonAlignment_obj)

int FlxButtonAlignment_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("MIDDLE")) return 1;
	if (inName==HX_CSTRING("RIGHT")) return 2;
	return super::__FindIndex(inName);
}

int FlxButtonAlignment_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("MIDDLE")) return 0;
	if (inName==HX_CSTRING("RIGHT")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxButtonAlignment_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LEFT")) return LEFT;
	if (inName==HX_CSTRING("MIDDLE")) return MIDDLE;
	if (inName==HX_CSTRING("RIGHT")) return RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("MIDDLE"),
	HX_CSTRING("RIGHT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButtonAlignment_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxButtonAlignment_obj::MIDDLE,"MIDDLE");
	HX_MARK_MEMBER_NAME(FlxButtonAlignment_obj::RIGHT,"RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButtonAlignment_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxButtonAlignment_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxButtonAlignment_obj::MIDDLE,"MIDDLE");
	HX_VISIT_MEMBER_NAME(FlxButtonAlignment_obj::RIGHT,"RIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FlxButtonAlignment_obj::__mClass;

Dynamic __Create_FlxButtonAlignment_obj() { return new FlxButtonAlignment_obj; }

void FlxButtonAlignment_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.FlxButtonAlignment"), hx::TCanCast< FlxButtonAlignment_obj >,sStaticFields,sMemberFields,
	&__Create_FlxButtonAlignment_obj, &__Create,
	&super::__SGetClass(), &CreateFlxButtonAlignment_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxButtonAlignment_obj::__boot()
{
hx::Static(LEFT) = hx::CreateEnum< FlxButtonAlignment_obj >(HX_CSTRING("LEFT"),0);
hx::Static(MIDDLE) = hx::CreateEnum< FlxButtonAlignment_obj >(HX_CSTRING("MIDDLE"),1);
hx::Static(RIGHT) = hx::CreateEnum< FlxButtonAlignment_obj >(HX_CSTRING("RIGHT"),2);
}


} // end namespace flixel
} // end namespace system
} // end namespace debug
