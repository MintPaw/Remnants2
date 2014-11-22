#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace flixel{
namespace math{

Void FlxPoint_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("flixel.math.FlxPoint","new",0x5991ca64,"flixel.math.FlxPoint.new","flixel/math/FlxPoint.hx",13,0xb3e1cd2c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(54)
	this->_inPool = false;
	HX_STACK_LINE(53)
	this->_weak = false;
	HX_STACK_LINE(51)
	this->y = (int)0;
	HX_STACK_LINE(50)
	this->x = (int)0;
	HX_STACK_LINE(58)
	this->set(X,Y);
}
;
	return null();
}

//FlxPoint_obj::~FlxPoint_obj() { }

Dynamic FlxPoint_obj::__CreateEmpty() { return  new FlxPoint_obj; }
hx::ObjectPtr< FlxPoint_obj > FlxPoint_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< FlxPoint_obj > result = new FlxPoint_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic FlxPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPoint_obj > result = new FlxPoint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxPoint_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxPooled_obj)) return operator ::flixel::util::IFlxPooled_obj *();
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxPoint_obj::put( ){
{
		HX_STACK_FRAME("flixel.math.FlxPoint","put",0x59935cd3,"flixel.math.FlxPoint.put","flixel/math/FlxPoint.hx",66,0xb3e1cd2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		if ((!(this->_inPool))){
			HX_STACK_LINE(68)
			this->_inPool = true;
			HX_STACK_LINE(69)
			this->_weak = false;
			HX_STACK_LINE(70)
			::flixel::math::FlxPoint_obj::_pool->putUnsafe(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,put,(void))

Void FlxPoint_obj::putWeak( ){
{
		HX_STACK_FRAME("flixel.math.FlxPoint","putWeak",0xb3cc4aeb,"flixel.math.FlxPoint.putWeak","flixel/math/FlxPoint.hx",79,0xb3e1cd2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		if ((this->_weak)){
			HX_STACK_LINE(81)
			this->put();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,putWeak,(void))

::flixel::math::FlxPoint FlxPoint_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxPoint","set",0x599595a6,"flixel.math.FlxPoint.set","flixel/math/FlxPoint.hx",93,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(94)
		this->set_x(X);
		HX_STACK_LINE(95)
		this->set_y(Y);
		HX_STACK_LINE(96)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,set,return )

::flixel::math::FlxPoint FlxPoint_obj::add( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxPoint","add",0x5987ec25,"flixel.math.FlxPoint.add","flixel/math/FlxPoint.hx",107,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			_g->set_x((_g->x + X));
		}
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(109)
			_g->set_y((_g->y + Y));
		}
		HX_STACK_LINE(110)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,add,return )

::flixel::math::FlxPoint FlxPoint_obj::addPoint( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","addPoint",0x1b3211eb,"flixel.math.FlxPoint.addPoint","flixel/math/FlxPoint.hx",120,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		_g->set_x((_g->x + point->x));
	}
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		_g->set_y((_g->y + point->y));
	}
	HX_STACK_LINE(123)
	if ((point->_weak)){
		HX_STACK_LINE(123)
		point->put();
	}
	HX_STACK_LINE(124)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,addPoint,return )

::flixel::math::FlxPoint FlxPoint_obj::subtract( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxPoint","subtract",0xd356ac90,"flixel.math.FlxPoint.subtract","flixel/math/FlxPoint.hx",135,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(136)
			_g->set_x((_g->x - X));
		}
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			_g->set_y((_g->y - Y));
		}
		HX_STACK_LINE(138)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,subtract,return )

::flixel::math::FlxPoint FlxPoint_obj::subtractPoint( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","subtractPoint",0xa41aeda0,"flixel.math.FlxPoint.subtractPoint","flixel/math/FlxPoint.hx",148,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		_g->set_x((_g->x - point->x));
	}
	HX_STACK_LINE(150)
	{
		HX_STACK_LINE(150)
		::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		_g->set_y((_g->y - point->y));
	}
	HX_STACK_LINE(151)
	if ((point->_weak)){
		HX_STACK_LINE(151)
		point->put();
	}
	HX_STACK_LINE(152)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,subtractPoint,return )

