#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
namespace math{

Void FlxAngle_obj::__construct()
{
	return null();
}

//FlxAngle_obj::~FlxAngle_obj() { }

Dynamic FlxAngle_obj::__CreateEmpty() { return  new FlxAngle_obj; }
hx::ObjectPtr< FlxAngle_obj > FlxAngle_obj::__new()
{  hx::ObjectPtr< FlxAngle_obj > result = new FlxAngle_obj();
	result->__construct();
	return result;}

Dynamic FlxAngle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAngle_obj > result = new FlxAngle_obj();
	result->__construct();
	return result;}

Array< Float > FlxAngle_obj::cosTable;

Array< Float > FlxAngle_obj::sinTable;

Void FlxAngle_obj::sinCosGenerator( int length,hx::Null< Float >  __o_sinAmplitude,hx::Null< Float >  __o_cosAmplitude,hx::Null< Float >  __o_frequency){
Float sinAmplitude = __o_sinAmplitude.Default(1.0);
Float cosAmplitude = __o_cosAmplitude.Default(1.0);
Float frequency = __o_frequency.Default(1.0);
	HX_STACK_FRAME("flixel.math.FlxAngle","sinCosGenerator",0x13cbbbcb,"flixel.math.FlxAngle.sinCosGenerator","flixel/math/FlxAngle.hx",47,0x32e99189)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(sinAmplitude,"sinAmplitude")
	HX_STACK_ARG(cosAmplitude,"cosAmplitude")
	HX_STACK_ARG(frequency,"frequency")
{
		HX_STACK_LINE(48)
		Float sin = sinAmplitude;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(49)
		Float cos = cosAmplitude;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(50)
		Float frq = (Float((frequency * ::Math_obj::PI)) / Float(length));		HX_STACK_VAR(frq,"frq");
		HX_STACK_LINE(52)
		Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		::flixel::math::FlxAngle_obj::cosTable = _g;
		HX_STACK_LINE(53)
		Array< Float > _g1 = Array_obj< Float >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		::flixel::math::FlxAngle_obj::sinTable = _g1;
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(55)
			while((true)){
				HX_STACK_LINE(55)
				if ((!(((_g2 < length))))){
					HX_STACK_LINE(55)
					break;
				}
				HX_STACK_LINE(55)
				int c = (_g2)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(57)
				hx::SubEq(cos,(sin * frq));
				HX_STACK_LINE(58)
				hx::AddEq(sin,(cos * frq));
				HX_STACK_LINE(60)
				::flixel::math::FlxAngle_obj::cosTable[c] = cos;
				HX_STACK_LINE(61)
				::flixel::math::FlxAngle_obj::sinTable[c] = sin;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxAngle_obj,sinCosGenerator,(void))

Float FlxAngle_obj::wrapAngle( Float angle){
	HX_STACK_FRAME("flixel.math.FlxAngle","wrapAngle",0xae3043f0,"flixel.math.FlxAngle.wrapAngle","flixel/math/FlxAngle.hx",74,0x32e99189)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(75)
	if (((angle > (int)180))){
		HX_STACK_LINE(77)
		angle = (int)-180;
	}
	else{
		HX_STACK_LINE(79)
		if (((angle < (int)-180))){
			HX_STACK_LINE(81)
			angle = (int)180;
		}
	}
	HX_STACK_LINE(84)
	return angle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,wrapAngle,return )

Float FlxAngle_obj::angleLimit( Float angle,Float min,Float max){
	HX_STACK_FRAME("flixel.math.FlxAngle","angleLimit",0x6d448641,"flixel.math.FlxAngle.angleLimit","flixel/math/FlxAngle.hx",97,0x32e99189)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(98)
	if (((angle > max))){
		HX_STACK_LINE(100)
		angle = max;
	}
	else{
		HX_STACK_LINE(102)
		if (((angle < min))){
			HX_STACK_LINE(104)
			angle = min;
		}
	}
	HX_STACK_LINE(107)
	return angle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleLimit,return )

Float FlxAngle_obj::asDegrees( Float radians){
	HX_STACK_FRAME("flixel.math.FlxAngle","asDegrees",0x8ea59f1c,"flixel.math.FlxAngle.asDegrees","flixel/math/FlxAngle.hx",119,0x32e99189)
	HX_STACK_ARG(radians,"radians")
	HX_STACK_LINE(119)
	return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asDegrees,return )

Float FlxAngle_obj::asRadians( Float degrees){
	HX_STACK_FRAME("flixel.math.FlxAngle","asRadians",0x7b3b01e7,"flixel.math.FlxAngle.asRadians","flixel/math/FlxAngle.hx",131,0x32e99189)
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(131)
	return (degrees * ((Float(::Math_obj::PI) / Float((int)180))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asRadians,return )

Float FlxAngle_obj::angleBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleBetween",0x83e3464e,"flixel.math.FlxAngle.angleBetween","flixel/math/FlxAngle.hx",144,0x32e99189)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(145)
		Float dx = ((SpriteB->x + SpriteB->origin->x) - ((SpriteA->x + SpriteA->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(146)
		Float dy = ((SpriteB->y + SpriteB->origin->y) - ((SpriteA->y + SpriteA->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(148)
		if ((AsDegrees)){
			HX_STACK_LINE(149)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(149)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(151)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(148)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetween,return )

Float FlxAngle_obj::angleBetweenPoint( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Target,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleBetweenPoint",0x0a124322,"flixel.math.FlxAngle.angleBetweenPoint","flixel/math/FlxAngle.hx",164,0x32e99189)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(165)
		Float dx = (Target->x - ((Sprite->x + Sprite->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(166)
		Float dy = (Target->y - ((Sprite->y + Sprite->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(168)
		if ((AsDegrees)){
			HX_STACK_LINE(169)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(169)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(171)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(168)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenPoint,return )

Float FlxAngle_obj::angleBetweenMouse( ::flixel::FlxObject Object,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleBetweenMouse",0x4fe7a4f7,"flixel.math.FlxAngle.angleBetweenMouse","flixel/math/FlxAngle.hx",184,0x32e99189)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(186)
		if (((Object == null()))){
			HX_STACK_LINE(187)
			return (int)0;
		}
		HX_STACK_LINE(189)
		::flixel::math::FlxPoint p = Object->getScreenPosition(null(),null());		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(191)
		Float dx = (::flixel::FlxG_obj::mouse->screenX - p->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(192)
		Float dy = (::flixel::FlxG_obj::mouse->screenY - p->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(194)
		if ((AsDegrees)){
			HX_STACK_LINE(195)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(195)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(197)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(194)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleBetweenMouse,return )

Float FlxAngle_obj::angleBetweenTouch( ::flixel::FlxObject Object,::flixel::input::touch::FlxTouch Touch,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleBetweenTouch",0x57b5a691,"flixel.math.FlxAngle.angleBetweenTouch","flixel/math/FlxAngle.hx",212,0x32e99189)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(214)
		::flixel::math::FlxPoint p = Object->getScreenPosition(null(),null());		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(216)
		Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(217)
		Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(219)
		if ((AsDegrees)){
			HX_STACK_LINE(220)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(220)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(222)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(219)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenTouch,return )

Float FlxAngle_obj::angleFromFacing( ::flixel::FlxSprite Sprite,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleFromFacing",0x8474a75e,"flixel.math.FlxAngle.angleFromFacing","flixel/math/FlxAngle.hx",230,0x32e99189)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(231)
		int degrees;		HX_STACK_VAR(degrees,"degrees");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			int _g = Sprite->facing;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				int f = _g;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(231)
				int f1 = _g;		HX_STACK_VAR(f1,"f1");
				HX_STACK_LINE(231)
				int f2 = _g;		HX_STACK_VAR(f2,"f2");
				HX_STACK_LINE(231)
				int f3 = _g;		HX_STACK_VAR(f3,"f3");
				HX_STACK_LINE(231)
				switch( (int)(_g)){
					case (int)1: {
						HX_STACK_LINE(233)
						degrees = (int)180;
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(234)
						degrees = (int)0;
					}
					;break;
					case (int)256: {
						HX_STACK_LINE(235)
						degrees = (int)-90;
					}
					;break;
					case (int)4096: {
						HX_STACK_LINE(236)
						degrees = (int)90;
					}
					;break;
					default: {
						HX_STACK_LINE(237)
						if (((f == (int)257))){
							HX_STACK_LINE(237)
							degrees = (int)-135;
						}
						else{
							HX_STACK_LINE(238)
							if (((f1 == (int)272))){
								HX_STACK_LINE(238)
								degrees = (int)-45;
							}
							else{
								HX_STACK_LINE(239)
								if (((f2 == (int)4097))){
									HX_STACK_LINE(239)
									degrees = (int)135;
								}
								else{
									HX_STACK_LINE(240)
									if (((f3 == (int)4112))){
										HX_STACK_LINE(240)
										degrees = (int)45;
									}
									else{
										HX_STACK_LINE(241)
										degrees = (int)0;
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(243)
		if ((AsDegrees)){
			HX_STACK_LINE(243)
			return degrees;
		}
		else{
			HX_STACK_LINE(243)
			return (degrees * ((Float(::Math_obj::PI) / Float((int)180))));
		}
		HX_STACK_LINE(243)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleFromFacing,return )

::flixel::math::FlxPoint FlxAngle_obj::getCartesianCoords( Float Radius,Float Angle,::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxAngle","getCartesianCoords",0x688d1f29,"flixel.math.FlxAngle.getCartesianCoords","flixel/math/FlxAngle.hx",256,0x32e99189)
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(257)
	::flixel::math::FlxPoint p = point;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(258)
	if (((p == null()))){
		HX_STACK_LINE(260)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(260)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(260)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(260)
			point1->_inPool = false;
			HX_STACK_LINE(260)
			_g = point1;
		}
		HX_STACK_LINE(260)
		p = _g;
	}
	HX_STACK_LINE(263)
	Float _g1 = ::Math_obj::cos((Angle * ((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(263)
	Float _g2 = (Radius * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(263)
	p->set_x(_g2);
	HX_STACK_LINE(264)
	Float _g3 = ::Math_obj::sin((Angle * ((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(264)
	Float _g4 = (Radius * _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(264)
	p->set_y(_g4);
	HX_STACK_LINE(265)
	return p;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getCartesianCoords,return )

::flixel::math::FlxPoint FlxAngle_obj::getPolarCoords( Float X,Float Y,::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxAngle","getPolarCoords",0xf74e15df,"flixel.math.FlxAngle.getPolarCoords","flixel/math/FlxAngle.hx",277,0x32e99189)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(278)
	::flixel::math::FlxPoint p = point;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(279)
	if (((p == null()))){
		HX_STACK_LINE(281)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(281)
		{
			HX_STACK_LINE(281)
			Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
			HX_STACK_LINE(281)
			Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
			HX_STACK_LINE(281)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(281)
			point1->_inPool = false;
			HX_STACK_LINE(281)
			_g = point1;
		}
		HX_STACK_LINE(281)
		p = _g;
	}
	HX_STACK_LINE(284)
	Float _g1 = ::Math_obj::sqrt(((X * X) + (Y * Y)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(284)
	p->set_x(_g1);
	HX_STACK_LINE(285)
	Float _g2 = ::Math_obj::atan2(Y,X);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(285)
	Float _g3 = (_g2 * ((Float((int)180) / Float(::Math_obj::PI))));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(285)
	p->set_y(_g3);
	HX_STACK_LINE(286)
	return p;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getPolarCoords,return )

Float FlxAngle_obj::get_TO_DEG( ){
	HX_STACK_FRAME("flixel.math.FlxAngle","get_TO_DEG",0x36e6a544,"flixel.math.FlxAngle.get_TO_DEG","flixel/math/FlxAngle.hx",291,0x32e99189)
	HX_STACK_LINE(291)
	return (Float((int)180) / Float(::Math_obj::PI));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_DEG,return )

Float FlxAngle_obj::get_TO_RAD( ){
	HX_STACK_FRAME("flixel.math.FlxAngle","get_TO_RAD",0x36f14153,"flixel.math.FlxAngle.get_TO_RAD","flixel/math/FlxAngle.hx",296,0x32e99189)
	HX_STACK_LINE(296)
	return (Float(::Math_obj::PI) / Float((int)180));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_RAD,return )


FlxAngle_obj::FlxAngle_obj()
{
}

Dynamic FlxAngle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"TO_DEG") ) { return get_TO_DEG(); }
		if (HX_FIELD_EQ(inName,"TO_RAD") ) { return get_TO_RAD(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cosTable") ) { return cosTable; }
		if (HX_FIELD_EQ(inName,"sinTable") ) { return sinTable; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapAngle") ) { return wrapAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"asDegrees") ) { return asDegrees_dyn(); }
		if (HX_FIELD_EQ(inName,"asRadians") ) { return asRadians_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleLimit") ) { return angleLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TO_DEG") ) { return get_TO_DEG_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TO_RAD") ) { return get_TO_RAD_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return angleBetween_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPolarCoords") ) { return getPolarCoords_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sinCosGenerator") ) { return sinCosGenerator_dyn(); }
		if (HX_FIELD_EQ(inName,"angleFromFacing") ) { return angleFromFacing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"angleBetweenPoint") ) { return angleBetweenPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenMouse") ) { return angleBetweenMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenTouch") ) { return angleBetweenTouch_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCartesianCoords") ) { return getCartesianCoords_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAngle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"cosTable") ) { cosTable=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sinTable") ) { sinTable=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAngle_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cosTable"),
	HX_CSTRING("sinTable"),
	HX_CSTRING("sinCosGenerator"),
	HX_CSTRING("wrapAngle"),
	HX_CSTRING("angleLimit"),
	HX_CSTRING("asDegrees"),
	HX_CSTRING("asRadians"),
	HX_CSTRING("angleBetween"),
	HX_CSTRING("angleBetweenPoint"),
	HX_CSTRING("angleBetweenMouse"),
	HX_CSTRING("angleBetweenTouch"),
	HX_CSTRING("angleFromFacing"),
	HX_CSTRING("getCartesianCoords"),
	HX_CSTRING("getPolarCoords"),
	HX_CSTRING("get_TO_DEG"),
	HX_CSTRING("get_TO_RAD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::cosTable,"cosTable");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::sinTable,"sinTable");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::cosTable,"cosTable");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::sinTable,"sinTable");
};

#endif

Class FlxAngle_obj::__mClass;

void FlxAngle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.math.FlxAngle"), hx::TCanCast< FlxAngle_obj> ,sStaticFields,sMemberFields,
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

void FlxAngle_obj::__boot()
{
	cosTable= Array_obj< Float >::__new();
	sinTable= Array_obj< Float >::__new();
}

} // end namespace flixel
} // end namespace math
