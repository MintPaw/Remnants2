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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
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
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace math{

Void FlxMath_obj::__construct()
{
	return null();
}

//FlxMath_obj::~FlxMath_obj() { }

Dynamic FlxMath_obj::__CreateEmpty() { return  new FlxMath_obj; }
hx::ObjectPtr< FlxMath_obj > FlxMath_obj::__new()
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

Dynamic FlxMath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

Float FlxMath_obj::MIN_VALUE_FLOAT;

Float FlxMath_obj::MAX_VALUE_FLOAT;

int FlxMath_obj::MIN_VALUE_INT;

int FlxMath_obj::MAX_VALUE_INT;

Float FlxMath_obj::SQUARE_ROOT_OF_TWO;

Float FlxMath_obj::EPSILON;

Float FlxMath_obj::roundDecimal( Float Value,int Precision){
	HX_STACK_FRAME("flixel.math.FlxMath","roundDecimal",0xaa14776b,"flixel.math.FlxMath.roundDecimal","flixel/math/FlxMath.hx",56,0x837802f8)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Precision,"Precision")
	HX_STACK_LINE(57)
	Float mult = (int)1;		HX_STACK_VAR(mult,"mult");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			if ((!(((_g < Precision))))){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(58)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(60)
			hx::MultEq(mult,(int)10);
		}
	}
	HX_STACK_LINE(62)
	int _g = ::Math_obj::round((Value * mult));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(62)
	return (Float(_g) / Float(mult));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,roundDecimal,return )

Float FlxMath_obj::bound( Float Value,Dynamic Min,Dynamic Max){
	HX_STACK_FRAME("flixel.math.FlxMath","bound",0xac2681b6,"flixel.math.FlxMath.bound","flixel/math/FlxMath.hx",76,0x837802f8)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_LINE(77)
	Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
	HX_STACK_LINE(77)
	if (((bool((Min != null())) && bool((Value < Min))))){
		HX_STACK_LINE(77)
		lowerBound = Min;
	}
	else{
		HX_STACK_LINE(77)
		lowerBound = Value;
	}
	HX_STACK_LINE(78)
	if (((bool((Max != null())) && bool((lowerBound > Max))))){
		HX_STACK_LINE(78)
		return Max;
	}
	else{
		HX_STACK_LINE(78)
		return lowerBound;
	}
	HX_STACK_LINE(78)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,bound,return )

