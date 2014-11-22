#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedSpriteGroup_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_MaxSize)
{
HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","new",0x9fa77753,"flixel.group.FlxTypedSpriteGroup.new","flixel/group/FlxSpriteGroup.hx",25,0xeb1fa7f3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_MaxSize,"MaxSize")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(51)
	this->_skipTransformChildren = false;
	HX_STACK_LINE(73)
	super::__construct(X,Y,null());
	HX_STACK_LINE(74)
	::flixel::group::FlxTypedGroup _g = ::flixel::group::FlxTypedGroup_obj::__new(MaxSize);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(74)
	this->group = _g;
	HX_STACK_LINE(75)
	this->_sprites = this->group->members;
}
;
	return null();
}

//FlxTypedSpriteGroup_obj::~FlxTypedSpriteGroup_obj() { }

Dynamic FlxTypedSpriteGroup_obj::__CreateEmpty() { return  new FlxTypedSpriteGroup_obj; }
hx::ObjectPtr< FlxTypedSpriteGroup_obj > FlxTypedSpriteGroup_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxTypedSpriteGroup_obj > result = new FlxTypedSpriteGroup_obj();
	result->__construct(__o_X,__o_Y,__o_MaxSize);
	return result;}

Dynamic FlxTypedSpriteGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedSpriteGroup_obj > result = new FlxTypedSpriteGroup_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxTypedSpriteGroup_obj::transformChildren_openfl__v2_display_BlendMode( Dynamic Function,::openfl::_v2::display::BlendMode Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_openfl__v2_display_BlendMode",0x3cfc8345,"flixel.group.FlxTypedSpriteGroup.transformChildren_openfl__v2_display_BlendMode","flixel/group/FlxSpriteGroup.hx",547,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(548)
		if (((this->group == null()))){
			HX_STACK_LINE(550)
			return null();
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(553)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(553)
			while((true)){
				HX_STACK_LINE(553)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(553)
					break;
				}
				HX_STACK_LINE(553)
				::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(553)
				++(_g);
				HX_STACK_LINE(555)
				if (((bool((sprite != null())) && bool(sprite->exists)))){
					HX_STACK_LINE(557)
					Function(sprite,Value).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_openfl__v2_display_BlendMode,(void))

Void FlxTypedSpriteGroup_obj::transformChildren_Int( Dynamic Function,int Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_Int",0x8f3579ce,"flixel.group.FlxTypedSpriteGroup.transformChildren_Int","flixel/group/FlxSpriteGroup.hx",547,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(548)
		if (((this->group == null()))){
			HX_STACK_LINE(550)
			return null();
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(553)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(553)
			while((true)){
				HX_STACK_LINE(553)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(553)
					break;
				}
				HX_STACK_LINE(553)
				::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(553)
				++(_g);
				HX_STACK_LINE(555)
				if (((bool((sprite != null())) && bool(sprite->exists)))){
					HX_STACK_LINE(557)
					Function(sprite,Value).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Int,(void))

Void FlxTypedSpriteGroup_obj::transformChildren_Float( Dynamic Function,Float Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_Float",0x2758683b,"flixel.group.FlxTypedSpriteGroup.transformChildren_Float","flixel/group/FlxSpriteGroup.hx",547,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(548)
		if (((this->group == null()))){
			HX_STACK_LINE(550)
			return null();
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(553)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(553)
			while((true)){
				HX_STACK_LINE(553)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(553)
					break;
				}
				HX_STACK_LINE(553)
				::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(553)
				++(_g);
				HX_STACK_LINE(555)
				if (((bool((sprite != null())) && bool(sprite->exists)))){
					HX_STACK_LINE(557)
					Function(sprite,Value).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Float,(void))

Void FlxTypedSpriteGroup_obj::transformChildren_Bool( Dynamic Function,bool Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_Bool",0xbaf55a6b,"flixel.group.FlxTypedSpriteGroup.transformChildren_Bool","flixel/group/FlxSpriteGroup.hx",547,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(548)
		if (((this->group == null()))){
			HX_STACK_LINE(550)
			return null();
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(553)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(553)
			while((true)){
				HX_STACK_LINE(553)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(553)
					break;
				}
				HX_STACK_LINE(553)
				::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(553)
				++(_g);
				HX_STACK_LINE(555)
				if (((bool((sprite != null())) && bool(sprite->exists)))){
					HX_STACK_LINE(557)
					Function(sprite,Value).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Bool,(void))

Void FlxTypedSpriteGroup_obj::transformChildren_Array_flixel_FlxCamera( Dynamic Function,Array< ::Dynamic > Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_Array_flixel_FlxCamera",0x8df728db,"flixel.group.FlxTypedSpriteGroup.transformChildren_Array_flixel_FlxCamera","flixel/group/FlxSpriteGroup.hx",547,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(548)
		if (((this->group == null()))){
			HX_STACK_LINE(550)
			return null();
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(553)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(553)
			while((true)){
				HX_STACK_LINE(553)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(553)
					break;
				}
				HX_STACK_LINE(553)
				::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(553)
				++(_g);
				HX_STACK_LINE(555)
				if (((bool((sprite != null())) && bool(sprite->exists)))){
					HX_STACK_LINE(557)
					Function(sprite,Value).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Array_flixel_FlxCamera,(void))

Void FlxTypedSpriteGroup_obj::multiTransformChildren_Float( Dynamic FunctionArray,Array< Float > ValueArray){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","multiTransformChildren_Float",0x31c44efc,"flixel.group.FlxTypedSpriteGroup.multiTransformChildren_Float","flixel/group/FlxSpriteGroup.hx",570,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FunctionArray,"FunctionArray")
		HX_STACK_ARG(ValueArray,"ValueArray")
		HX_STACK_LINE(571)
		if (((this->group == null()))){
			HX_STACK_LINE(573)
			return null();
		}
		HX_STACK_LINE(576)
		int numProps = FunctionArray->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(numProps,"numProps");
		HX_STACK_LINE(577)
		if (((numProps > ValueArray->length))){
			HX_STACK_LINE(579)
			return null();
		}
		HX_STACK_LINE(582)
		Dynamic lambda;		HX_STACK_VAR(lambda,"lambda");
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(583)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(583)
			while((true)){
				HX_STACK_LINE(583)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(583)
					break;
				}
				HX_STACK_LINE(583)
				::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(583)
				++(_g);
				HX_STACK_LINE(585)
				if (((bool((sprite != null())) && bool(sprite->exists)))){
					HX_STACK_LINE(587)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(587)
					while((true)){
						HX_STACK_LINE(587)
						if ((!(((_g2 < numProps))))){
							HX_STACK_LINE(587)
							break;
						}
						HX_STACK_LINE(587)
						int i = (_g2)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(589)
						lambda = FunctionArray->__GetItem(i);
						HX_STACK_LINE(590)
						lambda(sprite,ValueArray->__get(i)).Cast< Void >();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,multiTransformChildren_Float,(void))

Void FlxTypedSpriteGroup_obj::transformChildren_flixel_math_FlxPoint( Dynamic Function,::flixel::math::FlxPoint Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_flixel_math_FlxPoint",0xcdc8d2f3,"flixel.group.FlxTypedSpriteGroup.transformChildren_flixel_math_FlxPoint","flixel/group/FlxSpriteGroup.hx",547,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(548)
		if (((this->group == null()))){
			HX_STACK_LINE(550)
			return null();
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(553)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(553)
			while((true)){
				HX_STACK_LINE(553)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(553)
					break;
				}
				HX_STACK_LINE(553)
				::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(553)
				++(_g);
				HX_STACK_LINE(555)
				if (((bool((sprite != null())) && bool(sprite->exists)))){
					HX_STACK_LINE(557)
					Function(sprite,Value).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_flixel_math_FlxPoint,(void))

Void FlxTypedSpriteGroup_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","initVars",0xad6ba309,"flixel.group.FlxTypedSpriteGroup.initVars","flixel/group/FlxSpriteGroup.hx",84,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		this->flixelType = (int)4;
		HX_STACK_LINE(87)
		::flixel::math::FlxCallbackPoint _g = ::flixel::math::FlxCallbackPoint_obj::__new(this->offsetCallback_dyn(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		this->offset = _g;
		HX_STACK_LINE(88)
		::flixel::math::FlxCallbackPoint _g1 = ::flixel::math::FlxCallbackPoint_obj::__new(this->originCallback_dyn(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		this->origin = _g1;
		HX_STACK_LINE(89)
		::flixel::math::FlxCallbackPoint _g2 = ::flixel::math::FlxCallbackPoint_obj::__new(this->scaleCallback_dyn(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(89)
		this->scale = _g2;
		HX_STACK_LINE(90)
		::flixel::math::FlxCallbackPoint _g3 = ::flixel::math::FlxCallbackPoint_obj::__new(this->scrollFactorCallback_dyn(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(90)
		this->scrollFactor = _g3;
		HX_STACK_LINE(92)
		this->scale->set((int)1,(int)1);
		HX_STACK_LINE(93)
		this->scrollFactor->set((int)1,(int)1);
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::flixel::math::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(95)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(95)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(95)
				point->_inPool = false;
				HX_STACK_LINE(95)
				_g4 = point;
			}
			HX_STACK_LINE(95)
			this->velocity = _g4;
			HX_STACK_LINE(95)
			::flixel::math::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(95)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(95)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(95)
				point->_inPool = false;
				HX_STACK_LINE(95)
				_g5 = point;
			}
			HX_STACK_LINE(95)
			this->acceleration = _g5;
			HX_STACK_LINE(95)
			::flixel::math::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(95)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(95)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(95)
				point->_inPool = false;
				HX_STACK_LINE(95)
				_g6 = point;
			}
			HX_STACK_LINE(95)
			this->drag = _g6;
			HX_STACK_LINE(95)
			::flixel::math::FlxPoint _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)10000,(int)10000);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(95)
				point->_inPool = false;
				HX_STACK_LINE(95)
				_g7 = point;
			}
			HX_STACK_LINE(95)
			this->maxVelocity = _g7;
		}
	}
return null();
}


Void FlxTypedSpriteGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","destroy",0xd803c96d,"flixel.group.FlxTypedSpriteGroup.destroy","flixel/group/FlxSpriteGroup.hx",103,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->offset);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		this->offset = _g;
		HX_STACK_LINE(106)
		::flixel::math::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->origin);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(106)
		this->origin = _g1;
		HX_STACK_LINE(107)
		::flixel::math::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->scale);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(107)
		this->scale = _g2;
		HX_STACK_LINE(108)
		::flixel::math::FlxPoint _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->scrollFactor);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(108)
		this->scrollFactor = _g3;
		HX_STACK_LINE(110)
		::flixel::group::FlxTypedGroup _g4 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->group);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(110)
		this->group = _g4;
		HX_STACK_LINE(111)
		this->_sprites = null();
		HX_STACK_LINE(113)
		this->super::destroy();
	}
return null();
}


::flixel::FlxSprite FlxTypedSpriteGroup_obj::clone( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","clone",0x21249d10,"flixel.group.FlxTypedSpriteGroup.clone","flixel/group/FlxSpriteGroup.hx",121,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	::flixel::group::FlxTypedSpriteGroup newGroup = ::flixel::group::FlxTypedSpriteGroup_obj::__new(this->x,this->y,this->group->maxSize);		HX_STACK_VAR(newGroup,"newGroup");
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(123)
		Dynamic _g1 = this->group->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(123)
		while((true)){
			HX_STACK_LINE(123)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(123)
				break;
			}
			HX_STACK_LINE(123)
			Dynamic sprite = _g1->__GetItem(_g);		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(123)
			++(_g);
			HX_STACK_LINE(125)
			if (((sprite != null()))){
				HX_STACK_LINE(127)
				Dynamic _g2 = sprite->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(127)
				newGroup->add(_g2);
			}
		}
	}
	HX_STACK_LINE(130)
	return newGroup;
}


bool FlxTypedSpriteGroup_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","isOnScreen",0xe3a8b162,"flixel.group.FlxTypedSpriteGroup.isOnScreen","flixel/group/FlxSpriteGroup.hx",140,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(141)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(142)
		Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(142)
		while((true)){
			HX_STACK_LINE(142)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(142)
				break;
			}
			HX_STACK_LINE(142)
			::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(142)
			++(_g);
			HX_STACK_LINE(144)
			if (((bool((bool((sprite != null())) && bool(sprite->exists))) && bool(sprite->visible)))){
				HX_STACK_LINE(146)
				bool _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(146)
				if ((!(result))){
					HX_STACK_LINE(146)
					_g2 = sprite->isOnScreen(Camera);
				}
				else{
					HX_STACK_LINE(146)
					_g2 = true;
				}
				HX_STACK_LINE(146)
				result = _g2;
			}
		}
	}
	HX_STACK_LINE(150)
	return result;
}


bool FlxTypedSpriteGroup_obj::overlapsPoint( ::flixel::math::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","overlapsPoint",0xe77cba57,"flixel.group.FlxTypedSpriteGroup.overlapsPoint","flixel/group/FlxSpriteGroup.hx",162,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(163)
		bool result = false;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(164)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(164)
			while((true)){
				HX_STACK_LINE(164)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(164)
					break;
				}
				HX_STACK_LINE(164)
				::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(164)
				++(_g);
				HX_STACK_LINE(166)
				if (((bool((bool((sprite != null())) && bool(sprite->exists))) && bool(sprite->visible)))){
					HX_STACK_LINE(168)
					bool _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(168)
					if ((!(result))){
						HX_STACK_LINE(168)
						_g2 = sprite->overlapsPoint(point,InScreenSpace,Camera);
					}
					else{
						HX_STACK_LINE(168)
						_g2 = true;
					}
					HX_STACK_LINE(168)
					result = _g2;
				}
			}
		}
		HX_STACK_LINE(172)
		return result;
	}
}


