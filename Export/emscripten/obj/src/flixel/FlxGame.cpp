#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_effects_postprocess_PostProcess
#include <flixel/effects/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
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
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#include <flixel/system/ui/FlxFocusLostScreen.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
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
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
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
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
namespace flixel{

Void FlxGame_obj::__construct(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{
HX_STACK_FRAME("flixel.FlxGame","new",0xde7d5f44,"flixel.FlxGame.new","flixel/FlxGame.hx",52,0x34f39fed)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_GameSizeX,"GameSizeX")
HX_STACK_ARG(__o_GameSizeY,"GameSizeY")
HX_STACK_ARG(InitialState,"InitialState")
HX_STACK_ARG(__o_Zoom,"Zoom")
HX_STACK_ARG(__o_UpdateFramerate,"UpdateFramerate")
HX_STACK_ARG(__o_DrawFramerate,"DrawFramerate")
HX_STACK_ARG(__o_SkipSplash,"SkipSplash")
HX_STACK_ARG(__o_StartFullscreen,"StartFullscreen")
int GameSizeX = __o_GameSizeX.Default(640);
int GameSizeY = __o_GameSizeY.Default(480);
Float Zoom = __o_Zoom.Default(1);
int UpdateFramerate = __o_UpdateFramerate.Default(60);
int DrawFramerate = __o_DrawFramerate.Default(60);
bool SkipSplash = __o_SkipSplash.Default(false);
bool StartFullscreen = __o_StartFullscreen.Default(false);
{
	HX_STACK_LINE(225)
	this->postProcesses = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(221)
	this->postProcessLayer = ::openfl::_v2::display::Sprite_obj::__new();
	HX_STACK_LINE(190)
	this->_resetGame = false;
	HX_STACK_LINE(174)
	this->_skipSplash = false;
	HX_STACK_LINE(168)
	this->_customFocusLostScreen = hx::ClassOf< ::flixel::system::ui::FlxFocusLostScreen >();
	HX_STACK_LINE(161)
	this->_customSoundTray = hx::ClassOf< ::flixel::system::ui::FlxSoundTray >();
	HX_STACK_LINE(140)
	this->_onFocusFiredOnce = false;
	HX_STACK_LINE(133)
	this->_lostFocus = false;
	HX_STACK_LINE(106)
	this->_total = (int)0;
	HX_STACK_LINE(93)
	this->_gameJustStarted = false;
	HX_STACK_LINE(87)
	this->ticks = (int)0;
	HX_STACK_LINE(57)
	this->focusLostFramerate = (int)10;
	HX_STACK_LINE(242)
	super::__construct();
	HX_STACK_LINE(249)
	::openfl::_v2::display::Sprite _g = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(249)
	this->_inputContainer = _g;
	HX_STACK_LINE(252)
	::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),GameSizeX,GameSizeY,Zoom);
	HX_STACK_LINE(254)
	::flixel::FlxG_obj::set_updateFramerate(UpdateFramerate);
	HX_STACK_LINE(255)
	::flixel::FlxG_obj::set_drawFramerate(DrawFramerate);
	HX_STACK_LINE(256)
	this->_accumulator = this->_stepMS;
	HX_STACK_LINE(257)
	this->_skipSplash = SkipSplash;
	HX_STACK_LINE(264)
	if (((InitialState == null()))){
		HX_STACK_LINE(264)
		this->_initialState = hx::ClassOf< ::flixel::FlxState >();
	}
	else{
		HX_STACK_LINE(264)
		this->_initialState = InitialState;
	}
	HX_STACK_LINE(266)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null(),null(),null());
}
;
	return null();
}

//FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(__o_GameSizeX,__o_GameSizeY,InitialState,__o_Zoom,__o_UpdateFramerate,__o_DrawFramerate,__o_SkipSplash,__o_StartFullscreen);
	return result;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

