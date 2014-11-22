#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_mouse__FlxMouse_GraphicCursor
#include <flixel/input/mouse/_FlxMouse/GraphicCursor.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_ui_Mouse
#include <openfl/_v2/ui/Mouse.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace flixel{
namespace input{
namespace mouse{

Void FlxMouse_obj::__construct(::openfl::_v2::display::Sprite CursorContainer)
{
HX_STACK_FRAME("flixel.input.mouse.FlxMouse","new",0x1251bd04,"flixel.input.mouse.FlxMouse.new","flixel/input/mouse/FlxMouse.hx",34,0xe4e80b89)
HX_STACK_THIS(this)
HX_STACK_ARG(CursorContainer,"CursorContainer")
{
	HX_STACK_LINE(126)
	this->_lastWheel = (int)0;
	HX_STACK_LINE(125)
	this->_lastY = (int)0;
	HX_STACK_LINE(124)
	this->_lastX = (int)0;
	HX_STACK_LINE(119)
	this->_visibleWhenFocusLost = true;
	HX_STACK_LINE(118)
	this->_wheelUsed = false;
	HX_STACK_LINE(116)
	this->_cursor = null();
	HX_STACK_LINE(55)
	this->useSystemCursor = false;
	HX_STACK_LINE(51)
	this->visible = true;
	HX_STACK_LINE(40)
	this->wheel = (int)0;
	HX_STACK_LINE(357)
	super::__construct();
	HX_STACK_LINE(358)
	this->cursorContainer = CursorContainer;
	HX_STACK_LINE(359)
	this->cursorContainer->set_mouseChildren(false);
	HX_STACK_LINE(360)
	this->cursorContainer->set_mouseEnabled(false);
	HX_STACK_LINE(362)
	::flixel::input::mouse::FlxMouseButton _g = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(362)
	this->_leftButton = _g;
	HX_STACK_LINE(364)
	::openfl::_v2::display::Stage _g1 = ::openfl::_v2::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(364)
	this->_stage = _g1;
	HX_STACK_LINE(365)
	this->_stage->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->_leftButton->onDown_dyn(),null(),null(),null());
	HX_STACK_LINE(366)
	this->_stage->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->_leftButton->onUp_dyn(),null(),null(),null());
	HX_STACK_LINE(369)
	::flixel::input::mouse::FlxMouseButton _g2 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-2);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(369)
	this->_middleButton = _g2;
	HX_STACK_LINE(370)
	::flixel::input::mouse::FlxMouseButton _g3 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-3);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(370)
	this->_rightButton = _g3;
	HX_STACK_LINE(372)
	this->_stage->addEventListener(::openfl::_v2::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,this->_middleButton->onDown_dyn(),null(),null(),null());
	HX_STACK_LINE(373)
	this->_stage->addEventListener(::openfl::_v2::events::MouseEvent_obj::MIDDLE_MOUSE_UP,this->_middleButton->onUp_dyn(),null(),null(),null());
	HX_STACK_LINE(374)
	this->_stage->addEventListener(::openfl::_v2::events::MouseEvent_obj::RIGHT_MOUSE_DOWN,this->_rightButton->onDown_dyn(),null(),null(),null());
	HX_STACK_LINE(375)
	this->_stage->addEventListener(::openfl::_v2::events::MouseEvent_obj::RIGHT_MOUSE_UP,this->_rightButton->onUp_dyn(),null(),null(),null());
	HX_STACK_LINE(377)
	this->_stage->addEventListener(::openfl::_v2::events::Event_obj::MOUSE_LEAVE,this->onMouseLeave_dyn(),null(),null(),null());
	HX_STACK_LINE(380)
	this->_stage->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null(),null(),null());
	HX_STACK_LINE(382)
	::flixel::FlxG_obj::signals->gameStarted->add(this->onGameStart_dyn());
	HX_STACK_LINE(383)
	::openfl::_v2::ui::Mouse_obj::hide();
}
;
	return null();
}

//FlxMouse_obj::~FlxMouse_obj() { }