bool FlxTypedSpriteGroup_obj::pixelsOverlapPoint( ::flixel::math::FlxPoint point,hx::Null< int >  __o_Mask,::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","pixelsOverlapPoint",0xc3b2a483,"flixel.group.FlxTypedSpriteGroup.pixelsOverlapPoint","flixel/group/FlxSpriteGroup.hx",185,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Mask,"Mask")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(186)
		bool result = false;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(187)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(187)
			while((true)){
				HX_STACK_LINE(187)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(187)
					break;
				}
				HX_STACK_LINE(187)
				::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(187)
				++(_g);
				HX_STACK_LINE(189)
				if (((bool((bool((sprite != null())) && bool(sprite->exists))) && bool(sprite->visible)))){
					HX_STACK_LINE(191)
					bool _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(191)
					if ((!(result))){
						HX_STACK_LINE(191)
						_g2 = sprite->pixelsOverlapPoint(point,Mask,Camera);
					}
					else{
						HX_STACK_LINE(191)
						_g2 = true;
					}
					HX_STACK_LINE(191)
					result = _g2;
				}
			}
		}
		HX_STACK_LINE(195)
		return result;
	}
}


Void FlxTypedSpriteGroup_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","update",0x579c78f6,"flixel.group.FlxTypedSpriteGroup.update","flixel/group/FlxSpriteGroup.hx",199,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(200)
		this->group->update(elapsed);
		HX_STACK_LINE(202)
		if ((this->moves)){
			HX_STACK_LINE(204)
			this->updateMotion(elapsed);
		}
	}
return null();
}


Void FlxTypedSpriteGroup_obj::draw( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","draw",0x0c4e99b1,"flixel.group.FlxTypedSpriteGroup.draw","flixel/group/FlxSpriteGroup.hx",210,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		this->group->draw();
	}
return null();
}


