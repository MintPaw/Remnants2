#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
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
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadManager_obj::__construct()
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","new",0x05218fad,"flixel.input.gamepad.FlxGamepadManager.new","flixel/input/gamepad/FlxGamepadManager.hx",23,0xccfee0a6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(52)
	this->_activeGamepads = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(48)
	this->_gamepads = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(43)
	this->globalDeadZone = (int)0;
	HX_STACK_LINE(330)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("axisMove"),this->handleAxisMove_dyn(),null(),null(),null());
	HX_STACK_LINE(331)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("ballMove"),this->handleBallMove_dyn(),null(),null(),null());
	HX_STACK_LINE(332)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonDown"),this->handleButtonDown_dyn(),null(),null(),null());
	HX_STACK_LINE(333)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonUp"),this->handleButtonUp_dyn(),null(),null(),null());
	HX_STACK_LINE(334)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("hatMove"),this->handleHatMove_dyn(),null(),null(),null());
	HX_STACK_LINE(335)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("deviceRemoved"),this->handleDeviceRemoved_dyn(),null(),null(),null());
	HX_STACK_LINE(336)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("deviceAdded"),this->handleDeviceAdded_dyn(),null(),null(),null());
}
;
	return null();
}

//FlxGamepadManager_obj::~FlxGamepadManager_obj() { }

Dynamic FlxGamepadManager_obj::__CreateEmpty() { return  new FlxGamepadManager_obj; }
hx::ObjectPtr< FlxGamepadManager_obj > FlxGamepadManager_obj::__new()
{  hx::ObjectPtr< FlxGamepadManager_obj > result = new FlxGamepadManager_obj();
	result->__construct();
	return result;}

Dynamic FlxGamepadManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadManager_obj > result = new FlxGamepadManager_obj();
	result->__construct();
	return result;}

hx::Object *FlxGamepadManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInputManager_obj)) return operator ::flixel::input::IFlxInputManager_obj *();
	return super::__ToInterface(inType);
}

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getByID( int GamepadID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getByID",0xe19992f5,"flixel.input.gamepad.FlxGamepadManager.getByID","flixel/input/gamepad/FlxGamepadManager.hx",67,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadID,"GamepadID")
	HX_STACK_LINE(67)
	return this->_activeGamepads->__get(GamepadID).StaticCast< ::flixel::input::gamepad::FlxGamepad >();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getByID,return )

Void FlxGamepadManager_obj::removeByID( int GamepadID){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","removeByID",0x7466a829,"flixel.input.gamepad.FlxGamepadManager.removeByID","flixel/input/gamepad/FlxGamepadManager.hx",71,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(GamepadID,"GamepadID")
		HX_STACK_LINE(72)
		::flixel::input::gamepad::FlxGamepad gamepad = this->_gamepads->__get(GamepadID).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(73)
		if (((gamepad != null()))){
			HX_STACK_LINE(75)
			::flixel::util::FlxDestroyUtil_obj::destroy(gamepad);
			HX_STACK_LINE(76)
			this->_gamepads[GamepadID] = null();
			HX_STACK_LINE(78)
			int i = this->_activeGamepads->indexOf(gamepad,null());		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(79)
			if (((i != (int)-1))){
				HX_STACK_LINE(81)
				this->_activeGamepads[i] = null();
			}
		}
		HX_STACK_LINE(85)
		if (((this->lastActive == gamepad))){
			HX_STACK_LINE(86)
			this->lastActive = null();
		}
		HX_STACK_LINE(88)
		if (((this->firstActive == gamepad))){
			HX_STACK_LINE(89)
			this->firstActive = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,removeByID,(void))

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::createByID( int GamepadID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","createByID",0x09d52ee1,"flixel.input.gamepad.FlxGamepadManager.createByID","flixel/input/gamepad/FlxGamepadManager.hx",93,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadID,"GamepadID")
	HX_STACK_LINE(94)
	::flixel::input::gamepad::FlxGamepad gamepad = this->_gamepads->__get(GamepadID).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(95)
	if (((gamepad == null()))){
		HX_STACK_LINE(97)
		::flixel::input::gamepad::FlxGamepad _g = ::flixel::input::gamepad::FlxGamepad_obj::__new(GamepadID,this->globalDeadZone);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		gamepad = _g;
		HX_STACK_LINE(98)
		this->_gamepads[GamepadID] = gamepad;
		HX_STACK_LINE(101)
		bool nullFound = false;		HX_STACK_VAR(nullFound,"nullFound");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(102)
			int _g2 = this->_activeGamepads->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(102)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(104)
				if (((this->_activeGamepads->__get(i).StaticCast< ::flixel::input::gamepad::FlxGamepad >() == null()))){
					HX_STACK_LINE(106)
					this->_activeGamepads[i] = gamepad;
					HX_STACK_LINE(107)
					nullFound = true;
					HX_STACK_LINE(108)
					break;
				}
			}
		}
		HX_STACK_LINE(112)
		if ((!(nullFound))){
			HX_STACK_LINE(114)
			this->_activeGamepads->push(gamepad);
		}
		HX_STACK_LINE(117)
		this->lastActive = gamepad;
		HX_STACK_LINE(118)
		if (((this->firstActive == null()))){
			HX_STACK_LINE(120)
			this->firstActive = gamepad;
		}
	}
	HX_STACK_LINE(123)
	return gamepad;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,createByID,return )