Dynamic FlxMouse_obj::__CreateEmpty() { return  new FlxMouse_obj; }
hx::ObjectPtr< FlxMouse_obj > FlxMouse_obj::__new(::openfl::_v2::display::Sprite CursorContainer)
{  hx::ObjectPtr< FlxMouse_obj > result = new FlxMouse_obj();
	result->__construct(CursorContainer);
	return result;}

Dynamic FlxMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouse_obj > result = new FlxMouse_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxMouse_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInputManager_obj)) return operator ::flixel::input::IFlxInputManager_obj *();
	return super::__ToInterface(inType);
}

Void FlxMouse_obj::load( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","load",0xf3e8bd02,"flixel.input.mouse.FlxMouse.load","flixel/input/mouse/FlxMouse.hx",153,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Scale,"Scale")
	HX_STACK_ARG(XOffset,"XOffset")
	HX_STACK_ARG(YOffset,"YOffset")
{
		HX_STACK_LINE(155)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(157)
			::flixel::util::FlxDestroyUtil_obj::removeChild(this->cursorContainer,this->_cursor);
		}
		HX_STACK_LINE(161)
		if (((Graphic == null()))){
			HX_STACK_LINE(163)
			::flixel::input::mouse::_FlxMouse::GraphicCursor _g = ::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(163)
			Graphic = _g;
		}
		HX_STACK_LINE(166)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(168)
			::openfl::_v2::display::Bitmap _g1 = ::Type_obj::createInstance(Graphic,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(168)
			this->_cursor = _g1;
		}
		else{
			HX_STACK_LINE(170)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::openfl::_v2::display::BitmapData >()))){
				HX_STACK_LINE(172)
				::openfl::_v2::display::BitmapData _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(172)
				_g2 = hx::TCast< openfl::_v2::display::BitmapData >::cast(Graphic);
				HX_STACK_LINE(172)
				::openfl::_v2::display::Bitmap _g3 = ::openfl::_v2::display::Bitmap_obj::__new(_g2,null(),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(172)
				this->_cursor = _g3;
			}
			else{
				HX_STACK_LINE(174)
				if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(176)
					::openfl::_v2::display::BitmapData _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						::String id = Graphic;		HX_STACK_VAR(id,"id");
						HX_STACK_LINE(176)
						_g4 = ::openfl::_v2::Assets_obj::getBitmapData(id,false);
					}
					HX_STACK_LINE(176)
					::openfl::_v2::display::Bitmap _g5 = ::openfl::_v2::display::Bitmap_obj::__new(_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(176)
					this->_cursor = _g5;
				}
				else{
					HX_STACK_LINE(180)
					::flixel::input::mouse::_FlxMouse::GraphicCursor _g6 = ::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(180)
					::openfl::_v2::display::Bitmap _g7 = ::openfl::_v2::display::Bitmap_obj::__new(_g6,null(),null());		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(180)
					this->_cursor = _g7;
				}
			}
		}
		HX_STACK_LINE(183)
		this->_cursor->set_x(XOffset);
		HX_STACK_LINE(184)
		this->_cursor->set_y(YOffset);
		HX_STACK_LINE(185)
		this->_cursor->set_scaleX(Scale);
		HX_STACK_LINE(186)
		this->_cursor->set_scaleY(Scale);
		HX_STACK_LINE(215)
		this->cursorContainer->addChild(this->_cursor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxMouse_obj,load,(void))