Array< ::Dynamic > FlxTypedSpriteGroup_obj::replaceColor( int _tmp_Color,int _tmp_NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","replaceColor",0x6ca2bf3c,"flixel.group.FlxTypedSpriteGroup.replaceColor","flixel/group/FlxSpriteGroup.hx",225,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_Color,"_tmp_Color")
	HX_STACK_ARG(_tmp_NewColor,"_tmp_NewColor")
	HX_STACK_ARG(FetchPositions,"FetchPositions")
{
		HX_STACK_LINE(226)
		int Color = _tmp_Color;		HX_STACK_VAR(Color,"Color");
		HX_STACK_LINE(226)
		int NewColor = _tmp_NewColor;		HX_STACK_VAR(NewColor,"NewColor");
		HX_STACK_LINE(226)
		Array< ::Dynamic > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(227)
		if ((FetchPositions)){
			HX_STACK_LINE(229)
			Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(229)
			positions = _g;
		}
		HX_STACK_LINE(232)
		Array< ::Dynamic > spritePositions;		HX_STACK_VAR(spritePositions,"spritePositions");
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(233)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(233)
			while((true)){
				HX_STACK_LINE(233)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(233)
					break;
				}
				HX_STACK_LINE(233)
				::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(233)
				++(_g);
				HX_STACK_LINE(235)
				if (((sprite != null()))){
					HX_STACK_LINE(237)
					Array< ::Dynamic > _g11 = sprite->replaceColor(Color,NewColor,FetchPositions);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(237)
					spritePositions = _g11;
					HX_STACK_LINE(238)
					if ((FetchPositions)){
						HX_STACK_LINE(240)
						Array< ::Dynamic > _g2 = positions->concat(spritePositions);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(240)
						positions = _g2;
					}
				}
			}
		}
		HX_STACK_LINE(245)
		return positions;
	}
}


Dynamic FlxTypedSpriteGroup_obj::add( Dynamic Sprite){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","add",0x9f9d9914,"flixel.group.FlxTypedSpriteGroup.add","flixel/group/FlxSpriteGroup.hx",255,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(256)
	::flixel::FlxSprite sprite = Sprite;		HX_STACK_VAR(sprite,"sprite");
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		::flixel::FlxSprite _g = sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(257)
		_g->set_x((_g->x + this->x));
	}
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(258)
		::flixel::FlxSprite _g = sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(258)
		_g->set_y((_g->y + this->y));
	}
	HX_STACK_LINE(259)
	{
		HX_STACK_LINE(259)
		::flixel::FlxSprite _g = sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(259)
		_g->set_alpha((_g->alpha * this->alpha));
	}
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(260)
		::flixel::math::FlxPoint _this = sprite->scrollFactor;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(260)
		::flixel::math::FlxPoint point = this->scrollFactor;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(260)
		_this->set_x(point->x);
		HX_STACK_LINE(260)
		_this->set_y(point->y);
		HX_STACK_LINE(260)
		_this;
	}
	HX_STACK_LINE(261)
	sprite->set_cameras(this->_cameras);
	HX_STACK_LINE(262)
	return this->group->add(Sprite);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,add,return )

Dynamic FlxTypedSpriteGroup_obj::recycle( ::Class ObjectClass,Dynamic ObjectFactory,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","recycle",0xeb09ac86,"flixel.group.FlxTypedSpriteGroup.recycle","flixel/group/FlxSpriteGroup.hx",275,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(ObjectFactory,"ObjectFactory")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(275)
		return this->group->recycle(ObjectClass,ObjectFactory,Force,null());
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedSpriteGroup_obj,recycle,return )

Dynamic FlxTypedSpriteGroup_obj::remove( Dynamic Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","remove",0xd51f8f31,"flixel.group.FlxTypedSpriteGroup.remove","flixel/group/FlxSpriteGroup.hx",287,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Splice,"Splice")
{
		HX_STACK_LINE(287)
		return this->group->remove(Object,Splice);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,remove,return )

Dynamic FlxTypedSpriteGroup_obj::replace( Dynamic OldObject,Dynamic NewObject){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","replace",0x5ea5e4a7,"flixel.group.FlxTypedSpriteGroup.replace","flixel/group/FlxSpriteGroup.hx",299,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OldObject,"OldObject")
	HX_STACK_ARG(NewObject,"NewObject")
	HX_STACK_LINE(299)
	return this->group->replace(OldObject,NewObject);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,replace,return )

Void FlxTypedSpriteGroup_obj::sort( Dynamic Function,hx::Null< int >  __o_Order){
int Order = __o_Order.Default(-1);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","sort",0x1636950b,"flixel.group.FlxTypedSpriteGroup.sort","flixel/group/FlxSpriteGroup.hx",311,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Order,"Order")
{
		HX_STACK_LINE(311)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(Function));		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(311)
			Array< int > a1 = Array_obj< int >::__new().Add(Order);		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< int >,a1,Dynamic,f)
			int run(Dynamic a2,Dynamic a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/group/FlxSpriteGroup.hx",311,0xeb1fa7f3)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(311)
					return f->__GetItem((int)0)(a1->__get((int)0),a2,a3).Cast< int >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(311)
			_g =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(311)
		this->group->members->__Field(HX_CSTRING("sort"),true)(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,sort,(void))

Dynamic FlxTypedSpriteGroup_obj::getFirstAvailable( ::Class ObjectClass,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getFirstAvailable",0x44b6b4e2,"flixel.group.FlxTypedSpriteGroup.getFirstAvailable","flixel/group/FlxSpriteGroup.hx",324,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(324)
		return this->group->getFirstAvailable(ObjectClass,Force);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,getFirstAvailable,return )

int FlxTypedSpriteGroup_obj::getFirstNull( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getFirstNull",0x3deb1a0e,"flixel.group.FlxTypedSpriteGroup.getFirstNull","flixel/group/FlxSpriteGroup.hx",335,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(335)
	return this->group->getFirstNull();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstNull,return )

Dynamic FlxTypedSpriteGroup_obj::getFirstExisting( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getFirstExisting",0x25cf6192,"flixel.group.FlxTypedSpriteGroup.getFirstExisting","flixel/group/FlxSpriteGroup.hx",346,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(346)
	return this->group->getFirstExisting();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstExisting,return )

Dynamic FlxTypedSpriteGroup_obj::getFirstAlive( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getFirstAlive",0x6da0fe66,"flixel.group.FlxTypedSpriteGroup.getFirstAlive","flixel/group/FlxSpriteGroup.hx",357,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(357)
	return this->group->getFirstAlive();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstAlive,return )

Dynamic FlxTypedSpriteGroup_obj::getFirstDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getFirstDead",0x3742ca2b,"flixel.group.FlxTypedSpriteGroup.getFirstDead","flixel/group/FlxSpriteGroup.hx",368,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(368)
	return this->group->getFirstDead();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstDead,return )

int FlxTypedSpriteGroup_obj::countLiving( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","countLiving",0xa01b2b4b,"flixel.group.FlxTypedSpriteGroup.countLiving","flixel/group/FlxSpriteGroup.hx",378,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(378)
	return this->group->countLiving();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,countLiving,return )

int FlxTypedSpriteGroup_obj::countDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","countDead",0x17fab246,"flixel.group.FlxTypedSpriteGroup.countDead","flixel/group/FlxSpriteGroup.hx",388,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(388)
	return this->group->countDead();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,countDead,return )

Dynamic FlxTypedSpriteGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getRandom",0xf7598a6c,"flixel.group.FlxTypedSpriteGroup.getRandom","flixel/group/FlxSpriteGroup.hx",400,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(Length,"Length")
{
		HX_STACK_LINE(400)
		return this->group->getRandom(StartIndex,Length);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,getRandom,return )

::flixel::group::FlxTypedGroupIterator FlxTypedSpriteGroup_obj::iterator( Dynamic filter){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","iterator",0xee05921b,"flixel.group.FlxTypedSpriteGroup.iterator","flixel/group/FlxSpriteGroup.hx",410,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(410)
	return ::flixel::group::FlxTypedGroupIterator_obj::__new(this->group->members,filter);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,iterator,return )

