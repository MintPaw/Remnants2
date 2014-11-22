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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace math{

Void FlxRect_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_FRAME("flixel.math.FlxRect","new",0xa1ebbd34,"flixel.math.FlxRect.new","flixel/math/FlxRect.hx",12,0x2aef791c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(68)
	this->_inPool = false;
	HX_STACK_LINE(67)
	this->_weak = false;
	HX_STACK_LINE(72)
	this->x = X;
	HX_STACK_LINE(72)
	this->y = Y;
	HX_STACK_LINE(72)
	this->width = Width;
	HX_STACK_LINE(72)
	this->height = Height;
	HX_STACK_LINE(72)
	hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//FlxRect_obj::~FlxRect_obj() { }

Dynamic FlxRect_obj::__CreateEmpty() { return  new FlxRect_obj; }
hx::ObjectPtr< FlxRect_obj > FlxRect_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxRect_obj > result = new FlxRect_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return result;}

Dynamic FlxRect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRect_obj > result = new FlxRect_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *FlxRect_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxPooled_obj)) return operator ::flixel::util::IFlxPooled_obj *();
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxRect_obj::put( ){
{
		HX_STACK_FRAME("flixel.math.FlxRect","put",0xa1ed4fa3,"flixel.math.FlxRect.put","flixel/math/FlxRect.hx",80,0x2aef791c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		if ((!(this->_inPool))){
			HX_STACK_LINE(82)
			this->_inPool = true;
			HX_STACK_LINE(83)
			this->_weak = false;
			HX_STACK_LINE(84)
			::flixel::math::FlxRect_obj::_pool->putUnsafe(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,put,(void))

Void FlxRect_obj::putWeak( ){
{
		HX_STACK_FRAME("flixel.math.FlxRect","putWeak",0x585fe5bb,"flixel.math.FlxRect.putWeak","flixel/math/FlxRect.hx",93,0x2aef791c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		if ((this->_weak)){
			HX_STACK_LINE(95)
			if ((!(this->_inPool))){
				HX_STACK_LINE(95)
				this->_inPool = true;
				HX_STACK_LINE(95)
				this->_weak = false;
				HX_STACK_LINE(95)
				::flixel::math::FlxRect_obj::_pool->putUnsafe(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,putWeak,(void))

::flixel::math::FlxRect FlxRect_obj::setSize( Float Width,Float Height){
	HX_STACK_FRAME("flixel.math.FlxRect","setSize",0x6cc8c857,"flixel.math.FlxRect.setSize","flixel/math/FlxRect.hx",106,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_LINE(107)
	this->width = Width;
	HX_STACK_LINE(108)
	this->height = Height;
	HX_STACK_LINE(109)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,setSize,return )

::flixel::math::FlxRect FlxRect_obj::setPosition( Float x,Float y){
	HX_STACK_FRAME("flixel.math.FlxRect","setPosition",0xc8aa4b3f,"flixel.math.FlxRect.setPosition","flixel/math/FlxRect.hx",116,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(117)
	this->x = x;
	HX_STACK_LINE(118)
	this->y = y;
	HX_STACK_LINE(119)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,setPosition,return )

::flixel::math::FlxRect FlxRect_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.math.FlxRect","set",0xa1ef8876,"flixel.math.FlxRect.set","flixel/math/FlxRect.hx",132,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(133)
		this->x = X;
		HX_STACK_LINE(134)
		this->y = Y;
		HX_STACK_LINE(135)
		this->width = Width;
		HX_STACK_LINE(136)
		this->height = Height;
		HX_STACK_LINE(137)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,set,return )

::flixel::math::FlxRect FlxRect_obj::copyFrom( ::flixel::math::FlxRect Rect){
	HX_STACK_FRAME("flixel.math.FlxRect","copyFrom",0x003a1e6b,"flixel.math.FlxRect.copyFrom","flixel/math/FlxRect.hx",147,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(148)
	this->x = Rect->x;
	HX_STACK_LINE(149)
	this->y = Rect->y;
	HX_STACK_LINE(150)
	this->width = Rect->width;
	HX_STACK_LINE(151)
	this->height = Rect->height;
	HX_STACK_LINE(152)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFrom,return )

::flixel::math::FlxRect FlxRect_obj::copyTo( ::flixel::math::FlxRect Rect){
	HX_STACK_FRAME("flixel.math.FlxRect","copyTo",0x8a77ec3c,"flixel.math.FlxRect.copyTo","flixel/math/FlxRect.hx",162,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(163)
	Rect->x = this->x;
	HX_STACK_LINE(164)
	Rect->y = this->y;
	HX_STACK_LINE(165)
	Rect->width = this->width;
	HX_STACK_LINE(166)
	Rect->height = this->height;
	HX_STACK_LINE(167)
	return Rect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyTo,return )

::flixel::math::FlxRect FlxRect_obj::copyFromFlash( ::openfl::_v2::geom::Rectangle FlashRect){
	HX_STACK_FRAME("flixel.math.FlxRect","copyFromFlash",0x00426345,"flixel.math.FlxRect.copyFromFlash","flixel/math/FlxRect.hx",177,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashRect,"FlashRect")
	HX_STACK_LINE(178)
	this->x = FlashRect->x;
	HX_STACK_LINE(179)
	this->y = FlashRect->y;
	HX_STACK_LINE(180)
	this->width = FlashRect->width;
	HX_STACK_LINE(181)
	this->height = FlashRect->height;
	HX_STACK_LINE(182)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFromFlash,return )

::openfl::_v2::geom::Rectangle FlxRect_obj::copyToFlash( ::openfl::_v2::geom::Rectangle FlashRect){
	HX_STACK_FRAME("flixel.math.FlxRect","copyToFlash",0xf273dfd4,"flixel.math.FlxRect.copyToFlash","flixel/math/FlxRect.hx",192,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashRect,"FlashRect")
	HX_STACK_LINE(193)
	if (((FlashRect == null()))){
		HX_STACK_LINE(195)
		::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(195)
		FlashRect = _g;
	}
	HX_STACK_LINE(198)
	FlashRect->x = this->x;
	HX_STACK_LINE(199)
	FlashRect->y = this->y;
	HX_STACK_LINE(200)
	FlashRect->width = this->width;
	HX_STACK_LINE(201)
	FlashRect->height = this->height;
	HX_STACK_LINE(202)
	return FlashRect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyToFlash,return )

bool FlxRect_obj::overlaps( ::flixel::math::FlxRect Rect){
	HX_STACK_FRAME("flixel.math.FlxRect","overlaps",0x7d03e5b8,"flixel.math.FlxRect.overlaps","flixel/math/FlxRect.hx",213,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(213)
	return (bool((bool((bool(((Rect->x + Rect->width) > this->x)) && bool((Rect->x < (this->x + this->width))))) && bool(((Rect->y + Rect->height) > this->y)))) && bool((Rect->y < (this->y + this->height))));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,overlaps,return )

bool FlxRect_obj::containsFlxPoint( ::flixel::math::FlxPoint Point){
	HX_STACK_FRAME("flixel.math.FlxRect","containsFlxPoint",0x79786e69,"flixel.math.FlxRect.containsFlxPoint","flixel/math/FlxRect.hx",224,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Point,"Point")
	HX_STACK_LINE(224)
	return ::flixel::math::FlxMath_obj::pointInFlxRect(Point->x,Point->y,hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,containsFlxPoint,return )

::flixel::math::FlxRect FlxRect_obj::_union( ::flixel::math::FlxRect Rect){
	HX_STACK_FRAME("flixel.math.FlxRect","union",0xcff32ee3,"flixel.math.FlxRect.union","flixel/math/FlxRect.hx",235,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(236)
	Float minX = ::Math_obj::min(this->x,Rect->x);		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(237)
	Float minY = ::Math_obj::min(this->y,Rect->y);		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(238)
	Float maxX = ::Math_obj::max((this->x + this->width),(Rect->x + Rect->width));		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(239)
	Float maxY = ::Math_obj::max((this->y + this->height),(Rect->y + Rect->height));		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(241)
	this->x = minX;
	HX_STACK_LINE(241)
	this->y = minY;
	HX_STACK_LINE(241)
	this->width = (maxX - minX);
	HX_STACK_LINE(241)
	this->height = (maxY - minY);
	HX_STACK_LINE(241)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,_union,return )

::flixel::math::FlxRect FlxRect_obj::floor( ){
	HX_STACK_FRAME("flixel.math.FlxRect","floor",0x2ba29ba0,"flixel.math.FlxRect.floor","flixel/math/FlxRect.hx",248,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	int _g = ::Math_obj::floor(this->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(249)
	this->x = _g;
	HX_STACK_LINE(250)
	int _g1 = ::Math_obj::floor(this->y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(250)
	this->y = _g1;
	HX_STACK_LINE(251)
	int _g2 = ::Math_obj::floor(this->width);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(251)
	this->width = _g2;
	HX_STACK_LINE(252)
	int _g3 = ::Math_obj::floor(this->height);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(252)
	this->height = _g3;
	HX_STACK_LINE(253)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,floor,return )

::flixel::math::FlxRect FlxRect_obj::ceil( ){
	HX_STACK_FRAME("flixel.math.FlxRect","ceil",0x05146bb1,"flixel.math.FlxRect.ceil","flixel/math/FlxRect.hx",260,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	int _g = ::Math_obj::ceil(this->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(261)
	this->x = _g;
	HX_STACK_LINE(262)
	int _g1 = ::Math_obj::ceil(this->y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(262)
	this->y = _g1;
	HX_STACK_LINE(263)
	int _g2 = ::Math_obj::ceil(this->width);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(263)
	this->width = _g2;
	HX_STACK_LINE(264)
	int _g3 = ::Math_obj::ceil(this->height);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(264)
	this->height = _g3;
	HX_STACK_LINE(265)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,ceil,return )

Void FlxRect_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.math.FlxRect","destroy",0x7f7713ce,"flixel.math.FlxRect.destroy","flixel/math/FlxRect.hx",271,0x2aef791c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,destroy,(void))

::String FlxRect_obj::toString( ){
	HX_STACK_FRAME("flixel.math.FlxRect","toString",0x7047e358,"flixel.math.FlxRect.toString","flixel/math/FlxRect.hx",277,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(279)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(279)
		_this->label = HX_CSTRING("x");
		HX_STACK_LINE(279)
		_this->value = this->x;
		HX_STACK_LINE(279)
		_g = _this;
	}
	HX_STACK_LINE(280)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(280)
	{
		HX_STACK_LINE(280)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(280)
		_this->label = HX_CSTRING("y");
		HX_STACK_LINE(280)
		_this->value = this->y;
		HX_STACK_LINE(280)
		_g1 = _this;
	}
	HX_STACK_LINE(281)
	::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(281)
	{
		HX_STACK_LINE(281)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(281)
		_this->label = HX_CSTRING("w");
		HX_STACK_LINE(281)
		_this->value = this->width;
		HX_STACK_LINE(281)
		_g2 = _this;
	}
	HX_STACK_LINE(282)
	::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(282)
	{
		HX_STACK_LINE(282)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(282)
		_this->label = HX_CSTRING("h");
		HX_STACK_LINE(282)
		_this->value = this->height;
		HX_STACK_LINE(282)
		_g3 = _this;
	}
	HX_STACK_LINE(278)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(278)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g4);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,toString,return )

bool FlxRect_obj::equals( ::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.math.FlxRect","equals",0x8137bdeb,"flixel.math.FlxRect.equals","flixel/math/FlxRect.hx",293,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::math::FlxRect_obj > __this,::flixel::math::FlxRect &rect){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRect.hx",293,0x2aef791c)
			{
				HX_STACK_LINE(293)
				Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(293)
				Float _g = ::Math_obj::abs((__this->x - rect->x));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(293)
				return (_g <= aDiff);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( hx::ObjectPtr< ::flixel::math::FlxRect_obj > __this,::flixel::math::FlxRect &rect){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRect.hx",293,0x2aef791c)
			{
				HX_STACK_LINE(293)
				Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(293)
				Float _g1 = ::Math_obj::abs((__this->y - rect->y));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(293)
				return (_g1 <= aDiff);
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( hx::ObjectPtr< ::flixel::math::FlxRect_obj > __this,::flixel::math::FlxRect &rect){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRect.hx",294,0x2aef791c)
			{
				HX_STACK_LINE(294)
				Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(294)
				Float _g2 = ::Math_obj::abs((__this->width - rect->width));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(294)
				return (_g2 <= aDiff);
			}
			return null();
		}
	};
	HX_STACK_LINE(293)
	if (((  (((  ((_Function_1_1::Block(this,rect))) ? bool(_Function_1_2::Block(this,rect)) : bool(false) ))) ? bool(_Function_1_3::Block(this,rect)) : bool(false) ))){
		HX_STACK_LINE(294)
		Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
		HX_STACK_LINE(294)
		Float _g3 = ::Math_obj::abs((this->height - rect->height));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(294)
		return (_g3 <= aDiff);
	}
	else{
		HX_STACK_LINE(293)
		return false;
	}
	HX_STACK_LINE(293)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,equals,return )

::flixel::math::FlxRect FlxRect_obj::intersection( ::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.math.FlxRect","intersection",0x60177af5,"flixel.math.FlxRect.intersection","flixel/math/FlxRect.hx",305,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(306)
	Float x0;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(306)
	if (((this->x < rect->x))){
		HX_STACK_LINE(306)
		x0 = rect->x;
	}
	else{
		HX_STACK_LINE(306)
		x0 = this->x;
	}
	HX_STACK_LINE(307)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(307)
	if ((((this->x + this->width) > (rect->x + rect->width)))){
		HX_STACK_LINE(307)
		x1 = (rect->x + rect->width);
	}
	else{
		HX_STACK_LINE(307)
		x1 = (this->x + this->width);
	}
	HX_STACK_LINE(308)
	if (((x1 <= x0))){
		HX_STACK_LINE(310)
		return ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(313)
	Float y0;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(313)
	if (((this->y < rect->y))){
		HX_STACK_LINE(313)
		y0 = rect->y;
	}
	else{
		HX_STACK_LINE(313)
		y0 = this->y;
	}
	HX_STACK_LINE(314)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(314)
	if ((((this->y + this->height) > (rect->y + rect->height)))){
		HX_STACK_LINE(314)
		y1 = (rect->y + rect->height);
	}
	else{
		HX_STACK_LINE(314)
		y1 = (this->y + this->height);
	}
	HX_STACK_LINE(315)
	if (((y1 <= y0))){
		HX_STACK_LINE(317)
		return ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(320)
	return ::flixel::math::FlxRect_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,intersection,return )

Float FlxRect_obj::get_left( ){
	HX_STACK_FRAME("flixel.math.FlxRect","get_left",0xff43d63c,"flixel.math.FlxRect.get_left","flixel/math/FlxRect.hx",325,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(325)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_left,return )

Float FlxRect_obj::set_left( Float Value){
	HX_STACK_FRAME("flixel.math.FlxRect","set_left",0xada12fb0,"flixel.math.FlxRect.set_left","flixel/math/FlxRect.hx",329,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(330)
	hx::SubEq(this->width,(Value - this->x));
	HX_STACK_LINE(331)
	return this->x = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_left,return )

Float FlxRect_obj::get_right( ){
	HX_STACK_FRAME("flixel.math.FlxRect","get_right",0xd324ac07,"flixel.math.FlxRect.get_right","flixel/math/FlxRect.hx",336,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(336)
	return (this->x + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_right,return )

Float FlxRect_obj::set_right( Float Value){
	HX_STACK_FRAME("flixel.math.FlxRect","set_right",0xb6759813,"flixel.math.FlxRect.set_right","flixel/math/FlxRect.hx",340,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(341)
	this->width = (Value - this->x);
	HX_STACK_LINE(342)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_right,return )

Float FlxRect_obj::get_top( ){
	HX_STACK_FRAME("flixel.math.FlxRect","get_top",0x81be1600,"flixel.math.FlxRect.get_top","flixel/math/FlxRect.hx",347,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(347)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_top,return )

Float FlxRect_obj::set_top( Float Value){
	HX_STACK_FRAME("flixel.math.FlxRect","set_top",0x74bfa70c,"flixel.math.FlxRect.set_top","flixel/math/FlxRect.hx",351,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(352)
	hx::SubEq(this->height,(Value - this->y));
	HX_STACK_LINE(353)
	return this->y = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_top,return )

Float FlxRect_obj::get_bottom( ){
	HX_STACK_FRAME("flixel.math.FlxRect","get_bottom",0x04446c60,"flixel.math.FlxRect.get_bottom","flixel/math/FlxRect.hx",358,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(358)
	return (this->y + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_bottom,return )

Float FlxRect_obj::set_bottom( Float Value){
	HX_STACK_FRAME("flixel.math.FlxRect","set_bottom",0x07c20ad4,"flixel.math.FlxRect.set_bottom","flixel/math/FlxRect.hx",362,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(363)
	this->height = (Value - this->y);
	HX_STACK_LINE(364)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_bottom,return )

::flixel::math::FlxRect FlxRect_obj::flxRect;

::openfl::_v2::geom::Rectangle FlxRect_obj::rect;

::flixel::util::FlxPool_flixel_math_FlxRect FlxRect_obj::_pool;

::flixel::math::FlxRect FlxRect_obj::get( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.math.FlxRect","get",0xa1e66d6a,"flixel.math.FlxRect.get","flixel/math/FlxRect.hx",25,0x2aef791c)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(26)
		::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(26)
			_this->x = X;
			HX_STACK_LINE(26)
			_this->y = Y;
			HX_STACK_LINE(26)
			_this->width = Width;
			HX_STACK_LINE(26)
			_this->height = Height;
			HX_STACK_LINE(26)
			rect = _this;
		}
		HX_STACK_LINE(27)
		rect->_inPool = false;
		HX_STACK_LINE(28)
		return rect;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,get,return )

::flixel::math::FlxRect FlxRect_obj::weak( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.math.FlxRect","weak",0x124ca924,"flixel.math.FlxRect.weak","flixel/math/FlxRect.hx",36,0x2aef791c)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(37)
		::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::flixel::math::FlxRect rect1;		HX_STACK_VAR(rect1,"rect1");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(37)
				_this->x = X;
				HX_STACK_LINE(37)
				_this->y = Y;
				HX_STACK_LINE(37)
				_this->width = Width;
				HX_STACK_LINE(37)
				_this->height = Height;
				HX_STACK_LINE(37)
				rect1 = _this;
			}
			HX_STACK_LINE(37)
			rect1->_inPool = false;
			HX_STACK_LINE(37)
			rect = rect1;
		}
		HX_STACK_LINE(38)
		rect->_weak = true;
		HX_STACK_LINE(39)
		return rect;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,weak,return )


FlxRect_obj::FlxRect_obj()
{
}

Dynamic FlxRect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"top") ) { return get_top(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"weak") ) { return weak_dyn(); }
		if (HX_FIELD_EQ(inName,"left") ) { return get_left(); }
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"right") ) { return get_right(); }
		if (HX_FIELD_EQ(inName,"_weak") ) { return _weak; }
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"bottom") ) { return get_bottom(); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flxRect") ) { return flxRect; }
		if (HX_FIELD_EQ(inName,"_inPool") ) { return _inPool; }
		if (HX_FIELD_EQ(inName,"putWeak") ) { return putWeak_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"containsFlxPoint") ) { return containsFlxPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"left") ) { return set_left(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< ::flixel::util::FlxPool_flixel_math_FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"_weak") ) { _weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { return set_bottom(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flxRect") ) { flxRect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inPool") ) { _inPool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("_weak"));
	outFields->push(HX_CSTRING("_inPool"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("flxRect"),
	HX_CSTRING("rect"),
	HX_CSTRING("_pool"),
	HX_CSTRING("get"),
	HX_CSTRING("weak"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxRect_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,height),HX_CSTRING("height")},
	{hx::fsBool,(int)offsetof(FlxRect_obj,_weak),HX_CSTRING("_weak")},
	{hx::fsBool,(int)offsetof(FlxRect_obj,_inPool),HX_CSTRING("_inPool")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("_weak"),
	HX_CSTRING("_inPool"),
	HX_CSTRING("put"),
	HX_CSTRING("putWeak"),
	HX_CSTRING("setSize"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("set"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyTo"),
	HX_CSTRING("copyFromFlash"),
	HX_CSTRING("copyToFlash"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("containsFlxPoint"),
	HX_CSTRING("union"),
	HX_CSTRING("floor"),
	HX_CSTRING("ceil"),
	HX_CSTRING("destroy"),
	HX_CSTRING("toString"),
	HX_CSTRING("equals"),
	HX_CSTRING("intersection"),
	HX_CSTRING("get_left"),
	HX_CSTRING("set_left"),
	HX_CSTRING("get_right"),
	HX_CSTRING("set_right"),
	HX_CSTRING("get_top"),
	HX_CSTRING("set_top"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("set_bottom"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxRect_obj::flxRect,"flxRect");
	HX_MARK_MEMBER_NAME(FlxRect_obj::rect,"rect");
	HX_MARK_MEMBER_NAME(FlxRect_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRect_obj::flxRect,"flxRect");
	HX_VISIT_MEMBER_NAME(FlxRect_obj::rect,"rect");
	HX_VISIT_MEMBER_NAME(FlxRect_obj::_pool,"_pool");
};

#endif

Class FlxRect_obj::__mClass;

void FlxRect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.math.FlxRect"), hx::TCanCast< FlxRect_obj> ,sStaticFields,sMemberFields,
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

void FlxRect_obj::__boot()
{
	flxRect= ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());
	rect= ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
	_pool= ::flixel::util::FlxPool_flixel_math_FlxRect_obj::__new(hx::ClassOf< ::flixel::math::FlxRect >());
}

} // end namespace flixel
} // end namespace math