Void FlxMouse_obj::unload( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","unload",0x5a7132db,"flixel.input.mouse.FlxMouse.unload","flixel/input/mouse/FlxMouse.hx",225,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(227)
			if ((this->cursorContainer->get_visible())){
				HX_STACK_LINE(229)
				this->load(null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(233)
				::openfl::_v2::display::Bitmap _g = ::flixel::util::FlxDestroyUtil_obj::removeChild(this->cursorContainer,this->_cursor);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(233)
				this->_cursor = _g;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,unload,(void))

Void FlxMouse_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","destroy",0x77a13b9e,"flixel.input.mouse.FlxMouse.destroy","flixel/input/mouse/FlxMouse.hx",303,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(304)
		if (((this->_stage != null()))){
			HX_STACK_LINE(306)
			this->_stage->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->_leftButton->onDown_dyn(),null());
			HX_STACK_LINE(307)
			this->_stage->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->_leftButton->onUp_dyn(),null());
			HX_STACK_LINE(310)
			this->_stage->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,this->_middleButton->onDown_dyn(),null());
			HX_STACK_LINE(311)
			this->_stage->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MIDDLE_MOUSE_UP,this->_middleButton->onUp_dyn(),null());
			HX_STACK_LINE(312)
			this->_stage->removeEventListener(::openfl::_v2::events::MouseEvent_obj::RIGHT_MOUSE_DOWN,this->_rightButton->onDown_dyn(),null());
			HX_STACK_LINE(313)
			this->_stage->removeEventListener(::openfl::_v2::events::MouseEvent_obj::RIGHT_MOUSE_UP,this->_rightButton->onUp_dyn(),null());
			HX_STACK_LINE(315)
			this->_stage->removeEventListener(::openfl::_v2::events::Event_obj::MOUSE_LEAVE,this->onMouseLeave_dyn(),null());
			HX_STACK_LINE(318)
			this->_stage->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null());
		}
		HX_STACK_LINE(321)
		this->cursorContainer = null();
		HX_STACK_LINE(322)
		this->_cursor = null();
		HX_STACK_LINE(328)
		::flixel::input::mouse::FlxMouseButton _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_leftButton);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(328)
		this->_leftButton = _g;
		HX_STACK_LINE(330)
		::flixel::input::mouse::FlxMouseButton _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_middleButton);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(330)
		this->_middleButton = _g1;
		HX_STACK_LINE(331)
		::flixel::input::mouse::FlxMouseButton _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_rightButton);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(331)
		this->_rightButton = _g2;
		HX_STACK_LINE(334)
		::openfl::_v2::display::BitmapData _g3 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_cursorBitmapData);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(334)
		this->_cursorBitmapData = _g3;
		HX_STACK_LINE(335)
		::flixel::FlxG_obj::signals->gameStarted->remove(this->onGameStart_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,destroy,(void))

Void FlxMouse_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","reset",0xe595a773,"flixel.input.mouse.FlxMouse.reset","flixel/input/mouse/FlxMouse.hx",342,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(343)
		this->_leftButton->reset();
		HX_STACK_LINE(346)
		this->_middleButton->reset();
		HX_STACK_LINE(347)
		this->_rightButton->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,reset,(void))

Void FlxMouse_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","update",0x7bea17e5,"flixel.input.mouse.FlxMouse.update","flixel/input/mouse/FlxMouse.hx",391,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(392)
		Float _g = ::flixel::FlxG_obj::game->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(392)
		Float _g1 = (Float(_g) / Float(::flixel::FlxG_obj::scaleMode->scale->x));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(392)
		int _g2 = ::Math_obj::floor(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(392)
		this->_globalScreenX = _g2;
		HX_STACK_LINE(393)
		Float _g3 = ::flixel::FlxG_obj::game->get_mouseY();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(393)
		Float _g4 = (Float(_g3) / Float(::flixel::FlxG_obj::scaleMode->scale->y));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(393)
		int _g5 = ::Math_obj::floor(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(393)
		this->_globalScreenY = _g5;
		HX_STACK_LINE(396)
		if ((this->visible)){
			HX_STACK_LINE(398)
			Float _g6 = ::flixel::FlxG_obj::game->get_mouseX();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(398)
			this->cursorContainer->set_x(_g6);
			HX_STACK_LINE(399)
			Float _g7 = ::flixel::FlxG_obj::game->get_mouseY();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(399)
			this->cursorContainer->set_y(_g7);
		}
		HX_STACK_LINE(402)
		this->updatePositions();
		HX_STACK_LINE(405)
		this->_leftButton->update();
		HX_STACK_LINE(407)
		this->_middleButton->update();
		HX_STACK_LINE(408)
		this->_rightButton->update();
		HX_STACK_LINE(412)
		if ((!(this->_wheelUsed))){
			HX_STACK_LINE(414)
			this->wheel = (int)0;
		}
		HX_STACK_LINE(416)
		this->_wheelUsed = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,update,(void))

Void FlxMouse_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onFocus",0xede20cdd,"flixel.input.mouse.FlxMouse.onFocus","flixel/input/mouse/FlxMouse.hx",423,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(424)
		this->reset();
		HX_STACK_LINE(427)
		this->set_useSystemCursor(this->useSystemCursor);
		HX_STACK_LINE(429)
		this->set_visible(this->_visibleWhenFocusLost);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocus,(void))