Void FlxTypedSpriteGroup_obj::forEach( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","forEach",0x783bc61d,"flixel.group.FlxTypedSpriteGroup.forEach","flixel/group/FlxSpriteGroup.hx",421,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(421)
		this->group->forEach(Function,Recurse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEach,(void))

Void FlxTypedSpriteGroup_obj::forEachAlive( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","forEachAlive",0xc86ec470,"flixel.group.FlxTypedSpriteGroup.forEachAlive","flixel/group/FlxSpriteGroup.hx",432,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(432)
		this->group->forEachAlive(Function,Recurse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachAlive,(void))

Void FlxTypedSpriteGroup_obj::forEachDead( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","forEachDead",0xe8751361,"flixel.group.FlxTypedSpriteGroup.forEachDead","flixel/group/FlxSpriteGroup.hx",443,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(443)
		this->group->forEachDead(Function,Recurse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachDead,(void))

Void FlxTypedSpriteGroup_obj::forEachExists( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","forEachExists",0x1ab74bd9,"flixel.group.FlxTypedSpriteGroup.forEachExists","flixel/group/FlxSpriteGroup.hx",454,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(454)
		this->group->forEachExists(Function,Recurse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachExists,(void))

Void FlxTypedSpriteGroup_obj::forEachOfType( ::Class ObjectClass,Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","forEachOfType",0xaf35856e,"flixel.group.FlxTypedSpriteGroup.forEachOfType","flixel/group/FlxSpriteGroup.hx",466,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(466)
		this->group->forEachOfType(ObjectClass,Function,Recurse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedSpriteGroup_obj,forEachOfType,(void))

Void FlxTypedSpriteGroup_obj::clear( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","clear",0x211cfb40,"flixel.group.FlxTypedSpriteGroup.clear","flixel/group/FlxSpriteGroup.hx",475,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(475)
		this->group->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,clear,(void))

Void FlxTypedSpriteGroup_obj::kill( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","kill",0x10e84d4b,"flixel.group.FlxTypedSpriteGroup.kill","flixel/group/FlxSpriteGroup.hx",483,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(484)
		this->super::kill();
		HX_STACK_LINE(485)
		this->group->kill();
	}
return null();
}


Void FlxTypedSpriteGroup_obj::revive( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","revive",0xdb0ded42,"flixel.group.FlxTypedSpriteGroup.revive","flixel/group/FlxSpriteGroup.hx",492,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(493)
		this->super::revive();
		HX_STACK_LINE(494)
		this->group->revive();
	}
return null();
}


Void FlxTypedSpriteGroup_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","reset",0xbf89d382,"flixel.group.FlxTypedSpriteGroup.reset","flixel/group/FlxSpriteGroup.hx",505,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(506)
		this->revive();
		HX_STACK_LINE(507)
		this->setPosition(X,Y);
		HX_STACK_LINE(509)
		{
			HX_STACK_LINE(509)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(509)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(509)
			while((true)){
				HX_STACK_LINE(509)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(509)
					break;
				}
				HX_STACK_LINE(509)
				::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(509)
				++(_g);
				HX_STACK_LINE(511)
				if (((sprite != null()))){
					HX_STACK_LINE(513)
					sprite->reset(X,Y);
				}
			}
		}
	}
return null();
}


Void FlxTypedSpriteGroup_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","setPosition",0x6aebbc5e,"flixel.group.FlxTypedSpriteGroup.setPosition","flixel/group/FlxSpriteGroup.hx",526,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(528)
		Float dx = (X - this->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(529)
		Float dy = (Y - this->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(530)
		this->multiTransformChildren_Float(Dynamic( Array_obj<Dynamic>::__new().Add(this->xTransform_dyn()).Add(this->yTransform_dyn())),Array_obj< Float >::__new().Add(dx).Add(dy));
		HX_STACK_LINE(533)
		this->_skipTransformChildren = true;
		HX_STACK_LINE(534)
		this->set_x(X);
		HX_STACK_LINE(535)
		this->set_y(Y);
		HX_STACK_LINE(536)
		this->_skipTransformChildren = false;
	}
return null();
}


Array< ::Dynamic > FlxTypedSpriteGroup_obj::set_cameras( Array< ::Dynamic > Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_cameras",0xe3294344,"flixel.group.FlxTypedSpriteGroup.set_cameras","flixel/group/FlxSpriteGroup.hx",599,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(600)
	Array< ::Dynamic > _g = this->get_cameras();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(600)
	if (((_g != Value))){
		HX_STACK_LINE(601)
		this->transformChildren_Array_flixel_FlxCamera(this->camerasTransform_dyn(),Value);
	}
	HX_STACK_LINE(602)
	return this->super::set_cameras(Value);
}


bool FlxTypedSpriteGroup_obj::set_exists( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_exists",0xf5d49986,"flixel.group.FlxTypedSpriteGroup.set_exists","flixel/group/FlxSpriteGroup.hx",606,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(607)
	if (((this->exists != Value))){
		HX_STACK_LINE(608)
		this->transformChildren_Bool(this->existsTransform_dyn(),Value);
	}
	HX_STACK_LINE(609)
	return this->super::set_exists(Value);
}


bool FlxTypedSpriteGroup_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_visible",0xa31c3188,"flixel.group.FlxTypedSpriteGroup.set_visible","flixel/group/FlxSpriteGroup.hx",613,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(614)
	if (((bool(this->exists) && bool((this->visible != Value))))){
		HX_STACK_LINE(615)
		this->transformChildren_Bool(this->visibleTransform_dyn(),Value);
	}
	HX_STACK_LINE(616)
	return this->super::set_visible(Value);
}


bool FlxTypedSpriteGroup_obj::set_active( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_active",0x4c3abd70,"flixel.group.FlxTypedSpriteGroup.set_active","flixel/group/FlxSpriteGroup.hx",620,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(621)
	if (((bool(this->exists) && bool((this->active != Value))))){
		HX_STACK_LINE(622)
		this->transformChildren_Bool(this->activeTransform_dyn(),Value);
	}
	HX_STACK_LINE(623)
	return this->super::set_active(Value);
}


bool FlxTypedSpriteGroup_obj::set_alive( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_alive",0x0bff8b63,"flixel.group.FlxTypedSpriteGroup.set_alive","flixel/group/FlxSpriteGroup.hx",627,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(628)
	if (((bool(this->exists) && bool((this->alive != Value))))){
		HX_STACK_LINE(629)
		this->transformChildren_Bool(this->aliveTransform_dyn(),Value);
	}
	HX_STACK_LINE(630)
	return this->super::set_alive(Value);
}


Float FlxTypedSpriteGroup_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_x",0x52f1250e,"flixel.group.FlxTypedSpriteGroup.set_x","flixel/group/FlxSpriteGroup.hx",634,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(635)
	if (((bool((bool(!(this->_skipTransformChildren)) && bool(this->exists))) && bool((this->x != Value))))){
		HX_STACK_LINE(637)
		Float offset = (Value - this->x);		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(638)
		this->transformChildren_Float(this->xTransform_dyn(),offset);
	}
	HX_STACK_LINE(641)
	return this->x = Value;
}


Float FlxTypedSpriteGroup_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_y",0x52f1250f,"flixel.group.FlxTypedSpriteGroup.set_y","flixel/group/FlxSpriteGroup.hx",645,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(646)
	if (((bool((bool(!(this->_skipTransformChildren)) && bool(this->exists))) && bool((this->y != Value))))){
		HX_STACK_LINE(648)
		Float offset = (Value - this->y);		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(649)
		this->transformChildren_Float(this->yTransform_dyn(),offset);
	}
	HX_STACK_LINE(652)
	return this->y = Value;
}


Float FlxTypedSpriteGroup_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_angle",0x0d506b69,"flixel.group.FlxTypedSpriteGroup.set_angle","flixel/group/FlxSpriteGroup.hx",656,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(657)
	if (((bool(this->exists) && bool((this->angle != Value))))){
		HX_STACK_LINE(659)
		Float offset = (Value - this->angle);		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(660)
		this->transformChildren_Float(this->angleTransform_dyn(),offset);
	}
	HX_STACK_LINE(662)
	return this->angle = Value;
}


Float FlxTypedSpriteGroup_obj::set_alpha( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_alpha",0x0c04cef4,"flixel.group.FlxTypedSpriteGroup.set_alpha","flixel/group/FlxSpriteGroup.hx",666,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(667)
	{
		HX_STACK_LINE(667)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(667)
		if (((Value < (int)0))){
			HX_STACK_LINE(667)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(667)
			lowerBound = Value;
		}
		HX_STACK_LINE(667)
		if (((lowerBound > (int)1))){
			HX_STACK_LINE(667)
			Value = (int)1;
		}
		else{
			HX_STACK_LINE(667)
			Value = lowerBound;
		}
	}
	HX_STACK_LINE(669)
	if (((bool(this->exists) && bool((this->alpha != Value))))){
		HX_STACK_LINE(671)
		Float factor;		HX_STACK_VAR(factor,"factor");
		HX_STACK_LINE(671)
		if (((this->alpha > (int)0))){
			HX_STACK_LINE(671)
			factor = (Float(Value) / Float(this->alpha));
		}
		else{
			HX_STACK_LINE(671)
			factor = (int)0;
		}
		HX_STACK_LINE(672)
		this->transformChildren_Float(this->alphaTransform_dyn(),factor);
	}
	HX_STACK_LINE(674)
	return this->alpha = Value;
}