Float FlxMath_obj::lerp( Float Min,Float Max,Float Ratio){
	HX_STACK_FRAME("flixel.math.FlxMath","lerp",0xfe2b17ff,"flixel.math.FlxMath.lerp","flixel/math/FlxMath.hx",91,0x837802f8)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Ratio,"Ratio")
	HX_STACK_LINE(91)
	return (Min + (Ratio * ((Max - Min))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,lerp,return )

bool FlxMath_obj::inBounds( Float Value,Dynamic Min,Dynamic Max){
	HX_STACK_FRAME("flixel.math.FlxMath","inBounds",0x4dfc39c2,"flixel.math.FlxMath.inBounds","flixel/math/FlxMath.hx",104,0x837802f8)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_LINE(104)
	return (bool(((bool((Min == null())) || bool((Value >= Min))))) && bool(((bool((Max == null())) || bool((Value <= Max))))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,inBounds,return )

bool FlxMath_obj::isOdd( Float n){
	HX_STACK_FRAME("flixel.math.FlxMath","isOdd",0xb67c8d5d,"flixel.math.FlxMath.isOdd","flixel/math/FlxMath.hx",114,0x837802f8)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(115)
	int _g = ::Std_obj::_int(n);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(115)
	int _g1 = (int(_g) & int((int)1));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(115)
	if (((_g1 != (int)0))){
		HX_STACK_LINE(117)
		return true;
	}
	else{
		HX_STACK_LINE(121)
		return false;
	}
	HX_STACK_LINE(115)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isOdd,return )

bool FlxMath_obj::isEven( Float n){
	HX_STACK_FRAME("flixel.math.FlxMath","isEven",0xeff0abac,"flixel.math.FlxMath.isEven","flixel/math/FlxMath.hx",132,0x837802f8)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(133)
	int _g = ::Std_obj::_int(n);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(133)
	int _g1 = (int(_g) & int((int)1));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(133)
	if (((_g1 != (int)0))){
		HX_STACK_LINE(135)
		return false;
	}
	else{
		HX_STACK_LINE(139)
		return true;
	}
	HX_STACK_LINE(133)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isEven,return )

int FlxMath_obj::numericComparison( Float num1,Float num2){
	HX_STACK_FRAME("flixel.math.FlxMath","numericComparison",0xd7f909ee,"flixel.math.FlxMath.numericComparison","flixel/math/FlxMath.hx",151,0x837802f8)
	HX_STACK_ARG(num1,"num1")
	HX_STACK_ARG(num2,"num2")
	HX_STACK_LINE(152)
	if (((num2 > num1))){
		HX_STACK_LINE(154)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(156)
		if (((num1 > num2))){
			HX_STACK_LINE(158)
			return (int)1;
		}
	}
	HX_STACK_LINE(160)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,numericComparison,return )

bool FlxMath_obj::pointInCoordinates( Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight){
	HX_STACK_FRAME("flixel.math.FlxMath","pointInCoordinates",0xc68dec2e,"flixel.math.FlxMath.pointInCoordinates","flixel/math/FlxMath.hx",176,0x837802f8)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rectX,"rectX")
	HX_STACK_ARG(rectY,"rectY")
	HX_STACK_ARG(rectWidth,"rectWidth")
	HX_STACK_ARG(rectHeight,"rectHeight")
	HX_STACK_LINE(177)
	if (((bool((pointX >= rectX)) && bool((pointX <= (rectX + rectWidth)))))){
		HX_STACK_LINE(179)
		if (((bool((pointY >= rectY)) && bool((pointY <= (rectY + rectHeight)))))){
			HX_STACK_LINE(181)
			return true;
		}
	}
	HX_STACK_LINE(184)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxMath_obj,pointInCoordinates,return )

bool FlxMath_obj::pointInFlxRect( Float pointX,Float pointY,::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.math.FlxMath","pointInFlxRect",0x061f0269,"flixel.math.FlxMath.pointInFlxRect","flixel/math/FlxMath.hx",196,0x837802f8)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(197)
	if (((bool((bool((bool((pointX >= rect->x)) && bool((pointX <= (rect->x + rect->width))))) && bool((pointY >= rect->y)))) && bool((pointY <= (rect->y + rect->height)))))){
		HX_STACK_LINE(199)
		return true;
	}
	HX_STACK_LINE(201)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInFlxRect,return )

bool FlxMath_obj::mouseInFlxRect( bool useWorldCoords,::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.math.FlxMath","mouseInFlxRect",0x130b3df4,"flixel.math.FlxMath.mouseInFlxRect","flixel/math/FlxMath.hx",214,0x837802f8)
	HX_STACK_ARG(useWorldCoords,"useWorldCoords")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(215)
	if (((rect == null()))){
		HX_STACK_LINE(217)
		return true;
	}
	HX_STACK_LINE(220)
	if ((useWorldCoords)){
		HX_STACK_LINE(222)
		int _g = ::Math_obj::floor(::flixel::FlxG_obj::mouse->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		int _g1 = ::Math_obj::floor(::flixel::FlxG_obj::mouse->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(222)
		return ::flixel::math::FlxMath_obj::pointInFlxRect(_g,_g1,rect);
	}
	else{
		HX_STACK_LINE(226)
		return ::flixel::math::FlxMath_obj::pointInFlxRect(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY,rect);
	}
	HX_STACK_LINE(220)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,mouseInFlxRect,return )

bool FlxMath_obj::pointInRectangle( Float pointX,Float pointY,::openfl::_v2::geom::Rectangle rect){
	HX_STACK_FRAME("flixel.math.FlxMath","pointInRectangle",0x49240aa2,"flixel.math.FlxMath.pointInRectangle","flixel/math/FlxMath.hx",240,0x837802f8)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rect,"rect")
	struct _Function_1_1{
		inline static bool Block( ::openfl::_v2::geom::Rectangle &rect,Float &pointX){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxMath.hx",241,0x837802f8)
			{
				HX_STACK_LINE(241)
				Float _g = rect->get_right();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(241)
				return (pointX <= _g);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( Float &pointY,::openfl::_v2::geom::Rectangle &rect){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxMath.hx",241,0x837802f8)
			{
				HX_STACK_LINE(241)
				Float _g1 = rect->get_bottom();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(241)
				return (pointY <= _g1);
			}
			return null();
		}
	};
	HX_STACK_LINE(241)
	if (((  (((  (((  (((pointX >= rect->x))) ? bool(_Function_1_1::Block(rect,pointX)) : bool(false) ))) ? bool((pointY >= rect->y)) : bool(false) ))) ? bool(_Function_1_2::Block(pointY,rect)) : bool(false) ))){
		HX_STACK_LINE(243)
		return true;
	}
	HX_STACK_LINE(245)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInRectangle,return )

int FlxMath_obj::maxAdd( int value,int amount,int max,hx::Null< int >  __o_min){
int min = __o_min.Default(0);
	HX_STACK_FRAME("flixel.math.FlxMath","maxAdd",0x4db55565,"flixel.math.FlxMath.maxAdd","flixel/math/FlxMath.hx",259,0x837802f8)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(min,"min")
{
		HX_STACK_LINE(260)
		hx::AddEq(value,amount);
		HX_STACK_LINE(262)
		if (((value > max))){
			HX_STACK_LINE(264)
			value = max;
		}
		else{
			HX_STACK_LINE(266)
			if (((value <= min))){
				HX_STACK_LINE(268)
				value = min;
			}
		}
		HX_STACK_LINE(271)
		return value;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,maxAdd,return )

int FlxMath_obj::wrapValue( int value,int amount,int max){
	HX_STACK_FRAME("flixel.math.FlxMath","wrapValue",0xea2ae6bf,"flixel.math.FlxMath.wrapValue","flixel/math/FlxMath.hx",283,0x837802f8)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(284)
	int output = (value + amount);		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(286)
	if (((output >= max))){
		HX_STACK_LINE(288)
		hx::ModEq(output,max);
	}
	HX_STACK_LINE(291)
	while((true)){
		HX_STACK_LINE(291)
		if ((!(((output < (int)0))))){
			HX_STACK_LINE(291)
			break;
		}
		HX_STACK_LINE(293)
		hx::AddEq(output,max);
	}
	HX_STACK_LINE(296)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,wrapValue,return )

Float FlxMath_obj::dotProduct( Float ax,Float ay,Float bx,Float by){
	HX_STACK_FRAME("flixel.math.FlxMath","dotProduct",0x8564032e,"flixel.math.FlxMath.dotProduct","flixel/math/FlxMath.hx",311,0x837802f8)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(311)
	return ((ax * bx) + (ay * by));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,dotProduct,return )

Float FlxMath_obj::vectorLength( Float dx,Float dy){
	HX_STACK_FRAME("flixel.math.FlxMath","vectorLength",0x2dfefb91,"flixel.math.FlxMath.vectorLength","flixel/math/FlxMath.hx",324,0x837802f8)
	HX_STACK_ARG(dx,"dx")
	HX_STACK_ARG(dy,"dy")
	HX_STACK_LINE(324)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,vectorLength,return )

Float FlxMath_obj::getDistance( ::flixel::math::FlxPoint Point1,::flixel::math::FlxPoint Point2){
	HX_STACK_FRAME("flixel.math.FlxMath","getDistance",0xcfd99163,"flixel.math.FlxMath.getDistance","flixel/math/FlxMath.hx",335,0x837802f8)
	HX_STACK_ARG(Point1,"Point1")
	HX_STACK_ARG(Point2,"Point2")
	HX_STACK_LINE(336)
	Float dx = (Point1->x - Point2->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(337)
	Float dy = (Point1->y - Point2->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(338)
	if ((Point1->_weak)){
		HX_STACK_LINE(338)
		Point1->put();
	}
	HX_STACK_LINE(339)
	if ((Point2->_weak)){
		HX_STACK_LINE(339)
		Point2->put();
	}
	HX_STACK_LINE(340)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,getDistance,return )

int FlxMath_obj::distanceBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB){
	HX_STACK_FRAME("flixel.math.FlxMath","distanceBetween",0x58607e8b,"flixel.math.FlxMath.distanceBetween","flixel/math/FlxMath.hx",351,0x837802f8)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_LINE(352)
	Float dx = ((SpriteA->x + SpriteA->origin->x) - ((SpriteB->x + SpriteB->origin->x)));		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(353)
	Float dy = ((SpriteA->y + SpriteA->origin->y) - ((SpriteB->y + SpriteB->origin->y)));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(354)
	Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(354)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceBetween,return )

bool FlxMath_obj::isDistanceWithin( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.math.FlxMath","isDistanceWithin",0x44c72392,"flixel.math.FlxMath.isDistanceWithin","flixel/math/FlxMath.hx",368,0x837802f8)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(369)
		Float dx = ((SpriteA->x + SpriteA->origin->x) - ((SpriteB->x + SpriteB->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(370)
		Float dy = ((SpriteA->y + SpriteA->origin->y) - ((SpriteB->y + SpriteB->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(372)
		if ((IncludeEqual)){
			HX_STACK_LINE(373)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(375)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(372)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceWithin,return )

int FlxMath_obj::distanceToPoint( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Target){
	HX_STACK_FRAME("flixel.math.FlxMath","distanceToPoint",0x84c0ed98,"flixel.math.FlxMath.distanceToPoint","flixel/math/FlxMath.hx",387,0x837802f8)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_LINE(388)
	Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(389)
	Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(390)
	if ((Target->_weak)){
		HX_STACK_LINE(390)
		Target->put();
	}
	HX_STACK_LINE(391)
	Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(391)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToPoint,return )

bool FlxMath_obj::isDistanceToPointWithin( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Target,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.math.FlxMath","isDistanceToPointWithin",0xb54ac0d9,"flixel.math.FlxMath.isDistanceToPointWithin","flixel/math/FlxMath.hx",406,0x837802f8)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(407)
		Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(408)
		Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(410)
		if ((Target->_weak)){
			HX_STACK_LINE(410)
			Target->put();
		}
		HX_STACK_LINE(412)
		if ((IncludeEqual)){
			HX_STACK_LINE(413)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(415)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(412)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToPointWithin,return )

int FlxMath_obj::distanceToMouse( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.math.FlxMath","distanceToMouse",0xca964f6d,"flixel.math.FlxMath.distanceToMouse","flixel/math/FlxMath.hx",426,0x837802f8)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(427)
	Float dx = ((Sprite->x + Sprite->origin->x) - ::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(428)
	Float dy = ((Sprite->y + Sprite->origin->y) - ::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(429)
	Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(429)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,distanceToMouse,return )

bool FlxMath_obj::isDistanceToMouseWithin( ::flixel::FlxSprite Sprite,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.math.FlxMath","isDistanceToMouseWithin",0xc43ab06e,"flixel.math.FlxMath.isDistanceToMouseWithin","flixel/math/FlxMath.hx",442,0x837802f8)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(443)
		Float dx = ((Sprite->x + Sprite->origin->x) - ::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(444)
		Float dy = ((Sprite->y + Sprite->origin->y) - ::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(446)
		if ((IncludeEqual)){
			HX_STACK_LINE(447)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(449)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(446)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,isDistanceToMouseWithin,return )

int FlxMath_obj::distanceToTouch( ::flixel::FlxSprite Sprite,::flixel::input::touch::FlxTouch Touch){
	HX_STACK_FRAME("flixel.math.FlxMath","distanceToTouch",0xd2645107,"flixel.math.FlxMath.distanceToTouch","flixel/math/FlxMath.hx",462,0x837802f8)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_LINE(463)
	Float dx = ((Sprite->x + Sprite->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(464)
	Float dy = ((Sprite->y + Sprite->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(465)
	Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(465)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToTouch,return )

bool FlxMath_obj::isDistanceToTouchWithin( ::flixel::FlxSprite Sprite,::flixel::input::touch::FlxTouch Touch,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.math.FlxMath","isDistanceToTouchWithin",0x33e8e188,"flixel.math.FlxMath.isDistanceToTouchWithin","flixel/math/FlxMath.hx",478,0x837802f8)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(479)
		Float dx = ((Sprite->x + Sprite->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(480)
		Float dy = ((Sprite->y + Sprite->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(482)
		if ((IncludeEqual)){
			HX_STACK_LINE(483)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(485)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(482)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToTouchWithin,return )

int FlxMath_obj::getDecimals( Float Number){
	HX_STACK_FRAME("flixel.math.FlxMath","getDecimals",0x764a48f0,"flixel.math.FlxMath.getDecimals","flixel/math/FlxMath.hx",496,0x837802f8)
	HX_STACK_ARG(Number,"Number")
	HX_STACK_LINE(497)
	Array< ::String > helperArray = ::Std_obj::string(Number).split(HX_CSTRING("."));		HX_STACK_VAR(helperArray,"helperArray");
	HX_STACK_LINE(498)
	int decimals = (int)0;		HX_STACK_VAR(decimals,"decimals");
	HX_STACK_LINE(500)
	if (((helperArray->length > (int)1))){
		HX_STACK_LINE(502)
		decimals = helperArray->__get((int)1).length;
	}
	HX_STACK_LINE(505)
	return decimals;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,getDecimals,return )

bool FlxMath_obj::equal( Float aValueA,Float aValueB,hx::Null< Float >  __o_aDiff){
Float aDiff = __o_aDiff.Default(0.0000001);
	HX_STACK_FRAME("flixel.math.FlxMath","equal",0x67aca12c,"flixel.math.FlxMath.equal","flixel/math/FlxMath.hx",509,0x837802f8)
	HX_STACK_ARG(aValueA,"aValueA")
	HX_STACK_ARG(aValueB,"aValueB")
	HX_STACK_ARG(aDiff,"aDiff")
{
		HX_STACK_LINE(510)
		Float _g = ::Math_obj::abs((aValueA - aValueB));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(510)
		return (_g <= aDiff);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,equal,return )

int FlxMath_obj::signOf( Float f){
	HX_STACK_FRAME("flixel.math.FlxMath","signOf",0x43f3963c,"flixel.math.FlxMath.signOf","flixel/math/FlxMath.hx",518,0x837802f8)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(518)
	if (((f < (int)0))){
		HX_STACK_LINE(518)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(518)
		return (int)1;
	}
	HX_STACK_LINE(518)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,signOf,return )

bool FlxMath_obj::sameSign( Float f1,Float f2){
	HX_STACK_FRAME("flixel.math.FlxMath","sameSign",0xc637544b,"flixel.math.FlxMath.sameSign","flixel/math/FlxMath.hx",526,0x837802f8)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(526)
	return (((  (((f1 < (int)0))) ? int((int)-1) : int((int)1) )) == ((  (((f2 < (int)0))) ? int((int)-1) : int((int)1) )));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,sameSign,return )

Float FlxMath_obj::sinh( Float f){
	HX_STACK_FRAME("flixel.math.FlxMath","sinh",0x02ce9bd8,"flixel.math.FlxMath.sinh","flixel/math/FlxMath.hx",533,0x837802f8)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(534)
	Float _g = ::Math_obj::exp(f);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(534)
	Float _g1 = ::Math_obj::exp(-(f));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(534)
	Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(534)
	return (Float(_g2) / Float((int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,sinh,return )


FlxMath_obj::FlxMath_obj()
{
}

Dynamic FlxMath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"sinh") ) { return sinh_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"isOdd") ) { return isOdd_dyn(); }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isEven") ) { return isEven_dyn(); }
		if (HX_FIELD_EQ(inName,"maxAdd") ) { return maxAdd_dyn(); }
		if (HX_FIELD_EQ(inName,"signOf") ) { return signOf_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inBounds") ) { return inBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"sameSign") ) { return sameSign_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapValue") ) { return wrapValue_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDistance") ) { return getDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"getDecimals") ) { return getDecimals_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"roundDecimal") ) { return roundDecimal_dyn(); }
		if (HX_FIELD_EQ(inName,"vectorLength") ) { return vectorLength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointInFlxRect") ) { return pointInFlxRect_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseInFlxRect") ) { return mouseInFlxRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceBetween") ) { return distanceBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { return distanceToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToMouse") ) { return distanceToMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToTouch") ) { return distanceToTouch_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pointInRectangle") ) { return pointInRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceWithin") ) { return isDistanceWithin_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericComparison") ) { return numericComparison_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointInCoordinates") ) { return pointInCoordinates_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"isDistanceToPointWithin") ) { return isDistanceToPointWithin_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceToMouseWithin") ) { return isDistanceToMouseWithin_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceToTouchWithin") ) { return isDistanceToTouchWithin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMath_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MIN_VALUE_FLOAT"),
	HX_CSTRING("MAX_VALUE_FLOAT"),
	HX_CSTRING("MIN_VALUE_INT"),
	HX_CSTRING("MAX_VALUE_INT"),
	HX_CSTRING("SQUARE_ROOT_OF_TWO"),
	HX_CSTRING("EPSILON"),
	HX_CSTRING("roundDecimal"),
	HX_CSTRING("bound"),
	HX_CSTRING("lerp"),
	HX_CSTRING("inBounds"),
	HX_CSTRING("isOdd"),
	HX_CSTRING("isEven"),
	HX_CSTRING("numericComparison"),
	HX_CSTRING("pointInCoordinates"),
	HX_CSTRING("pointInFlxRect"),
	HX_CSTRING("mouseInFlxRect"),
	HX_CSTRING("pointInRectangle"),
	HX_CSTRING("maxAdd"),
	HX_CSTRING("wrapValue"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("vectorLength"),
	HX_CSTRING("getDistance"),
	HX_CSTRING("distanceBetween"),
	HX_CSTRING("isDistanceWithin"),
	HX_CSTRING("distanceToPoint"),
	HX_CSTRING("isDistanceToPointWithin"),
	HX_CSTRING("distanceToMouse"),
	HX_CSTRING("isDistanceToMouseWithin"),
	HX_CSTRING("distanceToTouch"),
	HX_CSTRING("isDistanceToTouchWithin"),
	HX_CSTRING("getDecimals"),
	HX_CSTRING("equal"),
	HX_CSTRING("signOf"),
	HX_CSTRING("sameSign"),
	HX_CSTRING("sinh"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE_FLOAT,"MIN_VALUE_FLOAT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE_FLOAT,"MAX_VALUE_FLOAT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE_INT,"MIN_VALUE_INT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE_INT,"MAX_VALUE_INT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
	HX_MARK_MEMBER_NAME(FlxMath_obj::EPSILON,"EPSILON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE_FLOAT,"MIN_VALUE_FLOAT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE_FLOAT,"MAX_VALUE_FLOAT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE_INT,"MIN_VALUE_INT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE_INT,"MAX_VALUE_INT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::EPSILON,"EPSILON");
};

#endif

Class FlxMath_obj::__mClass;

void FlxMath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.math.FlxMath"), hx::TCanCast< FlxMath_obj> ,sStaticFields,sMemberFields,
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

void FlxMath_obj::__boot()
{
	MIN_VALUE_FLOAT= 5e-324;
	MAX_VALUE_FLOAT= 1.79e+308;
	MIN_VALUE_INT= (int)-2147483647;
	MAX_VALUE_INT= (int)2147483647;
	SQUARE_ROOT_OF_TWO= 1.41421356237;
	EPSILON= 0.0000001;
}

} // end namespace flixel
} // end namespace math