Void FlxMouse_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onFocusLost",0xc7f71561,"flixel.input.mouse.FlxMouse.onFocusLost","flixel/input/mouse/FlxMouse.hx",437,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(439)
		this->_visibleWhenFocusLost = this->visible;
		HX_STACK_LINE(441)
		if ((this->visible)){
			HX_STACK_LINE(443)
			this->set_visible(false);
		}
		HX_STACK_LINE(446)
		::openfl::_v2::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocusLost,(void))

Void FlxMouse_obj::onGameStart( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onGameStart",0x61da7695,"flixel.input.mouse.FlxMouse.onGameStart","flixel/input/mouse/FlxMouse.hx",455,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(455)
		this->set_visible(this->visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onGameStart,(void))

Void FlxMouse_obj::onMouseWheel( ::openfl::_v2::events::MouseEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onMouseWheel",0xdc642911,"flixel.input.mouse.FlxMouse.onMouseWheel","flixel/input/mouse/FlxMouse.hx",462,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(471)
		this->_wheelUsed = true;
		HX_STACK_LINE(472)
		this->wheel = FlashEvent->delta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseWheel,(void))

Void FlxMouse_obj::onMouseLeave( Dynamic _){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onMouseLeave",0x84fd296d,"flixel.input.mouse.FlxMouse.onMouseLeave","flixel/input/mouse/FlxMouse.hx",481,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(482)
		this->_rightButton->onUp(null());
		HX_STACK_LINE(483)
		this->_middleButton->onUp(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseLeave,(void))

bool FlxMouse_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressed",0x4652635d,"flixel.input.mouse.FlxMouse.get_pressed","flixel/input/mouse/FlxMouse.hx",487,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(487)
	::flixel::input::mouse::FlxMouseButton _this = this->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(487)
	return (bool((_this->current == (int)1)) || bool((_this->current == (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressed,return )

bool FlxMouse_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressed",0x70091811,"flixel.input.mouse.FlxMouse.get_justPressed","flixel/input/mouse/FlxMouse.hx",488,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(488)
	return (this->_leftButton->current == (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressed,return )

bool FlxMouse_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleased",0x9ec2046e,"flixel.input.mouse.FlxMouse.get_justReleased","flixel/input/mouse/FlxMouse.hx",489,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(489)
	return (this->_leftButton->current == (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleased,return )

bool FlxMouse_obj::get_pressedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressedRight",0x90e8c73f,"flixel.input.mouse.FlxMouse.get_pressedRight","flixel/input/mouse/FlxMouse.hx",492,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(492)
	::flixel::input::mouse::FlxMouseButton _this = this->_rightButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(492)
	return (bool((_this->current == (int)1)) || bool((_this->current == (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedRight,return )

bool FlxMouse_obj::get_justPressedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressedRight",0xa8a2860b,"flixel.input.mouse.FlxMouse.get_justPressedRight","flixel/input/mouse/FlxMouse.hx",493,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(493)
	return (this->_rightButton->current == (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedRight,return )

bool FlxMouse_obj::get_justReleasedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleasedRight",0x8742a88e,"flixel.input.mouse.FlxMouse.get_justReleasedRight","flixel/input/mouse/FlxMouse.hx",494,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(494)
	return (this->_rightButton->current == (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedRight,return )

bool FlxMouse_obj::get_pressedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressedMiddle",0x38fe0e92,"flixel.input.mouse.FlxMouse.get_pressedMiddle","flixel/input/mouse/FlxMouse.hx",496,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(496)
	::flixel::input::mouse::FlxMouseButton _this = this->_middleButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(496)
	return (bool((_this->current == (int)1)) || bool((_this->current == (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedMiddle,return )

bool FlxMouse_obj::get_justPressedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressedMiddle",0xe3cb4246,"flixel.input.mouse.FlxMouse.get_justPressedMiddle","flixel/input/mouse/FlxMouse.hx",497,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(497)
	return (this->_middleButton->current == (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedMiddle,return )

bool FlxMouse_obj::get_justReleasedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleasedMiddle",0xd1495263,"flixel.input.mouse.FlxMouse.get_justReleasedMiddle","flixel/input/mouse/FlxMouse.hx",498,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(498)
	return (this->_middleButton->current == (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedMiddle,return )

Void FlxMouse_obj::showSystemCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","showSystemCursor",0xf4551c9e,"flixel.input.mouse.FlxMouse.showSystemCursor","flixel/input/mouse/FlxMouse.hx",505,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(509)
		::openfl::_v2::ui::Mouse_obj::show();
		HX_STACK_LINE(510)
		this->cursorContainer->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,showSystemCursor,(void))

Void FlxMouse_obj::hideSystemCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","hideSystemCursor",0xb5438fe3,"flixel.input.mouse.FlxMouse.hideSystemCursor","flixel/input/mouse/FlxMouse.hx",518,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(526)
		::openfl::_v2::ui::Mouse_obj::hide();
		HX_STACK_LINE(528)
		if ((this->visible)){
			HX_STACK_LINE(530)
			this->cursorContainer->set_visible(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,hideSystemCursor,(void))

bool FlxMouse_obj::set_useSystemCursor( bool Value){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","set_useSystemCursor",0x074e74d3,"flixel.input.mouse.FlxMouse.set_useSystemCursor","flixel/input/mouse/FlxMouse.hx",536,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(537)
	if ((Value)){
		HX_STACK_LINE(539)
		this->showSystemCursor();
	}
	else{
		HX_STACK_LINE(543)
		this->hideSystemCursor();
	}
	HX_STACK_LINE(545)
	return this->useSystemCursor = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_useSystemCursor,return )

bool FlxMouse_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","set_visible",0xb9fd1039,"flixel.input.mouse.FlxMouse.set_visible","flixel/input/mouse/FlxMouse.hx",549,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(550)
	if ((Value)){
		HX_STACK_LINE(552)
		if ((this->useSystemCursor)){
			HX_STACK_LINE(554)
			::openfl::_v2::ui::Mouse_obj::show();
		}
		else{
			HX_STACK_LINE(558)
			if (((this->_cursor == null()))){
				HX_STACK_LINE(560)
				this->load(null(),null(),null(),null());
			}
			HX_STACK_LINE(563)
			this->cursorContainer->set_visible(true);
			HX_STACK_LINE(564)
			::openfl::_v2::ui::Mouse_obj::hide();
		}
	}
	else{
		HX_STACK_LINE(577)
		this->cursorContainer->set_visible(false);
		HX_STACK_LINE(578)
		::openfl::_v2::ui::Mouse_obj::hide();
	}
	HX_STACK_LINE(588)
	return this->visible = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_visible,return )

::flixel::system::replay::MouseRecord FlxMouse_obj::record( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","record",0xf2d1086d,"flixel.input.mouse.FlxMouse.record","flixel/input/mouse/FlxMouse.hx",594,0xe4e80b89)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::input::mouse::FlxMouse_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/mouse/FlxMouse.hx",596,0xe4e80b89)
			{
				HX_STACK_LINE(596)
				::flixel::input::mouse::FlxMouseButton _this = __this->_leftButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(596)
				return (bool((_this->current == (int)0)) || bool((_this->current == (int)-1)));
			}
			return null();
		}
	};
	HX_STACK_LINE(595)
	if (((bool((bool((bool((this->_lastX == this->_globalScreenX)) && bool((this->_lastY == this->_globalScreenY)))) && bool(_Function_1_1::Block(this)))) && bool((this->_lastWheel == this->wheel))))){
		HX_STACK_LINE(598)
		return null();
	}
	HX_STACK_LINE(600)
	this->_lastX = this->_globalScreenX;
	HX_STACK_LINE(601)
	this->_lastY = this->_globalScreenY;
	HX_STACK_LINE(602)
	this->_lastWheel = this->wheel;
	HX_STACK_LINE(603)
	return ::flixel::system::replay::MouseRecord_obj::__new(this->_lastX,this->_lastY,this->_leftButton->current,this->_lastWheel);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,record,return )

Void FlxMouse_obj::playback( ::flixel::system::replay::MouseRecord Record){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","playback",0xaadcd2f7,"flixel.input.mouse.FlxMouse.playback","flixel/input/mouse/FlxMouse.hx",607,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Record,"Record")
		HX_STACK_LINE(608)
		this->_leftButton->current = Record->button;
		HX_STACK_LINE(609)
		this->wheel = Record->wheel;
		HX_STACK_LINE(610)
		this->_globalScreenX = Record->x;
		HX_STACK_LINE(611)
		this->_globalScreenY = Record->y;
		HX_STACK_LINE(612)
		this->updatePositions();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,playback,(void))


FlxMouse_obj::FlxMouse_obj()
{
}

void FlxMouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouse);
	HX_MARK_MEMBER_NAME(wheel,"wheel");
	HX_MARK_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_MARK_MEMBER_NAME(_leftButton,"_leftButton");
	HX_MARK_MEMBER_NAME(_middleButton,"_middleButton");
	HX_MARK_MEMBER_NAME(_rightButton,"_rightButton");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_MARK_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_MARK_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_MARK_MEMBER_NAME(_lastX,"_lastX");
	HX_MARK_MEMBER_NAME(_lastY,"_lastY");
	HX_MARK_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_MARK_MEMBER_NAME(_stage,"_stage");
	HX_MARK_END_CLASS();
}

void FlxMouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wheel,"wheel");
	HX_VISIT_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_VISIT_MEMBER_NAME(_leftButton,"_leftButton");
	HX_VISIT_MEMBER_NAME(_middleButton,"_middleButton");
	HX_VISIT_MEMBER_NAME(_rightButton,"_rightButton");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_VISIT_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_VISIT_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_VISIT_MEMBER_NAME(_lastX,"_lastX");
	HX_VISIT_MEMBER_NAME(_lastY,"_lastY");
	HX_VISIT_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_VISIT_MEMBER_NAME(_stage,"_stage");
}

Dynamic FlxMouse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lastX") ) { return _lastX; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { return _lastY; }
		if (HX_FIELD_EQ(inName,"_stage") ) { return _stage; }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return get_pressed(); }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { return _wheelUsed; }
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { return _lastWheel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"_leftButton") ) { return _leftButton; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameStart") ) { return onGameStart_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"pressedRight") ) { return get_pressedRight(); }
		if (HX_FIELD_EQ(inName,"_rightButton") ) { return _rightButton; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseLeave") ) { return onMouseLeave_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pressedMiddle") ) { return get_pressedMiddle(); }
		if (HX_FIELD_EQ(inName,"_middleButton") ) { return _middleButton; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { return cursorContainer; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { return useSystemCursor; }
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"justPressedRight") ) { return get_justPressedRight(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressedRight") ) { return get_pressedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"showSystemCursor") ) { return showSystemCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"hideSystemCursor") ) { return hideSystemCursor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"justReleasedRight") ) { return get_justReleasedRight(); }
		if (HX_FIELD_EQ(inName,"justPressedMiddle") ) { return get_justPressedMiddle(); }
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { return _cursorBitmapData; }
		if (HX_FIELD_EQ(inName,"get_pressedMiddle") ) { return get_pressedMiddle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"justReleasedMiddle") ) { return get_justReleasedMiddle(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_useSystemCursor") ) { return set_useSystemCursor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_justPressedRight") ) { return get_justPressedRight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { return _visibleWhenFocusLost; }
		if (HX_FIELD_EQ(inName,"get_justReleasedRight") ) { return get_justReleasedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justPressedMiddle") ) { return get_justPressedMiddle_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_justReleasedMiddle") ) { return get_justReleasedMiddle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lastX") ) { _lastX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { _lastY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast< ::openfl::_v2::display::Stage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { _wheelUsed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { _lastWheel=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_leftButton") ) { _leftButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_rightButton") ) { _rightButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_middleButton") ) { _middleButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { cursorContainer=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { if (inCallProp) return set_useSystemCursor(inValue);useSystemCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { _cursorBitmapData=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { _visibleWhenFocusLost=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("wheel"));
	outFields->push(HX_CSTRING("cursorContainer"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("useSystemCursor"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("pressedRight"));
	outFields->push(HX_CSTRING("justPressedRight"));
	outFields->push(HX_CSTRING("justReleasedRight"));
	outFields->push(HX_CSTRING("pressedMiddle"));
	outFields->push(HX_CSTRING("justPressedMiddle"));
	outFields->push(HX_CSTRING("justReleasedMiddle"));
	outFields->push(HX_CSTRING("_leftButton"));
	outFields->push(HX_CSTRING("_middleButton"));
	outFields->push(HX_CSTRING("_rightButton"));
	outFields->push(HX_CSTRING("_cursor"));
	outFields->push(HX_CSTRING("_cursorBitmapData"));
	outFields->push(HX_CSTRING("_wheelUsed"));
	outFields->push(HX_CSTRING("_visibleWhenFocusLost"));
	outFields->push(HX_CSTRING("_lastX"));
	outFields->push(HX_CSTRING("_lastY"));
	outFields->push(HX_CSTRING("_lastWheel"));
	outFields->push(HX_CSTRING("_stage"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxMouse_obj,wheel),HX_CSTRING("wheel")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FlxMouse_obj,cursorContainer),HX_CSTRING("cursorContainer")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,visible),HX_CSTRING("visible")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,useSystemCursor),HX_CSTRING("useSystemCursor")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_leftButton),HX_CSTRING("_leftButton")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_middleButton),HX_CSTRING("_middleButton")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_rightButton),HX_CSTRING("_rightButton")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(FlxMouse_obj,_cursor),HX_CSTRING("_cursor")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxMouse_obj,_cursorBitmapData),HX_CSTRING("_cursorBitmapData")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,_wheelUsed),HX_CSTRING("_wheelUsed")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,_visibleWhenFocusLost),HX_CSTRING("_visibleWhenFocusLost")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastX),HX_CSTRING("_lastX")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastY),HX_CSTRING("_lastY")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastWheel),HX_CSTRING("_lastWheel")},
	{hx::fsObject /*::openfl::_v2::display::Stage*/ ,(int)offsetof(FlxMouse_obj,_stage),HX_CSTRING("_stage")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("wheel"),
	HX_CSTRING("cursorContainer"),
	HX_CSTRING("visible"),
	HX_CSTRING("useSystemCursor"),
	HX_CSTRING("_leftButton"),
	HX_CSTRING("_middleButton"),
	HX_CSTRING("_rightButton"),
	HX_CSTRING("_cursor"),
	HX_CSTRING("_cursorBitmapData"),
	HX_CSTRING("_wheelUsed"),
	HX_CSTRING("_visibleWhenFocusLost"),
	HX_CSTRING("_lastX"),
	HX_CSTRING("_lastY"),
	HX_CSTRING("_lastWheel"),
	HX_CSTRING("_stage"),
	HX_CSTRING("load"),
	HX_CSTRING("unload"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onGameStart"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onMouseLeave"),
	HX_CSTRING("get_pressed"),
	HX_CSTRING("get_justPressed"),
	HX_CSTRING("get_justReleased"),
	HX_CSTRING("get_pressedRight"),
	HX_CSTRING("get_justPressedRight"),
	HX_CSTRING("get_justReleasedRight"),
	HX_CSTRING("get_pressedMiddle"),
	HX_CSTRING("get_justPressedMiddle"),
	HX_CSTRING("get_justReleasedMiddle"),
	HX_CSTRING("showSystemCursor"),
	HX_CSTRING("hideSystemCursor"),
	HX_CSTRING("set_useSystemCursor"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("record"),
	HX_CSTRING("playback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

#endif

Class FlxMouse_obj::__mClass;

void FlxMouse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.mouse.FlxMouse"), hx::TCanCast< FlxMouse_obj> ,sStaticFields,sMemberFields,
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

void FlxMouse_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
