#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetType
#include <openfl/_v2/AssetType.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
#ifndef INCLUDED_openfl__v2_media_Sound
#include <openfl/_v2/media/Sound.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void SoundFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","new",0x71610699,"flixel.system.frontEnds.SoundFrontEnd.new","flixel/system/frontEnds/SoundFrontEnd.hx",16,0x9ba4fb18)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(63)
	this->volume = (int)1;
	HX_STACK_LINE(59)
	this->list = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(54)
	this->soundTrayEnabled = true;
	HX_STACK_LINE(47)
	this->muteKeys = Array_obj< int >::__new().Add((int)48).Add((int)96);
	HX_STACK_LINE(42)
	this->volumeDownKeys = Array_obj< int >::__new().Add((int)189).Add((int)109);
	HX_STACK_LINE(37)
	this->volumeUpKeys = Array_obj< int >::__new().Add((int)187).Add((int)107);
	HX_STACK_LINE(25)
	this->muted = false;
	HX_STACK_LINE(317)
	this->loadSavedPrefs();
}
;
	return null();
}

//SoundFrontEnd_obj::~SoundFrontEnd_obj() { }

Dynamic SoundFrontEnd_obj::__CreateEmpty() { return  new SoundFrontEnd_obj; }
hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__new()
{  hx::ObjectPtr< SoundFrontEnd_obj > result = new SoundFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic SoundFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundFrontEnd_obj > result = new SoundFrontEnd_obj();
	result->__construct();
	return result;}

