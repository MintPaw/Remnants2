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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
namespace addons{
namespace ui{

Void FlxUISprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","new",0xd5a60c2c,"flixel.addons.ui.FlxUISprite.new","flixel/addons/ui/FlxUISprite.hx",14,0xc16e6665)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(135)
	this->_originalKey = HX_CSTRING("");
	HX_STACK_LINE(32)
	this->resize_ratio_axis = (int)1;
	HX_STACK_LINE(25)
	this->recycled = false;
	HX_STACK_LINE(22)
	this->ptr_owner = null();
	HX_STACK_LINE(16)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(47)
	super::__construct(X,Y,SimpleGraphic);
}
;
	return null();
}

//FlxUISprite_obj::~FlxUISprite_obj() { }

Dynamic FlxUISprite_obj::__CreateEmpty() { return  new FlxUISprite_obj; }
hx::ObjectPtr< FlxUISprite_obj > FlxUISprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxUISprite_obj > result = new FlxUISprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic);
	return result;}

Dynamic FlxUISprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUISprite_obj > result = new FlxUISprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *FlxUISprite_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

Float FlxUISprite_obj::set_resize_ratio( Float r){
	HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","set_resize_ratio",0xbe28f3f1,"flixel.addons.ui.FlxUISprite.set_resize_ratio","flixel/addons/ui/FlxUISprite.hx",33,0xc16e6665)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(33)
	this->resize_ratio = r;
	HX_STACK_LINE(33)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUISprite_obj,set_resize_ratio,return )

::flixel::math::FlxPoint FlxUISprite_obj::set_resize_point( ::flixel::math::FlxPoint r){
	HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","set_resize_point",0xa0947336,"flixel.addons.ui.FlxUISprite.set_resize_point","flixel/addons/ui/FlxUISprite.hx",36,0xc16e6665)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(37)
	if (((r != null()))){
		HX_STACK_LINE(38)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(38)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(38)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(38)
			point->_inPool = false;
			HX_STACK_LINE(38)
			_g = point;
		}
		HX_STACK_LINE(38)
		this->resize_point = _g;
		HX_STACK_LINE(39)
		this->resize_point->set_x(r->x);
		HX_STACK_LINE(40)
		this->resize_point->set_y(r->y);
	}
	HX_STACK_LINE(42)
	return this->resize_point;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUISprite_obj,set_resize_point,return )

Void FlxUISprite_obj::recycle( Dynamic data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","recycle",0x37d621df,"flixel.addons.ui.FlxUISprite.recycle","flixel/addons/ui/FlxUISprite.hx",51,0xc16e6665)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(51)
		this->recycled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUISprite_obj,recycle,(void))

