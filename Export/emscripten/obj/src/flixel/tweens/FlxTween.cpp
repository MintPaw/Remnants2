#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
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
namespace flixel{
namespace tweens{

Void FlxTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.FlxTween","new",0xa442439f,"flixel.tweens.FlxTween.new","flixel/tweens/FlxTween.hx",22,0x5d58d691)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(375)
	this->_waitingForRestart = false;
	HX_STACK_LINE(374)
	this->_running = false;
	HX_STACK_LINE(373)
	this->_delayToUse = (int)0;
	HX_STACK_LINE(372)
	this->_secondsSinceStart = (int)0;
	HX_STACK_LINE(370)
	this->loopDelay = (int)0;
	HX_STACK_LINE(365)
	this->startDelay = (int)0;
	HX_STACK_LINE(360)
	this->executions = (int)0;
	HX_STACK_LINE(353)
	this->scale = (int)0;
	HX_STACK_LINE(344)
	this->duration = (int)0;
	HX_STACK_LINE(343)
	this->active = false;
	HX_STACK_LINE(382)
	Dynamic _g = this->resolveTweenOptions(Options);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(382)
	Options = _g;
	HX_STACK_LINE(384)
	this->set_type(Options->__Field(HX_CSTRING("type"),true));
	HX_STACK_LINE(385)
	this->onStart = Options->__Field(HX_CSTRING("onStart"),true);
	HX_STACK_LINE(386)
	this->onUpdate = Options->__Field(HX_CSTRING("onUpdate"),true);
	HX_STACK_LINE(387)
	this->onComplete = Options->__Field(HX_CSTRING("onComplete"),true);
	HX_STACK_LINE(388)
	this->ease = Options->__Field(HX_CSTRING("ease"),true);
	HX_STACK_LINE(389)
	this->setDelays(Options->__Field(HX_CSTRING("startDelay"),true),Options->__Field(HX_CSTRING("loopDelay"),true));
}
;
	return null();
}

//FlxTween_obj::~FlxTween_obj() { }

Dynamic FlxTween_obj::__CreateEmpty() { return  new FlxTween_obj; }
hx::ObjectPtr< FlxTween_obj > FlxTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< FlxTween_obj > result = new FlxTween_obj();
	result->__construct(Options);
	return result;}

Dynamic FlxTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTween_obj > result = new FlxTween_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxTween_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Dynamic FlxTween_obj::resolveTweenOptions( Dynamic Options){
	HX_STACK_FRAME("flixel.tweens.FlxTween","resolveTweenOptions",0x40bbd67e,"flixel.tweens.FlxTween.resolveTweenOptions","flixel/tweens/FlxTween.hx",393,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Options,"Options")
	HX_STACK_LINE(394)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tweens/FlxTween.hx",395,0x5d58d691)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(395)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(397)
	if (((Options->__Field(HX_CSTRING("type"),true) == null()))){
		HX_STACK_LINE(398)
		Options->__FieldRef(HX_CSTRING("type")) = (int)8;
	}
	HX_STACK_LINE(400)
	return Options;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,resolveTweenOptions,return )

Void FlxTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","destroy",0xb268abb9,"flixel.tweens.FlxTween.destroy","flixel/tweens/FlxTween.hx",404,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(405)
		this->onStart = null();
		HX_STACK_LINE(406)
		this->onUpdate = null();
		HX_STACK_LINE(407)
		this->onComplete = null();
		HX_STACK_LINE(408)
		this->ease = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,destroy,(void))