Array< int > FlxGamepadManager_obj::getActiveGamepadIDs( Array< int > IDsArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getActiveGamepadIDs",0x2dbae5a0,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepadIDs","flixel/input/gamepad/FlxGamepadManager.hx",133,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(IDsArray,"IDsArray")
	HX_STACK_LINE(134)
	if (((IDsArray == null()))){
		HX_STACK_LINE(136)
		IDsArray = Array_obj< int >::__new();
	}
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(139)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(139)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(139)
			++(_g);
			HX_STACK_LINE(141)
			if (((  (((gamepad != null()))) ? bool(gamepad->anyInput()) : bool(false) ))){
				HX_STACK_LINE(143)
				IDsArray->push(gamepad->id);
			}
		}
	}
	HX_STACK_LINE(147)
	return IDsArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepadIDs,return )

Array< ::Dynamic > FlxGamepadManager_obj::getActiveGamepads( Array< ::Dynamic > GamepadArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getActiveGamepads",0xd3d79bdb,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",157,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadArray,"GamepadArray")
	HX_STACK_LINE(158)
	if (((GamepadArray == null()))){
		HX_STACK_LINE(160)
		GamepadArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		while((true)){
			HX_STACK_LINE(163)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(163)
				break;
			}
			HX_STACK_LINE(163)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(163)
			++(_g);
			HX_STACK_LINE(165)
			if (((  (((gamepad != null()))) ? bool(gamepad->anyInput()) : bool(false) ))){
				HX_STACK_LINE(167)
				GamepadArray->push(gamepad);
			}
		}
	}
	HX_STACK_LINE(171)
	return GamepadArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepads,return )

int FlxGamepadManager_obj::getFirstActiveGamepadID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepadID",0x40a7d549,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepadID","flixel/input/gamepad/FlxGamepadManager.hx",179,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(180)
	::flixel::input::gamepad::FlxGamepad firstActive = this->getFirstActiveGamepad();		HX_STACK_VAR(firstActive,"firstActive");
	HX_STACK_LINE(181)
	if (((firstActive == null()))){
		HX_STACK_LINE(181)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(181)
		return firstActive->id;
	}
	HX_STACK_LINE(181)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepadID,return )

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getFirstActiveGamepad( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepad",0x4c49bdee,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepad","flixel/input/gamepad/FlxGamepadManager.hx",189,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	{
		HX_STACK_LINE(190)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(190)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(190)
		while((true)){
			HX_STACK_LINE(190)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(190)
				break;
			}
			HX_STACK_LINE(190)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(190)
			++(_g);
			HX_STACK_LINE(192)
			if (((  (((gamepad != null()))) ? bool(gamepad->anyInput()) : bool(false) ))){
				HX_STACK_LINE(194)
				return gamepad;
			}
		}
	}
	HX_STACK_LINE(198)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepad,return )