::flixel::math::FlxPoint FlxPoint_obj::copyFrom( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","copyFrom",0xa3a6433b,"flixel.math.FlxPoint.copyFrom","flixel/math/FlxPoint.hx",162,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(163)
	this->set_x(point->x);
	HX_STACK_LINE(164)
	this->set_y(point->y);
	HX_STACK_LINE(165)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFrom,return )

::flixel::math::FlxPoint FlxPoint_obj::copyTo( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","copyTo",0x56123d0c,"flixel.math.FlxPoint.copyTo","flixel/math/FlxPoint.hx",175,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(176)
	if (((point == null()))){
		HX_STACK_LINE(178)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(178)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(178)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(178)
			point1->_inPool = false;
			HX_STACK_LINE(178)
			_g = point1;
		}
		HX_STACK_LINE(178)
		point = _g;
	}
	HX_STACK_LINE(180)
	point->set_x(this->x);
	HX_STACK_LINE(181)
	point->set_y(this->y);
	HX_STACK_LINE(182)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyTo,return )

::flixel::math::FlxPoint FlxPoint_obj::copyFromFlash( ::openfl::_v2::geom::Point FlashPoint){
	HX_STACK_FRAME("flixel.math.FlxPoint","copyFromFlash",0x788ecc75,"flixel.math.FlxPoint.copyFromFlash","flixel/math/FlxPoint.hx",192,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashPoint,"FlashPoint")
	HX_STACK_LINE(193)
	this->set_x(FlashPoint->x);
	HX_STACK_LINE(194)
	this->set_y(FlashPoint->y);
	HX_STACK_LINE(195)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFromFlash,return )

::openfl::_v2::geom::Point FlxPoint_obj::copyToFlash( ::openfl::_v2::geom::Point FlashPoint){
	HX_STACK_FRAME("flixel.math.FlxPoint","copyToFlash",0x8fb29d04,"flixel.math.FlxPoint.copyToFlash","flixel/math/FlxPoint.hx",205,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashPoint,"FlashPoint")
	HX_STACK_LINE(206)
	if (((FlashPoint == null()))){
		HX_STACK_LINE(208)
		::openfl::_v2::geom::Point _g = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(208)
		FlashPoint = _g;
	}
	HX_STACK_LINE(211)
	FlashPoint->x = this->x;
	HX_STACK_LINE(212)
	FlashPoint->y = this->y;
	HX_STACK_LINE(213)
	return FlashPoint;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyToFlash,return )

bool FlxPoint_obj::inCoords( Float RectX,Float RectY,Float RectWidth,Float RectHeight){
	HX_STACK_FRAME("flixel.math.FlxPoint","inCoords",0x2c48255f,"flixel.math.FlxPoint.inCoords","flixel/math/FlxPoint.hx",227,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RectX,"RectX")
	HX_STACK_ARG(RectY,"RectY")
	HX_STACK_ARG(RectWidth,"RectWidth")
	HX_STACK_ARG(RectHeight,"RectHeight")
	HX_STACK_LINE(227)
	return ::flixel::math::FlxMath_obj::pointInCoordinates(this->x,this->y,RectX,RectY,RectWidth,RectHeight);
}


HX_DEFINE_DYNAMIC_FUNC4(FlxPoint_obj,inCoords,return )

