#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxCameraShakeDirection
#include <flixel/FlxCameraShakeDirection.h>
#endif
namespace flixel{

::flixel::FlxCameraShakeDirection FlxCameraShakeDirection_obj::BOTH_AXES;

::flixel::FlxCameraShakeDirection FlxCameraShakeDirection_obj::X_AXIS;

::flixel::FlxCameraShakeDirection FlxCameraShakeDirection_obj::Y_AXIS;

HX_DEFINE_CREATE_ENUM(FlxCameraShakeDirection_obj)

int FlxCameraShakeDirection_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BOTH_AXES")) return 0;
	if (inName==HX_CSTRING("X_AXIS")) return 1;
	if (inName==HX_CSTRING("Y_AXIS")) return 2;
	return super::__FindIndex(inName);
}

int FlxCameraShakeDirection_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BOTH_AXES")) return 0;
	if (inName==HX_CSTRING("X_AXIS")) return 0;
	if (inName==HX_CSTRING("Y_AXIS")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxCameraShakeDirection_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BOTH_AXES")) return BOTH_AXES;
	if (inName==HX_CSTRING("X_AXIS")) return X_AXIS;
	if (inName==HX_CSTRING("Y_AXIS")) return Y_AXIS;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("BOTH_AXES"),
	HX_CSTRING("X_AXIS"),
	HX_CSTRING("Y_AXIS"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCameraShakeDirection_obj::BOTH_AXES,"BOTH_AXES");
	HX_MARK_MEMBER_NAME(FlxCameraShakeDirection_obj::X_AXIS,"X_AXIS");
	HX_MARK_MEMBER_NAME(FlxCameraShakeDirection_obj::Y_AXIS,"Y_AXIS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCameraShakeDirection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCameraShakeDirection_obj::BOTH_AXES,"BOTH_AXES");
	HX_VISIT_MEMBER_NAME(FlxCameraShakeDirection_obj::X_AXIS,"X_AXIS");
	HX_VISIT_MEMBER_NAME(FlxCameraShakeDirection_obj::Y_AXIS,"Y_AXIS");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FlxCameraShakeDirection_obj::__mClass;

Dynamic __Create_FlxCameraShakeDirection_obj() { return new FlxCameraShakeDirection_obj; }

void FlxCameraShakeDirection_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxCameraShakeDirection"), hx::TCanCast< FlxCameraShakeDirection_obj >,sStaticFields,sMemberFields,
	&__Create_FlxCameraShakeDirection_obj, &__Create,
	&super::__SGetClass(), &CreateFlxCameraShakeDirection_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxCameraShakeDirection_obj::__boot()
{
hx::Static(BOTH_AXES) = hx::CreateEnum< FlxCameraShakeDirection_obj >(HX_CSTRING("BOTH_AXES"),0);
hx::Static(X_AXIS) = hx::CreateEnum< FlxCameraShakeDirection_obj >(HX_CSTRING("X_AXIS"),1);
hx::Static(Y_AXIS) = hx::CreateEnum< FlxCameraShakeDirection_obj >(HX_CSTRING("Y_AXIS"),2);
}


} // end namespace flixel