bool FlxGamepadManager_obj::anyButton( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyButton",0x595b810b,"flixel.input.gamepad.FlxGamepadManager.anyButton","flixel/input/gamepad/FlxGamepadManager.hx",205,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(206)
			Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(206)
			while((true)){
				HX_STACK_LINE(206)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(206)
					break;
				}
				HX_STACK_LINE(206)
				::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(206)
				++(_g);
				HX_STACK_LINE(208)
				if (((  (((gamepad != null()))) ? bool(gamepad->anyButton(state)) : bool(false) ))){
					HX_STACK_LINE(210)
					return true;
				}
			}
		}
		HX_STACK_LINE(214)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyButton,return )

bool FlxGamepadManager_obj::anyInput( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyInput",0xa448cb11,"flixel.input.gamepad.FlxGamepadManager.anyInput","flixel/input/gamepad/FlxGamepadManager.hx",221,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(222)
		while((true)){
			HX_STACK_LINE(222)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(222)
				break;
			}
			HX_STACK_LINE(222)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(222)
			++(_g);
			HX_STACK_LINE(224)
			if (((  (((gamepad != null()))) ? bool(gamepad->anyInput()) : bool(false) ))){
				HX_STACK_LINE(226)
				return true;
			}
		}
	}
	HX_STACK_LINE(230)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,anyInput,return )

bool FlxGamepadManager_obj::anyPressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyPressed",0x4626e969,"flixel.input.gamepad.FlxGamepadManager.anyPressed","flixel/input/gamepad/FlxGamepadManager.hx",240,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(241)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(241)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(241)
		while((true)){
			HX_STACK_LINE(241)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(241)
				break;
			}
			HX_STACK_LINE(241)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(241)
			++(_g);
			HX_STACK_LINE(243)
			if (((  (((gamepad != null()))) ? bool(gamepad->pressed(ButtonID)) : bool(false) ))){
				HX_STACK_LINE(245)
				return true;
			}
		}
	}
	HX_STACK_LINE(249)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyPressed,return )

bool FlxGamepadManager_obj::anyJustPressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyJustPressed",0x8467941d,"flixel.input.gamepad.FlxGamepadManager.anyJustPressed","flixel/input/gamepad/FlxGamepadManager.hx",259,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(260)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(260)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(260)
		while((true)){
			HX_STACK_LINE(260)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(260)
				break;
			}
			HX_STACK_LINE(260)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(260)
			++(_g);
			HX_STACK_LINE(262)
			if (((  (((gamepad != null()))) ? bool(gamepad->justPressed(ButtonID)) : bool(false) ))){
				HX_STACK_LINE(264)
				return true;
			}
		}
	}
	HX_STACK_LINE(268)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustPressed,return )

bool FlxGamepadManager_obj::anyJustReleased( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyJustReleased",0x5d1012e2,"flixel.input.gamepad.FlxGamepadManager.anyJustReleased","flixel/input/gamepad/FlxGamepadManager.hx",278,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(279)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(279)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(279)
		while((true)){
			HX_STACK_LINE(279)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(279)
				break;
			}
			HX_STACK_LINE(279)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(279)
			++(_g);
			HX_STACK_LINE(281)
			if (((  (((gamepad != null()))) ? bool(gamepad->justReleased(ButtonID)) : bool(false) ))){
				HX_STACK_LINE(283)
				return true;
			}
		}
	}
	HX_STACK_LINE(287)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustReleased,return )

Void FlxGamepadManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","destroy",0xf27a16c7,"flixel.input.gamepad.FlxGamepadManager.destroy","flixel/input/gamepad/FlxGamepadManager.hx",295,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(296)
			Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(296)
			while((true)){
				HX_STACK_LINE(296)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(296)
					break;
				}
				HX_STACK_LINE(296)
				::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(296)
				++(_g);
				HX_STACK_LINE(298)
				::flixel::input::gamepad::FlxGamepad _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(gamepad);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(298)
				gamepad = _g2;
			}
		}
		HX_STACK_LINE(301)
		this->firstActive = null();
		HX_STACK_LINE(302)
		this->lastActive = null();
		HX_STACK_LINE(303)
		this->_gamepads = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,destroy,(void))