bool FlxPoint_obj::inFlxRect( ::flixel::math::FlxRect Rect){
	HX_STACK_FRAME("flixel.math.FlxPoint","inFlxRect",0xf5fbf655,"flixel.math.FlxPoint.inFlxRect","flixel/math/FlxPoint.hx",238,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(238)
	return ::flixel::math::FlxMath_obj::pointInFlxRect(this->x,this->y,Rect);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,inFlxRect,return )

Float FlxPoint_obj::distanceTo( ::flixel::math::FlxPoint AnotherPoint){
	HX_STACK_FRAME("flixel.math.FlxPoint","distanceTo",0xac8be28c,"flixel.math.FlxPoint.distanceTo","flixel/math/FlxPoint.hx",249,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AnotherPoint,"AnotherPoint")
	HX_STACK_LINE(249)
	Float dx = (this->x - AnotherPoint->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(249)
	Float dy = (this->y - AnotherPoint->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(249)
	if ((this->_weak)){
		HX_STACK_LINE(249)
		this->put();
	}
	HX_STACK_LINE(249)
	if ((AnotherPoint->_weak)){
		HX_STACK_LINE(249)
		AnotherPoint->put();
	}
	HX_STACK_LINE(249)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,distanceTo,return )

::flixel::math::FlxPoint FlxPoint_obj::floor( ){
	HX_STACK_FRAME("flixel.math.FlxPoint","floor",0xa2ca54d0,"flixel.math.FlxPoint.floor","flixel/math/FlxPoint.hx",256,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	int _g = ::Math_obj::floor(this->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(257)
	this->set_x(_g);
	HX_STACK_LINE(258)
	int _g1 = ::Math_obj::floor(this->y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(258)
	this->set_y(_g1);
	HX_STACK_LINE(259)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,floor,return )

::flixel::math::FlxPoint FlxPoint_obj::ceil( ){
	HX_STACK_FRAME("flixel.math.FlxPoint","ceil",0xfeb9e881,"flixel.math.FlxPoint.ceil","flixel/math/FlxPoint.hx",266,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	int _g = ::Math_obj::ceil(this->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(267)
	this->set_x(_g);
	HX_STACK_LINE(268)
	int _g1 = ::Math_obj::ceil(this->y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(268)
	this->set_y(_g1);
	HX_STACK_LINE(269)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,ceil,return )

::flixel::math::FlxPoint FlxPoint_obj::rotate( ::flixel::math::FlxPoint Pivot,Float Angle){
	HX_STACK_FRAME("flixel.math.FlxPoint","rotate",0x57ff66d7,"flixel.math.FlxPoint.rotate","flixel/math/FlxPoint.hx",280,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pivot,"Pivot")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(281)
	Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(282)
	Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(283)
	Float radians = (Angle * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(radians,"radians");
	HX_STACK_LINE(284)
	while((true)){
		HX_STACK_LINE(284)
		if ((!(((radians < -(::Math_obj::PI)))))){
			HX_STACK_LINE(284)
			break;
		}
		HX_STACK_LINE(286)
		hx::AddEq(radians,(::Math_obj::PI * (int)2));
	}
	HX_STACK_LINE(288)
	while((true)){
		HX_STACK_LINE(288)
		if ((!(((radians > ::Math_obj::PI))))){
			HX_STACK_LINE(288)
			break;
		}
		HX_STACK_LINE(290)
		radians = (radians - (::Math_obj::PI * (int)2));
	}
	HX_STACK_LINE(293)
	if (((radians < (int)0))){
		HX_STACK_LINE(295)
		sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
		HX_STACK_LINE(296)
		if (((sin < (int)0))){
			HX_STACK_LINE(298)
			sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
		}
		else{
			HX_STACK_LINE(302)
			sin = ((.225 * (((sin * sin) - sin))) + sin);
		}
	}
	else{
		HX_STACK_LINE(307)
		sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
		HX_STACK_LINE(308)
		if (((sin < (int)0))){
			HX_STACK_LINE(310)
			sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
		}
		else{
			HX_STACK_LINE(314)
			sin = ((.225 * (((sin * sin) - sin))) + sin);
		}
	}
	HX_STACK_LINE(318)
	hx::AddEq(radians,(Float(::Math_obj::PI) / Float((int)2)));
	HX_STACK_LINE(319)
	if (((radians > ::Math_obj::PI))){
		HX_STACK_LINE(321)
		radians = (radians - (::Math_obj::PI * (int)2));
	}
	HX_STACK_LINE(323)
	if (((radians < (int)0))){
		HX_STACK_LINE(325)
		cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
		HX_STACK_LINE(326)
		if (((cos < (int)0))){
			HX_STACK_LINE(328)
			cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
		}
		else{
			HX_STACK_LINE(332)
			cos = ((.225 * (((cos * cos) - cos))) + cos);
		}
	}
	else{
		HX_STACK_LINE(337)
		cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
		HX_STACK_LINE(338)
		if (((cos < (int)0))){
			HX_STACK_LINE(340)
			cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
		}
		else{
			HX_STACK_LINE(344)
			cos = ((.225 * (((cos * cos) - cos))) + cos);
		}
	}
	HX_STACK_LINE(348)
	Float dx = (this->x - Pivot->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(349)
	Float dy = (this->y - Pivot->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(350)
	this->set_x((((cos * dx) - (sin * dy)) + Pivot->x));
	HX_STACK_LINE(351)
	this->set_y((((sin * dx) + (cos * dy)) + Pivot->y));
	HX_STACK_LINE(353)
	if ((Pivot->_weak)){
		HX_STACK_LINE(353)
		Pivot->put();
	}
	HX_STACK_LINE(354)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,rotate,return )

Float FlxPoint_obj::angleBetween( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","angleBetween",0x3b318bb1,"flixel.math.FlxPoint.angleBetween","flixel/math/FlxPoint.hx",364,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(365)
	Float x = (point->x - this->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(366)
	Float y = (point->y - this->y);		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(367)
	Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(369)
	if (((bool((x != (int)0)) || bool((y != (int)0))))){
		HX_STACK_LINE(371)
		Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(372)
		Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(373)
		Float ay;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(373)
		if (((y < (int)0))){
			HX_STACK_LINE(373)
			ay = -(y);
		}
		else{
			HX_STACK_LINE(373)
			ay = y;
		}
		HX_STACK_LINE(375)
		if (((x >= (int)0))){
			HX_STACK_LINE(377)
			angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
		}
		else{
			HX_STACK_LINE(381)
			angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
		}
		HX_STACK_LINE(383)
		angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ((Float((int)180) / Float(::Math_obj::PI))));
		HX_STACK_LINE(385)
		if (((angle > (int)90))){
			HX_STACK_LINE(387)
			angle = (angle - (int)270);
		}
		else{
			HX_STACK_LINE(391)
			hx::AddEq(angle,(int)90);
		}
	}
	HX_STACK_LINE(395)
	if ((point->_weak)){
		HX_STACK_LINE(395)
		point->put();
	}
	HX_STACK_LINE(396)
	return angle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,angleBetween,return )

bool FlxPoint_obj::equals( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","equals",0x4cd20ebb,"flixel.math.FlxPoint.equals","flixel/math/FlxPoint.hx",407,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::math::FlxPoint_obj > __this,::flixel::math::FlxPoint &point){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxPoint.hx",407,0xb3e1cd2c)
			{
				HX_STACK_LINE(407)
				Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(407)
				Float _g = ::Math_obj::abs((__this->x - point->x));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(407)
				return (_g <= aDiff);
			}
			return null();
		}
	};
	HX_STACK_LINE(407)
	if ((_Function_1_1::Block(this,point))){
		HX_STACK_LINE(407)
		Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
		HX_STACK_LINE(407)
		Float _g1 = ::Math_obj::abs((this->y - point->y));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(407)
		return (_g1 <= aDiff);
	}
	else{
		HX_STACK_LINE(407)
		return false;
	}
	HX_STACK_LINE(407)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,equals,return )

Void FlxPoint_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.math.FlxPoint","destroy",0xdae378fe,"flixel.math.FlxPoint.destroy","flixel/math/FlxPoint.hx",413,0xb3e1cd2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,destroy,(void))

::String FlxPoint_obj::toString( ){
	HX_STACK_FRAME("flixel.math.FlxPoint","toString",0x13b40828,"flixel.math.FlxPoint.toString","flixel/math/FlxPoint.hx",419,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(421)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(421)
	{
		HX_STACK_LINE(421)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(421)
		_this->label = HX_CSTRING("x");
		HX_STACK_LINE(421)
		_this->value = this->x;
		HX_STACK_LINE(421)
		_g = _this;
	}
	HX_STACK_LINE(422)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(422)
	{
		HX_STACK_LINE(422)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(422)
		_this->label = HX_CSTRING("y");
		HX_STACK_LINE(422)
		_this->value = this->y;
		HX_STACK_LINE(422)
		_g1 = _this;
	}
	HX_STACK_LINE(420)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(420)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,toString,return )

::flixel::math::FlxPoint FlxPoint_obj::transform( ::openfl::_v2::geom::Matrix matrix){
	HX_STACK_FRAME("flixel.math.FlxPoint","transform",0x46de8270,"flixel.math.FlxPoint.transform","flixel/math/FlxPoint.hx",431,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(432)
	Float x1 = (((this->x * matrix->a) + (this->y * matrix->c)) + matrix->tx);		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(433)
	Float y1 = (((this->x * matrix->b) + (this->y * matrix->d)) + matrix->ty);		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(435)
	return this->set(x1,y1);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,transform,return )

Float FlxPoint_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.math.FlxPoint","set_x",0x1a631e5f,"flixel.math.FlxPoint.set_x","flixel/math/FlxPoint.hx",443,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(443)
	return this->x = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_x,return )

Float FlxPoint_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.math.FlxPoint","set_y",0x1a631e60,"flixel.math.FlxPoint.set_y","flixel/math/FlxPoint.hx",451,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(451)
	return this->y = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_y,return )

::flixel::math::FlxPoint FlxPoint_obj::flxPoint;

::openfl::_v2::geom::Point FlxPoint_obj::point;

::flixel::util::FlxPool_flixel_math_FlxPoint FlxPoint_obj::_pool;

::flixel::math::FlxPoint FlxPoint_obj::get( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxPoint","get",0x598c7a9a,"flixel.math.FlxPoint.get","flixel/math/FlxPoint.hx",29,0xb3e1cd2c)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(30)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(31)
		point->_inPool = false;
		HX_STACK_LINE(32)
		return point;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,get,return )

::flixel::math::FlxPoint FlxPoint_obj::weak( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxPoint","weak",0x0bf225f4,"flixel.math.FlxPoint.weak","flixel/math/FlxPoint.hx",44,0xb3e1cd2c)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(45)
		::flixel::math::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(45)
			point1->_inPool = false;
			HX_STACK_LINE(45)
			point = point1;
		}
		HX_STACK_LINE(46)
		point->_weak = true;
		HX_STACK_LINE(47)
		return point;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,weak,return )


FlxPoint_obj::FlxPoint_obj()
{
}

Dynamic FlxPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { return weak_dyn(); }
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"_weak") ) { return _weak; }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { return _inPool; }
		if (HX_FIELD_EQ(inName,"putWeak") ) { return putWeak_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flxPoint") ) { return flxPoint; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"inCoords") ) { return inCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inFlxRect") ) { return inFlxRect_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceTo") ) { return distanceTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return angleBetween_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subtractPoint") ) { return subtractPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< ::flixel::util::FlxPool_flixel_math_FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_weak") ) { _weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { _inPool=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flxPoint") ) { flxPoint=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("_weak"));
	outFields->push(HX_CSTRING("_inPool"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("flxPoint"),
	HX_CSTRING("point"),
	HX_CSTRING("_pool"),
	HX_CSTRING("get"),
	HX_CSTRING("weak"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxPoint_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxPoint_obj,y),HX_CSTRING("y")},
	{hx::fsBool,(int)offsetof(FlxPoint_obj,_weak),HX_CSTRING("_weak")},
	{hx::fsBool,(int)offsetof(FlxPoint_obj,_inPool),HX_CSTRING("_inPool")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("_weak"),
	HX_CSTRING("_inPool"),
	HX_CSTRING("put"),
	HX_CSTRING("putWeak"),
	HX_CSTRING("set"),
	HX_CSTRING("add"),
	HX_CSTRING("addPoint"),
	HX_CSTRING("subtract"),
	HX_CSTRING("subtractPoint"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyTo"),
	HX_CSTRING("copyFromFlash"),
	HX_CSTRING("copyToFlash"),
	HX_CSTRING("inCoords"),
	HX_CSTRING("inFlxRect"),
	HX_CSTRING("distanceTo"),
	HX_CSTRING("floor"),
	HX_CSTRING("ceil"),
	HX_CSTRING("rotate"),
	HX_CSTRING("angleBetween"),
	HX_CSTRING("equals"),
	HX_CSTRING("destroy"),
	HX_CSTRING("toString"),
	HX_CSTRING("transform"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPoint_obj::flxPoint,"flxPoint");
	HX_MARK_MEMBER_NAME(FlxPoint_obj::point,"point");
	HX_MARK_MEMBER_NAME(FlxPoint_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::flxPoint,"flxPoint");
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::point,"point");
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::_pool,"_pool");
};

#endif

Class FlxPoint_obj::__mClass;

void FlxPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.math.FlxPoint"), hx::TCanCast< FlxPoint_obj> ,sStaticFields,sMemberFields,
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

void FlxPoint_obj::__boot()
{
	flxPoint= ::flixel::math::FlxPoint_obj::__new(null(),null());
	point= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	_pool= ::flixel::util::FlxPool_flixel_math_FlxPoint_obj::__new(hx::ClassOf< ::flixel::math::FlxPoint >());
}

} // end namespace flixel
} // end namespace math