int FlxTypedSpriteGroup_obj::set_facing( int Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_facing",0x19f9bac4,"flixel.group.FlxTypedSpriteGroup.set_facing","flixel/group/FlxSpriteGroup.hx",678,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(679)
	if (((bool(this->exists) && bool((this->facing != Value))))){
		HX_STACK_LINE(680)
		this->transformChildren_Int(this->facingTransform_dyn(),Value);
	}
	HX_STACK_LINE(681)
	return this->facing = Value;
}


bool FlxTypedSpriteGroup_obj::set_flipX( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_flipX",0xed006ca1,"flixel.group.FlxTypedSpriteGroup.set_flipX","flixel/group/FlxSpriteGroup.hx",685,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(686)
	if (((bool(this->exists) && bool((this->flipX != Value))))){
		HX_STACK_LINE(687)
		this->transformChildren_Bool(this->flipXTransform_dyn(),Value);
	}
	HX_STACK_LINE(688)
	return this->flipX = Value;
}


bool FlxTypedSpriteGroup_obj::set_flipY( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_flipY",0xed006ca2,"flixel.group.FlxTypedSpriteGroup.set_flipY","flixel/group/FlxSpriteGroup.hx",692,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(693)
	if (((bool(this->exists) && bool((this->flipY != Value))))){
		HX_STACK_LINE(694)
		this->transformChildren_Bool(this->flipYTransform_dyn(),Value);
	}
	HX_STACK_LINE(695)
	return this->flipY = Value;
}


bool FlxTypedSpriteGroup_obj::set_moves( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_moves",0xf6d3f3d8,"flixel.group.FlxTypedSpriteGroup.set_moves","flixel/group/FlxSpriteGroup.hx",699,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(700)
	if (((bool(this->exists) && bool((this->moves != Value))))){
		HX_STACK_LINE(701)
		this->transformChildren_Bool(this->movesTransform_dyn(),Value);
	}
	HX_STACK_LINE(702)
	return this->moves = Value;
}


bool FlxTypedSpriteGroup_obj::set_immovable( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_immovable",0xdf98d1a0,"flixel.group.FlxTypedSpriteGroup.set_immovable","flixel/group/FlxSpriteGroup.hx",706,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(707)
	if (((bool(this->exists) && bool((this->immovable != Value))))){
		HX_STACK_LINE(708)
		this->transformChildren_Bool(this->immovableTransform_dyn(),Value);
	}
	HX_STACK_LINE(709)
	return this->immovable = Value;
}


bool FlxTypedSpriteGroup_obj::set_solid( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_solid",0x6b33dbc1,"flixel.group.FlxTypedSpriteGroup.set_solid","flixel/group/FlxSpriteGroup.hx",713,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(714)
	if (((bool(this->exists) && bool(((((int(this->allowCollisions) & int((int)4369))) > (int)0) != Value))))){
		HX_STACK_LINE(715)
		this->transformChildren_Bool(this->solidTransform_dyn(),Value);
	}
	HX_STACK_LINE(716)
	return this->super::set_solid(Value);
}


int FlxTypedSpriteGroup_obj::set_color( int _tmp_Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_color",0x34ca98f9,"flixel.group.FlxTypedSpriteGroup.set_color","flixel/group/FlxSpriteGroup.hx",720,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_Value,"_tmp_Value")
	HX_STACK_LINE(721)
	int Value = _tmp_Value;		HX_STACK_VAR(Value,"Value");
	HX_STACK_LINE(721)
	if (((bool(this->exists) && bool((this->color != Value))))){
		HX_STACK_LINE(722)
		this->transformChildren_Int(this->gColorTransform_dyn(),Value);
	}
	HX_STACK_LINE(723)
	return this->color = Value;
}


::openfl::_v2::display::BlendMode FlxTypedSpriteGroup_obj::set_blend( ::openfl::_v2::display::BlendMode Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_blend",0x9f630fe7,"flixel.group.FlxTypedSpriteGroup.set_blend","flixel/group/FlxSpriteGroup.hx",727,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(728)
	if (((bool(this->exists) && bool((this->blend != Value))))){
		HX_STACK_LINE(729)
		this->transformChildren_openfl__v2_display_BlendMode(this->blendTransform_dyn(),Value);
	}
	HX_STACK_LINE(730)
	return this->blend = Value;
}


bool FlxTypedSpriteGroup_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_pixelPerfectRender",0x5163ac87,"flixel.group.FlxTypedSpriteGroup.set_pixelPerfectRender","flixel/group/FlxSpriteGroup.hx",734,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(735)
	if (((bool(this->exists) && bool((this->pixelPerfectRender != Value))))){
		HX_STACK_LINE(736)
		this->transformChildren_Bool(this->pixelPerfectTransform_dyn(),Value);
	}
	HX_STACK_LINE(737)
	return this->super::set_pixelPerfectRender(Value);
}


Float FlxTypedSpriteGroup_obj::set_width( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_width",0xb4d0dd9c,"flixel.group.FlxTypedSpriteGroup.set_width","flixel/group/FlxSpriteGroup.hx",745,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(745)
	return Value;
}


Float FlxTypedSpriteGroup_obj::get_width( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_width",0xd17ff190,"flixel.group.FlxTypedSpriteGroup.get_width","flixel/group/FlxSpriteGroup.hx",749,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(750)
	if (((this->group->length == (int)0))){
		HX_STACK_LINE(752)
		return (int)0;
	}
	HX_STACK_LINE(755)
	Float minX = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(756)
	Float maxX = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(758)
	{
		HX_STACK_LINE(758)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(758)
		Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(758)
		while((true)){
			HX_STACK_LINE(758)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(758)
				break;
			}
			HX_STACK_LINE(758)
			::flixel::FlxSprite member = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(member,"member");
			HX_STACK_LINE(758)
			++(_g);
			HX_STACK_LINE(760)
			Float minMemberX = member->x;		HX_STACK_VAR(minMemberX,"minMemberX");
			HX_STACK_LINE(761)
			Float _g2 = member->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(761)
			Float maxMemberX = (minMemberX + _g2);		HX_STACK_VAR(maxMemberX,"maxMemberX");
			HX_STACK_LINE(763)
			if (((maxMemberX > maxX))){
				HX_STACK_LINE(765)
				maxX = maxMemberX;
			}
			HX_STACK_LINE(767)
			if (((minMemberX < minX))){
				HX_STACK_LINE(769)
				minX = minMemberX;
			}
		}
	}
	HX_STACK_LINE(772)
	return (maxX - minX);
}


Float FlxTypedSpriteGroup_obj::set_height( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_height",0x38408391,"flixel.group.FlxTypedSpriteGroup.set_height","flixel/group/FlxSpriteGroup.hx",780,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(780)
	return Value;
}


Float FlxTypedSpriteGroup_obj::get_height( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_height",0x34c2e51d,"flixel.group.FlxTypedSpriteGroup.get_height","flixel/group/FlxSpriteGroup.hx",784,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(785)
	if (((this->group->length == (int)0))){
		HX_STACK_LINE(787)
		return (int)0;
	}
	HX_STACK_LINE(790)
	Float minY = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(791)
	Float maxY = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(793)
	{
		HX_STACK_LINE(793)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(793)
		Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(793)
		while((true)){
			HX_STACK_LINE(793)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(793)
				break;
			}
			HX_STACK_LINE(793)
			::flixel::FlxSprite member = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(member,"member");
			HX_STACK_LINE(793)
			++(_g);
			HX_STACK_LINE(795)
			Float minMemberY = member->y;		HX_STACK_VAR(minMemberY,"minMemberY");
			HX_STACK_LINE(796)
			Float _g2 = member->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(796)
			Float maxMemberY = (minMemberY + _g2);		HX_STACK_VAR(maxMemberY,"maxMemberY");
			HX_STACK_LINE(798)
			if (((maxMemberY > maxY))){
				HX_STACK_LINE(800)
				maxY = maxMemberY;
			}
			HX_STACK_LINE(802)
			if (((minMemberY < minY))){
				HX_STACK_LINE(804)
				minY = minMemberY;
			}
		}
	}
	HX_STACK_LINE(807)
	return (maxY - minY);
}


