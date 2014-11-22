#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
namespace flixel{
namespace util{

::flixel::util::FlxSaveStatus FlxSaveStatus_obj::ERROR;

::flixel::util::FlxSaveStatus FlxSaveStatus_obj::PENDING;

::flixel::util::FlxSaveStatus FlxSaveStatus_obj::SUCCESS;

HX_DEFINE_CREATE_ENUM(FlxSaveStatus_obj)

int FlxSaveStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("ERROR")) return 2;
	if (inName==HX_CSTRING("PENDING")) return 1;
	if (inName==HX_CSTRING("SUCCESS")) return 0;
	return super::__FindIndex(inName);
}

int FlxSaveStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("ERROR")) return 0;
	if (inName==HX_CSTRING("PENDING")) return 0;
	if (inName==HX_CSTRING("SUCCESS")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxSaveStatus_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("ERROR")) return ERROR;
	if (inName==HX_CSTRING("PENDING")) return PENDING;
	if (inName==HX_CSTRING("SUCCESS")) return SUCCESS;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("SUCCESS"),
	HX_CSTRING("PENDING"),
	HX_CSTRING("ERROR"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSaveStatus_obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(FlxSaveStatus_obj::PENDING,"PENDING");
	HX_MARK_MEMBER_NAME(FlxSaveStatus_obj::SUCCESS,"SUCCESS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSaveStatus_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSaveStatus_obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(FlxSaveStatus_obj::PENDING,"PENDING");
	HX_VISIT_MEMBER_NAME(FlxSaveStatus_obj::SUCCESS,"SUCCESS");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FlxSaveStatus_obj::__mClass;

Dynamic __Create_FlxSaveStatus_obj() { return new FlxSaveStatus_obj; }

void FlxSaveStatus_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxSaveStatus"), hx::TCanCast< FlxSaveStatus_obj >,sStaticFields,sMemberFields,
	&__Create_FlxSaveStatus_obj, &__Create,
	&super::__SGetClass(), &CreateFlxSaveStatus_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxSaveStatus_obj::__boot()
{
hx::Static(ERROR) = hx::CreateEnum< FlxSaveStatus_obj >(HX_CSTRING("ERROR"),2);
hx::Static(PENDING) = hx::CreateEnum< FlxSaveStatus_obj >(HX_CSTRING("PENDING"),1);
hx::Static(SUCCESS) = hx::CreateEnum< FlxSaveStatus_obj >(HX_CSTRING("SUCCESS"),0);
}


} // end namespace flixel
} // end namespace util
