#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadDeadZoneMode
#include <flixel/input/gamepad/FlxGamepadDeadZoneMode.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

::flixel::input::gamepad::FlxGamepadDeadZoneMode FlxGamepadDeadZoneMode_obj::CIRCULAR;

::flixel::input::gamepad::FlxGamepadDeadZoneMode FlxGamepadDeadZoneMode_obj::INDEPENDANT_AXES;

HX_DEFINE_CREATE_ENUM(FlxGamepadDeadZoneMode_obj)

int FlxGamepadDeadZoneMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("CIRCULAR")) return 1;
	if (inName==HX_CSTRING("INDEPENDANT_AXES")) return 0;
	return super::__FindIndex(inName);
}

int FlxGamepadDeadZoneMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("CIRCULAR")) return 0;
	if (inName==HX_CSTRING("INDEPENDANT_AXES")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxGamepadDeadZoneMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("CIRCULAR")) return CIRCULAR;
	if (inName==HX_CSTRING("INDEPENDANT_AXES")) return INDEPENDANT_AXES;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("INDEPENDANT_AXES"),
	HX_CSTRING("CIRCULAR"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::CIRCULAR,"CIRCULAR");
	HX_MARK_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::INDEPENDANT_AXES,"INDEPENDANT_AXES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::CIRCULAR,"CIRCULAR");
	HX_VISIT_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::INDEPENDANT_AXES,"INDEPENDANT_AXES");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FlxGamepadDeadZoneMode_obj::__mClass;

Dynamic __Create_FlxGamepadDeadZoneMode_obj() { return new FlxGamepadDeadZoneMode_obj; }

void FlxGamepadDeadZoneMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.FlxGamepadDeadZoneMode"), hx::TCanCast< FlxGamepadDeadZoneMode_obj >,sStaticFields,sMemberFields,
	&__Create_FlxGamepadDeadZoneMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxGamepadDeadZoneMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxGamepadDeadZoneMode_obj::__boot()
{
hx::Static(CIRCULAR) = hx::CreateEnum< FlxGamepadDeadZoneMode_obj >(HX_CSTRING("CIRCULAR"),1);
hx::Static(INDEPENDANT_AXES) = hx::CreateEnum< FlxGamepadDeadZoneMode_obj >(HX_CSTRING("INDEPENDANT_AXES"),0);
}


} // end namespace flixel
} // end namespace input
} // end namespace gamepad