int FlxTypedSpriteGroup_obj::get_length( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_length",0xd17e721c,"flixel.group.FlxTypedSpriteGroup.get_length","flixel/group/FlxSpriteGroup.hx",814,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(814)
	return this->group->length;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_length,return )

int FlxTypedSpriteGroup_obj::get_maxSize( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_maxSize",0xc20eab8f,"flixel.group.FlxTypedSpriteGroup.get_maxSize","flixel/group/FlxSpriteGroup.hx",819,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(819)
	return this->group->maxSize;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_maxSize,return )

int FlxTypedSpriteGroup_obj::set_maxSize( int Size){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_maxSize",0xcc7bb29b,"flixel.group.FlxTypedSpriteGroup.set_maxSize","flixel/group/FlxSpriteGroup.hx",824,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(824)
	return this->group->set_maxSize(Size);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,set_maxSize,return )

Dynamic FlxTypedSpriteGroup_obj::get_members( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_members",0x0ffadee3,"flixel.group.FlxTypedSpriteGroup.get_members","flixel/group/FlxSpriteGroup.hx",829,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(829)
	return this->group->members;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_members,return )

Void FlxTypedSpriteGroup_obj::xTransform( ::flixel::FlxSprite Sprite,Float X){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","xTransform",0x4c3dab41,"flixel.group.FlxTypedSpriteGroup.xTransform","flixel/group/FlxSpriteGroup.hx",834,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(X,"X")
		HX_STACK_LINE(834)
		::flixel::FlxSprite _g = Sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(834)
		_g->set_x((_g->x + X));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,xTransform,(void))