Void SoundFrontEnd_obj::playMusic( Dynamic Music,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","playMusic",0x3360250a,"flixel.system.frontEnds.SoundFrontEnd.playMusic","flixel/system/frontEnds/SoundFrontEnd.hx",73,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Music,"Music")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(74)
		if (((this->music == null()))){
			HX_STACK_LINE(76)
			::flixel::system::FlxSound _g = ::flixel::system::FlxSound_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			this->music = _g;
		}
		else{
			HX_STACK_LINE(78)
			if ((this->music->active)){
				HX_STACK_LINE(80)
				::flixel::system::FlxSound _this = this->music;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(80)
				_this->cleanup(_this->autoDestroy,true,true);
				HX_STACK_LINE(80)
				_this;
			}
		}
		HX_STACK_LINE(83)
		this->music->loadEmbedded(Music,Looped,null(),null());
		HX_STACK_LINE(84)
		this->music->set_volume(Volume);
		HX_STACK_LINE(85)
		this->music->persist = true;
		HX_STACK_LINE(86)
		this->music->play(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SoundFrontEnd_obj,playMusic,(void))

::flixel::system::FlxSound SoundFrontEnd_obj::load( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,hx::Null< bool >  __o_AutoPlay,::String URL,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
bool AutoPlay = __o_AutoPlay.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",101,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(AutoPlay,"AutoPlay")
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(102)
		if (((bool((EmbeddedSound == null())) && bool((URL == null()))))){
			HX_STACK_LINE(105)
			return null();
		}
		HX_STACK_LINE(108)
		::flixel::system::FlxSound sound = this->list->recycle(hx::ClassOf< ::flixel::system::FlxSound >(),null(),null(),null());		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(110)
		if (((EmbeddedSound != null()))){
			HX_STACK_LINE(112)
			sound->loadEmbedded(EmbeddedSound,Looped,AutoDestroy,OnComplete);
		}
		else{
			HX_STACK_LINE(116)
			sound->loadStream(URL,Looped,AutoDestroy,OnComplete);
		}
		HX_STACK_LINE(119)
		sound->set_volume(Volume);
		HX_STACK_LINE(121)
		if ((AutoPlay)){
			HX_STACK_LINE(123)
			sound->play(null());
		}
		HX_STACK_LINE(126)
		return sound;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(SoundFrontEnd_obj,load,return )

::openfl::_v2::media::Sound SoundFrontEnd_obj::cache( ::String EmbeddedSound){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","cache",0xf88690bb,"flixel.system.frontEnds.SoundFrontEnd.cache","flixel/system/frontEnds/SoundFrontEnd.hx",139,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_LINE(139)
	return ::openfl::_v2::Assets_obj::getSound(EmbeddedSound,true);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,cache,return )

Void SoundFrontEnd_obj::cacheAll( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","cacheAll",0x49c00726,"flixel.system.frontEnds.SoundFrontEnd.cacheAll","flixel/system/frontEnds/SoundFrontEnd.hx",154,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		Array< ::String > _g1 = ::openfl::_v2::Assets_obj::list(::openfl::_v2::AssetType_obj::SOUND);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(154)
		while((true)){
			HX_STACK_LINE(154)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(154)
				break;
			}
			HX_STACK_LINE(154)
			::String id = _g1->__get(_g);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(154)
			++(_g);
			HX_STACK_LINE(156)
			::openfl::_v2::Assets_obj::getSound(id,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,cacheAll,(void))

::flixel::system::FlxSound SoundFrontEnd_obj::play( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","play",0xc4dc699b,"flixel.system.frontEnds.SoundFrontEnd.play","flixel/system/frontEnds/SoundFrontEnd.hx",192,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(193)
		if ((::Std_obj::is(EmbeddedSound,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(195)
			::openfl::_v2::media::Sound _g = ::openfl::_v2::Assets_obj::getSound(EmbeddedSound,true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			EmbeddedSound = _g;
		}
		HX_STACK_LINE(197)
		::flixel::system::FlxSound sound = this->list->recycle(hx::ClassOf< ::flixel::system::FlxSound >(),null(),null(),null())->__Field(HX_CSTRING("loadEmbedded"),true)(EmbeddedSound,Looped,AutoDestroy,OnComplete);		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(198)
		sound->set_volume(Volume);
		HX_STACK_LINE(199)
		return sound->play(null());
	}
}


HX_DEFINE_DYNAMIC_FUNC5(SoundFrontEnd_obj,play,return )

::flixel::system::FlxSound SoundFrontEnd_obj::stream( ::String URL,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","stream",0xdd72c7e7,"flixel.system.frontEnds.SoundFrontEnd.stream","flixel/system/frontEnds/SoundFrontEnd.hx",214,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(214)
		return this->load(null(),Volume,Looped,AutoDestroy,true,URL,OnComplete);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(SoundFrontEnd_obj,stream,return )

Void SoundFrontEnd_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","pause",0x74c9cd6f,"flixel.system.frontEnds.SoundFrontEnd.pause","flixel/system/frontEnds/SoundFrontEnd.hx",221,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(222)
		if (((bool((bool((this->music != null())) && bool(this->music->exists))) && bool(this->music->active)))){
			HX_STACK_LINE(224)
			this->music->pause();
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(227)
			while((true)){
				HX_STACK_LINE(227)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(227)
					break;
				}
				HX_STACK_LINE(227)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(227)
				++(_g);
				HX_STACK_LINE(229)
				if (((bool((bool((sound != null())) && bool(sound->exists))) && bool(sound->active)))){
					HX_STACK_LINE(231)
					sound->pause();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,pause,(void))

Void SoundFrontEnd_obj::resume( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","resume",0xd4ca1d14,"flixel.system.frontEnds.SoundFrontEnd.resume","flixel/system/frontEnds/SoundFrontEnd.hx",240,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		if (((bool((this->music != null())) && bool(this->music->exists)))){
			HX_STACK_LINE(243)
			this->music->resume();
		}
		HX_STACK_LINE(246)
		{
			HX_STACK_LINE(246)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(246)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(246)
			while((true)){
				HX_STACK_LINE(246)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(246)
					break;
				}
				HX_STACK_LINE(246)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(246)
				++(_g);
				HX_STACK_LINE(248)
				if (((bool((sound != null())) && bool(sound->exists)))){
					HX_STACK_LINE(250)
					sound->resume();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,resume,(void))

Void SoundFrontEnd_obj::destroy( hx::Null< bool >  __o_ForceDestroy){
bool ForceDestroy = __o_ForceDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","destroy",0x153d73b3,"flixel.system.frontEnds.SoundFrontEnd.destroy","flixel/system/frontEnds/SoundFrontEnd.hx",261,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ForceDestroy,"ForceDestroy")
{
		HX_STACK_LINE(262)
		if (((bool((this->music != null())) && bool(((bool(ForceDestroy) || bool(!(this->music->persist)))))))){
			HX_STACK_LINE(264)
			this->music->destroy();
			HX_STACK_LINE(265)
			this->music = null();
		}
		HX_STACK_LINE(268)
		{
			HX_STACK_LINE(268)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(268)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(268)
			while((true)){
				HX_STACK_LINE(268)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(268)
					break;
				}
				HX_STACK_LINE(268)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(268)
				++(_g);
				HX_STACK_LINE(270)
				if (((bool((sound != null())) && bool(((bool(ForceDestroy) || bool(!(sound->persist)))))))){
					HX_STACK_LINE(272)
					sound->destroy();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroy,(void))

Void SoundFrontEnd_obj::toggleMuted( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","toggleMuted",0xe215de70,"flixel.system.frontEnds.SoundFrontEnd.toggleMuted","flixel/system/frontEnds/SoundFrontEnd.hx",281,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(282)
		this->muted = !(this->muted);
		HX_STACK_LINE(284)
		if (((this->volumeHandler_dyn() != null()))){
			HX_STACK_LINE(286)
			this->volumeHandler((  ((this->muted)) ? Float((int)0) : Float(this->volume) ));
		}
		HX_STACK_LINE(289)
		this->showSoundTray();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,toggleMuted,(void))

Void SoundFrontEnd_obj::changeVolume( Float Amount){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","changeVolume",0x51b19e11,"flixel.system.frontEnds.SoundFrontEnd.changeVolume","flixel/system/frontEnds/SoundFrontEnd.hx",296,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Amount,"Amount")
		HX_STACK_LINE(297)
		this->muted = false;
		HX_STACK_LINE(298)
		{
			HX_STACK_LINE(298)
			::flixel::system::frontEnds::SoundFrontEnd _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(298)
			_g->set_volume((_g->volume + Amount));
		}
		HX_STACK_LINE(299)
		this->showSoundTray();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,changeVolume,(void))

Void SoundFrontEnd_obj::showSoundTray( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","showSoundTray",0x0761fd21,"flixel.system.frontEnds.SoundFrontEnd.showSoundTray","flixel/system/frontEnds/SoundFrontEnd.hx",308,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(308)
		if (((bool((::flixel::FlxG_obj::game->soundTray != null())) && bool(this->soundTrayEnabled)))){
			HX_STACK_LINE(310)
			::flixel::FlxG_obj::game->soundTray->show(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,showSoundTray,(void))

Void SoundFrontEnd_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","update",0x534b3970,"flixel.system.frontEnds.SoundFrontEnd.update","flixel/system/frontEnds/SoundFrontEnd.hx",324,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(325)
		if (((bool((this->music != null())) && bool(this->music->active)))){
			HX_STACK_LINE(326)
			this->music->update(elapsed);
		}
		HX_STACK_LINE(328)
		if (((bool((this->list != null())) && bool(this->list->active)))){
			HX_STACK_LINE(329)
			this->list->update(elapsed);
		}
		HX_STACK_LINE(332)
		if ((::flixel::FlxG_obj::keys->checkKeyArrayState(this->muteKeys,(int)-1))){
			HX_STACK_LINE(333)
			this->toggleMuted();
		}
		else{
			HX_STACK_LINE(334)
			if ((::flixel::FlxG_obj::keys->checkKeyArrayState(this->volumeUpKeys,(int)-1))){
				HX_STACK_LINE(335)
				this->changeVolume(0.1);
			}
			else{
				HX_STACK_LINE(336)
				if ((::flixel::FlxG_obj::keys->checkKeyArrayState(this->volumeDownKeys,(int)-1))){
					HX_STACK_LINE(337)
					this->changeVolume(-0.1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,update,(void))

Void SoundFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocusLost",0xeb797bf6,"flixel.system.frontEnds.SoundFrontEnd.onFocusLost","flixel/system/frontEnds/SoundFrontEnd.hx",342,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(343)
		if (((this->music != null()))){
			HX_STACK_LINE(345)
			this->music->onFocusLost();
		}
		HX_STACK_LINE(348)
		{
			HX_STACK_LINE(348)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(348)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(348)
			while((true)){
				HX_STACK_LINE(348)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(348)
					break;
				}
				HX_STACK_LINE(348)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(348)
				++(_g);
				HX_STACK_LINE(350)
				if (((sound != null()))){
					HX_STACK_LINE(352)
					sound->onFocusLost();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocusLost,(void))

Void SoundFrontEnd_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocus",0x8b7e44f2,"flixel.system.frontEnds.SoundFrontEnd.onFocus","flixel/system/frontEnds/SoundFrontEnd.hx",358,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(359)
		if (((this->music != null()))){
			HX_STACK_LINE(361)
			this->music->onFocus();
		}
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(364)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(364)
			while((true)){
				HX_STACK_LINE(364)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(364)
					break;
				}
				HX_STACK_LINE(364)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(364)
				++(_g);
				HX_STACK_LINE(366)
				if (((sound != null()))){
					HX_STACK_LINE(368)
					sound->onFocus();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocus,(void))

Void SoundFrontEnd_obj::loadSavedPrefs( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","loadSavedPrefs",0xc70de056,"flixel.system.frontEnds.SoundFrontEnd.loadSavedPrefs","flixel/system/frontEnds/SoundFrontEnd.hx",377,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(378)
		if (((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("volume"),true) != null()))){
			HX_STACK_LINE(380)
			this->set_volume(::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("volume"),true));
		}
		HX_STACK_LINE(383)
		if (((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("mute"),true) != null()))){
			HX_STACK_LINE(385)
			this->muted = ::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("mute"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,loadSavedPrefs,(void))

Float SoundFrontEnd_obj::set_volume( Float Volume){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","set_volume",0x2e392afe,"flixel.system.frontEnds.SoundFrontEnd.set_volume","flixel/system/frontEnds/SoundFrontEnd.hx",390,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(391)
		if (((Volume < (int)0))){
			HX_STACK_LINE(391)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(391)
			lowerBound = Volume;
		}
		HX_STACK_LINE(391)
		if (((lowerBound > (int)1))){
			HX_STACK_LINE(391)
			Volume = (int)1;
		}
		else{
			HX_STACK_LINE(391)
			Volume = lowerBound;
		}
	}
	HX_STACK_LINE(393)
	if (((this->volumeHandler_dyn() != null()))){
		HX_STACK_LINE(395)
		Float param;		HX_STACK_VAR(param,"param");
		HX_STACK_LINE(395)
		if ((this->muted)){
			HX_STACK_LINE(395)
			param = (int)0;
		}
		else{
			HX_STACK_LINE(395)
			param = Volume;
		}
		HX_STACK_LINE(396)
		this->volumeHandler(param);
	}
	HX_STACK_LINE(398)
	return this->volume = Volume;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,set_volume,return )


SoundFrontEnd_obj::SoundFrontEnd_obj()
{
}

void SoundFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundFrontEnd);
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_END_CLASS();
}

void SoundFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(volume,"volume");
}

Dynamic SoundFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		if (HX_FIELD_EQ(inName,"stream") ) { return stream_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { return muteKeys; }
		if (HX_FIELD_EQ(inName,"cacheAll") ) { return cacheAll_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { return playMusic_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toggleMuted") ) { return toggleMuted_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { return volumeUpKeys; }
		if (HX_FIELD_EQ(inName,"changeVolume") ) { return changeVolume_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return volumeHandler; }
		if (HX_FIELD_EQ(inName,"showSoundTray") ) { return showSoundTray_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { return volumeDownKeys; }
		if (HX_FIELD_EQ(inName,"loadSavedPrefs") ) { return loadSavedPrefs_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { return soundTrayEnabled; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp) return set_volume(inValue);volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { soundTrayEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("music"));
	outFields->push(HX_CSTRING("muted"));
	outFields->push(HX_CSTRING("volumeUpKeys"));
	outFields->push(HX_CSTRING("volumeDownKeys"));
	outFields->push(HX_CSTRING("muteKeys"));
	outFields->push(HX_CSTRING("soundTrayEnabled"));
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("volume"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(SoundFrontEnd_obj,music),HX_CSTRING("music")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,muted),HX_CSTRING("muted")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundFrontEnd_obj,volumeHandler),HX_CSTRING("volumeHandler")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeUpKeys),HX_CSTRING("volumeUpKeys")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeDownKeys),HX_CSTRING("volumeDownKeys")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,muteKeys),HX_CSTRING("muteKeys")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,soundTrayEnabled),HX_CSTRING("soundTrayEnabled")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(SoundFrontEnd_obj,list),HX_CSTRING("list")},
	{hx::fsFloat,(int)offsetof(SoundFrontEnd_obj,volume),HX_CSTRING("volume")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("music"),
	HX_CSTRING("muted"),
	HX_CSTRING("volumeHandler"),
	HX_CSTRING("volumeUpKeys"),
	HX_CSTRING("volumeDownKeys"),
	HX_CSTRING("muteKeys"),
	HX_CSTRING("soundTrayEnabled"),
	HX_CSTRING("list"),
	HX_CSTRING("volume"),
	HX_CSTRING("playMusic"),
	HX_CSTRING("load"),
	HX_CSTRING("cache"),
	HX_CSTRING("cacheAll"),
	HX_CSTRING("play"),
	HX_CSTRING("stream"),
	HX_CSTRING("pause"),
	HX_CSTRING("resume"),
	HX_CSTRING("destroy"),
	HX_CSTRING("toggleMuted"),
	HX_CSTRING("changeVolume"),
	HX_CSTRING("showSoundTray"),
	HX_CSTRING("update"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("loadSavedPrefs"),
	HX_CSTRING("set_volume"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class SoundFrontEnd_obj::__mClass;

void SoundFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.SoundFrontEnd"), hx::TCanCast< SoundFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void SoundFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
