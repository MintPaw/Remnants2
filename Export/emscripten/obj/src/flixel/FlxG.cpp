#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_effects_postprocess_PostProcess
#include <flixel/effects/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#include <flixel/system/scaleModes/RatioScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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
#ifndef INCLUDED_openfl__v2_display_DirectRenderer
#include <openfl/_v2/display/DirectRenderer.h>
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
#ifndef INCLUDED_openfl__v2_display_OpenGLView
#include <openfl/_v2/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_net_URLRequest
#include <openfl/_v2/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_display_StageDisplayState
#include <openfl/display/StageDisplayState.h>
#endif
namespace flixel{

Void FlxG_obj::__construct()
{
	return null();
}

//FlxG_obj::~FlxG_obj() { }

Dynamic FlxG_obj::__CreateEmpty() { return  new FlxG_obj; }
hx::ObjectPtr< FlxG_obj > FlxG_obj::__new()
{  hx::ObjectPtr< FlxG_obj > result = new FlxG_obj();
	result->__construct();
	return result;}

Dynamic FlxG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxG_obj > result = new FlxG_obj();
	result->__construct();
	return result;}

::openfl::_v2::text::TextField FlxG_obj::addChildBelowMouse_openfl__v2_text_TextField( ::openfl::_v2::text::TextField Child,hx::Null< int >  __o_IndexModifier){
int IndexModifier = __o_IndexModifier.Default(0);
	HX_STACK_FRAME("flixel.FlxG","addChildBelowMouse_openfl__v2_text_TextField",0xe155b365,"flixel.FlxG.addChildBelowMouse_openfl__v2_text_TextField","flixel/FlxG.hx",398,0x8e176836)
	HX_STACK_ARG(Child,"Child")
	HX_STACK_ARG(IndexModifier,"IndexModifier")
{
		HX_STACK_LINE(399)
		int index = ::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->_inputContainer);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(400)
		int max = ::flixel::FlxG_obj::game->get_numChildren();		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(402)
		int _g = ::flixel::math::FlxMath_obj::maxAdd(index,IndexModifier,max,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(402)
		index = _g;
		HX_STACK_LINE(403)
		::flixel::FlxG_obj::game->addChildAt(Child,index);
		HX_STACK_LINE(404)
		return Child;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,addChildBelowMouse_openfl__v2_text_TextField,return )

bool FlxG_obj::autoPause;

bool FlxG_obj::fixedTimestep;

Float FlxG_obj::timeScale;

int FlxG_obj::worldDivisions;

::flixel::FlxCamera FlxG_obj::camera;

::flixel::system::FlxVersion FlxG_obj::VERSION;

::flixel::FlxGame FlxG_obj::game;

int FlxG_obj::drawFramerate;

Float FlxG_obj::elapsed;

Float FlxG_obj::maxElapsed;

int FlxG_obj::width;

int FlxG_obj::height;

::flixel::system::scaleModes::BaseScaleMode FlxG_obj::scaleMode;

::flixel::math::FlxRect FlxG_obj::worldBounds;

::flixel::util::FlxSave FlxG_obj::save;

::flixel::math::FlxRandom FlxG_obj::random;

::flixel::input::mouse::FlxMouse FlxG_obj::mouse;

::flixel::input::touch::FlxTouchManager FlxG_obj::touches;

Array< ::Dynamic > FlxG_obj::swipes;

::flixel::input::keyboard::FlxKeyboard FlxG_obj::keys;

::flixel::input::gamepad::FlxGamepadManager FlxG_obj::gamepads;

::flixel::system::frontEnds::InputFrontEnd FlxG_obj::inputs;

::flixel::system::frontEnds::ConsoleFrontEnd FlxG_obj::console;

::flixel::system::frontEnds::LogFrontEnd FlxG_obj::log;

::flixel::system::frontEnds::BitmapLogFrontEnd FlxG_obj::bitmapLog;

::flixel::system::frontEnds::WatchFrontEnd FlxG_obj::watch;

::flixel::system::frontEnds::DebuggerFrontEnd FlxG_obj::debugger;

::flixel::system::frontEnds::VCRFrontEnd FlxG_obj::vcr;

::flixel::system::frontEnds::BitmapFrontEnd FlxG_obj::bitmap;

::flixel::system::frontEnds::CameraFrontEnd FlxG_obj::cameras;

::flixel::system::frontEnds::PluginFrontEnd FlxG_obj::plugins;

Float FlxG_obj::initialZoom;

::flixel::system::frontEnds::SoundFrontEnd FlxG_obj::sound;

::flixel::system::frontEnds::SignalFrontEnd FlxG_obj::signals;

Void FlxG_obj::resizeGame( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxG","resizeGame",0x80aafe0d,"flixel.FlxG.resizeGame","flixel/FlxG.hx",284,0x8e176836)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(284)
		::flixel::FlxG_obj::scaleMode->onMeasure(Width,Height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,resizeGame,(void))

Void FlxG_obj::resetGame( ){
{
		HX_STACK_FRAME("flixel.FlxG","resetGame",0x7560e13a,"flixel.FlxG.resetGame","flixel/FlxG.hx",292,0x8e176836)
		HX_STACK_LINE(292)
		::flixel::FlxG_obj::game->_resetGame = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetGame,(void))

Void FlxG_obj::switchState( ::flixel::FlxState State){
{
		HX_STACK_FRAME("flixel.FlxG","switchState",0xbec45396,"flixel.FlxG.switchState","flixel/FlxG.hx",302,0x8e176836)
		HX_STACK_ARG(State,"State")
		HX_STACK_LINE(302)
		if ((::flixel::FlxG_obj::game->_state->isTransitionNeeded())){
			HX_STACK_LINE(305)
			::flixel::FlxG_obj::game->_state->transitionToState(State);
			HX_STACK_LINE(306)
			return null();
		}
		else{
			HX_STACK_LINE(311)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,switchState,(void))

Void FlxG_obj::resetState( ){
{
		HX_STACK_FRAME("flixel.FlxG","resetState",0x34b927c9,"flixel.FlxG.resetState","flixel/FlxG.hx",320,0x8e176836)
		HX_STACK_LINE(320)
		::Class _g = ::Type_obj::getClass(::flixel::FlxG_obj::game->_state);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		::flixel::FlxState State = ::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(320)
		if ((::flixel::FlxG_obj::game->_state->isTransitionNeeded())){
			HX_STACK_LINE(320)
			::flixel::FlxG_obj::game->_state->transitionToState(State);
			HX_STACK_LINE(320)
			Dynamic();
		}
		else{
			HX_STACK_LINE(320)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetState,(void))

bool FlxG_obj::overlap( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback){
	HX_STACK_FRAME("flixel.FlxG","overlap",0x37194f20,"flixel.FlxG.overlap","flixel/FlxG.hx",337,0x8e176836)
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1")
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2")
	HX_STACK_ARG(NotifyCallback,"NotifyCallback")
	HX_STACK_ARG(ProcessCallback,"ProcessCallback")
	HX_STACK_LINE(338)
	if (((ObjectOrGroup1 == null()))){
		HX_STACK_LINE(340)
		ObjectOrGroup1 = ::flixel::FlxG_obj::game->_state;
	}
	HX_STACK_LINE(342)
	if (((ObjectOrGroup2 == ObjectOrGroup1))){
		HX_STACK_LINE(344)
		ObjectOrGroup2 = null();
	}
	HX_STACK_LINE(346)
	::flixel::system::FlxQuadTree_obj::divisions = ::flixel::FlxG_obj::worldDivisions;
	HX_STACK_LINE(347)
	::flixel::system::FlxQuadTree quadTree = ::flixel::system::FlxQuadTree_obj::recycle(::flixel::FlxG_obj::worldBounds->x,::flixel::FlxG_obj::worldBounds->y,::flixel::FlxG_obj::worldBounds->width,::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
	HX_STACK_LINE(348)
	quadTree->load(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,ProcessCallback);
	HX_STACK_LINE(349)
	bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(350)
	quadTree->destroy();
	HX_STACK_LINE(351)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,overlap,return )

bool FlxG_obj::pixelPerfectOverlap( ::flixel::FlxSprite Sprite1,::flixel::FlxSprite Sprite2,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(255);
	HX_STACK_FRAME("flixel.FlxG","pixelPerfectOverlap",0x4d139839,"flixel.FlxG.pixelPerfectOverlap","flixel/FlxG.hx",366,0x8e176836)
	HX_STACK_ARG(Sprite1,"Sprite1")
	HX_STACK_ARG(Sprite2,"Sprite2")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(366)
		return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(Sprite1,Sprite2,AlphaTolerance,Camera);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,pixelPerfectOverlap,return )

bool FlxG_obj::collide( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback){
	HX_STACK_FRAME("flixel.FlxG","collide",0x7b6cbb17,"flixel.FlxG.collide","flixel/FlxG.hx",385,0x8e176836)
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1")
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2")
	HX_STACK_ARG(NotifyCallback,"NotifyCallback")
	HX_STACK_LINE(385)
	return ::flixel::FlxG_obj::overlap(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,::flixel::FlxObject_obj::separate_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxG_obj,collide,return )

::flixel::effects::postprocess::PostProcess FlxG_obj::addPostProcess( ::flixel::effects::postprocess::PostProcess postProcess){
	HX_STACK_FRAME("flixel.FlxG","addPostProcess",0x527e22d5,"flixel.FlxG.addPostProcess","flixel/FlxG.hx",424,0x8e176836)
	HX_STACK_ARG(postProcess,"postProcess")
	HX_STACK_LINE(427)
	{
		HX_STACK_LINE(428)
		Array< ::Dynamic > postProcesses = ::flixel::FlxG_obj::game->postProcesses;		HX_STACK_VAR(postProcesses,"postProcesses");
		HX_STACK_LINE(431)
		int length = postProcesses->length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(432)
		if (((length > (int)0))){
			HX_STACK_LINE(434)
			postProcesses->__get((length - (int)1)).StaticCast< ::flixel::effects::postprocess::PostProcess >()->set_to(postProcess);
		}
		HX_STACK_LINE(437)
		::flixel::FlxG_obj::game->postProcessLayer->addChild(postProcess);
		HX_STACK_LINE(438)
		postProcesses->push(postProcess);
	}
	HX_STACK_LINE(446)
	return postProcess;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,addPostProcess,return )

Void FlxG_obj::removePostProcess( ::flixel::effects::postprocess::PostProcess postProcess){
{
		HX_STACK_FRAME("flixel.FlxG","removePostProcess",0x4ea610e4,"flixel.FlxG.removePostProcess","flixel/FlxG.hx",450,0x8e176836)
		HX_STACK_ARG(postProcess,"postProcess")
		HX_STACK_LINE(452)
		Array< ::Dynamic > postProcesses = ::flixel::FlxG_obj::game->postProcesses;		HX_STACK_VAR(postProcesses,"postProcesses");
		HX_STACK_LINE(453)
		if ((postProcesses->remove(postProcess))){
			HX_STACK_LINE(455)
			::flixel::FlxG_obj::chainPostProcesses();
			HX_STACK_LINE(456)
			postProcess->set_to(null());
			HX_STACK_LINE(458)
			::flixel::util::FlxDestroyUtil_obj::removeChild(::flixel::FlxG_obj::game->postProcessLayer,postProcess);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,removePostProcess,(void))

Void FlxG_obj::chainPostProcesses( ){
{
		HX_STACK_FRAME("flixel.FlxG","chainPostProcesses",0xe504cb63,"flixel.FlxG.chainPostProcesses","flixel/FlxG.hx",465,0x8e176836)
		HX_STACK_LINE(466)
		Array< ::Dynamic > postProcesses = ::flixel::FlxG_obj::game->postProcesses;		HX_STACK_VAR(postProcesses,"postProcesses");
		HX_STACK_LINE(468)
		if (((postProcesses->length > (int)0))){
			HX_STACK_LINE(470)
			{
				HX_STACK_LINE(470)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(470)
				int _g = (postProcesses->length - (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(470)
				while((true)){
					HX_STACK_LINE(470)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(470)
						break;
					}
					HX_STACK_LINE(470)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(472)
					postProcesses->__get(i).StaticCast< ::flixel::effects::postprocess::PostProcess >()->set_to(postProcesses->__get((i + (int)1)).StaticCast< ::flixel::effects::postprocess::PostProcess >());
				}
			}
			HX_STACK_LINE(474)
			postProcesses->__get((postProcesses->length - (int)1)).StaticCast< ::flixel::effects::postprocess::PostProcess >()->set_to(null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,chainPostProcesses,(void))

Void FlxG_obj::openURL( ::String URL,::String __o_Target){
::String Target = __o_Target.Default(HX_CSTRING("_blank"));
	HX_STACK_FRAME("flixel.FlxG","openURL",0xce3ec95e,"flixel.FlxG.openURL","flixel/FlxG.hx",487,0x8e176836)
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(Target,"Target")
{
		HX_STACK_LINE(488)
		::String prefix = HX_CSTRING("");		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(490)
		if ((!(::EReg_obj::__new(HX_CSTRING("^https?://"),HX_CSTRING(""))->match(URL)))){
			HX_STACK_LINE(491)
			prefix = HX_CSTRING("http://");
		}
		HX_STACK_LINE(492)
		::openfl::_v2::net::URLRequest _g = ::openfl::_v2::net::URLRequest_obj::__new((prefix + URL));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(492)
		::openfl::_v2::Lib_obj::getURL(_g,Target);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,openURL,(void))

Void FlxG_obj::init( ::flixel::FlxGame Game,int Width,int Height,Float Zoom){
{
		HX_STACK_FRAME("flixel.FlxG","init",0x1141e5d7,"flixel.FlxG.init","flixel/FlxG.hx",499,0x8e176836)
		HX_STACK_ARG(Game,"Game")
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_ARG(Zoom,"Zoom")
		HX_STACK_LINE(500)
		::flixel::FlxG_obj::game = Game;
		HX_STACK_LINE(501)
		Float _g = ::Math_obj::abs(Width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(501)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(501)
		::flixel::FlxG_obj::width = _g1;
		HX_STACK_LINE(502)
		Float _g2 = ::Math_obj::abs(Height);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(502)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(502)
		::flixel::FlxG_obj::height = _g3;
		HX_STACK_LINE(504)
		::flixel::system::scaleModes::BaseScaleMode_obj::gWidth = ::flixel::FlxG_obj::width;
		HX_STACK_LINE(505)
		::flixel::system::scaleModes::BaseScaleMode_obj::gHeight = ::flixel::FlxG_obj::height;
		HX_STACK_LINE(507)
		Float _g4 = ::flixel::FlxCamera_obj::defaultZoom = Zoom;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(507)
		::flixel::FlxG_obj::initialZoom = _g4;
		HX_STACK_LINE(509)
		{
			HX_STACK_LINE(509)
			int Width1 = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(Width1,"Width1");
			HX_STACK_LINE(509)
			int Height1 = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(Height1,"Height1");
			HX_STACK_LINE(509)
			::flixel::FlxG_obj::scaleMode->onMeasure(Width1,Height1);
		}
		HX_STACK_LINE(513)
		::flixel::input::keyboard::FlxKeyboard _g5 = ::flixel::input::keyboard::FlxKeyboard_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(513)
		::flixel::input::keyboard::FlxKeyboard _g6 = ::flixel::FlxG_obj::inputs->add_flixel_input_keyboard_FlxKeyboard(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(513)
		::flixel::FlxG_obj::keys = _g6;
		HX_STACK_LINE(517)
		::flixel::input::mouse::FlxMouse _g7 = ::flixel::input::mouse::FlxMouse_obj::__new(::flixel::FlxG_obj::game->_inputContainer);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(517)
		::flixel::input::mouse::FlxMouse _g8 = ::flixel::FlxG_obj::inputs->add_flixel_input_mouse_FlxMouse(_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(517)
		::flixel::FlxG_obj::set_mouse(_g8);
		HX_STACK_LINE(521)
		::flixel::input::touch::FlxTouchManager _g9 = ::flixel::input::touch::FlxTouchManager_obj::__new();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(521)
		::flixel::input::touch::FlxTouchManager _g10 = ::flixel::FlxG_obj::inputs->add_flixel_input_touch_FlxTouchManager(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(521)
		::flixel::FlxG_obj::touches = _g10;
		HX_STACK_LINE(525)
		::flixel::input::gamepad::FlxGamepadManager _g11 = ::flixel::input::gamepad::FlxGamepadManager_obj::__new();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(525)
		::flixel::input::gamepad::FlxGamepadManager _g12 = ::flixel::FlxG_obj::inputs->add_flixel_input_gamepad_FlxGamepadManager(_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(525)
		::flixel::FlxG_obj::gamepads = _g12;
		HX_STACK_LINE(535)
		::flixel::FlxG_obj::save->bind(HX_CSTRING("flixel"));
		HX_STACK_LINE(537)
		::flixel::system::frontEnds::PluginFrontEnd _g13 = ::flixel::system::frontEnds::PluginFrontEnd_obj::__new();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(537)
		::flixel::FlxG_obj::plugins = _g13;
		HX_STACK_LINE(538)
		::flixel::system::frontEnds::VCRFrontEnd _g14 = ::flixel::system::frontEnds::VCRFrontEnd_obj::__new();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(538)
		::flixel::FlxG_obj::vcr = _g14;
		HX_STACK_LINE(541)
		::flixel::system::frontEnds::SoundFrontEnd _g15 = ::flixel::system::frontEnds::SoundFrontEnd_obj::__new();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(541)
		::flixel::FlxG_obj::sound = _g15;
		HX_STACK_LINE(544)
		::flixel::system::FlxAssets_obj::init();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,init,(void))

Void FlxG_obj::reset( ){
{
		HX_STACK_FRAME("flixel.FlxG","reset",0x31170d28,"flixel.FlxG.reset","flixel/FlxG.hx",551,0x8e176836)
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			::flixel::math::FlxRandom _this = ::flixel::FlxG_obj::random;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(552)
			{
				HX_STACK_LINE(552)
				int NewSeed;		HX_STACK_VAR(NewSeed,"NewSeed");
				HX_STACK_LINE(552)
				{
					HX_STACK_LINE(552)
					Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(552)
					Float _g1 = (_g * (int)2147483647);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(552)
					int Value = ::Std_obj::_int(_g1);		HX_STACK_VAR(Value,"Value");
					struct _Function_4_1{
						inline static Dynamic Block( int &Value){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxG.hx",552,0x8e176836)
							{
								HX_STACK_LINE(552)
								Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
								HX_STACK_LINE(552)
								if (((Value < (int)1))){
									HX_STACK_LINE(552)
									lowerBound = (int)1;
								}
								else{
									HX_STACK_LINE(552)
									lowerBound = Value;
								}
								HX_STACK_LINE(552)
								return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
							}
							return null();
						}
					};
					HX_STACK_LINE(552)
					NewSeed = ::Std_obj::_int(_Function_4_1::Block(Value));
				}
				HX_STACK_LINE(552)
				int _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(552)
				{
					struct _Function_4_1{
						inline static Dynamic Block( int &NewSeed){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxG.hx",552,0x8e176836)
							{
								HX_STACK_LINE(552)
								Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
								HX_STACK_LINE(552)
								if (((NewSeed < (int)1))){
									HX_STACK_LINE(552)
									lowerBound = (int)1;
								}
								else{
									HX_STACK_LINE(552)
									lowerBound = NewSeed;
								}
								HX_STACK_LINE(552)
								return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
							}
							return null();
						}
					};
					HX_STACK_LINE(552)
					int NewSeed1 = ::Std_obj::_int(_Function_4_1::Block(NewSeed));		HX_STACK_VAR(NewSeed1,"NewSeed1");
					struct _Function_4_2{
						inline static Dynamic Block( int &NewSeed1){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxG.hx",552,0x8e176836)
							{
								HX_STACK_LINE(552)
								Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
								HX_STACK_LINE(552)
								if (((NewSeed1 < (int)1))){
									HX_STACK_LINE(552)
									lowerBound = (int)1;
								}
								else{
									HX_STACK_LINE(552)
									lowerBound = NewSeed1;
								}
								HX_STACK_LINE(552)
								return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
							}
							return null();
						}
					};
					HX_STACK_LINE(552)
					int _g2 = ::Std_obj::_int(_Function_4_2::Block(NewSeed1));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(552)
					Float _g3 = _this->internalSeed = _g2;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(552)
					_g4 = ::Std_obj::_int(_g3);
				}
				HX_STACK_LINE(552)
				_this->initialSeed = _g4;
			}
		}
		HX_STACK_LINE(554)
		::flixel::FlxG_obj::bitmap->clearCache();
		HX_STACK_LINE(555)
		::flixel::FlxG_obj::inputs->reset();
		HX_STACK_LINE(557)
		::flixel::FlxG_obj::sound->destroy(true);
		HX_STACK_LINE(559)
		::flixel::FlxG_obj::autoPause = true;
		HX_STACK_LINE(560)
		::flixel::FlxG_obj::fixedTimestep = true;
		HX_STACK_LINE(561)
		::flixel::FlxG_obj::timeScale = 1.0;
		HX_STACK_LINE(562)
		::flixel::FlxG_obj::elapsed = (int)0;
		HX_STACK_LINE(563)
		::flixel::FlxG_obj::maxElapsed = 0.1;
		HX_STACK_LINE(564)
		{
			HX_STACK_LINE(564)
			::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(564)
			_this->x = (int)-10;
			HX_STACK_LINE(564)
			_this->y = (int)-10;
			HX_STACK_LINE(564)
			_this->width = (::flixel::FlxG_obj::width + (int)20);
			HX_STACK_LINE(564)
			_this->height = (::flixel::FlxG_obj::height + (int)20);
			HX_STACK_LINE(564)
			_this;
		}
		HX_STACK_LINE(565)
		::flixel::FlxG_obj::worldDivisions = (int)6;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,reset,(void))

::flixel::system::scaleModes::BaseScaleMode FlxG_obj::set_scaleMode( ::flixel::system::scaleModes::BaseScaleMode ScaleMode){
	HX_STACK_FRAME("flixel.FlxG","set_scaleMode",0xb374d549,"flixel.FlxG.set_scaleMode","flixel/FlxG.hx",569,0x8e176836)
	HX_STACK_ARG(ScaleMode,"ScaleMode")
	HX_STACK_LINE(570)
	::flixel::FlxG_obj::scaleMode = ScaleMode;
	HX_STACK_LINE(571)
	::flixel::FlxG_obj::game->onResize(null());
	HX_STACK_LINE(572)
	return ScaleMode;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_scaleMode,return )

::flixel::input::mouse::FlxMouse FlxG_obj::set_mouse( ::flixel::input::mouse::FlxMouse NewMouse){
	HX_STACK_FRAME("flixel.FlxG","set_mouse",0x1e754261,"flixel.FlxG.set_mouse","flixel/FlxG.hx",577,0x8e176836)
	HX_STACK_ARG(NewMouse,"NewMouse")
	HX_STACK_LINE(578)
	if (((::flixel::FlxG_obj::mouse == null()))){
		HX_STACK_LINE(580)
		::flixel::input::mouse::FlxMouse _g = ::flixel::FlxG_obj::inputs->add_flixel_input_mouse_FlxMouse(NewMouse);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(580)
		::flixel::FlxG_obj::mouse = _g;
		HX_STACK_LINE(581)
		return ::flixel::FlxG_obj::mouse;
	}
	HX_STACK_LINE(583)
	::flixel::input::mouse::FlxMouse oldMouse = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(oldMouse,"oldMouse");
	HX_STACK_LINE(584)
	::flixel::input::mouse::FlxMouse result = ::flixel::FlxG_obj::inputs->replace_flixel_input_mouse_FlxMouse(oldMouse,NewMouse);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(585)
	if (((result != null()))){
		HX_STACK_LINE(587)
		::flixel::FlxG_obj::mouse = result;
		HX_STACK_LINE(588)
		oldMouse->destroy();
		HX_STACK_LINE(589)
		return NewMouse;
	}
	HX_STACK_LINE(591)
	return oldMouse;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_mouse,return )

int FlxG_obj::get_updateFramerate( ){
	HX_STACK_FRAME("flixel.FlxG","get_updateFramerate",0x15da1274,"flixel.FlxG.get_updateFramerate","flixel/FlxG.hx",597,0x8e176836)
	HX_STACK_LINE(597)
	return ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_updateFramerate,return )

int FlxG_obj::set_updateFramerate( int Framerate){
	HX_STACK_FRAME("flixel.FlxG","set_updateFramerate",0x52770580,"flixel.FlxG.set_updateFramerate","flixel/FlxG.hx",601,0x8e176836)
	HX_STACK_ARG(Framerate,"Framerate")
	HX_STACK_LINE(602)
	if (((Framerate < ::flixel::FlxG_obj::drawFramerate))){
		HX_STACK_LINE(604)
		Dynamic();
	}
	HX_STACK_LINE(607)
	Float _g = ::Math_obj::abs((Float((int)1000) / Float(Framerate)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(607)
	int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(607)
	::flixel::FlxG_obj::game->_stepMS = _g1;
	HX_STACK_LINE(608)
	::flixel::FlxG_obj::game->_stepSeconds = (Float(::flixel::FlxG_obj::game->_stepMS) / Float((int)1000));
	HX_STACK_LINE(610)
	if (((::flixel::FlxG_obj::game->_maxAccumulation < ::flixel::FlxG_obj::game->_stepMS))){
		HX_STACK_LINE(612)
		::flixel::FlxG_obj::game->_maxAccumulation = ::flixel::FlxG_obj::game->_stepMS;
	}
	HX_STACK_LINE(615)
	return Framerate;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_updateFramerate,return )

int FlxG_obj::set_drawFramerate( int Framerate){
	HX_STACK_FRAME("flixel.FlxG","set_drawFramerate",0x3e23c125,"flixel.FlxG.set_drawFramerate","flixel/FlxG.hx",619,0x8e176836)
	HX_STACK_ARG(Framerate,"Framerate")
	HX_STACK_LINE(620)
	int _g = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(620)
	if (((Framerate > _g))){
		HX_STACK_LINE(622)
		Dynamic();
	}
	HX_STACK_LINE(625)
	Float _g1 = ::Math_obj::abs(Framerate);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(625)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(625)
	::flixel::FlxG_obj::drawFramerate = _g2;
	HX_STACK_LINE(627)
	::openfl::_v2::display::Stage _g3 = ::flixel::FlxG_obj::game->get_stage();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(627)
	if (((_g3 != null()))){
		HX_STACK_LINE(629)
		::flixel::FlxG_obj::game->get_stage()->set_frameRate(::flixel::FlxG_obj::drawFramerate);
	}
	HX_STACK_LINE(632)
	int _g4 = ::Std_obj::_int((Float((int)2000) / Float(::flixel::FlxG_obj::drawFramerate)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(632)
	int _g5 = (_g4 - (int)1);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(632)
	::flixel::FlxG_obj::game->_maxAccumulation = _g5;
	HX_STACK_LINE(634)
	if (((::flixel::FlxG_obj::game->_maxAccumulation < ::flixel::FlxG_obj::game->_stepMS))){
		HX_STACK_LINE(636)
		::flixel::FlxG_obj::game->_maxAccumulation = ::flixel::FlxG_obj::game->_stepMS;
	}
	HX_STACK_LINE(639)
	return Framerate;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_drawFramerate,return )

bool FlxG_obj::get_fullscreen( ){
	HX_STACK_FRAME("flixel.FlxG","get_fullscreen",0xfece4c0b,"flixel.FlxG.get_fullscreen","flixel/FlxG.hx",643,0x8e176836)
	HX_STACK_LINE(644)
	::openfl::display::StageDisplayState _g = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_displayState();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(644)
	if ((!(((_g == ::openfl::display::StageDisplayState_obj::FULL_SCREEN))))){
		HX_STACK_LINE(645)
		::openfl::display::StageDisplayState _g1 = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_displayState();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(645)
		return (_g1 == ::openfl::display::StageDisplayState_obj::FULL_SCREEN_INTERACTIVE);
	}
	else{
		HX_STACK_LINE(644)
		return true;
	}
	HX_STACK_LINE(644)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_fullscreen,return )

bool FlxG_obj::set_fullscreen( bool Value){
	HX_STACK_FRAME("flixel.FlxG","set_fullscreen",0x1eee347f,"flixel.FlxG.set_fullscreen","flixel/FlxG.hx",649,0x8e176836)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(650)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->set_displayState((  ((Value)) ? ::openfl::display::StageDisplayState(::openfl::display::StageDisplayState_obj::FULL_SCREEN) : ::openfl::display::StageDisplayState(::openfl::display::StageDisplayState_obj::NORMAL) ));
	HX_STACK_LINE(651)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_fullscreen,return )

::openfl::_v2::display::Stage FlxG_obj::get_stage( ){
	HX_STACK_FRAME("flixel.FlxG","get_stage",0xb2caaaee,"flixel.FlxG.get_stage","flixel/FlxG.hx",656,0x8e176836)
	HX_STACK_LINE(656)
	return ::openfl::_v2::Lib_obj::get_current()->get_stage();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_stage,return )

::flixel::FlxState FlxG_obj::get_state( ){
	HX_STACK_FRAME("flixel.FlxG","get_state",0xb2cab641,"flixel.FlxG.get_state","flixel/FlxG.hx",661,0x8e176836)
	HX_STACK_LINE(661)
	return ::flixel::FlxG_obj::game->_state;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_state,return )


FlxG_obj::FlxG_obj()
{
}

Dynamic FlxG_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"vcr") ) { return vcr; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		if (HX_FIELD_EQ(inName,"save") ) { return save; }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { return get_stage(); }
		if (HX_FIELD_EQ(inName,"state") ) { return get_state(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"random") ) { return random; }
		if (HX_FIELD_EQ(inName,"swipes") ) { return swipes; }
		if (HX_FIELD_EQ(inName,"inputs") ) { return inputs; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"touches") ) { return touches; }
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"cameras") ) { return cameras; }
		if (HX_FIELD_EQ(inName,"plugins") ) { return plugins; }
		if (HX_FIELD_EQ(inName,"signals") ) { return signals; }
		if (HX_FIELD_EQ(inName,"overlap") ) { return overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"openURL") ) { return openURL_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamepads") ) { return gamepads; }
		if (HX_FIELD_EQ(inName,"debugger") ) { return debugger; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { return autoPause; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { return timeScale; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return scaleMode; }
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { return bitmapLog; }
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mouse") ) { return set_mouse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { return maxElapsed; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return get_fullscreen(); }
		if (HX_FIELD_EQ(inName,"resizeGame") ) { return resizeGame_dyn(); }
		if (HX_FIELD_EQ(inName,"resetState") ) { return resetState_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { return worldBounds; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { return initialZoom; }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedTimestep") ) { return fixedTimestep; }
		if (HX_FIELD_EQ(inName,"drawFramerate") ) { return drawFramerate; }
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { return set_scaleMode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"worldDivisions") ) { return worldDivisions; }
		if (HX_FIELD_EQ(inName,"addPostProcess") ) { return addPostProcess_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return get_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFramerate") ) { return get_updateFramerate(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removePostProcess") ) { return removePostProcess_dyn(); }
		if (HX_FIELD_EQ(inName,"set_drawFramerate") ) { return set_drawFramerate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"chainPostProcesses") ) { return chainPostProcesses_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"pixelPerfectOverlap") ) { return pixelPerfectOverlap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_updateFramerate") ) { return get_updateFramerate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_updateFramerate") ) { return set_updateFramerate_dyn(); }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"addChildBelowMouse_openfl__v2_text_TextField") ) { return addChildBelowMouse_openfl__v2_text_TextField_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxG_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::flixel::system::frontEnds::LogFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcr") ) { vcr=inValue.Cast< ::flixel::system::frontEnds::VCRFrontEnd >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::flixel::FlxGame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast< ::flixel::util::FlxSave >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::flixel::input::keyboard::FlxKeyboard >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouse") ) { if (inCallProp) return set_mouse(inValue);mouse=inValue.Cast< ::flixel::input::mouse::FlxMouse >(); return inValue; }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< ::flixel::system::frontEnds::WatchFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::flixel::system::frontEnds::SoundFrontEnd >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::flixel::FlxCamera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"random") ) { random=inValue.Cast< ::flixel::math::FlxRandom >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swipes") ) { swipes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputs") ) { inputs=inValue.Cast< ::flixel::system::frontEnds::InputFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::flixel::system::frontEnds::BitmapFrontEnd >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< ::flixel::system::FlxVersion >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touches") ) { touches=inValue.Cast< ::flixel::input::touch::FlxTouchManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::flixel::system::frontEnds::ConsoleFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameras") ) { cameras=inValue.Cast< ::flixel::system::frontEnds::CameraFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"plugins") ) { plugins=inValue.Cast< ::flixel::system::frontEnds::PluginFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"signals") ) { signals=inValue.Cast< ::flixel::system::frontEnds::SignalFrontEnd >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamepads") ) { gamepads=inValue.Cast< ::flixel::input::gamepad::FlxGamepadManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugger") ) { debugger=inValue.Cast< ::flixel::system::frontEnds::DebuggerFrontEnd >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { timeScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp) return set_scaleMode(inValue);scaleMode=inValue.Cast< ::flixel::system::scaleModes::BaseScaleMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { bitmapLog=inValue.Cast< ::flixel::system::frontEnds::BitmapLogFrontEnd >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { maxElapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return set_fullscreen(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { worldBounds=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { initialZoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedTimestep") ) { fixedTimestep=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawFramerate") ) { if (inCallProp) return set_drawFramerate(inValue);drawFramerate=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"worldDivisions") ) { worldDivisions=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFramerate") ) { return set_updateFramerate(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxG_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("addChildBelowMouse_openfl__v2_text_TextField"),
	HX_CSTRING("autoPause"),
	HX_CSTRING("fixedTimestep"),
	HX_CSTRING("timeScale"),
	HX_CSTRING("worldDivisions"),
	HX_CSTRING("camera"),
	HX_CSTRING("VERSION"),
	HX_CSTRING("game"),
	HX_CSTRING("drawFramerate"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("maxElapsed"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("scaleMode"),
	HX_CSTRING("worldBounds"),
	HX_CSTRING("save"),
	HX_CSTRING("random"),
	HX_CSTRING("mouse"),
	HX_CSTRING("touches"),
	HX_CSTRING("swipes"),
	HX_CSTRING("keys"),
	HX_CSTRING("gamepads"),
	HX_CSTRING("inputs"),
	HX_CSTRING("console"),
	HX_CSTRING("log"),
	HX_CSTRING("bitmapLog"),
	HX_CSTRING("watch"),
	HX_CSTRING("debugger"),
	HX_CSTRING("vcr"),
	HX_CSTRING("bitmap"),
	HX_CSTRING("cameras"),
	HX_CSTRING("plugins"),
	HX_CSTRING("initialZoom"),
	HX_CSTRING("sound"),
	HX_CSTRING("signals"),
	HX_CSTRING("resizeGame"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("switchState"),
	HX_CSTRING("resetState"),
	HX_CSTRING("overlap"),
	HX_CSTRING("pixelPerfectOverlap"),
	HX_CSTRING("collide"),
	HX_CSTRING("addPostProcess"),
	HX_CSTRING("removePostProcess"),
	HX_CSTRING("chainPostProcesses"),
	HX_CSTRING("openURL"),
	HX_CSTRING("init"),
	HX_CSTRING("reset"),
	HX_CSTRING("set_scaleMode"),
	HX_CSTRING("set_mouse"),
	HX_CSTRING("get_updateFramerate"),
	HX_CSTRING("set_updateFramerate"),
	HX_CSTRING("set_drawFramerate"),
	HX_CSTRING("get_fullscreen"),
	HX_CSTRING("set_fullscreen"),
	HX_CSTRING("get_stage"),
	HX_CSTRING("get_state"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_MARK_MEMBER_NAME(FlxG_obj::fixedTimestep,"fixedTimestep");
	HX_MARK_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_MARK_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(FlxG_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(FlxG_obj::game,"game");
	HX_MARK_MEMBER_NAME(FlxG_obj::drawFramerate,"drawFramerate");
	HX_MARK_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(FlxG_obj::maxElapsed,"maxElapsed");
	HX_MARK_MEMBER_NAME(FlxG_obj::width,"width");
	HX_MARK_MEMBER_NAME(FlxG_obj::height,"height");
	HX_MARK_MEMBER_NAME(FlxG_obj::scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_MARK_MEMBER_NAME(FlxG_obj::save,"save");
	HX_MARK_MEMBER_NAME(FlxG_obj::random,"random");
	HX_MARK_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(FlxG_obj::touches,"touches");
	HX_MARK_MEMBER_NAME(FlxG_obj::swipes,"swipes");
	HX_MARK_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_MARK_MEMBER_NAME(FlxG_obj::gamepads,"gamepads");
	HX_MARK_MEMBER_NAME(FlxG_obj::inputs,"inputs");
	HX_MARK_MEMBER_NAME(FlxG_obj::console,"console");
	HX_MARK_MEMBER_NAME(FlxG_obj::log,"log");
	HX_MARK_MEMBER_NAME(FlxG_obj::bitmapLog,"bitmapLog");
	HX_MARK_MEMBER_NAME(FlxG_obj::watch,"watch");
	HX_MARK_MEMBER_NAME(FlxG_obj::debugger,"debugger");
	HX_MARK_MEMBER_NAME(FlxG_obj::vcr,"vcr");
	HX_MARK_MEMBER_NAME(FlxG_obj::bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_MARK_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_MARK_MEMBER_NAME(FlxG_obj::initialZoom,"initialZoom");
	HX_MARK_MEMBER_NAME(FlxG_obj::sound,"sound");
	HX_MARK_MEMBER_NAME(FlxG_obj::signals,"signals");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_VISIT_MEMBER_NAME(FlxG_obj::fixedTimestep,"fixedTimestep");
	HX_VISIT_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_VISIT_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(FlxG_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(FlxG_obj::game,"game");
	HX_VISIT_MEMBER_NAME(FlxG_obj::drawFramerate,"drawFramerate");
	HX_VISIT_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(FlxG_obj::maxElapsed,"maxElapsed");
	HX_VISIT_MEMBER_NAME(FlxG_obj::width,"width");
	HX_VISIT_MEMBER_NAME(FlxG_obj::height,"height");
	HX_VISIT_MEMBER_NAME(FlxG_obj::scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_VISIT_MEMBER_NAME(FlxG_obj::save,"save");
	HX_VISIT_MEMBER_NAME(FlxG_obj::random,"random");
	HX_VISIT_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(FlxG_obj::touches,"touches");
	HX_VISIT_MEMBER_NAME(FlxG_obj::swipes,"swipes");
	HX_VISIT_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_VISIT_MEMBER_NAME(FlxG_obj::gamepads,"gamepads");
	HX_VISIT_MEMBER_NAME(FlxG_obj::inputs,"inputs");
	HX_VISIT_MEMBER_NAME(FlxG_obj::console,"console");
	HX_VISIT_MEMBER_NAME(FlxG_obj::log,"log");
	HX_VISIT_MEMBER_NAME(FlxG_obj::bitmapLog,"bitmapLog");
	HX_VISIT_MEMBER_NAME(FlxG_obj::watch,"watch");
	HX_VISIT_MEMBER_NAME(FlxG_obj::debugger,"debugger");
	HX_VISIT_MEMBER_NAME(FlxG_obj::vcr,"vcr");
	HX_VISIT_MEMBER_NAME(FlxG_obj::bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_VISIT_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_VISIT_MEMBER_NAME(FlxG_obj::initialZoom,"initialZoom");
	HX_VISIT_MEMBER_NAME(FlxG_obj::sound,"sound");
	HX_VISIT_MEMBER_NAME(FlxG_obj::signals,"signals");
};

#endif

Class FlxG_obj::__mClass;

void FlxG_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxG"), hx::TCanCast< FlxG_obj> ,sStaticFields,sMemberFields,
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

void FlxG_obj::__boot()
{
	autoPause= true;
	fixedTimestep= true;
	timeScale= (int)1;
	worldDivisions= (int)6;
	VERSION= ::flixel::system::FlxVersion_obj::__new((int)4,(int)0,(int)0);
	elapsed= (int)0;
	maxElapsed= 0.1;
	scaleMode= ::flixel::system::scaleModes::RatioScaleMode_obj::__new(null());
struct _Function_0_1{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxG.hx",150,0x8e176836)
		{
			HX_STACK_LINE(150)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(150)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(150)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(150)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(150)
			::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(150)
			{
				HX_STACK_LINE(150)
				::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(150)
				_this->x = X;
				HX_STACK_LINE(150)
				_this->y = Y;
				HX_STACK_LINE(150)
				_this->width = Width;
				HX_STACK_LINE(150)
				_this->height = Height;
				HX_STACK_LINE(150)
				rect = _this;
			}
			HX_STACK_LINE(150)
			rect->_inPool = false;
			HX_STACK_LINE(150)
			return rect;
		}
		return null();
	}
};
	worldBounds= _Function_0_1::Block();
	save= ::flixel::util::FlxSave_obj::__new();
	random= ::flixel::math::FlxRandom_obj::__new(null());
	swipes= Array_obj< ::Dynamic >::__new();
	inputs= ::flixel::system::frontEnds::InputFrontEnd_obj::__new();
	console= ::flixel::system::frontEnds::ConsoleFrontEnd_obj::__new();
	log= ::flixel::system::frontEnds::LogFrontEnd_obj::__new();
	bitmapLog= ::flixel::system::frontEnds::BitmapLogFrontEnd_obj::__new();
	watch= ::flixel::system::frontEnds::WatchFrontEnd_obj::__new();
	debugger= ::flixel::system::frontEnds::DebuggerFrontEnd_obj::__new();
	bitmap= ::flixel::system::frontEnds::BitmapFrontEnd_obj::__new();
	cameras= ::flixel::system::frontEnds::CameraFrontEnd_obj::__new();
	initialZoom= (int)0;
	signals= ::flixel::system::frontEnds::SignalFrontEnd_obj::__new();
}

} // end namespace flixel
