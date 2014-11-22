#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#include <flixel/util/FlxPool_flixel_math_FlxVector.h>
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

Void FlxVector_obj::__construct(Dynamic X,Dynamic Y)
{
HX_STACK_FRAME("flixel.math.FlxVector","new",0xe9d1dfd3,"flixel.math.FlxVector.new","flixel/math/FlxVector.hx",7,0x1fcaa75d)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(7)
	super::__construct(X,Y);
}
;
	return null();
}

//FlxVector_obj::~FlxVector_obj() { }

Dynamic FlxVector_obj::__CreateEmpty() { return  new FlxVector_obj; }
hx::ObjectPtr< FlxVector_obj > FlxVector_obj::__new(Dynamic X,Dynamic Y)
{  hx::ObjectPtr< FlxVector_obj > result = new FlxVector_obj();
	result->__construct(X,Y);
	return result;}

Dynamic FlxVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVector_obj > result = new FlxVector_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FlxVector_obj::put( ){
{
		HX_STACK_FRAME("flixel.math.FlxVector","put",0xe9d37242,"flixel.math.FlxVector.put","flixel/math/FlxVector.hx",37,0x1fcaa75d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		if ((!(this->_inPool))){
			HX_STACK_LINE(39)
			this->_inPool = true;
			HX_STACK_LINE(40)
			::flixel::math::FlxVector_obj::_pool->putUnsafe(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


::flixel::math::FlxPoint FlxVector_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVector","set",0xe9d5ab15,"flixel.math.FlxVector.set","flixel/math/FlxVector.hx",92,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(93)
		this->set_x(X);
		HX_STACK_LINE(94)
		this->set_y(Y);
		HX_STACK_LINE(95)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::flixel::math::FlxVector FlxVector_obj::scale( Float k){
	HX_STACK_FRAME("flixel.math.FlxVector","scale",0x4985e0bd,"flixel.math.FlxVector.scale","flixel/math/FlxVector.hx",105,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		_g->set_x((_g->x * k));
	}
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		_g->set_y((_g->y * k));
	}
	HX_STACK_LINE(108)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,scale,return )

::flixel::math::FlxVector FlxVector_obj::scaleNew( Float k){
	HX_STACK_FRAME("flixel.math.FlxVector","scaleNew",0x448efba3,"flixel.math.FlxVector.scaleNew","flixel/math/FlxVector.hx",119,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(119)
	::flixel::math::FlxVector _this = this->clone(null());		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		_g->set_x((_g->x * k));
	}
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		_g->set_y((_g->y * k));
	}
	HX_STACK_LINE(119)
	return _this;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,scaleNew,return )

::flixel::math::FlxVector FlxVector_obj::addNew( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","addNew",0x6e7dbb2c,"flixel.math.FlxVector.addNew","flixel/math/FlxVector.hx",129,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(130)
	::flixel::math::FlxVector nv = this->clone(null());		HX_STACK_VAR(nv,"nv");
	HX_STACK_LINE(131)
	nv->addPoint(v);
	HX_STACK_LINE(132)
	return nv;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,addNew,return )

::flixel::math::FlxVector FlxVector_obj::subtractNew( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","subtractNew",0x8b10b21f,"flixel.math.FlxVector.subtractNew","flixel/math/FlxVector.hx",142,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(143)
	::flixel::math::FlxVector nv = this->clone(null());		HX_STACK_VAR(nv,"nv");
	HX_STACK_LINE(144)
	nv->subtractPoint(v);
	HX_STACK_LINE(145)
	return nv;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,subtractNew,return )

Float FlxVector_obj::dotProduct( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","dotProduct",0x468b3c93,"flixel.math.FlxVector.dotProduct","flixel/math/FlxVector.hx",156,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(156)
	return ((this->x * v->x) + (this->y * v->y));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,dotProduct,return )

Float FlxVector_obj::dotProdWithNormalizing( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","dotProdWithNormalizing",0x0a930731,"flixel.math.FlxVector.dotProdWithNormalizing","flixel/math/FlxVector.hx",166,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(167)
	::flixel::math::FlxVector normalized = v->clone(::flixel::math::FlxVector_obj::_vector1)->normalize();		HX_STACK_VAR(normalized,"normalized");
	HX_STACK_LINE(168)
	return ((this->x * normalized->x) + (this->y * normalized->y));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,dotProdWithNormalizing,return )

bool FlxVector_obj::isPerpendicular( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","isPerpendicular",0xefca0053,"flixel.math.FlxVector.isPerpendicular","flixel/math/FlxVector.hx",178,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(179)
	Float _g = ::Math_obj::abs(((this->x * v->x) + (this->y * v->y)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(179)
	return (_g < 9.9999999999999984e-015);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,isPerpendicular,return )

Float FlxVector_obj::crossProductLength( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","crossProductLength",0x30678fc2,"flixel.math.FlxVector.crossProductLength","flixel/math/FlxVector.hx",190,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(190)
	return ((this->x * v->y) - (this->y * v->x));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,crossProductLength,return )

bool FlxVector_obj::isParallel( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","isParallel",0x0140d1be,"flixel.math.FlxVector.isParallel","flixel/math/FlxVector.hx",200,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(201)
	Float _g = ::Math_obj::abs(((this->x * v->y) - (this->y * v->x)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(201)
	return (_g < 9.9999999999999984e-015);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,isParallel,return )

bool FlxVector_obj::isZero( ){
	HX_STACK_FRAME("flixel.math.FlxVector","isZero",0x3dd0ae9f,"flixel.math.FlxVector.isZero","flixel/math/FlxVector.hx",210,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	Float _g = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(211)
	if (((_g < 0.0000001))){
		HX_STACK_LINE(211)
		Float _g1 = ::Math_obj::abs(this->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		return (_g1 < 0.0000001);
	}
	else{
		HX_STACK_LINE(211)
		return false;
	}
	HX_STACK_LINE(211)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,isZero,return )

::flixel::math::FlxVector FlxVector_obj::zero( ){
	HX_STACK_FRAME("flixel.math.FlxVector","zero",0xb5c08455,"flixel.math.FlxVector.zero","flixel/math/FlxVector.hx",218,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	Float _g = this->set_y((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(219)
	this->set_x(_g);
	HX_STACK_LINE(220)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,zero,return )

::flixel::math::FlxVector FlxVector_obj::normalize( ){
	HX_STACK_FRAME("flixel.math.FlxVector","normalize",0x37b8df40,"flixel.math.FlxVector.normalize","flixel/math/FlxVector.hx",227,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(228)
	Float _g = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::math::FlxVector_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxVector.hx",228,0x1fcaa75d)
			{
				HX_STACK_LINE(228)
				Float _g1 = ::Math_obj::abs(__this->y);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(228)
				return (_g1 < 0.0000001);
			}
			return null();
		}
	};
	HX_STACK_LINE(228)
	if (((  (((_g < 0.0000001))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(230)
		this->set_x((int)1);
		HX_STACK_LINE(231)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(233)
	Float _g2 = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(233)
	Float k = (Float((int)1) / Float(_g2));		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(233)
		::flixel::math::FlxVector _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(233)
		_g1->set_x((_g1->x * k));
	}
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(233)
		::flixel::math::FlxVector _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(233)
		_g1->set_y((_g1->y * k));
	}
	HX_STACK_LINE(233)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,normalize,return )

bool FlxVector_obj::isNormalized( ){
	HX_STACK_FRAME("flixel.math.FlxVector","isNormalized",0x08ca76ee,"flixel.math.FlxVector.isNormalized","flixel/math/FlxVector.hx",240,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	Float _g = ::Math_obj::abs((((this->x * this->x) + (this->y * this->y)) - (int)1));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(241)
	return (_g < 9.9999999999999984e-015);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,isNormalized,return )

::flixel::math::FlxVector FlxVector_obj::rotateByRadians( Float rads){
	HX_STACK_FRAME("flixel.math.FlxVector","rotateByRadians",0xb2c6f773,"flixel.math.FlxVector.rotateByRadians","flixel/math/FlxVector.hx",251,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rads,"rads")
	HX_STACK_LINE(252)
	Float s = ::Math_obj::sin(rads);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(253)
	Float c = ::Math_obj::cos(rads);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(254)
	Float tempX = this->x;		HX_STACK_VAR(tempX,"tempX");
	HX_STACK_LINE(256)
	this->set_x(((tempX * c) - (this->y * s)));
	HX_STACK_LINE(257)
	this->set_y(((tempX * s) + (this->y * c)));
	HX_STACK_LINE(259)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,rotateByRadians,return )

::flixel::math::FlxVector FlxVector_obj::rotateByDegrees( Float degs){
	HX_STACK_FRAME("flixel.math.FlxVector","rotateByDegrees",0xc63194a8,"flixel.math.FlxVector.rotateByDegrees","flixel/math/FlxVector.hx",270,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(degs,"degs")
	HX_STACK_LINE(270)
	Float rads = (degs * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rads,"rads");
	HX_STACK_LINE(270)
	Float s = ::Math_obj::sin(rads);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(270)
	Float c = ::Math_obj::cos(rads);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(270)
	Float tempX = this->x;		HX_STACK_VAR(tempX,"tempX");
	HX_STACK_LINE(270)
	this->set_x(((tempX * c) - (this->y * s)));
	HX_STACK_LINE(270)
	this->set_y(((tempX * s) + (this->y * c)));
	HX_STACK_LINE(270)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,rotateByDegrees,return )

::flixel::math::FlxVector FlxVector_obj::rotateWithTrig( Float sin,Float cos){
	HX_STACK_FRAME("flixel.math.FlxVector","rotateWithTrig",0x4eb49eea,"flixel.math.FlxVector.rotateWithTrig","flixel/math/FlxVector.hx",281,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sin,"sin")
	HX_STACK_ARG(cos,"cos")
	HX_STACK_LINE(282)
	Float tempX = this->x;		HX_STACK_VAR(tempX,"tempX");
	HX_STACK_LINE(283)
	this->set_x(((tempX * cos) - (this->y * sin)));
	HX_STACK_LINE(284)
	this->set_y(((tempX * sin) + (this->y * cos)));
	HX_STACK_LINE(285)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,rotateWithTrig,return )

::flixel::math::FlxVector FlxVector_obj::rightNormal( ::flixel::math::FlxVector vec){
	HX_STACK_FRAME("flixel.math.FlxVector","rightNormal",0x19057996,"flixel.math.FlxVector.rightNormal","flixel/math/FlxVector.hx",292,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(293)
	if (((vec == null()))){
		HX_STACK_LINE(295)
		::flixel::math::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(295)
		{
			HX_STACK_LINE(295)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(295)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(295)
			::flixel::math::FlxVector vector = hx::TCast< ::flixel::math::FlxVector >::cast(::flixel::math::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(295)
			vector->_inPool = false;
			HX_STACK_LINE(295)
			_g = vector;
		}
		HX_STACK_LINE(295)
		vec = _g;
	}
	HX_STACK_LINE(297)
	hx::TCast< ::flixel::math::FlxVector >::cast(vec->set(-(this->y),this->x));
	HX_STACK_LINE(298)
	return vec;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,rightNormal,return )

::flixel::math::FlxVector FlxVector_obj::leftNormal( ::flixel::math::FlxVector vec){
	HX_STACK_FRAME("flixel.math.FlxVector","leftNormal",0x6815427b,"flixel.math.FlxVector.leftNormal","flixel/math/FlxVector.hx",305,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(306)
	if (((vec == null()))){
		HX_STACK_LINE(308)
		::flixel::math::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(308)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(308)
			::flixel::math::FlxVector vector = hx::TCast< ::flixel::math::FlxVector >::cast(::flixel::math::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(308)
			vector->_inPool = false;
			HX_STACK_LINE(308)
			_g = vector;
		}
		HX_STACK_LINE(308)
		vec = _g;
	}
	HX_STACK_LINE(310)
	hx::TCast< ::flixel::math::FlxVector >::cast(vec->set(this->y,-(this->x)));
	HX_STACK_LINE(311)
	return vec;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,leftNormal,return )

::flixel::math::FlxVector FlxVector_obj::negate( ){
	HX_STACK_FRAME("flixel.math.FlxVector","negate",0x36921c2f,"flixel.math.FlxVector.negate","flixel/math/FlxVector.hx",318,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(319)
		::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(319)
		_g->set_x((_g->x * (int)-1));
	}
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(320)
		::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		_g->set_y((_g->y * (int)-1));
	}
	HX_STACK_LINE(321)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,negate,return )

::flixel::math::FlxVector FlxVector_obj::negateNew( ){
	HX_STACK_FRAME("flixel.math.FlxVector","negateNew",0x51f3f371,"flixel.math.FlxVector.negateNew","flixel/math/FlxVector.hx",326,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(326)
	::flixel::math::FlxVector _this = this->clone(null());		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(326)
	{
		HX_STACK_LINE(326)
		::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(326)
		_g->set_x((_g->x * (int)-1));
	}
	HX_STACK_LINE(326)
	{
		HX_STACK_LINE(326)
		::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(326)
		_g->set_y((_g->y * (int)-1));
	}
	HX_STACK_LINE(326)
	return _this;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,negateNew,return )

::flixel::math::FlxVector FlxVector_obj::projectTo( ::flixel::math::FlxVector v,::flixel::math::FlxVector proj){
	HX_STACK_FRAME("flixel.math.FlxVector","projectTo",0x21102c67,"flixel.math.FlxVector.projectTo","flixel/math/FlxVector.hx",338,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(proj,"proj")
	HX_STACK_LINE(339)
	Float dp = ((this->x * v->x) + (this->y * v->y));		HX_STACK_VAR(dp,"dp");
	HX_STACK_LINE(340)
	Float lenSq = ((v->x * v->x) + (v->y * v->y));		HX_STACK_VAR(lenSq,"lenSq");
	HX_STACK_LINE(342)
	if (((proj == null()))){
		HX_STACK_LINE(344)
		::flixel::math::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(344)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(344)
			::flixel::math::FlxVector vector = hx::TCast< ::flixel::math::FlxVector >::cast(::flixel::math::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(344)
			vector->_inPool = false;
			HX_STACK_LINE(344)
			_g = vector;
		}
		HX_STACK_LINE(344)
		proj = _g;
	}
	HX_STACK_LINE(347)
	return hx::TCast< ::flixel::math::FlxVector >::cast(proj->set((Float((dp * v->x)) / Float(lenSq)),(Float((dp * v->y)) / Float(lenSq))));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,projectTo,return )

::flixel::math::FlxVector FlxVector_obj::projectToNormalized( ::flixel::math::FlxVector v,::flixel::math::FlxVector proj){
	HX_STACK_FRAME("flixel.math.FlxVector","projectToNormalized",0xa11cbb7e,"flixel.math.FlxVector.projectToNormalized","flixel/math/FlxVector.hx",358,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(proj,"proj")
	HX_STACK_LINE(359)
	Float dp = ((this->x * v->x) + (this->y * v->y));		HX_STACK_VAR(dp,"dp");
	HX_STACK_LINE(361)
	if (((proj == null()))){
		HX_STACK_LINE(363)
		::flixel::math::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(363)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(363)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(363)
			::flixel::math::FlxVector vector = hx::TCast< ::flixel::math::FlxVector >::cast(::flixel::math::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(363)
			vector->_inPool = false;
			HX_STACK_LINE(363)
			_g = vector;
		}
		HX_STACK_LINE(363)
		proj = _g;
	}
	HX_STACK_LINE(366)
	return hx::TCast< ::flixel::math::FlxVector >::cast(proj->set((dp * v->x),(dp * v->y)));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,projectToNormalized,return )

Float FlxVector_obj::perpProduct( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","perpProduct",0x72ab38ef,"flixel.math.FlxVector.perpProduct","flixel/math/FlxVector.hx",374,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(374)
	return ((this->y * v->x) + (-(this->x) * v->y));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,perpProduct,return )

Float FlxVector_obj::ratio( ::flixel::math::FlxVector a,::flixel::math::FlxVector b,::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","ratio",0xb4db473e,"flixel.math.FlxVector.ratio","flixel/math/FlxVector.hx",386,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(387)
	Float _g = ::Math_obj::abs(((this->x * v->y) - (this->y * v->x)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(387)
	if (((_g < 9.9999999999999984e-015))){
		HX_STACK_LINE(387)
		return ::Math_obj::NaN;
	}
	HX_STACK_LINE(388)
	if (((bool((((this->x * this->x) + (this->y * this->y)) < 9.9999999999999984e-015)) || bool((((v->x * v->x) + (v->y * v->y)) < 9.9999999999999984e-015))))){
		HX_STACK_LINE(388)
		return ::Math_obj::NaN;
	}
	HX_STACK_LINE(390)
	::flixel::math::FlxVector _g1 = b->clone(::flixel::math::FlxVector_obj::_vector1);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(390)
	::flixel::math::FlxVector_obj::_vector1 = _g1;
	HX_STACK_LINE(391)
	::flixel::math::FlxVector_obj::_vector1->subtractPoint(a);
	struct _Function_1_1{
		inline static Float Block( ::flixel::math::FlxVector &v){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxVector.hx",393,0x1fcaa75d)
			{
				HX_STACK_LINE(393)
				::flixel::math::FlxVector _this = ::flixel::math::FlxVector_obj::_vector1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(393)
				return ((_this->y * v->x) + (-(_this->x) * v->y));
			}
			return null();
		}
	};
	HX_STACK_LINE(393)
	return (Float(_Function_1_1::Block(v)) / Float((((this->y * v->x) + (-(this->x) * v->y)))));
}


HX_DEFINE_DYNAMIC_FUNC3(FlxVector_obj,ratio,return )

::flixel::math::FlxVector FlxVector_obj::findIntersection( ::flixel::math::FlxVector a,::flixel::math::FlxVector b,::flixel::math::FlxVector v,::flixel::math::FlxVector intersection){
	HX_STACK_FRAME("flixel.math.FlxVector","findIntersection",0xca04b4cf,"flixel.math.FlxVector.findIntersection","flixel/math/FlxVector.hx",405,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(intersection,"intersection")
	HX_STACK_LINE(406)
	Float t = this->ratio(a,b,v);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(408)
	if (((intersection == null()))){
		HX_STACK_LINE(410)
		::flixel::math::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(410)
		{
			HX_STACK_LINE(410)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(410)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(410)
			::flixel::math::FlxVector vector = hx::TCast< ::flixel::math::FlxVector >::cast(::flixel::math::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(410)
			vector->_inPool = false;
			HX_STACK_LINE(410)
			_g = vector;
		}
		HX_STACK_LINE(410)
		intersection = _g;
	}
	HX_STACK_LINE(413)
	if ((::Math_obj::isNaN(t))){
		HX_STACK_LINE(415)
		return hx::TCast< ::flixel::math::FlxVector >::cast(intersection->set(::Math_obj::NaN,::Math_obj::NaN));
	}
	HX_STACK_LINE(418)
	return hx::TCast< ::flixel::math::FlxVector >::cast(intersection->set((a->x + (t * this->x)),(a->y + (t * this->y))));
}


HX_DEFINE_DYNAMIC_FUNC4(FlxVector_obj,findIntersection,return )

::flixel::math::FlxVector FlxVector_obj::findIntersectionInBounds( ::flixel::math::FlxVector a,::flixel::math::FlxVector b,::flixel::math::FlxVector v,::flixel::math::FlxVector intersection){
	HX_STACK_FRAME("flixel.math.FlxVector","findIntersectionInBounds",0x855a2829,"flixel.math.FlxVector.findIntersectionInBounds","flixel/math/FlxVector.hx",430,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(intersection,"intersection")
	HX_STACK_LINE(431)
	if (((intersection == null()))){
		HX_STACK_LINE(433)
		::flixel::math::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(433)
		{
			HX_STACK_LINE(433)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(433)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(433)
			::flixel::math::FlxVector vector = hx::TCast< ::flixel::math::FlxVector >::cast(::flixel::math::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(433)
			vector->_inPool = false;
			HX_STACK_LINE(433)
			_g = vector;
		}
		HX_STACK_LINE(433)
		intersection = _g;
	}
	HX_STACK_LINE(436)
	Float t1 = this->ratio(a,b,v);		HX_STACK_VAR(t1,"t1");
	HX_STACK_LINE(437)
	Float t2 = v->ratio(b,a,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(438)
	if (((  (((  (((  (((  (((  ((!(::Math_obj::isNaN(t1)))) ? bool(!(::Math_obj::isNaN(t2))) : bool(false) ))) ? bool((t1 > (int)0)) : bool(false) ))) ? bool((t1 <= (int)1)) : bool(false) ))) ? bool((t2 > (int)0)) : bool(false) ))) ? bool((t2 <= (int)1)) : bool(false) ))){
		HX_STACK_LINE(440)
		return hx::TCast< ::flixel::math::FlxVector >::cast(intersection->set((a->x + (t1 * this->x)),(a->y + (t1 * this->y))));
	}
	HX_STACK_LINE(443)
	return hx::TCast< ::flixel::math::FlxVector >::cast(intersection->set(::Math_obj::NaN,::Math_obj::NaN));
}


HX_DEFINE_DYNAMIC_FUNC4(FlxVector_obj,findIntersectionInBounds,return )

::flixel::math::FlxVector FlxVector_obj::truncate( Float max){
	HX_STACK_FRAME("flixel.math.FlxVector","truncate",0x122fce13,"flixel.math.FlxVector.truncate","flixel/math/FlxVector.hx",452,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(453)
	{
		HX_STACK_LINE(453)
		Float _g = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(453)
		Float l = ::Math_obj::min(max,_g);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(453)
		Float _g1 = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g1,"_g1");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::math::FlxVector_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxVector.hx",453,0x1fcaa75d)
				{
					HX_STACK_LINE(453)
					Float _g2 = ::Math_obj::abs(__this->y);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(453)
					return (_g2 < 0.0000001);
				}
				return null();
			}
		};
		HX_STACK_LINE(453)
		if ((!(((  (((_g1 < 0.0000001))) ? bool(_Function_2_1::Block(this)) : bool(false) ))))){
			HX_STACK_LINE(453)
			Float a = this->get_radians();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(453)
			Float _g3 = ::Math_obj::cos(a);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(453)
			Float _g4 = (l * _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(453)
			this->set_x(_g4);
			HX_STACK_LINE(453)
			Float _g5 = ::Math_obj::sin(a);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(453)
			Float _g6 = (l * _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(453)
			this->set_y(_g6);
		}
		HX_STACK_LINE(453)
		l;
	}
	HX_STACK_LINE(454)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,truncate,return )

Float FlxVector_obj::radiansBetween( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","radiansBetween",0x7a6c94e3,"flixel.math.FlxVector.radiansBetween","flixel/math/FlxVector.hx",464,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(465)
	Float _g = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(465)
	Float _g1 = ::Math_obj::sqrt(((v->x * v->x) + (v->y * v->y)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(465)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(465)
	Float _g3 = (Float((((this->x * v->x) + (this->y * v->y)))) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(465)
	return ::Math_obj::acos(_g3);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,radiansBetween,return )

Float FlxVector_obj::degreesBetween( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","degreesBetween",0xcfb1384e,"flixel.math.FlxVector.degreesBetween","flixel/math/FlxVector.hx",475,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(476)
	Float _g = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(476)
	Float _g1 = ::Math_obj::sqrt(((v->x * v->x) + (v->y * v->y)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(476)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(476)
	Float _g3 = (Float((((this->x * v->x) + (this->y * v->y)))) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(476)
	Float _g4 = ::Math_obj::acos(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(476)
	return (_g4 * ((Float((int)180) / Float(::Math_obj::PI))));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,degreesBetween,return )

int FlxVector_obj::sign( ::flixel::math::FlxVector a,::flixel::math::FlxVector b){
	HX_STACK_FRAME("flixel.math.FlxVector","sign",0xb123056a,"flixel.math.FlxVector.sign","flixel/math/FlxVector.hx",486,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(487)
	Float signFl = ((((a->x - this->x)) * ((b->y - this->y))) - (((a->y - this->y)) * ((b->x - this->x))));		HX_STACK_VAR(signFl,"signFl");
	HX_STACK_LINE(488)
	if (((signFl == (int)0))){
		HX_STACK_LINE(490)
		return (int)0;
	}
	HX_STACK_LINE(492)
	Float _g = ::Math_obj::abs(signFl);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(492)
	Float _g1 = (Float(signFl) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(492)
	return ::Math_obj::round(_g1);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,sign,return )

Float FlxVector_obj::dist( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","dist",0xa738dc93,"flixel.math.FlxVector.dist","flixel/math/FlxVector.hx",500,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::flixel::math::FlxVector_obj > __this,::flixel::math::FlxVector &v){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxVector.hx",500,0x1fcaa75d)
			{
				HX_STACK_LINE(500)
				Float dx = (v->x - __this->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(500)
				Float dy = (v->y - __this->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(500)
				return ((dx * dx) + (dy * dy));
			}
			return null();
		}
	};
	HX_STACK_LINE(500)
	return ::Math_obj::sqrt(_Function_1_1::Block(this,v));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,dist,return )

Float FlxVector_obj::distSquared( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","distSquared",0xa9f1dcd4,"flixel.math.FlxVector.distSquared","flixel/math/FlxVector.hx",507,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(508)
	Float dx = (v->x - this->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(509)
	Float dy = (v->y - this->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(510)
	return ((dx * dx) + (dy * dy));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,distSquared,return )

::flixel::math::FlxVector FlxVector_obj::bounce( ::flixel::math::FlxVector normal,hx::Null< Float >  __o_bounceCoeff){
Float bounceCoeff = __o_bounceCoeff.Default(1);
	HX_STACK_FRAME("flixel.math.FlxVector","bounce",0x35965ff5,"flixel.math.FlxVector.bounce","flixel/math/FlxVector.hx",521,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(bounceCoeff,"bounceCoeff")
{
		HX_STACK_LINE(522)
		Float d = ((((int)1 + bounceCoeff)) * (((this->x * normal->x) + (this->y * normal->y))));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(523)
		{
			HX_STACK_LINE(523)
			::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(523)
			_g->set_x((_g->x - (d * normal->x)));
		}
		HX_STACK_LINE(524)
		{
			HX_STACK_LINE(524)
			::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(524)
			_g->set_y((_g->y - (d * normal->y)));
		}
		HX_STACK_LINE(525)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,bounce,return )

::flixel::math::FlxVector FlxVector_obj::bounceWithFriction( ::flixel::math::FlxVector normal,hx::Null< Float >  __o_bounceCoeff,hx::Null< Float >  __o_friction){
Float bounceCoeff = __o_bounceCoeff.Default(1);
Float friction = __o_friction.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVector","bounceWithFriction",0xe6f568b5,"flixel.math.FlxVector.bounceWithFriction","flixel/math/FlxVector.hx",537,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(bounceCoeff,"bounceCoeff")
	HX_STACK_ARG(friction,"friction")
{
		HX_STACK_LINE(538)
		::flixel::math::FlxVector _g = normal->rightNormal(::flixel::math::FlxVector_obj::_vector3);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(538)
		::flixel::math::FlxVector p1 = this->projectToNormalized(_g,::flixel::math::FlxVector_obj::_vector1);		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(539)
		::flixel::math::FlxVector p2 = this->projectToNormalized(normal,::flixel::math::FlxVector_obj::_vector2);		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(540)
		Float bounceX = -(p2->x);		HX_STACK_VAR(bounceX,"bounceX");
		HX_STACK_LINE(541)
		Float bounceY = -(p2->y);		HX_STACK_VAR(bounceY,"bounceY");
		HX_STACK_LINE(542)
		Float frictionX = p1->x;		HX_STACK_VAR(frictionX,"frictionX");
		HX_STACK_LINE(543)
		Float frictionY = p1->y;		HX_STACK_VAR(frictionY,"frictionY");
		HX_STACK_LINE(544)
		this->set_x(((bounceX * bounceCoeff) + (frictionX * friction)));
		HX_STACK_LINE(545)
		this->set_y(((bounceY * bounceCoeff) + (frictionY * friction)));
		HX_STACK_LINE(546)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxVector_obj,bounceWithFriction,return )

bool FlxVector_obj::isValid( ){
	HX_STACK_FRAME("flixel.math.FlxVector","isValid",0x88845da5,"flixel.math.FlxVector.isValid","flixel/math/FlxVector.hx",556,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(556)
	if (((  (((  ((!(::Math_obj::isNaN(this->x)))) ? bool(!(::Math_obj::isNaN(this->y))) : bool(false) ))) ? bool(::Math_obj::isFinite(this->x)) : bool(false) ))){
		HX_STACK_LINE(556)
		return ::Math_obj::isFinite(this->y);
	}
	else{
		HX_STACK_LINE(556)
		return false;
	}
	HX_STACK_LINE(556)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,isValid,return )

::flixel::math::FlxVector FlxVector_obj::clone( ::flixel::math::FlxVector vec){
	HX_STACK_FRAME("flixel.math.FlxVector","clone",0x191a2590,"flixel.math.FlxVector.clone","flixel/math/FlxVector.hx",566,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(567)
	if (((vec == null()))){
		HX_STACK_LINE(569)
		::flixel::math::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(569)
		{
			HX_STACK_LINE(569)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(569)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(569)
			::flixel::math::FlxVector vector = hx::TCast< ::flixel::math::FlxVector >::cast(::flixel::math::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(569)
			vector->_inPool = false;
			HX_STACK_LINE(569)
			_g = vector;
		}
		HX_STACK_LINE(569)
		vec = _g;
	}
	HX_STACK_LINE(572)
	vec->set_x(this->x);
	HX_STACK_LINE(573)
	vec->set_y(this->y);
	HX_STACK_LINE(574)
	return vec;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,clone,return )

Float FlxVector_obj::get_dx( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_dx",0x72a8c94a,"flixel.math.FlxVector.get_dx","flixel/math/FlxVector.hx",578,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(579)
	Float _g = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::math::FlxVector_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxVector.hx",579,0x1fcaa75d)
			{
				HX_STACK_LINE(579)
				Float _g1 = ::Math_obj::abs(__this->y);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(579)
				return (_g1 < 0.0000001);
			}
			return null();
		}
	};
	HX_STACK_LINE(579)
	if (((  (((_g < 0.0000001))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(579)
		return (int)0;
	}
	HX_STACK_LINE(581)
	Float _g2 = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(581)
	return (Float(this->x) / Float(_g2));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_dx,return )

Float FlxVector_obj::get_dy( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_dy",0x72a8c94b,"flixel.math.FlxVector.get_dy","flixel/math/FlxVector.hx",585,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(586)
	Float _g = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::math::FlxVector_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxVector.hx",586,0x1fcaa75d)
			{
				HX_STACK_LINE(586)
				Float _g1 = ::Math_obj::abs(__this->y);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(586)
				return (_g1 < 0.0000001);
			}
			return null();
		}
	};
	HX_STACK_LINE(586)
	if (((  (((_g < 0.0000001))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(586)
		return (int)0;
	}
	HX_STACK_LINE(588)
	Float _g2 = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(588)
	return (Float(this->y) / Float(_g2));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_dy,return )

Float FlxVector_obj::get_length( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_length",0x982a199c,"flixel.math.FlxVector.get_length","flixel/math/FlxVector.hx",593,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(593)
	return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_length,return )

Float FlxVector_obj::set_length( Float l){
	HX_STACK_FRAME("flixel.math.FlxVector","set_length",0x9ba7b810,"flixel.math.FlxVector.set_length","flixel/math/FlxVector.hx",597,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(598)
	Float _g = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::math::FlxVector_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxVector.hx",598,0x1fcaa75d)
			{
				HX_STACK_LINE(598)
				Float _g1 = ::Math_obj::abs(__this->y);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(598)
				return (_g1 < 0.0000001);
			}
			return null();
		}
	};
	HX_STACK_LINE(598)
	if ((!(((  (((_g < 0.0000001))) ? bool(_Function_1_1::Block(this)) : bool(false) ))))){
		HX_STACK_LINE(600)
		Float a = this->get_radians();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(601)
		Float _g2 = ::Math_obj::cos(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(601)
		Float _g3 = (l * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(601)
		this->set_x(_g3);
		HX_STACK_LINE(602)
		Float _g4 = ::Math_obj::sin(a);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(602)
		Float _g5 = (l * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(602)
		this->set_y(_g5);
	}
	HX_STACK_LINE(604)
	return l;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,set_length,return )

Float FlxVector_obj::get_lengthSquared( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_lengthSquared",0x311842eb,"flixel.math.FlxVector.get_lengthSquared","flixel/math/FlxVector.hx",609,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(609)
	return ((this->x * this->x) + (this->y * this->y));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_lengthSquared,return )

Float FlxVector_obj::get_degrees( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_degrees",0x3f6c7e31,"flixel.math.FlxVector.get_degrees","flixel/math/FlxVector.hx",613,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(614)
	Float _g = this->get_radians();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(614)
	return (_g * ((Float((int)180) / Float(::Math_obj::PI))));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_degrees,return )

Float FlxVector_obj::set_degrees( Float degs){
	HX_STACK_FRAME("flixel.math.FlxVector","set_degrees",0x49d9853d,"flixel.math.FlxVector.set_degrees","flixel/math/FlxVector.hx",618,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(degs,"degs")
	HX_STACK_LINE(619)
	{
		HX_STACK_LINE(619)
		Float rads = (degs * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rads,"rads");
		HX_STACK_LINE(619)
		Float len = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(619)
		Float _g = ::Math_obj::cos(rads);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(619)
		Float _g1 = (len * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(619)
		this->set_x(_g1);
		HX_STACK_LINE(619)
		Float _g2 = ::Math_obj::sin(rads);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(619)
		Float _g3 = (len * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(619)
		this->set_y(_g3);
		HX_STACK_LINE(619)
		rads;
	}
	HX_STACK_LINE(620)
	return degs;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,set_degrees,return )

Float FlxVector_obj::get_radians( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_radians",0x2c01e0fc,"flixel.math.FlxVector.get_radians","flixel/math/FlxVector.hx",624,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(625)
	Float _g = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::math::FlxVector_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxVector.hx",625,0x1fcaa75d)
			{
				HX_STACK_LINE(625)
				Float _g1 = ::Math_obj::abs(__this->y);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(625)
				return (_g1 < 0.0000001);
			}
			return null();
		}
	};
	HX_STACK_LINE(625)
	if (((  (((_g < 0.0000001))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(625)
		return (int)0;
	}
	HX_STACK_LINE(627)
	return ::Math_obj::atan2(this->y,this->x);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_radians,return )

Float FlxVector_obj::set_radians( Float rads){
	HX_STACK_FRAME("flixel.math.FlxVector","set_radians",0x366ee808,"flixel.math.FlxVector.set_radians","flixel/math/FlxVector.hx",631,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rads,"rads")
	HX_STACK_LINE(632)
	Float len = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(634)
	Float _g = ::Math_obj::cos(rads);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(634)
	Float _g1 = (len * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(634)
	this->set_x(_g1);
	HX_STACK_LINE(635)
	Float _g2 = ::Math_obj::sin(rads);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(635)
	Float _g3 = (len * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(635)
	this->set_y(_g3);
	HX_STACK_LINE(636)
	return rads;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,set_radians,return )

Float FlxVector_obj::get_rx( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_rx",0x72a8d57c,"flixel.math.FlxVector.get_rx","flixel/math/FlxVector.hx",641,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(641)
	return -(this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_rx,return )

Float FlxVector_obj::get_ry( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_ry",0x72a8d57d,"flixel.math.FlxVector.get_ry","flixel/math/FlxVector.hx",646,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(646)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_ry,return )

Float FlxVector_obj::get_lx( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_lx",0x72a8d042,"flixel.math.FlxVector.get_lx","flixel/math/FlxVector.hx",651,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(651)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_lx,return )

Float FlxVector_obj::get_ly( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_ly",0x72a8d043,"flixel.math.FlxVector.get_ly","flixel/math/FlxVector.hx",656,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(656)
	return -(this->x);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_ly,return )

Float FlxVector_obj::EPSILON;

Float FlxVector_obj::EPSILON_SQUARED;

::flixel::util::FlxPool_flixel_math_FlxVector FlxVector_obj::_pool;

::flixel::math::FlxVector FlxVector_obj::_vector1;

::flixel::math::FlxVector FlxVector_obj::_vector2;

::flixel::math::FlxVector FlxVector_obj::_vector3;

::flixel::math::FlxVector FlxVector_obj::get( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVector","get",0xe9cc9009,"flixel.math.FlxVector.get","flixel/math/FlxVector.hx",26,0x1fcaa75d)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(27)
		::flixel::math::FlxVector vector = hx::TCast< ::flixel::math::FlxVector >::cast(::flixel::math::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(28)
		vector->_inPool = false;
		HX_STACK_LINE(29)
		return vector;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,get,return )


FlxVector_obj::FlxVector_obj()
{
}

Dynamic FlxVector_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return get_dx(); }
		if (HX_FIELD_EQ(inName,"dy") ) { return get_dy(); }
		if (HX_FIELD_EQ(inName,"rx") ) { return get_rx(); }
		if (HX_FIELD_EQ(inName,"ry") ) { return get_ry(); }
		if (HX_FIELD_EQ(inName,"lx") ) { return get_lx(); }
		if (HX_FIELD_EQ(inName,"ly") ) { return get_ly(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zero") ) { return zero_dyn(); }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		if (HX_FIELD_EQ(inName,"dist") ) { return dist_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"addNew") ) { return addNew_dyn(); }
		if (HX_FIELD_EQ(inName,"isZero") ) { return isZero_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dx") ) { return get_dx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dy") ) { return get_dy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rx") ) { return get_rx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ry") ) { return get_ry_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lx") ) { return get_lx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ly") ) { return get_ly_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"degrees") ) { return get_degrees(); }
		if (HX_FIELD_EQ(inName,"radians") ) { return get_radians(); }
		if (HX_FIELD_EQ(inName,"isValid") ) { return isValid_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_vector1") ) { return _vector1; }
		if (HX_FIELD_EQ(inName,"_vector2") ) { return _vector2; }
		if (HX_FIELD_EQ(inName,"_vector3") ) { return _vector3; }
		if (HX_FIELD_EQ(inName,"scaleNew") ) { return scaleNew_dyn(); }
		if (HX_FIELD_EQ(inName,"truncate") ) { return truncate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"negateNew") ) { return negateNew_dyn(); }
		if (HX_FIELD_EQ(inName,"projectTo") ) { return projectTo_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"isParallel") ) { return isParallel_dyn(); }
		if (HX_FIELD_EQ(inName,"leftNormal") ) { return leftNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subtractNew") ) { return subtractNew_dyn(); }
		if (HX_FIELD_EQ(inName,"rightNormal") ) { return rightNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"perpProduct") ) { return perpProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"distSquared") ) { return distSquared_dyn(); }
		if (HX_FIELD_EQ(inName,"get_degrees") ) { return get_degrees_dyn(); }
		if (HX_FIELD_EQ(inName,"set_degrees") ) { return set_degrees_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radians") ) { return get_radians_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radians") ) { return set_radians_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isNormalized") ) { return isNormalized_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return get_lengthSquared(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rotateWithTrig") ) { return rotateWithTrig_dyn(); }
		if (HX_FIELD_EQ(inName,"radiansBetween") ) { return radiansBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"degreesBetween") ) { return degreesBetween_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isPerpendicular") ) { return isPerpendicular_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateByRadians") ) { return rotateByRadians_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateByDegrees") ) { return rotateByDegrees_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findIntersection") ) { return findIntersection_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_lengthSquared") ) { return get_lengthSquared_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"crossProductLength") ) { return crossProductLength_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceWithFriction") ) { return bounceWithFriction_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"projectToNormalized") ) { return projectToNormalized_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"dotProdWithNormalizing") ) { return dotProdWithNormalizing_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"findIntersectionInBounds") ) { return findIntersectionInBounds_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< ::flixel::util::FlxPool_flixel_math_FlxVector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return set_length(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"degrees") ) { return set_degrees(inValue); }
		if (HX_FIELD_EQ(inName,"radians") ) { return set_radians(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_vector1") ) { _vector1=inValue.Cast< ::flixel::math::FlxVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vector2") ) { _vector2=inValue.Cast< ::flixel::math::FlxVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vector3") ) { _vector3=inValue.Cast< ::flixel::math::FlxVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dx"));
	outFields->push(HX_CSTRING("dy"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("lengthSquared"));
	outFields->push(HX_CSTRING("degrees"));
	outFields->push(HX_CSTRING("radians"));
	outFields->push(HX_CSTRING("rx"));
	outFields->push(HX_CSTRING("ry"));
	outFields->push(HX_CSTRING("lx"));
	outFields->push(HX_CSTRING("ly"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("EPSILON"),
	HX_CSTRING("EPSILON_SQUARED"),
	HX_CSTRING("_pool"),
	HX_CSTRING("_vector1"),
	HX_CSTRING("_vector2"),
	HX_CSTRING("_vector3"),
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("put"),
	HX_CSTRING("set"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleNew"),
	HX_CSTRING("addNew"),
	HX_CSTRING("subtractNew"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("dotProdWithNormalizing"),
	HX_CSTRING("isPerpendicular"),
	HX_CSTRING("crossProductLength"),
	HX_CSTRING("isParallel"),
	HX_CSTRING("isZero"),
	HX_CSTRING("zero"),
	HX_CSTRING("normalize"),
	HX_CSTRING("isNormalized"),
	HX_CSTRING("rotateByRadians"),
	HX_CSTRING("rotateByDegrees"),
	HX_CSTRING("rotateWithTrig"),
	HX_CSTRING("rightNormal"),
	HX_CSTRING("leftNormal"),
	HX_CSTRING("negate"),
	HX_CSTRING("negateNew"),
	HX_CSTRING("projectTo"),
	HX_CSTRING("projectToNormalized"),
	HX_CSTRING("perpProduct"),
	HX_CSTRING("ratio"),
	HX_CSTRING("findIntersection"),
	HX_CSTRING("findIntersectionInBounds"),
	HX_CSTRING("truncate"),
	HX_CSTRING("radiansBetween"),
	HX_CSTRING("degreesBetween"),
	HX_CSTRING("sign"),
	HX_CSTRING("dist"),
	HX_CSTRING("distSquared"),
	HX_CSTRING("bounce"),
	HX_CSTRING("bounceWithFriction"),
	HX_CSTRING("isValid"),
	HX_CSTRING("clone"),
	HX_CSTRING("get_dx"),
	HX_CSTRING("get_dy"),
	HX_CSTRING("get_length"),
	HX_CSTRING("set_length"),
	HX_CSTRING("get_lengthSquared"),
	HX_CSTRING("get_degrees"),
	HX_CSTRING("set_degrees"),
	HX_CSTRING("get_radians"),
	HX_CSTRING("set_radians"),
	HX_CSTRING("get_rx"),
	HX_CSTRING("get_ry"),
	HX_CSTRING("get_lx"),
	HX_CSTRING("get_ly"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVector_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxVector_obj::EPSILON,"EPSILON");
	HX_MARK_MEMBER_NAME(FlxVector_obj::EPSILON_SQUARED,"EPSILON_SQUARED");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_pool,"_pool");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_vector1,"_vector1");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_vector2,"_vector2");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_vector3,"_vector3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVector_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::EPSILON,"EPSILON");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::EPSILON_SQUARED,"EPSILON_SQUARED");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_pool,"_pool");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_vector1,"_vector1");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_vector2,"_vector2");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_vector3,"_vector3");
};

#endif

Class FlxVector_obj::__mClass;

void FlxVector_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.math.FlxVector"), hx::TCanCast< FlxVector_obj> ,sStaticFields,sMemberFields,
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

void FlxVector_obj::__boot()
{
	EPSILON= 0.0000001;
	EPSILON_SQUARED= 9.9999999999999984e-015;
	_pool= ::flixel::util::FlxPool_flixel_math_FlxVector_obj::__new(hx::ClassOf< ::flixel::math::FlxVector >());
	_vector1= ::flixel::math::FlxVector_obj::__new(null(),null());
	_vector2= ::flixel::math::FlxVector_obj::__new(null(),null());
	_vector3= ::flixel::math::FlxVector_obj::__new(null(),null());
}

} // end namespace flixel
} // end namespace math
