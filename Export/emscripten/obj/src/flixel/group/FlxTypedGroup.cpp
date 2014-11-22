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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedGroup_obj::__construct(hx::Null< int >  __o_MaxSize)
{
HX_STACK_FRAME("flixel.group.FlxTypedGroup","new",0x9772c4d8,"flixel.group.FlxTypedGroup.new","flixel/group/FlxGroup.hx",18,0x1e89d58e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_MaxSize,"MaxSize")
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(82)
	this->_marker = (int)0;
	HX_STACK_LINE(78)
	this->length = (int)0;
	HX_STACK_LINE(89)
	super::__construct();
	HX_STACK_LINE(91)
	this->members = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(93)
	Float _g = ::Math_obj::abs(MaxSize);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(93)
	int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(93)
	this->set_maxSize(_g1);
	HX_STACK_LINE(95)
	this->flixelType = (int)2;
}
;
	return null();
}

//FlxTypedGroup_obj::~FlxTypedGroup_obj() { }

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return  new FlxTypedGroup_obj; }
hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxTypedGroup_obj > result = new FlxTypedGroup_obj();
	result->__construct(__o_MaxSize);
	return result;}

Dynamic FlxTypedGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedGroup_obj > result = new FlxTypedGroup_obj();
	result->__construct(inArgs[0]);
	return result;}

Void FlxTypedGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","destroy",0x8044bd72,"flixel.group.FlxTypedGroup.destroy","flixel/group/FlxGroup.hx",105,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		this->super::destroy();
		HX_STACK_LINE(108)
		if (((this->members != null()))){
			HX_STACK_LINE(110)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(111)
			::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(113)
			while((true)){
				HX_STACK_LINE(113)
				if ((!(((i < this->length))))){
					HX_STACK_LINE(113)
					break;
				}
				HX_STACK_LINE(115)
				int _g = (i)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(115)
				Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(115)
				basic = _g1;
				HX_STACK_LINE(117)
				if (((basic != null()))){
					HX_STACK_LINE(118)
					basic->destroy();
				}
			}
			HX_STACK_LINE(121)
			this->members = null();
		}
	}
return null();
}


Void FlxTypedGroup_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","update",0x4e08ac91,"flixel.group.FlxTypedGroup.update","flixel/group/FlxGroup.hx",129,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(130)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(131)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(133)
		while((true)){
			HX_STACK_LINE(133)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(133)
				break;
			}
			HX_STACK_LINE(135)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(135)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(135)
			basic = _g1;
			HX_STACK_LINE(137)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->active)))){
				HX_STACK_LINE(139)
				basic->update(elapsed);
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::draw( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","draw",0xe667208c,"flixel.group.FlxTypedGroup.draw","flixel/group/FlxGroup.hx",148,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(150)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(152)
		while((true)){
			HX_STACK_LINE(152)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(152)
				break;
			}
			HX_STACK_LINE(154)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(154)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(154)
			basic = _g1;
			HX_STACK_LINE(156)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->visible)))){
				HX_STACK_LINE(158)
				basic->draw();
			}
		}
	}
return null();
}


