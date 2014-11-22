#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadButton_obj::__construct(int ID)
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadButton","new",0xa97275d6,"flixel.input.gamepad.FlxGamepadButton.new","flixel/input/gamepad/FlxGamepadButton.hx",5,0xa176f377)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
{
	HX_STACK_LINE(5)
	super::__construct(ID);
}
;
	return null();
}

//FlxGamepadButton_obj::~FlxGamepadButton_obj() { }

Dynamic FlxGamepadButton_obj::__CreateEmpty() { return  new FlxGamepadButton_obj; }
hx::ObjectPtr< FlxGamepadButton_obj > FlxGamepadButton_obj::__new(int ID)
{  hx::ObjectPtr< FlxGamepadButton_obj > result = new FlxGamepadButton_obj();
	result->__construct(ID);
	return result;}

Dynamic FlxGamepadButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadButton_obj > result = new FlxGamepadButton_obj();
	result->__construct(inArgs[0]);
	return result;}


FlxGamepadButton_obj::FlxGamepadButton_obj()
{
}

Dynamic FlxGamepadButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadButton_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadButton_obj::__mClass,"__mClass");
};

#endif

Class FlxGamepadButton_obj::__mClass;

void FlxGamepadButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.FlxGamepadButton"), hx::TCanCast< FlxGamepadButton_obj> ,sStaticFields,sMemberFields,
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

void FlxGamepadButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