Void FlxTween_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","update",0xb905642a,"flixel.tweens.FlxTween.update","flixel/tweens/FlxTween.hx",412,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(413)
		hx::AddEq(this->_secondsSinceStart,elapsed);
		HX_STACK_LINE(414)
		Float delay;		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(414)
		if (((this->executions > (int)0))){
			HX_STACK_LINE(414)
			delay = this->loopDelay;
		}
		else{
			HX_STACK_LINE(414)
			delay = this->startDelay;
		}
		HX_STACK_LINE(415)
		if (((this->_secondsSinceStart < delay))){
			HX_STACK_LINE(417)
			return null();
		}
		HX_STACK_LINE(419)
		Float _g = ::Math_obj::max((this->_secondsSinceStart - delay),(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(419)
		Float _g1 = (Float(_g) / Float(this->duration));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(419)
		this->scale = _g1;
		HX_STACK_LINE(420)
		if (((this->ease_dyn() != null()))){
			HX_STACK_LINE(422)
			Float _g2 = this->ease(this->scale);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(422)
			this->scale = _g2;
		}
		HX_STACK_LINE(424)
		if ((this->backward)){
			HX_STACK_LINE(426)
			this->scale = ((int)1 - this->scale);
		}
		HX_STACK_LINE(428)
		if (((bool((this->_secondsSinceStart > delay)) && bool((this->_running == false))))){
			HX_STACK_LINE(430)
			this->_running = true;
			HX_STACK_LINE(431)
			if (((this->onStart_dyn() != null()))){
				HX_STACK_LINE(432)
				this->onStart(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(434)
		if (((this->_secondsSinceStart >= (this->duration + delay)))){
			HX_STACK_LINE(436)
			if ((this->backward)){
				HX_STACK_LINE(436)
				this->scale = (int)0;
			}
			else{
				HX_STACK_LINE(436)
				this->scale = (int)1;
			}
			HX_STACK_LINE(437)
			this->finished = true;
		}
		else{
			HX_STACK_LINE(441)
			if (((this->onUpdate_dyn() != null()))){
				HX_STACK_LINE(442)
				this->onUpdate(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,update,(void))

::flixel::tweens::FlxTween FlxTween_obj::start( ){
	HX_STACK_FRAME("flixel.tweens.FlxTween","start",0xd6ec7561,"flixel.tweens.FlxTween.start","flixel/tweens/FlxTween.hx",450,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_LINE(451)
	this->_waitingForRestart = false;
	HX_STACK_LINE(452)
	this->_secondsSinceStart = (int)0;
	HX_STACK_LINE(453)
	if (((this->executions > (int)0))){
		HX_STACK_LINE(453)
		this->_delayToUse = this->loopDelay;
	}
	else{
		HX_STACK_LINE(453)
		this->_delayToUse = this->startDelay;
	}
	HX_STACK_LINE(454)
	if (((this->duration == (int)0))){
		HX_STACK_LINE(456)
		this->set_active(false);
		HX_STACK_LINE(457)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(459)
	this->set_active(true);
	HX_STACK_LINE(460)
	this->_running = false;
	HX_STACK_LINE(461)
	this->finished = false;
	HX_STACK_LINE(462)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,start,return )

Void FlxTween_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","cancel",0xea33cb9b,"flixel.tweens.FlxTween.cancel","flixel/tweens/FlxTween.hx",470,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(471)
		this->onEnd();
		HX_STACK_LINE(472)
		::flixel::tweens::FlxTween_obj::manager->remove(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,cancel,(void))

Void FlxTween_obj::finish( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","finish",0xb87f1e74,"flixel.tweens.FlxTween.finish","flixel/tweens/FlxTween.hx",476,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(477)
		(this->executions)++;
		HX_STACK_LINE(479)
		if (((this->onComplete_dyn() != null()))){
			HX_STACK_LINE(480)
			this->onComplete(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(482)
		int type = (int(this->type) & int((int)-17));		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(484)
		if (((bool((type == (int)1)) || bool((type == (int)8))))){
			HX_STACK_LINE(486)
			this->onEnd();
			HX_STACK_LINE(487)
			this->_secondsSinceStart = (this->duration + this->startDelay);
			HX_STACK_LINE(489)
			if (((type == (int)8))){
				HX_STACK_LINE(491)
				::flixel::tweens::FlxTween_obj::manager->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(495)
		if (((bool((type == (int)2)) || bool((type == (int)4))))){
			HX_STACK_LINE(497)
			this->_secondsSinceStart = (hx::Mod(((this->_secondsSinceStart - this->_delayToUse)),this->duration) + this->_delayToUse);
			HX_STACK_LINE(498)
			Float _g = ::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(498)
			Float _g1 = (Float(_g) / Float(this->duration));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(498)
			this->scale = _g1;
			HX_STACK_LINE(500)
			if (((bool((bool((this->ease_dyn() != null())) && bool((this->scale > (int)0)))) && bool((this->scale < (int)1))))){
				HX_STACK_LINE(502)
				Float _g2 = this->ease(this->scale);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(502)
				this->scale = _g2;
			}
			HX_STACK_LINE(505)
			if (((type == (int)4))){
				HX_STACK_LINE(507)
				this->backward = !(this->backward);
				HX_STACK_LINE(508)
				if ((this->backward)){
					HX_STACK_LINE(510)
					this->scale = ((int)1 - this->scale);
				}
			}
			HX_STACK_LINE(514)
			this->restart();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,finish,(void))

Void FlxTween_obj::onEnd( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","onEnd",0x854598fb,"flixel.tweens.FlxTween.onEnd","flixel/tweens/FlxTween.hx",522,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(523)
		this->set_active(false);
		HX_STACK_LINE(524)
		this->_running = false;
		HX_STACK_LINE(525)
		this->finished = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,onEnd,(void))

Void FlxTween_obj::restart( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","restart",0xf888468e,"flixel.tweens.FlxTween.restart","flixel/tweens/FlxTween.hx",534,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(534)
		if ((this->active)){
			HX_STACK_LINE(536)
			this->start();
		}
		else{
			HX_STACK_LINE(540)
			this->_waitingForRestart = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,restart,(void))

::flixel::tweens::FlxTween FlxTween_obj::setDelays( Dynamic StartDelay,Dynamic LoopDelay){
	HX_STACK_FRAME("flixel.tweens.FlxTween","setDelays",0x750c1d51,"flixel.tweens.FlxTween.setDelays","flixel/tweens/FlxTween.hx",551,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartDelay,"StartDelay")
	HX_STACK_ARG(LoopDelay,"LoopDelay")
	HX_STACK_LINE(552)
	this->set_startDelay((  (((StartDelay != null()))) ? Float(StartDelay) : Float((int)0) ));
	HX_STACK_LINE(553)
	this->set_loopDelay((  (((LoopDelay != null()))) ? Float(LoopDelay) : Float((int)0) ));
	HX_STACK_LINE(554)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTween_obj,setDelays,return )

Float FlxTween_obj::set_startDelay( Float value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_startDelay",0xdc7f879f,"flixel.tweens.FlxTween.set_startDelay","flixel/tweens/FlxTween.hx",558,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(559)
	Float dly = ::Math_obj::abs(value);		HX_STACK_VAR(dly,"dly");
	HX_STACK_LINE(560)
	if (((this->executions == (int)0))){
		HX_STACK_LINE(562)
		Float _g = ::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(562)
		Float _g1 = (Float(_g) / Float(this->duration));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(562)
		Float _g2 = (this->duration * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(562)
		Float _g3 = ::Math_obj::max((dly - this->startDelay),(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(562)
		Float _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(562)
		this->_secondsSinceStart = _g4;
		HX_STACK_LINE(563)
		this->_delayToUse = dly;
	}
	HX_STACK_LINE(565)
	return this->startDelay = dly;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_startDelay,return )

Float FlxTween_obj::set_loopDelay( Dynamic value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_loopDelay",0xc5954461,"flixel.tweens.FlxTween.set_loopDelay","flixel/tweens/FlxTween.hx",569,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(570)
	Float dly = ::Math_obj::abs(value);		HX_STACK_VAR(dly,"dly");
	HX_STACK_LINE(571)
	if (((this->executions > (int)0))){
		HX_STACK_LINE(573)
		Float _g = ::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(573)
		Float _g1 = (Float(_g) / Float(this->duration));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(573)
		Float _g2 = (this->duration * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(573)
		Float _g3 = ::Math_obj::max((dly - this->loopDelay),(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(573)
		Float _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(573)
		this->_secondsSinceStart = _g4;
		HX_STACK_LINE(574)
		this->_delayToUse = dly;
	}
	HX_STACK_LINE(576)
	return this->loopDelay = dly;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_loopDelay,return )

Float FlxTween_obj::get_percent( ){
	HX_STACK_FRAME("flixel.tweens.FlxTween","get_percent",0x9c57551b,"flixel.tweens.FlxTween.get_percent","flixel/tweens/FlxTween.hx",580,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_LINE(581)
	Float _g = ::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(581)
	return (Float(_g) / Float(this->duration));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,get_percent,return )

Float FlxTween_obj::set_percent( Float value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_percent",0xa6c45c27,"flixel.tweens.FlxTween.set_percent","flixel/tweens/FlxTween.hx",586,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(586)
	return this->_secondsSinceStart = ((this->duration * value) + this->_delayToUse);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_percent,return )

int FlxTween_obj::set_type( int value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_type",0x136d7018,"flixel.tweens.FlxTween.set_type","flixel/tweens/FlxTween.hx",590,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(591)
	if (((value == (int)0))){
		HX_STACK_LINE(593)
		value = (int)8;
	}
	else{
		HX_STACK_LINE(595)
		if (((value == (int)16))){
			HX_STACK_LINE(597)
			value = (int)17;
		}
	}
	HX_STACK_LINE(600)
	this->backward = (((int(value) & int((int)16))) > (int)0);
	HX_STACK_LINE(601)
	return this->type = value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_type,return )

bool FlxTween_obj::set_active( bool active){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_active",0x9ccb52a4,"flixel.tweens.FlxTween.set_active","flixel/tweens/FlxTween.hx",605,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(active,"active")
	HX_STACK_LINE(606)
	this->active = active;
	HX_STACK_LINE(608)
	if ((this->_waitingForRestart)){
		HX_STACK_LINE(609)
		this->restart();
	}
	HX_STACK_LINE(611)
	return active;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_active,return )

int FlxTween_obj::PERSIST;

int FlxTween_obj::LOOPING;

int FlxTween_obj::PINGPONG;

int FlxTween_obj::ONESHOT;

int FlxTween_obj::BACKWARD;

::flixel::tweens::FlxTweenManager FlxTween_obj::manager;

::flixel::tweens::misc::VarTween FlxTween_obj::tween( Dynamic Object,Dynamic Values,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","tween",0x6c51ab6a,"flixel.tweens.FlxTween.tween","flixel/tweens/FlxTween.hx",67,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Values,"Values")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(68)
		::flixel::tweens::misc::VarTween tween = ::flixel::tweens::misc::VarTween_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(69)
		tween->tween(Object,Values,Duration);
		HX_STACK_LINE(70)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_misc_VarTween(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTween_obj,tween,return )

::flixel::tweens::misc::NumTween FlxTween_obj::num( Float FromValue,Float ToValue,hx::Null< Float >  __o_Duration,Dynamic Options,Dynamic TweenFunction){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","num",0xa4425185,"flixel.tweens.FlxTween.num","flixel/tweens/FlxTween.hx",97,0x5d58d691)
	HX_STACK_ARG(FromValue,"FromValue")
	HX_STACK_ARG(ToValue,"ToValue")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
	HX_STACK_ARG(TweenFunction,"TweenFunction")
{
		HX_STACK_LINE(98)
		::flixel::tweens::misc::NumTween tween = ::flixel::tweens::misc::NumTween_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(99)
		tween->tween(FromValue,ToValue,Duration,TweenFunction);
		HX_STACK_LINE(100)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_misc_NumTween(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,num,return )

::flixel::tweens::misc::AngleTween FlxTween_obj::angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","angle",0x75c344d2,"flixel.tweens.FlxTween.angle","flixel/tweens/FlxTween.hx",122,0x5d58d691)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(FromAngle,"FromAngle")
	HX_STACK_ARG(ToAngle,"ToAngle")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(123)
		::flixel::tweens::misc::AngleTween tween = ::flixel::tweens::misc::AngleTween_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(124)
		tween->tween(FromAngle,ToAngle,Duration,Sprite);
		HX_STACK_LINE(125)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_misc_AngleTween(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,angle,return )

::flixel::tweens::misc::ColorTween FlxTween_obj::color( ::flixel::FlxSprite Sprite,hx::Null< Float >  __o_Duration,int FromColor,int ToColor,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","color",0x9d3d7262,"flixel.tweens.FlxTween.color","flixel/tweens/FlxTween.hx",147,0x5d58d691)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FromColor,"FromColor")
	HX_STACK_ARG(ToColor,"ToColor")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(148)
		::flixel::tweens::misc::ColorTween tween = ::flixel::tweens::misc::ColorTween_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(149)
		tween->tween(Duration,FromColor,ToColor,Sprite);
		HX_STACK_LINE(150)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_misc_ColorTween(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,color,return )

::flixel::tweens::motion::LinearMotion FlxTween_obj::linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","linearMotion",0xd656f2dc,"flixel.tweens.FlxTween.linearMotion","flixel/tweens/FlxTween.hx",175,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(176)
		::flixel::tweens::motion::LinearMotion tween = ::flixel::tweens::motion::LinearMotion_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(177)
		tween->setObject(Object);
		HX_STACK_LINE(178)
		tween->setMotion(FromX,FromY,ToX,ToY,DurationOrSpeed,UseDuration);
		HX_STACK_LINE(179)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_LinearMotion(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxTween_obj,linearMotion,return )

::flixel::tweens::motion::QuadMotion FlxTween_obj::quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","quadMotion",0xc62584fe,"flixel.tweens.FlxTween.quadMotion","flixel/tweens/FlxTween.hx",206,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ControlX,"ControlX")
	HX_STACK_ARG(ControlY,"ControlY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(207)
		::flixel::tweens::motion::QuadMotion tween = ::flixel::tweens::motion::QuadMotion_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(208)
		tween->setObject(Object);
		HX_STACK_LINE(209)
		tween->setMotion(FromX,FromY,ControlX,ControlY,ToX,ToY,DurationOrSpeed,UseDuration);
		HX_STACK_LINE(210)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_QuadMotion(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxTween_obj,quadMotion,return )

::flixel::tweens::motion::CubicMotion FlxTween_obj::cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","cubicMotion",0xa068755f,"flixel.tweens.FlxTween.cubicMotion","flixel/tweens/FlxTween.hx",238,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(aX,"aX")
	HX_STACK_ARG(aY,"aY")
	HX_STACK_ARG(bX,"bX")
	HX_STACK_ARG(bY,"bY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(239)
		::flixel::tweens::motion::CubicMotion tween = ::flixel::tweens::motion::CubicMotion_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(240)
		tween->setObject(Object);
		HX_STACK_LINE(241)
		tween->setMotion(FromX,FromY,aX,aY,bX,bY,ToX,ToY,Duration);
		HX_STACK_LINE(242)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_CubicMotion(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(FlxTween_obj,cubicMotion,return )

::flixel::tweens::motion::CircularMotion FlxTween_obj::circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","circularMotion",0x65e89916,"flixel.tweens.FlxTween.circularMotion","flixel/tweens/FlxTween.hx",268,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(CenterX,"CenterX")
	HX_STACK_ARG(CenterY,"CenterY")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Clockwise,"Clockwise")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(269)
		::flixel::tweens::motion::CircularMotion tween = ::flixel::tweens::motion::CircularMotion_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(270)
		tween->setObject(Object);
		HX_STACK_LINE(271)
		tween->setMotion(CenterX,CenterY,Radius,Angle,Clockwise,DurationOrSpeed,UseDuration);
		HX_STACK_LINE(272)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_CircularMotion(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxTween_obj,circularMotion,return )

::flixel::tweens::motion::LinearPath FlxTween_obj::linearPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","linearPath",0xd40abccb,"flixel.tweens.FlxTween.linearPath","flixel/tweens/FlxTween.hx",293,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Points,"Points")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(294)
		::flixel::tweens::motion::LinearPath tween = ::flixel::tweens::motion::LinearPath_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(296)
		if (((Points != null()))){
			HX_STACK_LINE(298)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(298)
			while((true)){
				HX_STACK_LINE(298)
				if ((!(((_g < Points->length))))){
					HX_STACK_LINE(298)
					break;
				}
				HX_STACK_LINE(298)
				::flixel::math::FlxPoint point = Points->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(298)
				++(_g);
				HX_STACK_LINE(300)
				tween->addPoint(point->x,point->y);
			}
		}
		HX_STACK_LINE(304)
		tween->setObject(Object);
		HX_STACK_LINE(305)
		tween->setMotion(DurationOrSpeed,UseDuration);
		HX_STACK_LINE(306)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_LinearPath(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,linearPath,return )

::flixel::tweens::motion::QuadPath FlxTween_obj::quadPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","quadPath",0x6abb226d,"flixel.tweens.FlxTween.quadPath","flixel/tweens/FlxTween.hx",327,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Points,"Points")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(328)
		::flixel::tweens::motion::QuadPath tween = ::flixel::tweens::motion::QuadPath_obj::__new(Options);		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(330)
		if (((Points != null()))){
			HX_STACK_LINE(332)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(332)
			while((true)){
				HX_STACK_LINE(332)
				if ((!(((_g < Points->length))))){
					HX_STACK_LINE(332)
					break;
				}
				HX_STACK_LINE(332)
				::flixel::math::FlxPoint point = Points->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(332)
				++(_g);
				HX_STACK_LINE(334)
				tween->addPoint(point->x,point->y);
			}
		}
		HX_STACK_LINE(338)
		tween->setObject(Object);
		HX_STACK_LINE(339)
		tween->setMotion(DurationOrSpeed,UseDuration);
		HX_STACK_LINE(340)
		return ::flixel::tweens::FlxTween_obj::manager->add_flixel_tweens_motion_QuadPath(tween,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,quadPath,return )


FlxTween_obj::FlxTween_obj()
{
}

void FlxTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTween);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(ease,"ease");
	HX_MARK_MEMBER_NAME(onStart,"onStart");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(backward,"backward");
	HX_MARK_MEMBER_NAME(executions,"executions");
	HX_MARK_MEMBER_NAME(startDelay,"startDelay");
	HX_MARK_MEMBER_NAME(loopDelay,"loopDelay");
	HX_MARK_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_MARK_MEMBER_NAME(_delayToUse,"_delayToUse");
	HX_MARK_MEMBER_NAME(_running,"_running");
	HX_MARK_MEMBER_NAME(_waitingForRestart,"_waitingForRestart");
	HX_MARK_END_CLASS();
}

void FlxTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(ease,"ease");
	HX_VISIT_MEMBER_NAME(onStart,"onStart");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(backward,"backward");
	HX_VISIT_MEMBER_NAME(executions,"executions");
	HX_VISIT_MEMBER_NAME(startDelay,"startDelay");
	HX_VISIT_MEMBER_NAME(loopDelay,"loopDelay");
	HX_VISIT_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_VISIT_MEMBER_NAME(_delayToUse,"_delayToUse");
	HX_VISIT_MEMBER_NAME(_running,"_running");
	HX_VISIT_MEMBER_NAME(_waitingForRestart,"_waitingForRestart");
}

Dynamic FlxTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { return num_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return onEnd_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"onStart") ) { return onStart; }
		if (HX_FIELD_EQ(inName,"percent") ) { return get_percent(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quadPath") ) { return quadPath_dyn(); }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"backward") ) { return backward; }
		if (HX_FIELD_EQ(inName,"_running") ) { return _running; }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopDelay") ) { return loopDelay; }
		if (HX_FIELD_EQ(inName,"setDelays") ) { return setDelays_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadMotion") ) { return quadMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"linearPath") ) { return linearPath_dyn(); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"executions") ) { return executions; }
		if (HX_FIELD_EQ(inName,"startDelay") ) { return startDelay; }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubicMotion") ) { return cubicMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"_delayToUse") ) { return _delayToUse; }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearMotion") ) { return linearMotion_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_loopDelay") ) { return set_loopDelay_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circularMotion") ) { return circularMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"set_startDelay") ) { return set_startDelay_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { return _secondsSinceStart; }
		if (HX_FIELD_EQ(inName,"_waitingForRestart") ) { return _waitingForRestart; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"resolveTweenOptions") ) { return resolveTweenOptions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp) return set_type(inValue);type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp) return set_active(inValue);active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::flixel::tweens::FlxTweenManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onStart") ) { onStart=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { return set_percent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backward") ) { backward=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_running") ) { _running=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopDelay") ) { if (inCallProp) return set_loopDelay(inValue);loopDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"executions") ) { executions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startDelay") ) { if (inCallProp) return set_startDelay(inValue);startDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_delayToUse") ) { _delayToUse=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { _secondsSinceStart=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitingForRestart") ) { _waitingForRestart=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("percent"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("backward"));
	outFields->push(HX_CSTRING("executions"));
	outFields->push(HX_CSTRING("startDelay"));
	outFields->push(HX_CSTRING("loopDelay"));
	outFields->push(HX_CSTRING("_secondsSinceStart"));
	outFields->push(HX_CSTRING("_delayToUse"));
	outFields->push(HX_CSTRING("_running"));
	outFields->push(HX_CSTRING("_waitingForRestart"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PERSIST"),
	HX_CSTRING("LOOPING"),
	HX_CSTRING("PINGPONG"),
	HX_CSTRING("ONESHOT"),
	HX_CSTRING("BACKWARD"),
	HX_CSTRING("manager"),
	HX_CSTRING("tween"),
	HX_CSTRING("num"),
	HX_CSTRING("angle"),
	HX_CSTRING("color"),
	HX_CSTRING("linearMotion"),
	HX_CSTRING("quadMotion"),
	HX_CSTRING("cubicMotion"),
	HX_CSTRING("circularMotion"),
	HX_CSTRING("linearPath"),
	HX_CSTRING("quadPath"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxTween_obj,active),HX_CSTRING("active")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,duration),HX_CSTRING("duration")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,ease),HX_CSTRING("ease")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,onStart),HX_CSTRING("onStart")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,onUpdate),HX_CSTRING("onUpdate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,onComplete),HX_CSTRING("onComplete")},
	{hx::fsInt,(int)offsetof(FlxTween_obj,type),HX_CSTRING("type")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,finished),HX_CSTRING("finished")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,scale),HX_CSTRING("scale")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,backward),HX_CSTRING("backward")},
	{hx::fsInt,(int)offsetof(FlxTween_obj,executions),HX_CSTRING("executions")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,startDelay),HX_CSTRING("startDelay")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,loopDelay),HX_CSTRING("loopDelay")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,_secondsSinceStart),HX_CSTRING("_secondsSinceStart")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,_delayToUse),HX_CSTRING("_delayToUse")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,_running),HX_CSTRING("_running")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,_waitingForRestart),HX_CSTRING("_waitingForRestart")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("active"),
	HX_CSTRING("duration"),
	HX_CSTRING("ease"),
	HX_CSTRING("onStart"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("type"),
	HX_CSTRING("finished"),
	HX_CSTRING("scale"),
	HX_CSTRING("backward"),
	HX_CSTRING("executions"),
	HX_CSTRING("startDelay"),
	HX_CSTRING("loopDelay"),
	HX_CSTRING("_secondsSinceStart"),
	HX_CSTRING("_delayToUse"),
	HX_CSTRING("_running"),
	HX_CSTRING("_waitingForRestart"),
	HX_CSTRING("resolveTweenOptions"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("start"),
	HX_CSTRING("cancel"),
	HX_CSTRING("finish"),
	HX_CSTRING("onEnd"),
	HX_CSTRING("restart"),
	HX_CSTRING("setDelays"),
	HX_CSTRING("set_startDelay"),
	HX_CSTRING("set_loopDelay"),
	HX_CSTRING("get_percent"),
	HX_CSTRING("set_percent"),
	HX_CSTRING("set_type"),
	HX_CSTRING("set_active"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_MARK_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_MARK_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_MARK_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

#endif

Class FlxTween_obj::__mClass;

void FlxTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.FlxTween"), hx::TCanCast< FlxTween_obj> ,sStaticFields,sMemberFields,
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

void FlxTween_obj::__boot()
{
	PERSIST= (int)1;
	LOOPING= (int)2;
	PINGPONG= (int)4;
	ONESHOT= (int)8;
	BACKWARD= (int)16;
}

} // end namespace flixel
} // end namespace tweens