Dynamic FlxTypedGroup_obj::add( Dynamic Object){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","add",0x9768e699,"flixel.group.FlxTypedGroup.add","flixel/group/FlxGroup.hx",175,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(176)
	if (((Object == null()))){
		HX_STACK_LINE(179)
		return null();
	}
	HX_STACK_LINE(183)
	int _g = this->members->__Field(HX_CSTRING("indexOf"),true)(Object,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(183)
	if (((_g >= (int)0))){
		HX_STACK_LINE(185)
		return Object;
	}
	HX_STACK_LINE(189)
	int index = this->getFirstNull();		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(190)
	if (((index != (int)-1))){
		HX_STACK_LINE(192)
		hx::IndexRef((this->members).mPtr,index) = Object;
		HX_STACK_LINE(194)
		if (((index >= this->length))){
			HX_STACK_LINE(196)
			this->length = (index + (int)1);
		}
		HX_STACK_LINE(199)
		return Object;
	}
	HX_STACK_LINE(203)
	if (((bool((this->maxSize > (int)0)) && bool((this->length >= this->maxSize))))){
		HX_STACK_LINE(205)
		return Object;
	}
	HX_STACK_LINE(209)
	this->members->__Field(HX_CSTRING("push"),true)(Object);
	HX_STACK_LINE(210)
	(this->length)++;
	HX_STACK_LINE(212)
	return Object;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

Dynamic FlxTypedGroup_obj::recycle( ::Class ObjectClass,Dynamic ObjectFactory,hx::Null< bool >  __o_Force,hx::Null< bool >  __o_Revive){
bool Force = __o_Force.Default(false);
bool Revive = __o_Revive.Default(true);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","recycle",0x934aa08b,"flixel.group.FlxTypedGroup.recycle","flixel/group/FlxGroup.hx",238,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(ObjectFactory,"ObjectFactory")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Revive,"Revive")
{
		HX_STACK_LINE(239)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(242)
		if (((this->maxSize > (int)0))){
			HX_STACK_LINE(245)
			if (((this->length < this->maxSize))){
				HX_STACK_LINE(247)
				Dynamic object = null();		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(247)
				if (((ObjectFactory != null()))){
					HX_STACK_LINE(247)
					Dynamic _g = ObjectFactory();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(247)
					Dynamic _g1 = object = _g;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(247)
					this->add(_g1);
				}
				else{
					HX_STACK_LINE(247)
					if (((ObjectClass != null()))){
						HX_STACK_LINE(247)
						Dynamic _g2 = ::Type_obj::createInstance(ObjectClass,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(247)
						Dynamic _g3 = object = _g2;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(247)
						this->add(_g3);
					}
				}
				HX_STACK_LINE(247)
				return object;
			}
			else{
				HX_STACK_LINE(252)
				int _g4 = (this->_marker)++;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(252)
				Dynamic _g5 = this->members->__GetItem(_g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(252)
				basic = _g5;
				HX_STACK_LINE(254)
				if (((this->_marker >= this->maxSize))){
					HX_STACK_LINE(256)
					this->_marker = (int)0;
				}
				HX_STACK_LINE(259)
				if ((Revive)){
					HX_STACK_LINE(261)
					basic->revive();
				}
				HX_STACK_LINE(264)
				return basic;
			}
		}
		else{
			HX_STACK_LINE(270)
			Dynamic _g6 = this->getFirstAvailable(ObjectClass,Force);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(270)
			basic = _g6;
			HX_STACK_LINE(272)
			if (((basic != null()))){
				HX_STACK_LINE(274)
				if ((Revive)){
					HX_STACK_LINE(276)
					basic->revive();
				}
				HX_STACK_LINE(278)
				return basic;
			}
			HX_STACK_LINE(281)
			{
				HX_STACK_LINE(281)
				Dynamic object = null();		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(281)
				if (((ObjectFactory != null()))){
					HX_STACK_LINE(281)
					Dynamic _g7 = ObjectFactory();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(281)
					Dynamic _g8 = object = _g7;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(281)
					this->add(_g8);
				}
				else{
					HX_STACK_LINE(281)
					if (((ObjectClass != null()))){
						HX_STACK_LINE(281)
						Dynamic _g9 = ::Type_obj::createInstance(ObjectClass,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(281)
						Dynamic _g10 = object = _g9;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(281)
						this->add(_g10);
					}
				}
				HX_STACK_LINE(281)
				return object;
			}
		}
		HX_STACK_LINE(242)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedGroup_obj,recycle,return )

Dynamic FlxTypedGroup_obj::recycleCreateObject( ::Class ObjectClass,Dynamic ObjectFactory){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","recycleCreateObject",0x87e5d006,"flixel.group.FlxTypedGroup.recycleCreateObject","flixel/group/FlxGroup.hx",286,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(ObjectFactory,"ObjectFactory")
	HX_STACK_LINE(287)
	Dynamic object = null();		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(289)
	if (((ObjectFactory != null()))){
		HX_STACK_LINE(291)
		Dynamic _g = ObjectFactory();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(291)
		Dynamic _g1 = object = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(291)
		this->add(_g1);
	}
	else{
		HX_STACK_LINE(293)
		if (((ObjectClass != null()))){
			HX_STACK_LINE(295)
			Dynamic _g2 = ::Type_obj::createInstance(ObjectClass,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(295)
			Dynamic _g3 = object = _g2;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(295)
			this->add(_g3);
		}
	}
	HX_STACK_LINE(298)
	return object;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,recycleCreateObject,return )

Dynamic FlxTypedGroup_obj::remove( Dynamic Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","remove",0xcb8bc2cc,"flixel.group.FlxTypedGroup.remove","flixel/group/FlxGroup.hx",309,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Splice,"Splice")
{
		HX_STACK_LINE(310)
		if (((this->members == null()))){
			HX_STACK_LINE(311)
			return null();
		}
		HX_STACK_LINE(313)
		int index = this->members->__Field(HX_CSTRING("indexOf"),true)(Object,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(315)
		if (((index < (int)0))){
			HX_STACK_LINE(316)
			return null();
		}
		HX_STACK_LINE(318)
		if ((Splice)){
			HX_STACK_LINE(319)
			this->members->__Field(HX_CSTRING("splice"),true)(index,(int)1);
		}
		else{
			HX_STACK_LINE(321)
			hx::IndexRef((this->members).mPtr,index) = null();
		}
		HX_STACK_LINE(323)
		return Object;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

Dynamic FlxTypedGroup_obj::replace( Dynamic OldObject,Dynamic NewObject){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","replace",0x06e6d8ac,"flixel.group.FlxTypedGroup.replace","flixel/group/FlxGroup.hx",335,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OldObject,"OldObject")
	HX_STACK_ARG(NewObject,"NewObject")
	HX_STACK_LINE(336)
	int index = this->members->__Field(HX_CSTRING("indexOf"),true)(OldObject,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(338)
	if (((index < (int)0))){
		HX_STACK_LINE(339)
		return null();
	}
	HX_STACK_LINE(341)
	hx::IndexRef((this->members).mPtr,index) = NewObject;
	HX_STACK_LINE(343)
	return NewObject;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

Void FlxTypedGroup_obj::sort( Dynamic Function,hx::Null< int >  __o_Order){
int Order = __o_Order.Default(-1);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","sort",0xf04f1be6,"flixel.group.FlxTypedGroup.sort","flixel/group/FlxGroup.hx",354,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Order,"Order")
{
		HX_STACK_LINE(355)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(355)
		{
			HX_STACK_LINE(355)
			Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(Function));		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(355)
			Array< int > a1 = Array_obj< int >::__new().Add(Order);		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< int >,a1,Dynamic,f)
			int run(Dynamic a2,Dynamic a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/group/FlxGroup.hx",355,0x1e89d58e)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(355)
					return f->__GetItem((int)0)(a1->__get((int)0),a2,a3).Cast< int >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(355)
			_g =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(355)
		this->members->__Field(HX_CSTRING("sort"),true)(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

Dynamic FlxTypedGroup_obj::getFirstAvailable( ::Class ObjectClass,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstAvailable",0x3f88c127,"flixel.group.FlxTypedGroup.getFirstAvailable","flixel/group/FlxGroup.hx",367,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(368)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(369)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(371)
		while((true)){
			HX_STACK_LINE(371)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(371)
				break;
			}
			HX_STACK_LINE(373)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(373)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(373)
			basic = _g1;
			struct _Function_2_1{
				inline static bool Block( ::flixel::FlxBasic &basic,::Class &ObjectClass){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/group/FlxGroup.hx",375,0x1e89d58e)
					{
						HX_STACK_LINE(375)
						return (  ((!(((ObjectClass == null()))))) ? bool(::Std_obj::is(basic,ObjectClass)) : bool(true) );
					}
					return null();
				}
			};
			HX_STACK_LINE(375)
			if (((  (((bool((basic != null())) && bool(!(basic->exists))))) ? bool(_Function_2_1::Block(basic,ObjectClass)) : bool(false) ))){
				struct _Function_3_1{
					inline static bool Block( ::flixel::FlxBasic &basic,::Class &ObjectClass){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/group/FlxGroup.hx",377,0x1e89d58e)
						{
							HX_STACK_LINE(377)
							::Class _g2 = ::Type_obj::getClass(basic);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(377)
							::String _g3 = ::Type_obj::getClassName(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(377)
							::String _g4 = ::Type_obj::getClassName(ObjectClass);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(377)
							return (_g3 != _g4);
						}
						return null();
					}
				};
				HX_STACK_LINE(377)
				if (((  ((Force)) ? bool(_Function_3_1::Block(basic,ObjectClass)) : bool(false) ))){
					HX_STACK_LINE(379)
					continue;
				}
				HX_STACK_LINE(381)
				return this->members->__GetItem((i - (int)1));
			}
		}
		HX_STACK_LINE(385)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

int FlxTypedGroup_obj::getFirstNull( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstNull",0xc17e73e9,"flixel.group.FlxTypedGroup.getFirstNull","flixel/group/FlxGroup.hx",395,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(396)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(398)
	while((true)){
		HX_STACK_LINE(398)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(398)
			break;
		}
		HX_STACK_LINE(400)
		if (((this->members->__GetItem(i) == null()))){
			HX_STACK_LINE(402)
			return i;
		}
		HX_STACK_LINE(404)
		(i)++;
	}
	HX_STACK_LINE(407)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

Dynamic FlxTypedGroup_obj::getFirstExisting( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstExisting",0x314444ed,"flixel.group.FlxTypedGroup.getFirstExisting","flixel/group/FlxGroup.hx",417,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(418)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(419)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(421)
	while((true)){
		HX_STACK_LINE(421)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(421)
			break;
		}
		HX_STACK_LINE(423)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(423)
		Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(423)
		basic = _g1;
		HX_STACK_LINE(425)
		if (((bool((basic != null())) && bool(basic->exists)))){
			HX_STACK_LINE(427)
			return basic;
		}
	}
	HX_STACK_LINE(431)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

Dynamic FlxTypedGroup_obj::getFirstAlive( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstAlive",0x0afc442b,"flixel.group.FlxTypedGroup.getFirstAlive","flixel/group/FlxGroup.hx",441,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(442)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(443)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(445)
	while((true)){
		HX_STACK_LINE(445)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(445)
			break;
		}
		HX_STACK_LINE(447)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(447)
		Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(447)
		basic = _g1;
		HX_STACK_LINE(449)
		if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->alive)))){
			HX_STACK_LINE(451)
			return basic;
		}
	}
	HX_STACK_LINE(455)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

Dynamic FlxTypedGroup_obj::getFirstDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstDead",0xbad62406,"flixel.group.FlxTypedGroup.getFirstDead","flixel/group/FlxGroup.hx",465,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(466)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(467)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(469)
	while((true)){
		HX_STACK_LINE(469)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(469)
			break;
		}
		HX_STACK_LINE(471)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(471)
		Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(471)
		basic = _g1;
		HX_STACK_LINE(473)
		if (((bool((basic != null())) && bool(!(basic->alive))))){
			HX_STACK_LINE(475)
			return basic;
		}
	}
	HX_STACK_LINE(479)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

int FlxTypedGroup_obj::countLiving( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","countLiving",0x0ee705d0,"flixel.group.FlxTypedGroup.countLiving","flixel/group/FlxGroup.hx",488,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(489)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(490)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(491)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(493)
	while((true)){
		HX_STACK_LINE(493)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(493)
			break;
		}
		HX_STACK_LINE(495)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(495)
		Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(495)
		basic = _g1;
		HX_STACK_LINE(497)
		if (((basic != null()))){
			HX_STACK_LINE(499)
			if (((count < (int)0))){
				HX_STACK_LINE(501)
				count = (int)0;
			}
			HX_STACK_LINE(503)
			if (((bool(basic->exists) && bool(basic->alive)))){
				HX_STACK_LINE(505)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(510)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

int FlxTypedGroup_obj::countDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","countDead",0x0964718b,"flixel.group.FlxTypedGroup.countDead","flixel/group/FlxGroup.hx",519,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(520)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(521)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(522)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(524)
	while((true)){
		HX_STACK_LINE(524)
		if ((!(((i < this->length))))){
			HX_STACK_LINE(524)
			break;
		}
		HX_STACK_LINE(526)
		int _g = (i)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(526)
		Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(526)
		basic = _g1;
		HX_STACK_LINE(528)
		if (((basic != null()))){
			HX_STACK_LINE(530)
			if (((count < (int)0))){
				HX_STACK_LINE(532)
				count = (int)0;
			}
			HX_STACK_LINE(534)
			if ((!(basic->alive))){
				HX_STACK_LINE(536)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(541)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

Dynamic FlxTypedGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getRandom",0xe8c349b1,"flixel.group.FlxTypedGroup.getRandom","flixel/group/FlxGroup.hx",552,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(Length,"Length")
{
		HX_STACK_LINE(553)
		if (((StartIndex < (int)0))){
			HX_STACK_LINE(555)
			StartIndex = (int)0;
		}
		HX_STACK_LINE(557)
		if (((Length <= (int)0))){
			HX_STACK_LINE(559)
			Length = this->length;
		}
		HX_STACK_LINE(562)
		return ::flixel::FlxG_obj::random->getObject_flixel_group_FlxTypedGroup_T(this->members,null(),StartIndex,Length);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

Void FlxTypedGroup_obj::clear( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","clear",0x1c7a7405,"flixel.group.FlxTypedGroup.clear","flixel/group/FlxGroup.hx",570,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(571)
		this->length = (int)0;
		HX_STACK_LINE(572)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_group_FlxTypedGroup_T(this->members,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

Void FlxTypedGroup_obj::kill( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","kill",0xeb00d426,"flixel.group.FlxTypedGroup.kill","flixel/group/FlxGroup.hx",580,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(581)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(582)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(584)
		while((true)){
			HX_STACK_LINE(584)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(584)
				break;
			}
			HX_STACK_LINE(586)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(586)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(586)
			basic = _g1;
			HX_STACK_LINE(588)
			if (((bool((basic != null())) && bool(basic->exists)))){
				HX_STACK_LINE(590)
				basic->kill();
			}
		}
		HX_STACK_LINE(594)
		this->super::kill();
	}
return null();
}


Void FlxTypedGroup_obj::revive( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","revive",0xd17a20dd,"flixel.group.FlxTypedGroup.revive","flixel/group/FlxGroup.hx",601,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(602)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(603)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(605)
		while((true)){
			HX_STACK_LINE(605)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(605)
				break;
			}
			HX_STACK_LINE(607)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(607)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(607)
			basic = _g1;
			HX_STACK_LINE(609)
			if (((bool((basic != null())) && bool(!(basic->exists))))){
				HX_STACK_LINE(611)
				basic->revive();
			}
		}
		HX_STACK_LINE(615)
		this->super::revive();
	}
return null();
}


::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( Dynamic filter){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","iterator",0x7e9a2276,"flixel.group.FlxTypedGroup.iterator","flixel/group/FlxGroup.hx",623,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(623)
	return ::flixel::group::FlxTypedGroupIterator_obj::__new(this->members,filter);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

Void FlxTypedGroup_obj::forEach( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEach",0x207cba22,"flixel.group.FlxTypedGroup.forEach","flixel/group/FlxGroup.hx",633,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(634)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(635)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(637)
		while((true)){
			HX_STACK_LINE(637)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(637)
				break;
			}
			HX_STACK_LINE(639)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(639)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(639)
			basic = _g1;
			HX_STACK_LINE(641)
			if (((basic != null()))){
				HX_STACK_LINE(643)
				if ((Recurse)){
					HX_STACK_LINE(645)
					::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(645)
					{
						HX_STACK_LINE(645)
						::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
						HX_STACK_LINE(645)
						if (((basic != null()))){
							HX_STACK_LINE(645)
							if (((basic->flixelType == (int)2))){
								HX_STACK_LINE(645)
								group1 = basic;
							}
							else{
								HX_STACK_LINE(645)
								if (((basic->flixelType == (int)4))){
									HX_STACK_LINE(645)
									group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(basic))->group;
								}
							}
						}
						HX_STACK_LINE(645)
						group = group1;
					}
					HX_STACK_LINE(646)
					if (((group != null()))){
						HX_STACK_LINE(648)
						group->forEach(Function,Recurse);
					}
				}
				HX_STACK_LINE(652)
				Function(basic).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEach,(void))

Void FlxTypedGroup_obj::forEachAlive( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachAlive",0x4c021e4b,"flixel.group.FlxTypedGroup.forEachAlive","flixel/group/FlxGroup.hx",664,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(665)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(666)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(668)
		while((true)){
			HX_STACK_LINE(668)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(668)
				break;
			}
			HX_STACK_LINE(670)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(670)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(670)
			basic = _g1;
			HX_STACK_LINE(672)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->alive)))){
				HX_STACK_LINE(674)
				if ((Recurse)){
					HX_STACK_LINE(676)
					::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(676)
					{
						HX_STACK_LINE(676)
						::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
						HX_STACK_LINE(676)
						if (((basic != null()))){
							HX_STACK_LINE(676)
							if (((basic->flixelType == (int)2))){
								HX_STACK_LINE(676)
								group1 = basic;
							}
							else{
								HX_STACK_LINE(676)
								if (((basic->flixelType == (int)4))){
									HX_STACK_LINE(676)
									group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(basic))->group;
								}
							}
						}
						HX_STACK_LINE(676)
						group = group1;
					}
					HX_STACK_LINE(677)
					if (((group != null()))){
						HX_STACK_LINE(679)
						group->forEachAlive(Function,Recurse);
					}
				}
				HX_STACK_LINE(683)
				Function(basic).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachAlive,(void))

Void FlxTypedGroup_obj::forEachDead( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachDead",0x5740ede6,"flixel.group.FlxTypedGroup.forEachDead","flixel/group/FlxGroup.hx",695,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(696)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(697)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(699)
		while((true)){
			HX_STACK_LINE(699)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(699)
				break;
			}
			HX_STACK_LINE(701)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(701)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(701)
			basic = _g1;
			HX_STACK_LINE(703)
			if (((bool((basic != null())) && bool(!(basic->alive))))){
				HX_STACK_LINE(705)
				if ((Recurse)){
					HX_STACK_LINE(707)
					::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(707)
					{
						HX_STACK_LINE(707)
						::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
						HX_STACK_LINE(707)
						if (((basic != null()))){
							HX_STACK_LINE(707)
							if (((basic->flixelType == (int)2))){
								HX_STACK_LINE(707)
								group1 = basic;
							}
							else{
								HX_STACK_LINE(707)
								if (((basic->flixelType == (int)4))){
									HX_STACK_LINE(707)
									group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(basic))->group;
								}
							}
						}
						HX_STACK_LINE(707)
						group = group1;
					}
					HX_STACK_LINE(708)
					if (((group != null()))){
						HX_STACK_LINE(710)
						group->forEachDead(Function,Recurse);
					}
				}
				HX_STACK_LINE(714)
				Function(basic).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachDead,(void))

Void FlxTypedGroup_obj::forEachExists( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachExists",0xb812919e,"flixel.group.FlxTypedGroup.forEachExists","flixel/group/FlxGroup.hx",726,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(727)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(728)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(730)
		while((true)){
			HX_STACK_LINE(730)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(730)
				break;
			}
			HX_STACK_LINE(732)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(732)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(732)
			basic = _g1;
			HX_STACK_LINE(734)
			if (((bool((basic != null())) && bool(basic->exists)))){
				HX_STACK_LINE(736)
				if ((Recurse)){
					HX_STACK_LINE(738)
					::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(738)
					{
						HX_STACK_LINE(738)
						::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
						HX_STACK_LINE(738)
						if (((basic != null()))){
							HX_STACK_LINE(738)
							if (((basic->flixelType == (int)2))){
								HX_STACK_LINE(738)
								group1 = basic;
							}
							else{
								HX_STACK_LINE(738)
								if (((basic->flixelType == (int)4))){
									HX_STACK_LINE(738)
									group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(basic))->group;
								}
							}
						}
						HX_STACK_LINE(738)
						group = group1;
					}
					HX_STACK_LINE(739)
					if (((group != null()))){
						HX_STACK_LINE(741)
						group->forEachExists(Function,Recurse);
					}
				}
				HX_STACK_LINE(745)
				Function(basic).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachExists,(void))

Void FlxTypedGroup_obj::forEachOfType( ::Class ObjectClass,Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachOfType",0x4c90cb33,"flixel.group.FlxTypedGroup.forEachOfType","flixel/group/FlxGroup.hx",758,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(759)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(760)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(762)
		while((true)){
			HX_STACK_LINE(762)
			if ((!(((i < this->length))))){
				HX_STACK_LINE(762)
				break;
			}
			HX_STACK_LINE(764)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(764)
			Dynamic _g1 = this->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(764)
			basic = _g1;
			HX_STACK_LINE(766)
			if (((  (((basic != null()))) ? bool(::Std_obj::is(basic,ObjectClass)) : bool(false) ))){
				HX_STACK_LINE(768)
				if ((Recurse)){
					HX_STACK_LINE(770)
					::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(770)
					{
						HX_STACK_LINE(770)
						::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
						HX_STACK_LINE(770)
						if (((basic != null()))){
							HX_STACK_LINE(770)
							if (((basic->flixelType == (int)2))){
								HX_STACK_LINE(770)
								group1 = basic;
							}
							else{
								HX_STACK_LINE(770)
								if (((basic->flixelType == (int)4))){
									HX_STACK_LINE(770)
									group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(basic))->group;
								}
							}
						}
						HX_STACK_LINE(770)
						group = group1;
					}
					HX_STACK_LINE(771)
					if (((group != null()))){
						HX_STACK_LINE(773)
						group->forEachOfType(ObjectClass,Function,Recurse);
					}
				}
				HX_STACK_LINE(777)
				Function(basic).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,forEachOfType,(void))

int FlxTypedGroup_obj::set_maxSize( int Size){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","set_maxSize",0x3b478d20,"flixel.group.FlxTypedGroup.set_maxSize","flixel/group/FlxGroup.hx",783,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(784)
	Float _g = ::Math_obj::abs(Size);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(784)
	int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(784)
	this->maxSize = _g1;
	HX_STACK_LINE(786)
	if (((this->_marker >= this->maxSize))){
		HX_STACK_LINE(788)
		this->_marker = (int)0;
	}
	HX_STACK_LINE(790)
	if (((bool((bool((this->maxSize == (int)0)) || bool((this->members == null())))) || bool((this->maxSize >= this->length))))){
		HX_STACK_LINE(792)
		return this->maxSize;
	}
	HX_STACK_LINE(796)
	int i = this->maxSize;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(797)
	int l = this->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(798)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(800)
	while((true)){
		HX_STACK_LINE(800)
		if ((!(((i < l))))){
			HX_STACK_LINE(800)
			break;
		}
		HX_STACK_LINE(802)
		int _g2 = (i)++;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(802)
		Dynamic _g3 = this->members->__GetItem(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(802)
		basic = _g3;
		HX_STACK_LINE(804)
		if (((basic != null()))){
			HX_STACK_LINE(805)
			basic->destroy();
		}
	}
	HX_STACK_LINE(808)
	::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->members,this->maxSize);
	HX_STACK_LINE(809)
	this->length = this->members->__Field(HX_CSTRING("length"),true);
	HX_STACK_LINE(811)
	return this->maxSize;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )

bool FlxTypedGroup_obj::overlaps( Dynamic Callback,::flixel::group::FlxTypedGroup Group,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","overlaps",0x302aab94,"flixel.group.FlxTypedGroup.overlaps","flixel/group/FlxGroup.hx",26,0x1e89d58e)
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(Group,"Group")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(27)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(28)
	if (((Group != null()))){
		HX_STACK_LINE(30)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(31)
		int l = Group->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(32)
		::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			if ((!(((i < l))))){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(36)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			::flixel::FlxBasic _g1 = Group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(36)
			basic = _g1;
			HX_STACK_LINE(38)
			if (((  (((basic != null()))) ? bool(Callback(basic,X,Y,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
				HX_STACK_LINE(40)
				result = true;
				HX_STACK_LINE(41)
				break;
			}
		}
	}
	HX_STACK_LINE(45)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxTypedGroup_obj,overlaps,return )

::flixel::group::FlxTypedGroup FlxTypedGroup_obj::resolveGroup( ::flixel::FlxBasic ObjectOrGroup){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","resolveGroup",0x84c4b53b,"flixel.group.FlxTypedGroup.resolveGroup","flixel/group/FlxGroup.hx",50,0x1e89d58e)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_LINE(51)
	::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(52)
	if (((ObjectOrGroup != null()))){
		HX_STACK_LINE(54)
		if (((ObjectOrGroup->flixelType == (int)2))){
			HX_STACK_LINE(56)
			group = ObjectOrGroup;
		}
		else{
			HX_STACK_LINE(58)
			if (((ObjectOrGroup->flixelType == (int)4))){
				HX_STACK_LINE(60)
				group = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(ObjectOrGroup))->group;
			}
		}
	}
	HX_STACK_LINE(63)
	return group;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,resolveGroup,return )


FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedGroup_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return members; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return forEach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return forEachDead_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return set_maxSize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveGroup") ) { return resolveGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return forEachAlive_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return forEachExists_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return forEachOfType_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return getFirstExisting_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"recycleCreateObject") ) { return recycleCreateObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp) return set_maxSize(inValue);maxSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("members"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("_marker"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("overlaps"),
	HX_CSTRING("resolveGroup"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedGroup_obj,members),HX_CSTRING("members")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,maxSize),HX_CSTRING("maxSize")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,length),HX_CSTRING("length")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,_marker),HX_CSTRING("_marker")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("members"),
	HX_CSTRING("maxSize"),
	HX_CSTRING("length"),
	HX_CSTRING("_marker"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("add"),
	HX_CSTRING("recycle"),
	HX_CSTRING("recycleCreateObject"),
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
	HX_CSTRING("clear"),
	HX_CSTRING("kill"),
	HX_CSTRING("revive"),
	HX_CSTRING("iterator"),
	HX_CSTRING("forEach"),
	HX_CSTRING("forEachAlive"),
	HX_CSTRING("forEachDead"),
	HX_CSTRING("forEachExists"),
	HX_CSTRING("forEachOfType"),
	HX_CSTRING("set_maxSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

#endif

Class FlxTypedGroup_obj::__mClass;

void FlxTypedGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.group.FlxTypedGroup"), hx::TCanCast< FlxTypedGroup_obj> ,sStaticFields,sMemberFields,
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

void FlxTypedGroup_obj::__boot()
{
}

} // end namespace flixel
} // end namespace group
