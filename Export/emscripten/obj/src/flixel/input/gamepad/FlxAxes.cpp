#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxAxes
#include <flixel/input/gamepad/FlxAxes.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

::flixel::input::gamepad::FlxAxes FlxAxes_obj::X;

::flixel::input::gamepad::FlxAxes FlxAxes_obj::Y;

HX_DEFINE_CREATE_ENUM(FlxAxes_obj)

int FlxAxes_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("X")) return 0;
	if (inName==HX_CSTRING("Y")) return 1;
	return super::__FindIndex(inName);
}

int FlxAxes_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("X")) return 0;
	if (inName==HX_CSTRING("Y")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxAxes_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("X")) return X;
	if (inName==HX_CSTRING("Y")) return Y;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("X"),
	HX_CSTRING("Y"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAxes_obj::X,"X");
	HX_MARK_MEMBER_NAME(FlxAxes_obj::Y,"Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAxes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAxes_obj::X,"X");
	HX_VISIT_MEMBER_NAME(FlxAxes_obj::Y,"Y");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FlxAxes_obj::__mClass;

Dynamic __Create_FlxAxes_obj() { return new FlxAxes_obj; }

void FlxAxes_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.FlxAxes"), hx::TCanCast< FlxAxes_obj >,sStaticFields,sMemberFields,
	&__Create_FlxAxes_obj, &__Create,
	&super::__SGetClass(), &CreateFlxAxes_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxAxes_obj::__boot()
{
hx::Static(X) = hx::CreateEnum< FlxAxes_obj >(HX_CSTRING("X"),0);
hx::Static(Y) = hx::CreateEnum< FlxAxes_obj >(HX_CSTRING("Y"),1);
}


} // end namespace flixel
} // end namespace input
} // end namespace gamepad
