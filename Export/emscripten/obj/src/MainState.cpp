#include <hxcpp.h>

#ifndef INCLUDED_MainState
#include <MainState.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_game_GameState
#include <game/GameState.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif

Void MainState_obj::__construct()
{
HX_STACK_FRAME("MainState","new",0x18049bea,"MainState.new","MainState.hx",12,0x5634cec6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	super::__construct(null());
}
;
	return null();
}

//MainState_obj::~MainState_obj() { }

Dynamic MainState_obj::__CreateEmpty() { return  new MainState_obj; }
hx::ObjectPtr< MainState_obj > MainState_obj::__new()
{  hx::ObjectPtr< MainState_obj > result = new MainState_obj();
	result->__construct();
	return result;}

Dynamic MainState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainState_obj > result = new MainState_obj();
	result->__construct();
	return result;}

Void MainState_obj::create( ){
{
		HX_STACK_FRAME("MainState","create",0xdbe6edb2,"MainState.create","MainState.hx",16,0x5634cec6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		::flixel::FlxG_obj::cameras->set_bgColor((int)-1);
		HX_STACK_LINE(18)
		::flixel::FlxG_obj::sound->soundTrayEnabled = false;
		HX_STACK_LINE(24)
		::flixel::FlxG_obj::gamepads->set_globalDeadZone(.8);
		HX_STACK_LINE(26)
		::Reg_obj::currentLevel = (int)1;
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			::flixel::FlxState State = ::game::GameState_obj::__new();		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(27)
			if ((::flixel::FlxG_obj::game->_state->isTransitionNeeded())){
				HX_STACK_LINE(27)
				::flixel::FlxG_obj::game->_state->transitionToState(State);
				HX_STACK_LINE(27)
				Dynamic();
			}
			else{
				HX_STACK_LINE(27)
				::flixel::FlxG_obj::game->_requestedState = State;
			}
		}
	}
return null();
}



MainState_obj::MainState_obj()
{
}

Dynamic MainState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MainState_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("create"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainState_obj::__mClass,"__mClass");
};

#endif

Class MainState_obj::__mClass;

void MainState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MainState"), hx::TCanCast< MainState_obj> ,sStaticFields,sMemberFields,
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

void MainState_obj::__boot()
{
}