Void FlxGame_obj::create( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","create",0x90873e98,"flixel.FlxGame.create","flixel/FlxGame.hx",273,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(274)
		::openfl::_v2::display::Stage _g = this->get_stage();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(274)
		if (((_g == null()))){
			HX_STACK_LINE(276)
			return null();
		}
		HX_STACK_LINE(278)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null());
		HX_STACK_LINE(280)
		int _g1 = this->getTimer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(280)
		this->_total = _g1;
		HX_STACK_LINE(287)
		this->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(288)
		this->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(289)
		this->get_stage()->set_frameRate(::flixel::FlxG_obj::drawFramerate);
		HX_STACK_LINE(291)
		this->addChild(this->_inputContainer);
		HX_STACK_LINE(295)
		this->addChild(this->postProcessLayer);
		HX_STACK_LINE(308)
		::flixel::system::ui::FlxSoundTray _g2 = ::Type_obj::createInstance(this->_customSoundTray,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(308)
		this->soundTray = _g2;
		HX_STACK_LINE(309)
		this->addChild(this->soundTray);
		HX_STACK_LINE(313)
		::flixel::system::ui::FlxFocusLostScreen _g3 = ::Type_obj::createInstance(this->_customFocusLostScreen,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(313)
		this->_focusLostScreen = _g3;
		HX_STACK_LINE(314)
		this->addChild(this->_focusLostScreen);
		HX_STACK_LINE(323)
		this->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::DEACTIVATE,this->onFocusLost_dyn(),null(),null(),null());
		HX_STACK_LINE(324)
		this->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::ACTIVATE,this->onFocus_dyn(),null(),null(),null());
		HX_STACK_LINE(328)
		{
			HX_STACK_LINE(328)
			::flixel::FlxG_obj::signals->preGameReset->dispatch();
			HX_STACK_LINE(328)
			if (((bool(this->_skipSplash) || bool((::flixel::system::FlxSplash_obj::nextState != null()))))){
				HX_STACK_LINE(328)
				::flixel::FlxState _g4 = ::Type_obj::createInstance(this->_initialState,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(328)
				this->_requestedState = _g4;
				HX_STACK_LINE(328)
				if (((::flixel::system::FlxSplash_obj::nextState == null()))){
					HX_STACK_LINE(328)
					this->_gameJustStarted = true;
				}
			}
			else{
				HX_STACK_LINE(328)
				::flixel::system::FlxSplash_obj::nextState = this->_initialState;
				HX_STACK_LINE(328)
				::flixel::system::FlxSplash _g5 = ::flixel::system::FlxSplash_obj::__new(null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(328)
				this->_requestedState = _g5;
				HX_STACK_LINE(328)
				this->_skipSplash = true;
			}
			HX_STACK_LINE(328)
			::flixel::FlxG_obj::reset();
			HX_STACK_LINE(328)
			::flixel::FlxG_obj::signals->postGameReset->dispatch();
		}
		HX_STACK_LINE(329)
		this->switchState();
		HX_STACK_LINE(331)
		int _g6 = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(331)
		if (((_g6 < ::flixel::FlxG_obj::drawFramerate))){
			HX_STACK_LINE(333)
			Dynamic();
		}
		HX_STACK_LINE(337)
		this->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
		HX_STACK_LINE(341)
		this->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
		HX_STACK_LINE(344)
		int _g7 = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(344)
		int _g8 = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(344)
		this->resizeGame(_g7,_g8);
		HX_STACK_LINE(347)
		::openfl::_v2::Assets_obj::addEventListener(::openfl::_v2::events::Event_obj::CHANGE,::flixel::FlxG_obj::bitmap->onAssetsReload_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,create,(void))

Void FlxGame_obj::onFocus( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onFocus",0x6f2bcf1d,"flixel.FlxGame.onFocus","flixel/FlxGame.hx",352,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(374)
		this->_lostFocus = false;
		HX_STACK_LINE(375)
		::flixel::FlxG_obj::signals->focusGained->dispatch();
		HX_STACK_LINE(376)
		this->_state->onFocus();
		HX_STACK_LINE(378)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(380)
			return null();
		}
		HX_STACK_LINE(384)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(386)
			this->_focusLostScreen->set_visible(false);
		}
		HX_STACK_LINE(394)
		this->get_stage()->set_frameRate(::flixel::FlxG_obj::drawFramerate);
		HX_STACK_LINE(396)
		::flixel::FlxG_obj::sound->onFocus();
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(398)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(398)
			Array< ::flixel::input::IFlxInputManager > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(398)
			while((true)){
				HX_STACK_LINE(398)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(398)
					break;
				}
				HX_STACK_LINE(398)
				::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(398)
				++(_g);
				HX_STACK_LINE(398)
				input->onFocus();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::onFocusLost( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onFocusLost",0xb7eef7a1,"flixel.FlxGame.onFocusLost","flixel/FlxGame.hx",402,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(410)
		this->_lostFocus = true;
		HX_STACK_LINE(411)
		::flixel::FlxG_obj::signals->focusLost->dispatch();
		HX_STACK_LINE(412)
		this->_state->onFocusLost();
		HX_STACK_LINE(414)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(416)
			return null();
		}
		HX_STACK_LINE(420)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(422)
			this->_focusLostScreen->set_visible(true);
		}
		HX_STACK_LINE(430)
		this->get_stage()->set_frameRate(this->focusLostFramerate);
		HX_STACK_LINE(432)
		::flixel::FlxG_obj::sound->onFocusLost();
		HX_STACK_LINE(434)
		{
			HX_STACK_LINE(434)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(434)
			Array< ::flixel::input::IFlxInputManager > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(434)
			while((true)){
				HX_STACK_LINE(434)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(434)
					break;
				}
				HX_STACK_LINE(434)
				::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(434)
				++(_g);
				HX_STACK_LINE(434)
				input->onFocusLost();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onResize( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onResize",0xebfa470f,"flixel.FlxGame.onResize","flixel/FlxGame.hx",439,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(440)
		int width = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(441)
		int height = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(444)
		::flixel::FlxG_obj::bitmap->onContext();
		HX_STACK_LINE(447)
		this->resizeGame(width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onResize,(void))

Void FlxGame_obj::resizeGame( int width,int height){
{
		HX_STACK_FRAME("flixel.FlxGame","resizeGame",0xcdcb59a2,"flixel.FlxGame.resizeGame","flixel/FlxGame.hx",451,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(452)
		::flixel::FlxG_obj::scaleMode->onMeasure(width,height);
		HX_STACK_LINE(454)
		this->_state->onResize(width,height);
		HX_STACK_LINE(455)
		::flixel::FlxG_obj::signals->gameResized->dispatch(width,height);
		HX_STACK_LINE(457)
		::flixel::FlxG_obj::cameras->resize();
		HX_STACK_LINE(473)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(475)
			this->_focusLostScreen->draw();
		}
		HX_STACK_LINE(480)
		if (((this->soundTray != null()))){
			HX_STACK_LINE(482)
			this->soundTray->screenCenter();
		}
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(487)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(487)
			Array< ::Dynamic > _g1 = this->postProcesses;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(487)
			while((true)){
				HX_STACK_LINE(487)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(487)
					break;
				}
				HX_STACK_LINE(487)
				::flixel::effects::postprocess::PostProcess postProcess = _g1->__get(_g).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(postProcess,"postProcess");
				HX_STACK_LINE(487)
				++(_g);
				HX_STACK_LINE(489)
				postProcess->rebuild();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGame_obj,resizeGame,(void))

Void FlxGame_obj::onEnterFrame( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onEnterFrame",0x001b1a90,"flixel.FlxGame.onEnterFrame","flixel/FlxGame.hx",498,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(499)
		int _g = this->getTimer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(499)
		this->ticks = _g;
		HX_STACK_LINE(500)
		this->_elapsedMS = (this->ticks - this->_total);
		HX_STACK_LINE(501)
		this->_total = this->ticks;
		HX_STACK_LINE(504)
		if (((bool((this->soundTray != null())) && bool(this->soundTray->active)))){
			HX_STACK_LINE(506)
			this->soundTray->update(this->_elapsedMS);
		}
		HX_STACK_LINE(510)
		if (((bool(!(this->_lostFocus)) || bool(!(::flixel::FlxG_obj::autoPause))))){
			HX_STACK_LINE(512)
			if ((::flixel::FlxG_obj::vcr->paused)){
				HX_STACK_LINE(514)
				if ((::flixel::FlxG_obj::vcr->stepRequested)){
					HX_STACK_LINE(516)
					::flixel::FlxG_obj::vcr->stepRequested = false;
				}
				else{
					HX_STACK_LINE(518)
					if (((this->_state == this->_requestedState))){
						HX_STACK_LINE(520)
						return null();
					}
				}
			}
			HX_STACK_LINE(524)
			if ((::flixel::FlxG_obj::fixedTimestep)){
				HX_STACK_LINE(526)
				hx::AddEq(this->_accumulator,this->_elapsedMS);
				HX_STACK_LINE(527)
				if (((this->_accumulator > this->_maxAccumulation))){
					HX_STACK_LINE(529)
					this->_accumulator = this->_maxAccumulation;
				}
				HX_STACK_LINE(532)
				while((true)){
					HX_STACK_LINE(532)
					if ((!(((this->_accumulator > this->_stepMS))))){
						HX_STACK_LINE(532)
						break;
					}
					HX_STACK_LINE(534)
					this->step();
					HX_STACK_LINE(535)
					this->_accumulator = (this->_accumulator - this->_stepMS);
				}
			}
			else{
				HX_STACK_LINE(540)
				this->step();
			}
			HX_STACK_LINE(547)
			this->draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_FRAME("flixel.FlxGame","resetGame",0xde30cf45,"flixel.FlxGame.resetGame","flixel/FlxGame.hx",561,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(562)
		::flixel::FlxG_obj::signals->preGameReset->dispatch();
		HX_STACK_LINE(568)
		if (((bool(this->_skipSplash) || bool((::flixel::system::FlxSplash_obj::nextState != null()))))){
			HX_STACK_LINE(570)
			::flixel::FlxState _g = ::Type_obj::createInstance(this->_initialState,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(570)
			this->_requestedState = _g;
			HX_STACK_LINE(571)
			if (((::flixel::system::FlxSplash_obj::nextState == null()))){
				HX_STACK_LINE(573)
				this->_gameJustStarted = true;
			}
		}
		else{
			HX_STACK_LINE(578)
			::flixel::system::FlxSplash_obj::nextState = this->_initialState;
			HX_STACK_LINE(579)
			::flixel::system::FlxSplash _g1 = ::flixel::system::FlxSplash_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(579)
			this->_requestedState = _g1;
			HX_STACK_LINE(580)
			this->_skipSplash = true;
		}
		HX_STACK_LINE(590)
		::flixel::FlxG_obj::reset();
		HX_STACK_LINE(592)
		::flixel::FlxG_obj::signals->postGameReset->dispatch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_FRAME("flixel.FlxGame","switchState",0xedf41a61,"flixel.FlxGame.switchState","flixel/FlxGame.hx",601,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(603)
		::flixel::FlxG_obj::bitmap->clearCache();
		HX_STACK_LINE(604)
		::flixel::FlxG_obj::cameras->reset(null());
		HX_STACK_LINE(605)
		::flixel::FlxG_obj::inputs->onStateSwitch();
		HX_STACK_LINE(607)
		::flixel::FlxG_obj::sound->destroy(null());
		HX_STACK_LINE(610)
		::flixel::FlxG_obj::signals->stateSwitched->dispatch();
		HX_STACK_LINE(617)
		if (((this->_state != null()))){
			HX_STACK_LINE(619)
			this->_state->destroy();
		}
		HX_STACK_LINE(623)
		this->_state = this->_requestedState;
		HX_STACK_LINE(625)
		this->_state->create();
		HX_STACK_LINE(627)
		if ((this->_gameJustStarted)){
			HX_STACK_LINE(629)
			this->gameStart();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::gameStart( ){
{
		HX_STACK_FRAME("flixel.FlxGame","gameStart",0x0d0c34f4,"flixel.FlxGame.gameStart","flixel/FlxGame.hx",638,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(639)
		::flixel::FlxG_obj::signals->gameStarted->dispatch();
		HX_STACK_LINE(640)
		this->_gameJustStarted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,gameStart,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_FRAME("flixel.FlxGame","step",0xd28f5fe8,"flixel.FlxGame.step","flixel/FlxGame.hx",650,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(652)
		if ((this->_resetGame)){
			HX_STACK_LINE(654)
			{
				HX_STACK_LINE(654)
				::flixel::FlxG_obj::signals->preGameReset->dispatch();
				HX_STACK_LINE(654)
				if (((bool(this->_skipSplash) || bool((::flixel::system::FlxSplash_obj::nextState != null()))))){
					HX_STACK_LINE(654)
					::flixel::FlxState _g = ::Type_obj::createInstance(this->_initialState,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(654)
					this->_requestedState = _g;
					HX_STACK_LINE(654)
					if (((::flixel::system::FlxSplash_obj::nextState == null()))){
						HX_STACK_LINE(654)
						this->_gameJustStarted = true;
					}
				}
				else{
					HX_STACK_LINE(654)
					::flixel::system::FlxSplash_obj::nextState = this->_initialState;
					HX_STACK_LINE(654)
					::flixel::system::FlxSplash _g1 = ::flixel::system::FlxSplash_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(654)
					this->_requestedState = _g1;
					HX_STACK_LINE(654)
					this->_skipSplash = true;
				}
				HX_STACK_LINE(654)
				::flixel::FlxG_obj::reset();
				HX_STACK_LINE(654)
				::flixel::FlxG_obj::signals->postGameReset->dispatch();
			}
			HX_STACK_LINE(655)
			this->_resetGame = false;
		}
		HX_STACK_LINE(690)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxGame","update",0x9b7d5da5,"flixel.FlxGame.update","flixel/FlxGame.hx",702,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(703)
		if (((bool(!(this->_state->active)) || bool(!(this->_state->exists))))){
			HX_STACK_LINE(705)
			return null();
		}
		HX_STACK_LINE(708)
		if (((this->_state != this->_requestedState))){
			HX_STACK_LINE(710)
			this->switchState();
		}
		HX_STACK_LINE(720)
		::flixel::FlxG_obj::signals->preUpdate->dispatch();
		HX_STACK_LINE(722)
		if ((::flixel::FlxG_obj::fixedTimestep)){
			HX_STACK_LINE(724)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * this->_stepSeconds);
		}
		else{
			HX_STACK_LINE(728)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * ((Float(this->_elapsedMS) / Float((int)1000))));
			HX_STACK_LINE(730)
			Float max = (::flixel::FlxG_obj::maxElapsed * ::flixel::FlxG_obj::timeScale);		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(731)
			if (((::flixel::FlxG_obj::elapsed > max))){
				HX_STACK_LINE(732)
				::flixel::FlxG_obj::elapsed = max;
			}
		}
		HX_STACK_LINE(735)
		this->updateInput();
		HX_STACK_LINE(738)
		if (((this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >() != null()))){
			HX_STACK_LINE(740)
			this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >()->update(::flixel::FlxG_obj::elapsed);
		}
		HX_STACK_LINE(745)
		::flixel::FlxG_obj::sound->update(::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(747)
		{
			HX_STACK_LINE(747)
			Float elapsed = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(elapsed,"elapsed");
			HX_STACK_LINE(747)
			{
				HX_STACK_LINE(747)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(747)
				Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(747)
				while((true)){
					HX_STACK_LINE(747)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(747)
						break;
					}
					HX_STACK_LINE(747)
					::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(plugin,"plugin");
					HX_STACK_LINE(747)
					++(_g);
					HX_STACK_LINE(747)
					if (((bool(plugin->exists) && bool(plugin->active)))){
						HX_STACK_LINE(747)
						plugin->update(elapsed);
					}
				}
			}
		}
		HX_STACK_LINE(749)
		this->_state->tryUpdate(::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(751)
		{
			HX_STACK_LINE(751)
			Float elapsed = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(elapsed,"elapsed");
			HX_STACK_LINE(751)
			{
				HX_STACK_LINE(751)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(751)
				Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(751)
				while((true)){
					HX_STACK_LINE(751)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(751)
						break;
					}
					HX_STACK_LINE(751)
					::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(751)
					++(_g);
					HX_STACK_LINE(751)
					if (((bool((bool((camera != null())) && bool(camera->exists))) && bool(camera->active)))){
						HX_STACK_LINE(751)
						camera->update(elapsed);
					}
				}
			}
		}
		HX_STACK_LINE(752)
		::flixel::FlxG_obj::signals->postUpdate->dispatch();
		HX_STACK_LINE(759)
		{
			HX_STACK_LINE(759)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(759)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::swipes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(759)
			while((true)){
				HX_STACK_LINE(759)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(759)
					break;
				}
				HX_STACK_LINE(759)
				::flixel::input::FlxSwipe swipe = _g1->__get(_g).StaticCast< ::flixel::input::FlxSwipe >();		HX_STACK_VAR(swipe,"swipe");
				HX_STACK_LINE(759)
				++(_g);
				HX_STACK_LINE(761)
				swipe = null();
			}
		}
		HX_STACK_LINE(763)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_input_FlxSwipe(::flixel::FlxG_obj::swipes,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::updateInput( ){
{
		HX_STACK_FRAME("flixel.FlxGame","updateInput",0x1a1f4025,"flixel.FlxGame.updateInput","flixel/FlxGame.hx",811,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(811)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(811)
		Array< ::flixel::input::IFlxInputManager > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(811)
		while((true)){
			HX_STACK_LINE(811)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(811)
				break;
			}
			HX_STACK_LINE(811)
			::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(811)
			++(_g);
			HX_STACK_LINE(811)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateInput,(void))

Void FlxGame_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxGame","draw",0xc8a3a4a0,"flixel.FlxGame.draw","flixel/FlxGame.hx",830,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(831)
		if (((bool(!(this->_state->visible)) || bool(!(this->_state->exists))))){
			HX_STACK_LINE(833)
			return null();
		}
		HX_STACK_LINE(844)
		::flixel::FlxG_obj::signals->preDraw->dispatch();
		HX_STACK_LINE(847)
		::flixel::graphics::tile::FlxTilesheet_obj::_DRAWCALLS = (int)0;
		HX_STACK_LINE(851)
		if (((this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >() != null()))){
			HX_STACK_LINE(853)
			this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >()->capture();
		}
		HX_STACK_LINE(857)
		{
			HX_STACK_LINE(857)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(857)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(857)
			while((true)){
				HX_STACK_LINE(857)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(857)
					break;
				}
				HX_STACK_LINE(857)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(857)
				++(_g);
				HX_STACK_LINE(857)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(857)
					continue;
				}
				HX_STACK_LINE(857)
				camera->clearDrawStack();
				HX_STACK_LINE(857)
				camera->canvas->get_graphics()->clear();
				HX_STACK_LINE(857)
				camera->fill((int(camera->bgColor) & int((int)16777215)),camera->useBgAlphaBlending,(Float(((int((int(camera->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
			}
		}
		HX_STACK_LINE(859)
		{
			HX_STACK_LINE(859)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(859)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(859)
			while((true)){
				HX_STACK_LINE(859)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(859)
					break;
				}
				HX_STACK_LINE(859)
				::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(859)
				++(_g);
				HX_STACK_LINE(859)
				if (((bool(plugin->exists) && bool(plugin->visible)))){
					HX_STACK_LINE(859)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(861)
		this->_state->draw();
		HX_STACK_LINE(864)
		{
			HX_STACK_LINE(864)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(864)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(864)
			while((true)){
				HX_STACK_LINE(864)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(864)
					break;
				}
				HX_STACK_LINE(864)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(864)
				++(_g);
				HX_STACK_LINE(864)
				if (((bool((bool((camera != null())) && bool(camera->exists))) && bool(camera->visible)))){
					HX_STACK_LINE(864)
					camera->render();
				}
			}
		}
		HX_STACK_LINE(893)
		{
			HX_STACK_LINE(893)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(893)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(893)
			while((true)){
				HX_STACK_LINE(893)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(893)
					break;
				}
				HX_STACK_LINE(893)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(893)
				++(_g);
				HX_STACK_LINE(893)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(893)
					continue;
				}
				HX_STACK_LINE(893)
				camera->drawFX();
			}
		}
		HX_STACK_LINE(895)
		::flixel::FlxG_obj::signals->postDraw->dispatch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))

HX_BEGIN_DEFAULT_FUNC(__default_getTimer,FlxGame_obj)
int run(){
	HX_STACK_FRAME("flixel.FlxGame","getTimer",0x73dec5eb,"flixel.FlxGame.getTimer","flixel/FlxGame.hx",904,0x34f39fed)
	HX_STACK_THIS(this)
	HX_STACK_LINE(904)
	return ::openfl::_v2::Lib_obj::getTimer();
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC


FlxGame_obj::FlxGame_obj()
{
	getTimer = new __default_getTimer(this);
}

void FlxGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGame);
	HX_MARK_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_MARK_MEMBER_NAME(soundTray,"soundTray");
	HX_MARK_MEMBER_NAME(ticks,"ticks");
	HX_MARK_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_MARK_MEMBER_NAME(_initialState,"_initialState");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_MARK_MEMBER_NAME(_stepMS,"_stepMS");
	HX_MARK_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_MARK_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_MARK_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_MARK_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_MARK_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_MARK_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_MARK_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_MARK_MEMBER_NAME(_requestedState,"_requestedState");
	HX_MARK_MEMBER_NAME(_resetGame,"_resetGame");
	HX_MARK_MEMBER_NAME(postProcessLayer,"postProcessLayer");
	HX_MARK_MEMBER_NAME(postProcesses,"postProcesses");
	HX_MARK_MEMBER_NAME(getTimer,"getTimer");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_VISIT_MEMBER_NAME(soundTray,"soundTray");
	HX_VISIT_MEMBER_NAME(ticks,"ticks");
	HX_VISIT_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_VISIT_MEMBER_NAME(_initialState,"_initialState");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_VISIT_MEMBER_NAME(_stepMS,"_stepMS");
	HX_VISIT_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_VISIT_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_VISIT_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_VISIT_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_VISIT_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_VISIT_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_VISIT_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_VISIT_MEMBER_NAME(_requestedState,"_requestedState");
	HX_VISIT_MEMBER_NAME(_resetGame,"_resetGame");
	HX_VISIT_MEMBER_NAME(postProcessLayer,"postProcessLayer");
	HX_VISIT_MEMBER_NAME(postProcesses,"postProcesses");
	HX_VISIT_MEMBER_NAME(getTimer,"getTimer");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ticks") ) { return ticks; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stepMS") ) { return _stepMS; }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"getTimer") ) { return getTimer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { return soundTray; }
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"gameStart") ) { return gameStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { return _elapsedMS; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		if (HX_FIELD_EQ(inName,"_resetGame") ) { return _resetGame; }
		if (HX_FIELD_EQ(inName,"resizeGame") ) { return resizeGame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { return _skipSplash; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"updateInput") ) { return updateInput_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { return _stepSeconds; }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { return _initialState; }
		if (HX_FIELD_EQ(inName,"postProcesses") ) { return postProcesses; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { return _inputContainer; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { return _requestedState; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { return _gameJustStarted; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { return _maxAccumulation; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { return _focusLostScreen; }
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { return _customSoundTray; }
		if (HX_FIELD_EQ(inName,"postProcessLayer") ) { return postProcessLayer; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { return _onFocusFiredOnce; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { return focusLostFramerate; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { return _customFocusLostScreen; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ticks") ) { ticks=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stepMS") ) { _stepMS=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { getTimer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { soundTray=inValue.Cast< ::flixel::system::ui::FlxSoundTray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { _elapsedMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_resetGame") ) { _resetGame=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { _skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { _stepSeconds=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { _initialState=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"postProcesses") ) { postProcesses=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { _inputContainer=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { _requestedState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { _gameJustStarted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { _maxAccumulation=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { _focusLostScreen=inValue.Cast< ::flixel::system::ui::FlxFocusLostScreen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { _customSoundTray=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"postProcessLayer") ) { postProcessLayer=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { _onFocusFiredOnce=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { focusLostFramerate=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { _customFocusLostScreen=inValue.Cast< ::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("focusLostFramerate"));
	outFields->push(HX_CSTRING("soundTray"));
	outFields->push(HX_CSTRING("ticks"));
	outFields->push(HX_CSTRING("_gameJustStarted"));
	outFields->push(HX_CSTRING("_initialState"));
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("_total"));
	outFields->push(HX_CSTRING("_accumulator"));
	outFields->push(HX_CSTRING("_elapsedMS"));
	outFields->push(HX_CSTRING("_stepMS"));
	outFields->push(HX_CSTRING("_stepSeconds"));
	outFields->push(HX_CSTRING("_maxAccumulation"));
	outFields->push(HX_CSTRING("_lostFocus"));
	outFields->push(HX_CSTRING("_onFocusFiredOnce"));
	outFields->push(HX_CSTRING("_focusLostScreen"));
	outFields->push(HX_CSTRING("_inputContainer"));
	outFields->push(HX_CSTRING("_customSoundTray"));
	outFields->push(HX_CSTRING("_customFocusLostScreen"));
	outFields->push(HX_CSTRING("_skipSplash"));
	outFields->push(HX_CSTRING("_requestedState"));
	outFields->push(HX_CSTRING("_resetGame"));
	outFields->push(HX_CSTRING("postProcessLayer"));
	outFields->push(HX_CSTRING("postProcesses"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGame_obj,focusLostFramerate),HX_CSTRING("focusLostFramerate")},
	{hx::fsObject /*::flixel::system::ui::FlxSoundTray*/ ,(int)offsetof(FlxGame_obj,soundTray),HX_CSTRING("soundTray")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,ticks),HX_CSTRING("ticks")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_gameJustStarted),HX_CSTRING("_gameJustStarted")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxGame_obj,_initialState),HX_CSTRING("_initialState")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(FlxGame_obj,_state),HX_CSTRING("_state")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_total),HX_CSTRING("_total")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_accumulator),HX_CSTRING("_accumulator")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_elapsedMS),HX_CSTRING("_elapsedMS")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_stepMS),HX_CSTRING("_stepMS")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_stepSeconds),HX_CSTRING("_stepSeconds")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_maxAccumulation),HX_CSTRING("_maxAccumulation")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_lostFocus),HX_CSTRING("_lostFocus")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_onFocusFiredOnce),HX_CSTRING("_onFocusFiredOnce")},
	{hx::fsObject /*::flixel::system::ui::FlxFocusLostScreen*/ ,(int)offsetof(FlxGame_obj,_focusLostScreen),HX_CSTRING("_focusLostScreen")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FlxGame_obj,_inputContainer),HX_CSTRING("_inputContainer")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxGame_obj,_customSoundTray),HX_CSTRING("_customSoundTray")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxGame_obj,_customFocusLostScreen),HX_CSTRING("_customFocusLostScreen")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_skipSplash),HX_CSTRING("_skipSplash")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(FlxGame_obj,_requestedState),HX_CSTRING("_requestedState")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_resetGame),HX_CSTRING("_resetGame")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FlxGame_obj,postProcessLayer),HX_CSTRING("postProcessLayer")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGame_obj,postProcesses),HX_CSTRING("postProcesses")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxGame_obj,getTimer),HX_CSTRING("getTimer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("focusLostFramerate"),
	HX_CSTRING("soundTray"),
	HX_CSTRING("ticks"),
	HX_CSTRING("_gameJustStarted"),
	HX_CSTRING("_initialState"),
	HX_CSTRING("_state"),
	HX_CSTRING("_total"),
	HX_CSTRING("_accumulator"),
	HX_CSTRING("_elapsedMS"),
	HX_CSTRING("_stepMS"),
	HX_CSTRING("_stepSeconds"),
	HX_CSTRING("_maxAccumulation"),
	HX_CSTRING("_lostFocus"),
	HX_CSTRING("_onFocusFiredOnce"),
	HX_CSTRING("_focusLostScreen"),
	HX_CSTRING("_inputContainer"),
	HX_CSTRING("_customSoundTray"),
	HX_CSTRING("_customFocusLostScreen"),
	HX_CSTRING("_skipSplash"),
	HX_CSTRING("_requestedState"),
	HX_CSTRING("_resetGame"),
	HX_CSTRING("postProcessLayer"),
	HX_CSTRING("postProcesses"),
	HX_CSTRING("create"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onResize"),
	HX_CSTRING("resizeGame"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("switchState"),
	HX_CSTRING("gameStart"),
	HX_CSTRING("step"),
	HX_CSTRING("update"),
	HX_CSTRING("updateInput"),
	HX_CSTRING("draw"),
	HX_CSTRING("getTimer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

#endif

Class FlxGame_obj::__mClass;

void FlxGame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxGame"), hx::TCanCast< FlxGame_obj> ,sStaticFields,sMemberFields,
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

void FlxGame_obj::__boot()
{
}

} // end namespace flixel