Void FlxUISprite_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","resize",0x58d785a8,"flixel.addons.ui.FlxUISprite.resize","flixel/addons/ui/FlxUISprite.hx",57,0xc16e6665)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(58)
		Float old_width = this->get_width();		HX_STACK_VAR(old_width,"old_width");
		HX_STACK_LINE(59)
		Float old_height = this->get_height();		HX_STACK_VAR(old_height,"old_height");
		HX_STACK_LINE(61)
		if (((this->resize_ratio > (int)0))){
			HX_STACK_LINE(63)
			Float effective_ratio = (Float(w) / Float(h));		HX_STACK_VAR(effective_ratio,"effective_ratio");
			HX_STACK_LINE(64)
			Float _g = ::Math_obj::abs((effective_ratio - this->resize_ratio));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(64)
			if (((_g > 0.0001))){
				HX_STACK_LINE(66)
				if (((this->resize_ratio_axis == (int)1))){
					HX_STACK_LINE(68)
					h = (w * ((Float((int)1) / Float(this->resize_ratio))));
				}
				else{
					HX_STACK_LINE(72)
					w = (h * ((Float((int)1) / Float(this->resize_ratio))));
				}
			}
		}
		HX_STACK_LINE(77)
		if (((bool((this->_originalKey != HX_CSTRING(""))) && bool((this->_originalKey != null()))))){
			HX_STACK_LINE(79)
			::String newKey = ::flixel::addons::ui::U_obj::loadScaledImage(this->_originalKey,w,h);		HX_STACK_VAR(newKey,"newKey");
			HX_STACK_LINE(80)
			if (((bool((newKey != HX_CSTRING(""))) && bool((newKey != null()))))){
				HX_STACK_LINE(82)
				this->loadFromScaledGraphic(newKey,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(86)
		Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		Float diff_w = (_g1 - old_width);		HX_STACK_VAR(diff_w,"diff_w");
		HX_STACK_LINE(87)
		Float _g2 = this->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(87)
		Float diff_h = (_g2 - old_height);		HX_STACK_VAR(diff_h,"diff_h");
		HX_STACK_LINE(89)
		if (((this->resize_point != null()))){
			HX_STACK_LINE(90)
			Float delta_x = (diff_w * this->resize_point->x);		HX_STACK_VAR(delta_x,"delta_x");
			HX_STACK_LINE(91)
			Float delta_y = (diff_h * this->resize_point->y);		HX_STACK_VAR(delta_y,"delta_y");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				::flixel::addons::ui::FlxUISprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(92)
				_g->set_x((_g->x - delta_x));
			}
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				::flixel::addons::ui::FlxUISprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(93)
				_g->set_y((_g->y - delta_y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUISprite_obj,resize,(void))

Void FlxUISprite_obj::loadGraphicAtScale( ::String GraphicKey,Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","loadGraphicAtScale",0x16f15949,"flixel.addons.ui.FlxUISprite.loadGraphicAtScale","flixel/addons/ui/FlxUISprite.hx",98,0xc16e6665)
		HX_STACK_THIS(this)
		HX_STACK_ARG(GraphicKey,"GraphicKey")
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(99)
		this->loadGraphic(GraphicKey,false,null(),null(),null(),null());
		HX_STACK_LINE(100)
		this->resize(W,H);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUISprite_obj,loadGraphicAtScale,(void))

::flixel::FlxSprite FlxUISprite_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","loadGraphic",0x778a00ee,"flixel.addons.ui.FlxUISprite.loadGraphic","flixel/addons/ui/FlxUISprite.hx",115,0xc16e6665)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Animated,"Animated")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(116)
		::flixel::FlxSprite sprite = this->super::loadGraphic(Graphic,Animated,Width,Height,Unique,Key);		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(117)
		this->_originalKey = this->graphic->assetsKey;
		HX_STACK_LINE(118)
		if (((this->_originalKey == null()))){
			HX_STACK_LINE(120)
			this->_originalKey = this->graphic->key;
		}
		HX_STACK_LINE(122)
		return sprite;
	}
}


Void FlxUISprite_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","destroy",0x24d03ec6,"flixel.addons.ui.FlxUISprite.destroy","flixel/addons/ui/FlxUISprite.hx",125,0xc16e6665)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		this->ptr_owner = null();
		HX_STACK_LINE(127)
		this->super::destroy();
	}
return null();
}


Void FlxUISprite_obj::loadFromScaledGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","loadFromScaledGraphic",0xde4b092a,"flixel.addons.ui.FlxUISprite.loadFromScaledGraphic","flixel/addons/ui/FlxUISprite.hx",132,0xc16e6665)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Animated,"Animated")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(132)
		this->super::loadGraphic(Graphic,Animated,Width,Height,Unique,Key);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxUISprite_obj,loadFromScaledGraphic,(void))

int FlxUISprite_obj::RESIZE_RATIO_X;

int FlxUISprite_obj::RESIZE_RATIO_Y;

int FlxUISprite_obj::RESIZE_RATIO_UNKNOWN;


FlxUISprite_obj::FlxUISprite_obj()
{
}

void FlxUISprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUISprite);
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(ptr_owner,"ptr_owner");
	HX_MARK_MEMBER_NAME(recycled,"recycled");
	HX_MARK_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_MARK_MEMBER_NAME(resize_ratio_axis,"resize_ratio_axis");
	HX_MARK_MEMBER_NAME(resize_point,"resize_point");
	HX_MARK_MEMBER_NAME(_originalKey,"_originalKey");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUISprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(ptr_owner,"ptr_owner");
	HX_VISIT_MEMBER_NAME(recycled,"recycled");
	HX_VISIT_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_VISIT_MEMBER_NAME(resize_ratio_axis,"resize_ratio_axis");
	HX_VISIT_MEMBER_NAME(resize_point,"resize_point");
	HX_VISIT_MEMBER_NAME(_originalKey,"_originalKey");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUISprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"recycled") ) { return recycled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ptr_owner") ) { return ptr_owner; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { return resize_ratio; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { return resize_point; }
		if (HX_FIELD_EQ(inName,"_originalKey") ) { return _originalKey; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
		if (HX_FIELD_EQ(inName,"set_resize_ratio") ) { return set_resize_ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"set_resize_point") ) { return set_resize_point_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resize_ratio_axis") ) { return resize_ratio_axis; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadGraphicAtScale") ) { return loadGraphicAtScale_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"loadFromScaledGraphic") ) { return loadFromScaledGraphic_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUISprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"recycled") ) { recycled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ptr_owner") ) { ptr_owner=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { if (inCallProp) return set_resize_ratio(inValue);resize_ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { if (inCallProp) return set_resize_point(inValue);resize_point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_originalKey") ) { _originalKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resize_ratio_axis") ) { resize_ratio_axis=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUISprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("broadcastToFlxUI"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("ptr_owner"));
	outFields->push(HX_CSTRING("recycled"));
	outFields->push(HX_CSTRING("resize_ratio"));
	outFields->push(HX_CSTRING("resize_ratio_axis"));
	outFields->push(HX_CSTRING("resize_point"));
	outFields->push(HX_CSTRING("_originalKey"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RESIZE_RATIO_X"),
	HX_CSTRING("RESIZE_RATIO_Y"),
	HX_CSTRING("RESIZE_RATIO_UNKNOWN"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUISprite_obj,broadcastToFlxUI),HX_CSTRING("broadcastToFlxUI")},
	{hx::fsString,(int)offsetof(FlxUISprite_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUISprite_obj,ptr_owner),HX_CSTRING("ptr_owner")},
	{hx::fsBool,(int)offsetof(FlxUISprite_obj,recycled),HX_CSTRING("recycled")},
	{hx::fsFloat,(int)offsetof(FlxUISprite_obj,resize_ratio),HX_CSTRING("resize_ratio")},
	{hx::fsInt,(int)offsetof(FlxUISprite_obj,resize_ratio_axis),HX_CSTRING("resize_ratio_axis")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxUISprite_obj,resize_point),HX_CSTRING("resize_point")},
	{hx::fsString,(int)offsetof(FlxUISprite_obj,_originalKey),HX_CSTRING("_originalKey")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("broadcastToFlxUI"),
	HX_CSTRING("id"),
	HX_CSTRING("ptr_owner"),
	HX_CSTRING("recycled"),
	HX_CSTRING("resize_ratio"),
	HX_CSTRING("resize_ratio_axis"),
	HX_CSTRING("set_resize_ratio"),
	HX_CSTRING("resize_point"),
	HX_CSTRING("set_resize_point"),
	HX_CSTRING("recycle"),
	HX_CSTRING("resize"),
	HX_CSTRING("loadGraphicAtScale"),
	HX_CSTRING("loadGraphic"),
	HX_CSTRING("destroy"),
	HX_CSTRING("loadFromScaledGraphic"),
	HX_CSTRING("_originalKey"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUISprite_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_X,"RESIZE_RATIO_X");
	HX_MARK_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_Y,"RESIZE_RATIO_Y");
	HX_MARK_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_UNKNOWN,"RESIZE_RATIO_UNKNOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUISprite_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_X,"RESIZE_RATIO_X");
	HX_VISIT_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_Y,"RESIZE_RATIO_Y");
	HX_VISIT_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_UNKNOWN,"RESIZE_RATIO_UNKNOWN");
};

#endif

Class FlxUISprite_obj::__mClass;

void FlxUISprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUISprite"), hx::TCanCast< FlxUISprite_obj> ,sStaticFields,sMemberFields,
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

void FlxUISprite_obj::__boot()
{
	RESIZE_RATIO_X= (int)0;
	RESIZE_RATIO_Y= (int)1;
	RESIZE_RATIO_UNKNOWN= (int)-1;
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