Void FlxGamepadManager_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","reset",0x09fe365c,"flixel.input.gamepad.FlxGamepadManager.reset","flixel/input/gamepad/FlxGamepadManager.hx",317,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(317)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(317)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(317)
		while((true)){
			HX_STACK_LINE(317)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(317)
				break;
			}
			HX_STACK_LINE(317)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(317)
			++(_g);
			HX_STACK_LINE(319)
			if (((gamepad != null()))){
				HX_STACK_LINE(321)
				gamepad->reset();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,reset,(void))

Void FlxGamepadManager_obj::handleButtonDown( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonDown",0x9a9405cf,"flixel.input.gamepad.FlxGamepadManager.handleButtonDown","flixel/input/gamepad/FlxGamepadManager.hx",410,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(411)
		::flixel::input::gamepad::FlxGamepad gamepad = this->createByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(412)
		::flixel::input::gamepad::FlxGamepadButton button = gamepad->getButton(FlashEvent->id);		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(414)
		if (((button != null()))){
			HX_STACK_LINE(416)
			button->press();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonDown,(void))

Void FlxGamepadManager_obj::handleButtonUp( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonUp",0x87ba4e88,"flixel.input.gamepad.FlxGamepadManager.handleButtonUp","flixel/input/gamepad/FlxGamepadManager.hx",421,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(422)
		::flixel::input::gamepad::FlxGamepad gamepad = this->createByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(423)
		::flixel::input::gamepad::FlxGamepadButton button = gamepad->getButton(FlashEvent->id);		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(425)
		if (((button != null()))){
			HX_STACK_LINE(427)
			button->release();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonUp,(void))

Void FlxGamepadManager_obj::handleAxisMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleAxisMove",0xbb7c51ed,"flixel.input.gamepad.FlxGamepadManager.handleAxisMove","flixel/input/gamepad/FlxGamepadManager.hx",432,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(433)
		::flixel::input::gamepad::FlxGamepad gamepad = this->createByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(434)
		gamepad->axis = FlashEvent->axis;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleAxisMove,(void))

Void FlxGamepadManager_obj::handleBallMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleBallMove",0x63851e4b,"flixel.input.gamepad.FlxGamepadManager.handleBallMove","flixel/input/gamepad/FlxGamepadManager.hx",438,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(439)
		::flixel::input::gamepad::FlxGamepad gamepad = this->createByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(440)
		Float _g = ::Math_obj::abs(FlashEvent->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(440)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(440)
		if (((_g < gamepad->deadZone))){
			HX_STACK_LINE(440)
			_g1 = (int)0;
		}
		else{
			HX_STACK_LINE(440)
			_g1 = FlashEvent->x;
		}
		HX_STACK_LINE(440)
		gamepad->ball->set_x(_g1);
		HX_STACK_LINE(441)
		Float _g2 = ::Math_obj::abs(FlashEvent->y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(441)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(441)
		if (((_g2 < gamepad->deadZone))){
			HX_STACK_LINE(441)
			_g3 = (int)0;
		}
		else{
			HX_STACK_LINE(441)
			_g3 = FlashEvent->y;
		}
		HX_STACK_LINE(441)
		gamepad->ball->set_y(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleBallMove,(void))

Void FlxGamepadManager_obj::handleHatMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleHatMove",0x5f7942d1,"flixel.input.gamepad.FlxGamepadManager.handleHatMove","flixel/input/gamepad/FlxGamepadManager.hx",445,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(446)
		::flixel::input::gamepad::FlxGamepad gamepad = this->createByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(447)
		Float _g = ::Math_obj::abs(FlashEvent->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(447)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(447)
		if (((_g < gamepad->deadZone))){
			HX_STACK_LINE(447)
			_g1 = (int)0;
		}
		else{
			HX_STACK_LINE(447)
			_g1 = FlashEvent->x;
		}
		HX_STACK_LINE(447)
		gamepad->hat->set_x(_g1);
		HX_STACK_LINE(448)
		Float _g2 = ::Math_obj::abs(FlashEvent->y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(448)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(448)
		if (((_g2 < gamepad->deadZone))){
			HX_STACK_LINE(448)
			_g3 = (int)0;
		}
		else{
			HX_STACK_LINE(448)
			_g3 = FlashEvent->y;
		}
		HX_STACK_LINE(448)
		gamepad->hat->set_y(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleHatMove,(void))

Void FlxGamepadManager_obj::handleDeviceAdded( ::openfl::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleDeviceAdded",0x86fef98f,"flixel.input.gamepad.FlxGamepadManager.handleDeviceAdded","flixel/input/gamepad/FlxGamepadManager.hx",453,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(453)
		this->createByID(event->device);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleDeviceAdded,(void))

Void FlxGamepadManager_obj::handleDeviceRemoved( ::openfl::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleDeviceRemoved",0xde69562f,"flixel.input.gamepad.FlxGamepadManager.handleDeviceRemoved","flixel/input/gamepad/FlxGamepadManager.hx",458,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(458)
		this->removeByID(event->device);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleDeviceRemoved,(void))

Void FlxGamepadManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","update",0x32fe94dc,"flixel.input.gamepad.FlxGamepadManager.update","flixel/input/gamepad/FlxGamepadManager.hx",467,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(467)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(467)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(467)
		while((true)){
			HX_STACK_LINE(467)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(467)
				break;
			}
			HX_STACK_LINE(467)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(467)
			++(_g);
			HX_STACK_LINE(469)
			if (((gamepad != null()))){
				HX_STACK_LINE(471)
				gamepad->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,update,(void))

Void FlxGamepadManager_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","onFocus",0x68bae806,"flixel.input.gamepad.FlxGamepadManager.onFocus","flixel/input/gamepad/FlxGamepadManager.hx",476,0xccfee0a6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocus,(void))

Void FlxGamepadManager_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","onFocusLost",0xeb47390a,"flixel.input.gamepad.FlxGamepadManager.onFocusLost","flixel/input/gamepad/FlxGamepadManager.hx",480,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(480)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocusLost,(void))

int FlxGamepadManager_obj::get_numActiveGamepads( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","get_numActiveGamepads",0x4cfd1ae2,"flixel.input.gamepad.FlxGamepadManager.get_numActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",484,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(485)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(486)
	{
		HX_STACK_LINE(486)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(486)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(486)
		while((true)){
			HX_STACK_LINE(486)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(486)
				break;
			}
			HX_STACK_LINE(486)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(486)
			++(_g);
			HX_STACK_LINE(488)
			if (((gamepad != null()))){
				HX_STACK_LINE(490)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(493)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,get_numActiveGamepads,return )

Float FlxGamepadManager_obj::set_globalDeadZone( Float DeadZone){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","set_globalDeadZone",0x5e4d5a03,"flixel.input.gamepad.FlxGamepadManager.set_globalDeadZone","flixel/input/gamepad/FlxGamepadManager.hx",503,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(DeadZone,"DeadZone")
	HX_STACK_LINE(504)
	this->globalDeadZone = DeadZone;
	HX_STACK_LINE(505)
	{
		HX_STACK_LINE(505)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(505)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(505)
		while((true)){
			HX_STACK_LINE(505)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(505)
				break;
			}
			HX_STACK_LINE(505)
			::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(505)
			++(_g);
			HX_STACK_LINE(507)
			if (((gamepad != null()))){
				HX_STACK_LINE(509)
				gamepad->deadZone = DeadZone;
			}
		}
	}
	HX_STACK_LINE(512)
	return this->globalDeadZone;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,set_globalDeadZone,return )


FlxGamepadManager_obj::FlxGamepadManager_obj()
{
}

void FlxGamepadManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadManager);
	HX_MARK_MEMBER_NAME(firstActive,"firstActive");
	HX_MARK_MEMBER_NAME(lastActive,"lastActive");
	HX_MARK_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_MARK_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_MARK_MEMBER_NAME(_gamepads,"_gamepads");
	HX_MARK_MEMBER_NAME(_activeGamepads,"_activeGamepads");
	HX_MARK_END_CLASS();
}

void FlxGamepadManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstActive,"firstActive");
	HX_VISIT_MEMBER_NAME(lastActive,"lastActive");
	HX_VISIT_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_VISIT_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_VISIT_MEMBER_NAME(_gamepads,"_gamepads");
	HX_VISIT_MEMBER_NAME(_activeGamepads,"_activeGamepads");
}

Dynamic FlxGamepadManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { return getByID_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { return _gamepads; }
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { return lastActive; }
		if (HX_FIELD_EQ(inName,"removeByID") ) { return removeByID_dyn(); }
		if (HX_FIELD_EQ(inName,"createByID") ) { return createByID_dyn(); }
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { return firstActive; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleHatMove") ) { return handleHatMove_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { return globalDeadZone; }
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonUp") ) { return handleButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"handleAxisMove") ) { return handleAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleBallMove") ) { return handleBallMove_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeGamepads") ) { return _activeGamepads; }
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleButtonDown") ) { return handleButtonDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { return inCallProp ? get_numActiveGamepads() : numActiveGamepads; }
		if (HX_FIELD_EQ(inName,"getActiveGamepads") ) { return getActiveGamepads_dyn(); }
		if (HX_FIELD_EQ(inName,"handleDeviceAdded") ) { return handleDeviceAdded_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_globalDeadZone") ) { return set_globalDeadZone_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getActiveGamepadIDs") ) { return getActiveGamepadIDs_dyn(); }
		if (HX_FIELD_EQ(inName,"handleDeviceRemoved") ) { return handleDeviceRemoved_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepad") ) { return getFirstActiveGamepad_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numActiveGamepads") ) { return get_numActiveGamepads_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepadID") ) { return getFirstActiveGamepadID_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { _gamepads=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { lastActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { firstActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { if (inCallProp) return set_globalDeadZone(inValue);globalDeadZone=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeGamepads") ) { _activeGamepads=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { numActiveGamepads=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("firstActive"));
	outFields->push(HX_CSTRING("lastActive"));
	outFields->push(HX_CSTRING("numActiveGamepads"));
	outFields->push(HX_CSTRING("globalDeadZone"));
	outFields->push(HX_CSTRING("_gamepads"));
	outFields->push(HX_CSTRING("_activeGamepads"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadManager_obj,firstActive),HX_CSTRING("firstActive")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadManager_obj,lastActive),HX_CSTRING("lastActive")},
	{hx::fsInt,(int)offsetof(FlxGamepadManager_obj,numActiveGamepads),HX_CSTRING("numActiveGamepads")},
	{hx::fsFloat,(int)offsetof(FlxGamepadManager_obj,globalDeadZone),HX_CSTRING("globalDeadZone")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepadManager_obj,_gamepads),HX_CSTRING("_gamepads")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepadManager_obj,_activeGamepads),HX_CSTRING("_activeGamepads")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("firstActive"),
	HX_CSTRING("lastActive"),
	HX_CSTRING("numActiveGamepads"),
	HX_CSTRING("globalDeadZone"),
	HX_CSTRING("_gamepads"),
	HX_CSTRING("_activeGamepads"),
	HX_CSTRING("getByID"),
	HX_CSTRING("removeByID"),
	HX_CSTRING("createByID"),
	HX_CSTRING("getActiveGamepadIDs"),
	HX_CSTRING("getActiveGamepads"),
	HX_CSTRING("getFirstActiveGamepadID"),
	HX_CSTRING("getFirstActiveGamepad"),
	HX_CSTRING("anyButton"),
	HX_CSTRING("anyInput"),
	HX_CSTRING("anyPressed"),
	HX_CSTRING("anyJustPressed"),
	HX_CSTRING("anyJustReleased"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("handleButtonDown"),
	HX_CSTRING("handleButtonUp"),
	HX_CSTRING("handleAxisMove"),
	HX_CSTRING("handleBallMove"),
	HX_CSTRING("handleHatMove"),
	HX_CSTRING("handleDeviceAdded"),
	HX_CSTRING("handleDeviceRemoved"),
	HX_CSTRING("update"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("get_numActiveGamepads"),
	HX_CSTRING("set_globalDeadZone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

#endif

Class FlxGamepadManager_obj::__mClass;

void FlxGamepadManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.FlxGamepadManager"), hx::TCanCast< FlxGamepadManager_obj> ,sStaticFields,sMemberFields,
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

void FlxGamepadManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