Void FlxTypedSpriteGroup_obj::yTransform( ::flixel::FlxSprite Sprite,Float Y){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","yTransform",0x0c882320,"flixel.group.FlxTypedSpriteGroup.yTransform","flixel/group/FlxSpriteGroup.hx",835,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(835)
		::flixel::FlxSprite _g = Sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(835)
		_g->set_y((_g->y + Y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,yTransform,(void))

Void FlxTypedSpriteGroup_obj::angleTransform( ::flixel::FlxSprite Sprite,Float Angle){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","angleTransform",0x285b5f06,"flixel.group.FlxTypedSpriteGroup.angleTransform","flixel/group/FlxSpriteGroup.hx",836,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Angle,"Angle")
		HX_STACK_LINE(836)
		::flixel::FlxSprite _g = Sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(836)
		_g->set_angle((_g->angle + Angle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,angleTransform,(void))

Void FlxTypedSpriteGroup_obj::alphaTransform( ::flixel::FlxSprite Sprite,Float Alpha){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","alphaTransform",0xe7f1b21b,"flixel.group.FlxTypedSpriteGroup.alphaTransform","flixel/group/FlxSpriteGroup.hx",837,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Alpha,"Alpha")
		HX_STACK_LINE(837)
		::flixel::FlxSprite _g = Sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(837)
		_g->set_alpha((_g->alpha * Alpha));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,alphaTransform,(void))

Void FlxTypedSpriteGroup_obj::facingTransform( ::flixel::FlxSprite Sprite,int Facing){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","facingTransform",0x8cbce265,"flixel.group.FlxTypedSpriteGroup.facingTransform","flixel/group/FlxSpriteGroup.hx",838,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Facing,"Facing")
		HX_STACK_LINE(838)
		Sprite->set_facing(Facing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,facingTransform,(void))

Void FlxTypedSpriteGroup_obj::flipXTransform( ::flixel::FlxSprite Sprite,bool FlipX){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","flipXTransform",0x2d6d76ce,"flixel.group.FlxTypedSpriteGroup.flipXTransform","flixel/group/FlxSpriteGroup.hx",839,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(FlipX,"FlipX")
		HX_STACK_LINE(839)
		Sprite->set_flipX(FlipX);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,flipXTransform,(void))

Void FlxTypedSpriteGroup_obj::flipYTransform( ::flixel::FlxSprite Sprite,bool FlipY){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","flipYTransform",0xedb7eead,"flixel.group.FlxTypedSpriteGroup.flipYTransform","flixel/group/FlxSpriteGroup.hx",840,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(FlipY,"FlipY")
		HX_STACK_LINE(840)
		Sprite->set_flipY(FlipY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,flipYTransform,(void))

Void FlxTypedSpriteGroup_obj::movesTransform( ::flixel::FlxSprite Sprite,bool Moves){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","movesTransform",0x6670d0b7,"flixel.group.FlxTypedSpriteGroup.movesTransform","flixel/group/FlxSpriteGroup.hx",841,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Moves,"Moves")
		HX_STACK_LINE(841)
		Sprite->set_moves(Moves);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,movesTransform,(void))

Void FlxTypedSpriteGroup_obj::pixelPerfectTransform( ::flixel::FlxSprite Sprite,bool PixelPerfect){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","pixelPerfectTransform",0x21312cf8,"flixel.group.FlxTypedSpriteGroup.pixelPerfectTransform","flixel/group/FlxSpriteGroup.hx",842,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(PixelPerfect,"PixelPerfect")
		HX_STACK_LINE(842)
		Sprite->set_pixelPerfectRender(PixelPerfect);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,pixelPerfectTransform,(void))

Void FlxTypedSpriteGroup_obj::gColorTransform( ::flixel::FlxSprite Sprite,int Color){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","gColorTransform",0x1fbe79c3,"flixel.group.FlxTypedSpriteGroup.gColorTransform","flixel/group/FlxSpriteGroup.hx",843,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Color,"Color")
		HX_STACK_LINE(843)
		Sprite->set_color(Color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,gColorTransform,(void))

Void FlxTypedSpriteGroup_obj::blendTransform( ::flixel::FlxSprite Sprite,::openfl::_v2::display::BlendMode Blend){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","blendTransform",0x1d7b3ac8,"flixel.group.FlxTypedSpriteGroup.blendTransform","flixel/group/FlxSpriteGroup.hx",844,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Blend,"Blend")
		HX_STACK_LINE(844)
		Sprite->set_blend(Blend);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,blendTransform,(void))

Void FlxTypedSpriteGroup_obj::immovableTransform( ::flixel::FlxSprite Sprite,bool Immovable){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","immovableTransform",0x108fd76f,"flixel.group.FlxTypedSpriteGroup.immovableTransform","flixel/group/FlxSpriteGroup.hx",845,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Immovable,"Immovable")
		HX_STACK_LINE(845)
		Sprite->set_immovable(Immovable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,immovableTransform,(void))

Void FlxTypedSpriteGroup_obj::visibleTransform( ::flixel::FlxSprite Sprite,bool Visible){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","visibleTransform",0x807eb3c7,"flixel.group.FlxTypedSpriteGroup.visibleTransform","flixel/group/FlxSpriteGroup.hx",846,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Visible,"Visible")
		HX_STACK_LINE(846)
		Sprite->set_visible(Visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,visibleTransform,(void))

Void FlxTypedSpriteGroup_obj::activeTransform( ::flixel::FlxSprite Sprite,bool Active){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","activeTransform",0x51542a39,"flixel.group.FlxTypedSpriteGroup.activeTransform","flixel/group/FlxSpriteGroup.hx",847,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Active,"Active")
		HX_STACK_LINE(847)
		Sprite->set_active(Active);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,activeTransform,(void))

Void FlxTypedSpriteGroup_obj::solidTransform( ::flixel::FlxSprite Sprite,bool Solid){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","solidTransform",0x242323ae,"flixel.group.FlxTypedSpriteGroup.solidTransform","flixel/group/FlxSpriteGroup.hx",848,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Solid,"Solid")
		HX_STACK_LINE(848)
		Sprite->set_solid(Solid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,solidTransform,(void))

Void FlxTypedSpriteGroup_obj::aliveTransform( ::flixel::FlxSprite Sprite,bool Alive){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","aliveTransform",0x29096fcc,"flixel.group.FlxTypedSpriteGroup.aliveTransform","flixel/group/FlxSpriteGroup.hx",849,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Alive,"Alive")
		HX_STACK_LINE(849)
		Sprite->set_alive(Alive);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,aliveTransform,(void))

Void FlxTypedSpriteGroup_obj::existsTransform( ::flixel::FlxSprite Sprite,bool Exists){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","existsTransform",0xb2051b63,"flixel.group.FlxTypedSpriteGroup.existsTransform","flixel/group/FlxSpriteGroup.hx",850,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Exists,"Exists")
		HX_STACK_LINE(850)
		Sprite->set_exists(Exists);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,existsTransform,(void))

Void FlxTypedSpriteGroup_obj::camerasTransform( ::flixel::FlxSprite Sprite,Array< ::Dynamic > Cameras){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","camerasTransform",0x7f778a8b,"flixel.group.FlxTypedSpriteGroup.camerasTransform","flixel/group/FlxSpriteGroup.hx",851,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Cameras,"Cameras")
		HX_STACK_LINE(851)
		Sprite->set_cameras(Cameras);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,camerasTransform,(void))

Void FlxTypedSpriteGroup_obj::offsetTransform( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Offset){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","offsetTransform",0x35aa32cc,"flixel.group.FlxTypedSpriteGroup.offsetTransform","flixel/group/FlxSpriteGroup.hx",853,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Offset,"Offset")
		HX_STACK_LINE(853)
		::flixel::math::FlxPoint _this = Sprite->offset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(853)
		_this->set_x(Offset->x);
		HX_STACK_LINE(853)
		_this->set_y(Offset->y);
		HX_STACK_LINE(853)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,offsetTransform,(void))

Void FlxTypedSpriteGroup_obj::originTransform( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Origin){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","originTransform",0x93cd4e19,"flixel.group.FlxTypedSpriteGroup.originTransform","flixel/group/FlxSpriteGroup.hx",854,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Origin,"Origin")
		HX_STACK_LINE(854)
		::flixel::math::FlxPoint _this = Sprite->origin;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(854)
		_this->set_x(Origin->x);
		HX_STACK_LINE(854)
		_this->set_y(Origin->y);
		HX_STACK_LINE(854)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,originTransform,(void))

Void FlxTypedSpriteGroup_obj::scaleTransform( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","scaleTransform",0x4ec9456f,"flixel.group.FlxTypedSpriteGroup.scaleTransform","flixel/group/FlxSpriteGroup.hx",855,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(855)
		::flixel::math::FlxPoint _this = Sprite->scale;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(855)
		_this->set_x(Scale->x);
		HX_STACK_LINE(855)
		_this->set_y(Scale->y);
		HX_STACK_LINE(855)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,scaleTransform,(void))

Void FlxTypedSpriteGroup_obj::scrollFactorTransform( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint ScrollFactor){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","scrollFactorTransform",0x4d8808c3,"flixel.group.FlxTypedSpriteGroup.scrollFactorTransform","flixel/group/FlxSpriteGroup.hx",856,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(ScrollFactor,"ScrollFactor")
		HX_STACK_LINE(856)
		::flixel::math::FlxPoint _this = Sprite->scrollFactor;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(856)
		_this->set_x(ScrollFactor->x);
		HX_STACK_LINE(856)
		_this->set_y(ScrollFactor->y);
		HX_STACK_LINE(856)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,scrollFactorTransform,(void))

Void FlxTypedSpriteGroup_obj::offsetCallback( ::flixel::math::FlxPoint Offset){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","offsetCallback",0xeadd6065,"flixel.group.FlxTypedSpriteGroup.offsetCallback","flixel/group/FlxSpriteGroup.hx",859,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Offset,"Offset")
		HX_STACK_LINE(859)
		this->transformChildren_flixel_math_FlxPoint(this->offsetTransform_dyn(),Offset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,offsetCallback,(void))

Void FlxTypedSpriteGroup_obj::originCallback( ::flixel::math::FlxPoint Origin){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","originCallback",0xfa35edb8,"flixel.group.FlxTypedSpriteGroup.originCallback","flixel/group/FlxSpriteGroup.hx",860,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Origin,"Origin")
		HX_STACK_LINE(860)
		this->transformChildren_flixel_math_FlxPoint(this->originTransform_dyn(),Origin);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,originCallback,(void))

Void FlxTypedSpriteGroup_obj::scaleCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","scaleCallback",0xf9e6b322,"flixel.group.FlxTypedSpriteGroup.scaleCallback","flixel/group/FlxSpriteGroup.hx",861,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(861)
		this->transformChildren_flixel_math_FlxPoint(this->scaleTransform_dyn(),Scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,scaleCallback,(void))

Void FlxTypedSpriteGroup_obj::scrollFactorCallback( ::flixel::math::FlxPoint ScrollFactor){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","scrollFactorCallback",0x26aab64e,"flixel.group.FlxTypedSpriteGroup.scrollFactorCallback","flixel/group/FlxSpriteGroup.hx",862,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ScrollFactor,"ScrollFactor")
		HX_STACK_LINE(862)
		this->transformChildren_flixel_math_FlxPoint(this->scrollFactorTransform_dyn(),ScrollFactor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,scrollFactorCallback,(void))

::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","loadGraphicFromSprite",0x6f12dc84,"flixel.group.FlxTypedSpriteGroup.loadGraphicFromSprite","flixel/group/FlxSpriteGroup.hx",876,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(876)
	return hx::ObjectPtr<OBJ_>(this);
}


::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","loadGraphic",0xb4356b15,"flixel.group.FlxTypedSpriteGroup.loadGraphic","flixel/group/FlxSpriteGroup.hx",885,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Animated,"Animated")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(885)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","loadRotatedGraphic",0x45e23732,"flixel.group.FlxTypedSpriteGroup.loadRotatedGraphic","flixel/group/FlxSpriteGroup.hx",897,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(897)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::flixel::FlxSprite FlxTypedSpriteGroup_obj::makeGraphic( int Width,int Height,hx::Null< int >  __o__tmp_Color,hx::Null< bool >  __o_Unique,::String Key){
int _tmp_Color = __o__tmp_Color.Default(-1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","makeGraphic",0x27a1d44d,"flixel.group.FlxTypedSpriteGroup.makeGraphic","flixel/group/FlxSpriteGroup.hx",909,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(_tmp_Color,"_tmp_Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(909)
		int Color = _tmp_Color;		HX_STACK_VAR(Color,"Color");
		HX_STACK_LINE(909)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::openfl::_v2::display::BitmapData FlxTypedSpriteGroup_obj::set_pixels( ::openfl::_v2::display::BitmapData Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_pixels",0xc29e6ad7,"flixel.group.FlxTypedSpriteGroup.set_pixels","flixel/group/FlxSpriteGroup.hx",918,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(918)
	return Value;
}


::flixel::graphics::frames::FlxFrame FlxTypedSpriteGroup_obj::set_frame( ::flixel::graphics::frames::FlxFrame Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_frame",0xf0f19fc3,"flixel.group.FlxTypedSpriteGroup.set_frame","flixel/group/FlxSpriteGroup.hx",927,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(927)
	return Value;
}


::openfl::_v2::display::BitmapData FlxTypedSpriteGroup_obj::get_pixels( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_pixels",0xbf20cc63,"flixel.group.FlxTypedSpriteGroup.get_pixels","flixel/group/FlxSpriteGroup.hx",936,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(936)
	return null();
}


Void FlxTypedSpriteGroup_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","calcFrame",0xbd00728b,"flixel.group.FlxTypedSpriteGroup.calcFrame","flixel/group/FlxSpriteGroup.hx",945,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
	}
return null();
}


Void FlxTypedSpriteGroup_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","resetHelpers",0x60f4ebe3,"flixel.group.FlxTypedSpriteGroup.resetHelpers","flixel/group/FlxSpriteGroup.hx",952,0xeb1fa7f3)
		HX_STACK_THIS(this)
	}
return null();
}


Void FlxTypedSpriteGroup_obj::stamp( ::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","stamp",0x5cccf9b6,"flixel.group.FlxTypedSpriteGroup.stamp","flixel/group/FlxSpriteGroup.hx",957,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Brush,"Brush")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
	}
return null();
}


::flixel::graphics::frames::FlxFramesCollection FlxTypedSpriteGroup_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_frames",0xe27a2b50,"flixel.group.FlxTypedSpriteGroup.set_frames","flixel/group/FlxSpriteGroup.hx",964,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_LINE(964)
	return Frames;
}


Void FlxTypedSpriteGroup_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","updateColorTransform",0x64df671f,"flixel.group.FlxTypedSpriteGroup.updateColorTransform","flixel/group/FlxSpriteGroup.hx",970,0xeb1fa7f3)
		HX_STACK_THIS(this)
	}
return null();
}



FlxTypedSpriteGroup_obj::FlxTypedSpriteGroup_obj()
{
}

void FlxTypedSpriteGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedSpriteGroup);
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_skipTransformChildren,"_skipTransformChildren");
	HX_MARK_MEMBER_NAME(_sprites,"_sprites");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_skipTransformChildren,"_skipTransformChildren");
	HX_VISIT_MEMBER_NAME(_sprites,"_sprites");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedSpriteGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return inCallProp ? get_members() : members; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return get_maxSize(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return forEach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sprites") ) { return _sprites; }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alive") ) { return set_alive_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return set_flipX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return set_flipY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return set_moves_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_exists") ) { return set_exists_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return set_facing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"xTransform") ) { return xTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"yTransform") ) { return yTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return set_frames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return forEachDead_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return set_cameras_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxSize") ) { return get_maxSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return set_maxSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_members") ) { return get_members_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return makeGraphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return forEachAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return forEachExists_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return forEachOfType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return set_immovable_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleCallback") ) { return scaleCallback_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"angleTransform") ) { return angleTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"alphaTransform") ) { return alphaTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"flipXTransform") ) { return flipXTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"flipYTransform") ) { return flipYTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"movesTransform") ) { return movesTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"blendTransform") ) { return blendTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"solidTransform") ) { return solidTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"aliveTransform") ) { return aliveTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleTransform") ) { return scaleTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"offsetCallback") ) { return offsetCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"originCallback") ) { return originCallback_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"facingTransform") ) { return facingTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"gColorTransform") ) { return gColorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"activeTransform") ) { return activeTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"existsTransform") ) { return existsTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"offsetTransform") ) { return offsetTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"originTransform") ) { return originTransform_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return getFirstExisting_dyn(); }
		if (HX_FIELD_EQ(inName,"visibleTransform") ) { return visibleTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"camerasTransform") ) { return camerasTransform_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return pixelsOverlapPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"immovableTransform") ) { return immovableTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return loadRotatedGraphic_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"scrollFactorCallback") ) { return scrollFactorCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"transformChildren_Int") ) { return transformChildren_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelPerfectTransform") ) { return pixelPerfectTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollFactorTransform") ) { return scrollFactorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return loadGraphicFromSprite_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"transformChildren_Bool") ) { return transformChildren_Bool_dyn(); }
		if (HX_FIELD_EQ(inName,"_skipTransformChildren") ) { return _skipTransformChildren; }
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformChildren_Float") ) { return transformChildren_Float_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"multiTransformChildren_Float") ) { return multiTransformChildren_Float_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"transformChildren_flixel_math_FlxPoint") ) { return transformChildren_flixel_math_FlxPoint_dyn(); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"transformChildren_Array_flixel_FlxCamera") ) { return transformChildren_Array_flixel_FlxCamera_dyn(); }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"transformChildren_openfl__v2_display_BlendMode") ) { return transformChildren_openfl__v2_display_BlendMode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedSpriteGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return set_maxSize(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sprites") ) { _sprites=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_skipTransformChildren") ) { _skipTransformChildren=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedSpriteGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("members"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("_skipTransformChildren"));
	outFields->push(HX_CSTRING("_sprites"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(FlxTypedSpriteGroup_obj,group),HX_CSTRING("group")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedSpriteGroup_obj,members),HX_CSTRING("members")},
	{hx::fsInt,(int)offsetof(FlxTypedSpriteGroup_obj,length),HX_CSTRING("length")},
	{hx::fsBool,(int)offsetof(FlxTypedSpriteGroup_obj,_skipTransformChildren),HX_CSTRING("_skipTransformChildren")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTypedSpriteGroup_obj,_sprites),HX_CSTRING("_sprites")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("transformChildren_openfl__v2_display_BlendMode"),
	HX_CSTRING("transformChildren_Int"),
	HX_CSTRING("transformChildren_Float"),
	HX_CSTRING("transformChildren_Bool"),
	HX_CSTRING("transformChildren_Array_flixel_FlxCamera"),
	HX_CSTRING("multiTransformChildren_Float"),
	HX_CSTRING("transformChildren_flixel_math_FlxPoint"),
	HX_CSTRING("group"),
	HX_CSTRING("members"),
	HX_CSTRING("length"),
	HX_CSTRING("_skipTransformChildren"),
	HX_CSTRING("_sprites"),
	HX_CSTRING("initVars"),
	HX_CSTRING("destroy"),
	HX_CSTRING("clone"),
	HX_CSTRING("isOnScreen"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("pixelsOverlapPoint"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("replaceColor"),
	HX_CSTRING("add"),
	HX_CSTRING("recycle"),
	HX_CSTRING("remove"),
	HX_CSTRING("replace"),
	HX_CSTRING("sort"),
	HX_CSTRING("getFirstAvailable"),
	HX_CSTRING("getFirstNull"),
	HX_CSTRING("getFirstExisting"),
	HX_CSTRING("getFirstAlive"),
	HX_CSTRING("getFirstDead"),
	HX_CSTRING("countLiving"),
	HX_CSTRING("countDead"),
	HX_CSTRING("getRandom"),
	HX_CSTRING("iterator"),
	HX_CSTRING("forEach"),
	HX_CSTRING("forEachAlive"),
	HX_CSTRING("forEachDead"),
	HX_CSTRING("forEachExists"),
	HX_CSTRING("forEachOfType"),
	HX_CSTRING("clear"),
	HX_CSTRING("kill"),
	HX_CSTRING("revive"),
	HX_CSTRING("reset"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("set_cameras"),
	HX_CSTRING("set_exists"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("set_active"),
	HX_CSTRING("set_alive"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_facing"),
	HX_CSTRING("set_flipX"),
	HX_CSTRING("set_flipY"),
	HX_CSTRING("set_moves"),
	HX_CSTRING("set_immovable"),
	HX_CSTRING("set_solid"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_blend"),
	HX_CSTRING("set_pixelPerfectRender"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_length"),
	HX_CSTRING("get_maxSize"),
	HX_CSTRING("set_maxSize"),
	HX_CSTRING("get_members"),
	HX_CSTRING("xTransform"),
	HX_CSTRING("yTransform"),
	HX_CSTRING("angleTransform"),
	HX_CSTRING("alphaTransform"),
	HX_CSTRING("facingTransform"),
	HX_CSTRING("flipXTransform"),
	HX_CSTRING("flipYTransform"),
	HX_CSTRING("movesTransform"),
	HX_CSTRING("pixelPerfectTransform"),
	HX_CSTRING("gColorTransform"),
	HX_CSTRING("blendTransform"),
	HX_CSTRING("immovableTransform"),
	HX_CSTRING("visibleTransform"),
	HX_CSTRING("activeTransform"),
	HX_CSTRING("solidTransform"),
	HX_CSTRING("aliveTransform"),
	HX_CSTRING("existsTransform"),
	HX_CSTRING("camerasTransform"),
	HX_CSTRING("offsetTransform"),
	HX_CSTRING("originTransform"),
	HX_CSTRING("scaleTransform"),
	HX_CSTRING("scrollFactorTransform"),
	HX_CSTRING("offsetCallback"),
	HX_CSTRING("originCallback"),
	HX_CSTRING("scaleCallback"),
	HX_CSTRING("scrollFactorCallback"),
	HX_CSTRING("loadGraphicFromSprite"),
	HX_CSTRING("loadGraphic"),
	HX_CSTRING("loadRotatedGraphic"),
	HX_CSTRING("makeGraphic"),
	HX_CSTRING("set_pixels"),
	HX_CSTRING("set_frame"),
	HX_CSTRING("get_pixels"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("stamp"),
	HX_CSTRING("set_frames"),
	HX_CSTRING("updateColorTransform"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedSpriteGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedSpriteGroup_obj::__mClass,"__mClass");
};

#endif

Class FlxTypedSpriteGroup_obj::__mClass;

void FlxTypedSpriteGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.group.FlxTypedSpriteGroup"), hx::TCanCast< FlxTypedSpriteGroup_obj> ,sStaticFields,sMemberFields,
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

void FlxTypedSpriteGroup_obj::__boot()
{
}

} // end namespace flixel
} // end namespace group
