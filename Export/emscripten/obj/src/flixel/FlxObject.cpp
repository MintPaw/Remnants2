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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
namespace flixel{

Void FlxObject_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_FRAME("flixel.FlxObject","new",0x2aa4ec91,"flixel.FlxObject.new","flixel/FlxObject.hx",20,0xf0fe0d80)
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
	struct _Function_1_1{
		inline static ::flixel::math::FlxRect Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",456,0xf0fe0d80)
			{
				HX_STACK_LINE(456)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(456)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(456)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(456)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(456)
				::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(456)
				{
					HX_STACK_LINE(456)
					::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(456)
					_this->x = X;
					HX_STACK_LINE(456)
					_this->y = Y;
					HX_STACK_LINE(456)
					_this->width = Width;
					HX_STACK_LINE(456)
					_this->height = Height;
					HX_STACK_LINE(456)
					rect = _this;
				}
				HX_STACK_LINE(456)
				rect->_inPool = false;
				HX_STACK_LINE(456)
				return rect;
			}
			return null();
		}
	};
	HX_STACK_LINE(456)
	this->_rect = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",455,0xf0fe0d80)
			{
				HX_STACK_LINE(455)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(455)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(455)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(455)
				point->_inPool = false;
				HX_STACK_LINE(455)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(455)
	this->_point = _Function_1_2::Block();
	HX_STACK_LINE(441)
	this->collisonXDrag = true;
	HX_STACK_LINE(436)
	this->allowCollisions = (int)4369;
	HX_STACK_LINE(431)
	this->wasTouching = (int)0;
	HX_STACK_LINE(426)
	this->touching = (int)0;
	HX_STACK_LINE(421)
	this->health = (int)1;
	HX_STACK_LINE(417)
	this->maxAngular = (int)10000;
	HX_STACK_LINE(413)
	this->angularDrag = (int)0;
	HX_STACK_LINE(409)
	this->angularAcceleration = (int)0;
	HX_STACK_LINE(405)
	this->angularVelocity = (int)0;
	HX_STACK_LINE(401)
	this->elasticity = (int)0;
	HX_STACK_LINE(397)
	this->mass = (int)1;
	HX_STACK_LINE(358)
	this->immovable = false;
	HX_STACK_LINE(354)
	this->moves = true;
	HX_STACK_LINE(349)
	this->angle = (int)0;
	HX_STACK_LINE(344)
	this->pixelPerfectPosition = true;
	HX_STACK_LINE(324)
	this->y = (int)0;
	HX_STACK_LINE(320)
	this->x = (int)0;
	HX_STACK_LINE(466)
	super::__construct();
	HX_STACK_LINE(468)
	this->set_x(X);
	HX_STACK_LINE(469)
	this->set_y(Y);
	HX_STACK_LINE(470)
	this->set_width(Width);
	HX_STACK_LINE(471)
	this->set_height(Height);
	HX_STACK_LINE(473)
	this->initVars();
}
;
	return null();
}

//FlxObject_obj::~FlxObject_obj() { }

Dynamic FlxObject_obj::__CreateEmpty() { return  new FlxObject_obj; }
hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return result;}

Dynamic FlxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxObject_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initVars",0xb8a66d0b,"flixel.FlxObject.initVars","flixel/FlxObject.hx",480,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(481)
		this->flixelType = (int)1;
		HX_STACK_LINE(482)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(482)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(this->x,this->y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(482)
			point->_inPool = false;
			HX_STACK_LINE(482)
			_g = point;
		}
		HX_STACK_LINE(482)
		this->last = _g;
		HX_STACK_LINE(483)
		::flixel::math::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(483)
			point->_inPool = false;
			HX_STACK_LINE(483)
			_g1 = point;
		}
		HX_STACK_LINE(483)
		this->scrollFactor = _g1;
		HX_STACK_LINE(485)
		{
			HX_STACK_LINE(485)
			::flixel::math::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(485)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(485)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(485)
				point->_inPool = false;
				HX_STACK_LINE(485)
				_g2 = point;
			}
			HX_STACK_LINE(485)
			this->velocity = _g2;
			HX_STACK_LINE(485)
			::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(485)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(485)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(485)
				point->_inPool = false;
				HX_STACK_LINE(485)
				_g3 = point;
			}
			HX_STACK_LINE(485)
			this->acceleration = _g3;
			HX_STACK_LINE(485)
			::flixel::math::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(485)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(485)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(485)
				point->_inPool = false;
				HX_STACK_LINE(485)
				_g4 = point;
			}
			HX_STACK_LINE(485)
			this->drag = _g4;
			HX_STACK_LINE(485)
			::flixel::math::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)10000,(int)10000);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(485)
				point->_inPool = false;
				HX_STACK_LINE(485)
				_g5 = point;
			}
			HX_STACK_LINE(485)
			this->maxVelocity = _g5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initVars,(void))

Void FlxObject_obj::initMotionVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initMotionVars",0xb01943a1,"flixel.FlxObject.initMotionVars","flixel/FlxObject.hx",492,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(493)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(493)
		{
			HX_STACK_LINE(493)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(493)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(493)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(493)
			point->_inPool = false;
			HX_STACK_LINE(493)
			_g = point;
		}
		HX_STACK_LINE(493)
		this->velocity = _g;
		HX_STACK_LINE(494)
		::flixel::math::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(494)
		{
			HX_STACK_LINE(494)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(494)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(494)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(494)
			point->_inPool = false;
			HX_STACK_LINE(494)
			_g1 = point;
		}
		HX_STACK_LINE(494)
		this->acceleration = _g1;
		HX_STACK_LINE(495)
		::flixel::math::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(495)
		{
			HX_STACK_LINE(495)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(495)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(495)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(495)
			point->_inPool = false;
			HX_STACK_LINE(495)
			_g2 = point;
		}
		HX_STACK_LINE(495)
		this->drag = _g2;
		HX_STACK_LINE(496)
		::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)10000,(int)10000);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(496)
			point->_inPool = false;
			HX_STACK_LINE(496)
			_g3 = point;
		}
		HX_STACK_LINE(496)
		this->maxVelocity = _g3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initMotionVars,(void))

Void FlxObject_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxObject","destroy",0xba37b5ab,"flixel.FlxObject.destroy","flixel/FlxObject.hx",504,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(505)
		this->super::destroy();
		HX_STACK_LINE(507)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->velocity);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(507)
		this->velocity = _g;
		HX_STACK_LINE(508)
		::flixel::math::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->acceleration);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(508)
		this->acceleration = _g1;
		HX_STACK_LINE(509)
		::flixel::math::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->drag);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(509)
		this->drag = _g2;
		HX_STACK_LINE(510)
		::flixel::math::FlxPoint _g3 = ::flixel::util::FlxDestroyUtil_obj::put(this->maxVelocity);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(510)
		this->maxVelocity = _g3;
		HX_STACK_LINE(511)
		::flixel::math::FlxPoint _g4 = ::flixel::util::FlxDestroyUtil_obj::put(this->scrollFactor);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(511)
		this->scrollFactor = _g4;
		HX_STACK_LINE(512)
		::flixel::math::FlxPoint _g5 = ::flixel::util::FlxDestroyUtil_obj::put(this->last);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(512)
		this->last = _g5;
		HX_STACK_LINE(513)
		::flixel::math::FlxPoint _g6 = ::flixel::util::FlxDestroyUtil_obj::put(this->_point);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(513)
		this->_point = _g6;
		HX_STACK_LINE(514)
		::flixel::math::FlxRect _g7 = ::flixel::util::FlxDestroyUtil_obj::put(this->_rect);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(514)
		this->_rect = _g7;
	}
return null();
}


Void FlxObject_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxObject","update",0x87b15e78,"flixel.FlxObject.update","flixel/FlxObject.hx",522,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(528)
		this->last->set_x(this->x);
		HX_STACK_LINE(529)
		this->last->set_y(this->y);
		HX_STACK_LINE(531)
		if ((this->moves)){
			HX_STACK_LINE(533)
			this->updateMotion(elapsed);
		}
		HX_STACK_LINE(536)
		this->wasTouching = this->touching;
		HX_STACK_LINE(537)
		this->touching = (int)0;
	}
return null();
}


Void FlxObject_obj::updateMotion( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxObject","updateMotion",0x420d82ce,"flixel.FlxObject.updateMotion","flixel/FlxObject.hx",545,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(546)
		Float _g = ::flixel::math::FlxVelocity_obj::computeVelocity(this->angularVelocity,this->angularAcceleration,this->angularDrag,this->maxAngular,elapsed);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(546)
		Float _g1 = (_g - this->angularVelocity);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(546)
		Float velocityDelta = (0.5 * _g1);		HX_STACK_VAR(velocityDelta,"velocityDelta");
		HX_STACK_LINE(547)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			::flixel::FlxObject _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(548)
			_g2->set_angle((_g2->angle + (this->angularVelocity * elapsed)));
		}
		HX_STACK_LINE(549)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(551)
		Float _g2 = ::flixel::math::FlxVelocity_obj::computeVelocity(this->velocity->x,this->acceleration->x,this->drag->x,this->maxVelocity->x,elapsed);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(551)
		Float _g3 = (_g2 - this->velocity->x);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(551)
		Float _g4 = (0.5 * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(551)
		velocityDelta = _g4;
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			::flixel::math::FlxPoint _g5 = this->velocity;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(552)
			_g5->set_x((_g5->x + velocityDelta));
		}
		HX_STACK_LINE(553)
		Float delta = (this->velocity->x * elapsed);		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(554)
			::flixel::math::FlxPoint _g5 = this->velocity;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(554)
			_g5->set_x((_g5->x + velocityDelta));
		}
		HX_STACK_LINE(555)
		{
			HX_STACK_LINE(555)
			::flixel::FlxObject _g5 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(555)
			_g5->set_x((_g5->x + delta));
		}
		HX_STACK_LINE(557)
		Float _g5 = ::flixel::math::FlxVelocity_obj::computeVelocity(this->velocity->y,this->acceleration->y,this->drag->y,this->maxVelocity->y,elapsed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(557)
		Float _g6 = (_g5 - this->velocity->y);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(557)
		Float _g7 = (0.5 * _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(557)
		velocityDelta = _g7;
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			::flixel::math::FlxPoint _g8 = this->velocity;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(558)
			_g8->set_y((_g8->y + velocityDelta));
		}
		HX_STACK_LINE(559)
		delta = (this->velocity->y * elapsed);
		HX_STACK_LINE(560)
		{
			HX_STACK_LINE(560)
			::flixel::math::FlxPoint _g8 = this->velocity;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(560)
			_g8->set_y((_g8->y + velocityDelta));
		}
		HX_STACK_LINE(561)
		{
			HX_STACK_LINE(561)
			::flixel::FlxObject _g8 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(561)
			_g8->set_y((_g8->y + delta));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,updateMotion,(void))

Void FlxObject_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxObject","draw",0x1f17bab3,"flixel.FlxObject.draw","flixel/FlxObject.hx",568,0xf0fe0d80)
		HX_STACK_THIS(this)
	}
return null();
}


bool FlxObject_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlaps",0xaad0e53b,"flixel.FlxObject.overlaps","flixel/FlxObject.hx",586,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(587)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(587)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(587)
			if (((ObjectOrGroup != null()))){
				HX_STACK_LINE(587)
				if (((ObjectOrGroup->flixelType == (int)2))){
					HX_STACK_LINE(587)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(587)
					if (((ObjectOrGroup->flixelType == (int)4))){
						HX_STACK_LINE(587)
						group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(587)
			group = group1;
		}
		HX_STACK_LINE(588)
		if (((group != null()))){
			HX_STACK_LINE(590)
			Dynamic Callback = this->overlapsCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(590)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(590)
			if (((group != null()))){
				HX_STACK_LINE(590)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(590)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(590)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(590)
				while((true)){
					HX_STACK_LINE(590)
					if ((!(((i < l))))){
						HX_STACK_LINE(590)
						break;
					}
					HX_STACK_LINE(590)
					int _g = (i)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(590)
					::flixel::FlxBasic _g1 = group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(590)
					basic = _g1;
					HX_STACK_LINE(590)
					if (((  (((basic != null()))) ? bool(Callback(basic,(int)0,(int)0,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(590)
						result = true;
						HX_STACK_LINE(590)
						break;
					}
				}
			}
			HX_STACK_LINE(590)
			return result;
		}
		HX_STACK_LINE(593)
		if (((ObjectOrGroup->flixelType == (int)3))){
			HX_STACK_LINE(597)
			return (hx::TCast< flixel::tile::FlxBaseTilemap >::cast(ObjectOrGroup))->overlaps(hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(600)
		::flixel::FlxObject object;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(600)
		object = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
		HX_STACK_LINE(601)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(603)
			Float _g2 = object->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(603)
			Float _g3 = (object->x + _g2);		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::FlxObject &object){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",603,0xf0fe0d80)
					{
						HX_STACK_LINE(603)
						Float _g4 = __this->get_width();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(603)
						Float _g5 = (__this->x + _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(603)
						return (object->x < _g5);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::FlxObject &object){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",604,0xf0fe0d80)
					{
						HX_STACK_LINE(604)
						Float _g6 = object->get_height();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(604)
						Float _g7 = (object->y + _g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(604)
						return (_g7 > __this->y);
					}
					return null();
				}
			};
			HX_STACK_LINE(603)
			if (((  (((  (((_g3 > this->x))) ? bool(_Function_2_1::Block(this,object)) : bool(false) ))) ? bool(_Function_2_2::Block(this,object)) : bool(false) ))){
				HX_STACK_LINE(604)
				Float _g8 = this->get_height();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(604)
				Float _g9 = (this->y + _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(604)
				return (object->y < _g9);
			}
			else{
				HX_STACK_LINE(603)
				return false;
			}
		}
		HX_STACK_LINE(607)
		if (((Camera == null()))){
			HX_STACK_LINE(609)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(611)
		::flixel::math::FlxPoint objectScreenPos = object->getScreenPosition(null(),Camera);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(612)
		this->getScreenPosition(this->_point,Camera);
		HX_STACK_LINE(613)
		Float _g10 = object->get_width();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(613)
		Float _g11 = (objectScreenPos->x + _g10);		HX_STACK_VAR(_g11,"_g11");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::math::FlxPoint &objectScreenPos){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",613,0xf0fe0d80)
				{
					HX_STACK_LINE(613)
					Float _g12 = __this->get_width();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(613)
					Float _g13 = (__this->_point->x + _g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(613)
					return (objectScreenPos->x < _g13);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::FlxObject &object,::flixel::math::FlxPoint &objectScreenPos){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",614,0xf0fe0d80)
				{
					HX_STACK_LINE(614)
					Float _g14 = object->get_height();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(614)
					Float _g15 = (objectScreenPos->y + _g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(614)
					return (_g15 > __this->_point->y);
				}
				return null();
			}
		};
		HX_STACK_LINE(613)
		if (((  (((  (((_g11 > this->_point->x))) ? bool(_Function_1_1::Block(this,objectScreenPos)) : bool(false) ))) ? bool(_Function_1_2::Block(this,object,objectScreenPos)) : bool(false) ))){
			HX_STACK_LINE(614)
			Float _g16 = this->get_height();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(614)
			Float _g17 = (this->_point->y + _g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(614)
			return (objectScreenPos->y < _g17);
		}
		else{
			HX_STACK_LINE(613)
			return false;
		}
		HX_STACK_LINE(613)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

bool FlxObject_obj::overlapsCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsCallback",0xe4196e20,"flixel.FlxObject.overlapsCallback","flixel/FlxObject.hx",619,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(619)
	return this->overlaps(ObjectOrGroup,InScreenSpace,Camera);
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsCallback,return )

bool FlxObject_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsAt",0xacc1230e,"flixel.FlxObject.overlapsAt","flixel/FlxObject.hx",634,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(635)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(635)
		{
			HX_STACK_LINE(635)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(635)
			if (((ObjectOrGroup != null()))){
				HX_STACK_LINE(635)
				if (((ObjectOrGroup->flixelType == (int)2))){
					HX_STACK_LINE(635)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(635)
					if (((ObjectOrGroup->flixelType == (int)4))){
						HX_STACK_LINE(635)
						group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(635)
			group = group1;
		}
		HX_STACK_LINE(636)
		if (((group != null()))){
			HX_STACK_LINE(638)
			Dynamic Callback = this->overlapsAtCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(638)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(638)
			if (((group != null()))){
				HX_STACK_LINE(638)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(638)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(638)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(638)
				while((true)){
					HX_STACK_LINE(638)
					if ((!(((i < l))))){
						HX_STACK_LINE(638)
						break;
					}
					HX_STACK_LINE(638)
					int _g = (i)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(638)
					::flixel::FlxBasic _g1 = group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(638)
					basic = _g1;
					HX_STACK_LINE(638)
					if (((  (((basic != null()))) ? bool(Callback(basic,X,Y,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(638)
						result = true;
						HX_STACK_LINE(638)
						break;
					}
				}
			}
			HX_STACK_LINE(638)
			return result;
		}
		HX_STACK_LINE(641)
		if (((ObjectOrGroup->flixelType == (int)3))){
			HX_STACK_LINE(647)
			::flixel::tile::FlxBaseTilemap tilemap;		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(647)
			tilemap = hx::TCast< flixel::tile::FlxBaseTilemap >::cast(ObjectOrGroup);
			HX_STACK_LINE(648)
			return tilemap->overlapsAt((tilemap->x - ((X - this->x))),(tilemap->y - ((Y - this->y))),hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(651)
		::flixel::FlxObject object;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(651)
		object = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
		HX_STACK_LINE(652)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(654)
			Float _g2 = object->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(654)
			Float _g3 = (object->x + _g2);		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::FlxObject &object,Float &X){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",654,0xf0fe0d80)
					{
						HX_STACK_LINE(654)
						Float _g4 = __this->get_width();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(654)
						Float _g5 = (X + _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(654)
						return (object->x < _g5);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( Float &Y,::flixel::FlxObject &object){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",655,0xf0fe0d80)
					{
						HX_STACK_LINE(655)
						Float _g6 = object->get_height();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(655)
						Float _g7 = (object->y + _g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(655)
						return (_g7 > Y);
					}
					return null();
				}
			};
			HX_STACK_LINE(654)
			if (((  (((  (((_g3 > X))) ? bool(_Function_2_1::Block(this,object,X)) : bool(false) ))) ? bool(_Function_2_2::Block(Y,object)) : bool(false) ))){
				HX_STACK_LINE(655)
				Float _g8 = this->get_height();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(655)
				Float _g9 = (Y + _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(655)
				return (object->y < _g9);
			}
			else{
				HX_STACK_LINE(654)
				return false;
			}
		}
		HX_STACK_LINE(658)
		if (((Camera == null()))){
			HX_STACK_LINE(660)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(662)
		::flixel::math::FlxPoint objectScreenPos = object->getScreenPosition(null(),Camera);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(663)
		this->getScreenPosition(this->_point,Camera);
		HX_STACK_LINE(664)
		Float _g10 = object->get_width();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(664)
		Float _g11 = (objectScreenPos->x + _g10);		HX_STACK_VAR(_g11,"_g11");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::math::FlxPoint &objectScreenPos){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",664,0xf0fe0d80)
				{
					HX_STACK_LINE(664)
					Float _g12 = __this->get_width();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(664)
					Float _g13 = (__this->_point->x + _g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(664)
					return (objectScreenPos->x < _g13);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::FlxObject &object,::flixel::math::FlxPoint &objectScreenPos){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",665,0xf0fe0d80)
				{
					HX_STACK_LINE(665)
					Float _g14 = object->get_height();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(665)
					Float _g15 = (objectScreenPos->y + _g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(665)
					return (_g15 > __this->_point->y);
				}
				return null();
			}
		};
		HX_STACK_LINE(664)
		if (((  (((  (((_g11 > this->_point->x))) ? bool(_Function_1_1::Block(this,objectScreenPos)) : bool(false) ))) ? bool(_Function_1_2::Block(this,object,objectScreenPos)) : bool(false) ))){
			HX_STACK_LINE(665)
			Float _g16 = this->get_height();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(665)
			Float _g17 = (this->_point->y + _g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(665)
			return (objectScreenPos->y < _g17);
		}
		else{
			HX_STACK_LINE(664)
			return false;
		}
		HX_STACK_LINE(664)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsAtCallback",0xb90836f3,"flixel.FlxObject.overlapsAtCallback","flixel/FlxObject.hx",670,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(670)
	return this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAtCallback,return )

bool FlxObject_obj::overlapsPoint( ::flixel::math::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsPoint",0xcd9c6915,"flixel.FlxObject.overlapsPoint","flixel/FlxObject.hx",682,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(683)
		if ((!(InScreenSpace))){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,::flixel::math::FlxPoint &point){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",685,0xf0fe0d80)
					{
						HX_STACK_LINE(685)
						Float _g = __this->get_width();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(685)
						Float _g1 = (__this->x + _g);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(685)
						return (point->x < _g1);
					}
					return null();
				}
			};
			HX_STACK_LINE(685)
			if (((  (((  (((point->x > this->x))) ? bool(_Function_2_1::Block(this,point)) : bool(false) ))) ? bool((point->y > this->y)) : bool(false) ))){
				HX_STACK_LINE(685)
				Float _g2 = this->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(685)
				Float _g3 = (this->y + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(685)
				return (point->y < _g3);
			}
			else{
				HX_STACK_LINE(685)
				return false;
			}
		}
		HX_STACK_LINE(688)
		if (((Camera == null()))){
			HX_STACK_LINE(690)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(692)
		Float X = (point->x - Camera->scroll->x);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(693)
		Float Y = (point->y - Camera->scroll->y);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(694)
		this->getScreenPosition(this->_point,Camera);
		HX_STACK_LINE(695)
		if ((point->_weak)){
			HX_STACK_LINE(695)
			point->put();
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this,Float &X){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",696,0xf0fe0d80)
				{
					HX_STACK_LINE(696)
					Float _g4 = __this->get_width();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(696)
					Float _g5 = (__this->_point->x + _g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(696)
					return (X < _g5);
				}
				return null();
			}
		};
		HX_STACK_LINE(696)
		if (((  (((  (((X > this->_point->x))) ? bool(_Function_1_1::Block(this,X)) : bool(false) ))) ? bool((Y > this->_point->y)) : bool(false) ))){
			HX_STACK_LINE(696)
			Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(696)
			Float _g7 = (this->_point->y + _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(696)
			return (Y < _g7);
		}
		else{
			HX_STACK_LINE(696)
			return false;
		}
		HX_STACK_LINE(696)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::inWorldBounds( ){
	HX_STACK_FRAME("flixel.FlxObject","inWorldBounds",0x89d0e9f3,"flixel.FlxObject.inWorldBounds","flixel/FlxObject.hx",705,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(706)
	Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(706)
	Float _g1 = (this->x + _g);		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",706,0xf0fe0d80)
			{
				HX_STACK_LINE(706)
				::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(706)
				return (_this->x + _this->width);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",706,0xf0fe0d80)
			{
				HX_STACK_LINE(706)
				Float _g2 = __this->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(706)
				Float _g3 = (__this->y + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(706)
				return (_g3 > ::flixel::FlxG_obj::worldBounds->y);
			}
			return null();
		}
	};
	HX_STACK_LINE(706)
	if (((  (((  (((_g1 > ::flixel::FlxG_obj::worldBounds->x))) ? bool((this->x < _Function_1_1::Block())) : bool(false) ))) ? bool(_Function_1_2::Block(this)) : bool(false) ))){
		struct _Function_2_1{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",706,0xf0fe0d80)
				{
					HX_STACK_LINE(706)
					::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(706)
					return (_this->y + _this->height);
				}
				return null();
			}
		};
		HX_STACK_LINE(706)
		return (this->y < _Function_2_1::Block());
	}
	else{
		HX_STACK_LINE(706)
		return false;
	}
	HX_STACK_LINE(706)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,inWorldBounds,return )

::flixel::math::FlxPoint FlxObject_obj::getScreenPosition( ::flixel::math::FlxPoint point,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","getScreenPosition",0x643c435c,"flixel.FlxObject.getScreenPosition","flixel/FlxObject.hx",717,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(718)
	if (((point == null()))){
		HX_STACK_LINE(720)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(720)
		{
			HX_STACK_LINE(720)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(720)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(720)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(720)
			point1->_inPool = false;
			HX_STACK_LINE(720)
			_g = point1;
		}
		HX_STACK_LINE(720)
		point = _g;
	}
	HX_STACK_LINE(722)
	if (((Camera == null()))){
		HX_STACK_LINE(724)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(727)
	point->set(this->x,this->y);
	HX_STACK_LINE(728)
	if ((this->pixelPerfectPosition)){
		HX_STACK_LINE(730)
		int _g1 = ::Math_obj::floor(point->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(730)
		point->set_x(_g1);
		HX_STACK_LINE(730)
		int _g2 = ::Math_obj::floor(point->y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(730)
		point->set_y(_g2);
		HX_STACK_LINE(730)
		point;
	}
	HX_STACK_LINE(733)
	{
		HX_STACK_LINE(733)
		::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(733)
		_g->set_x((_g->x - (Camera->scroll->x * this->scrollFactor->x)));
	}
	HX_STACK_LINE(733)
	{
		HX_STACK_LINE(733)
		::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(733)
		_g->set_y((_g->y - (Camera->scroll->y * this->scrollFactor->y)));
	}
	HX_STACK_LINE(733)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenPosition,return )

::flixel::math::FlxPoint FlxObject_obj::getMidpoint( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxObject","getMidpoint",0x7bfe0daf,"flixel.FlxObject.getMidpoint","flixel/FlxObject.hx",743,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(744)
	if (((point == null()))){
		HX_STACK_LINE(746)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(746)
		{
			HX_STACK_LINE(746)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(746)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(746)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(746)
			point1->_inPool = false;
			HX_STACK_LINE(746)
			_g = point1;
		}
		HX_STACK_LINE(746)
		point = _g;
	}
	HX_STACK_LINE(748)
	Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(748)
	Float _g2 = (_g1 * 0.5);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(748)
	Float _g3 = (this->x + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(748)
	Float _g4 = this->get_height();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(748)
	Float _g5 = (_g4 * 0.5);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(748)
	Float _g6 = (this->y + _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(748)
	return point->set(_g3,_g6);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

Void FlxObject_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxObject","reset",0x1cbd9440,"flixel.FlxObject.reset","flixel/FlxObject.hx",759,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(760)
		this->touching = (int)0;
		HX_STACK_LINE(761)
		this->wasTouching = (int)0;
		HX_STACK_LINE(762)
		this->setPosition(X,Y);
		HX_STACK_LINE(763)
		this->last->set(this->x,this->y);
		HX_STACK_LINE(764)
		this->velocity->set(null(),null());
		HX_STACK_LINE(765)
		this->revive();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

bool FlxObject_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","isOnScreen",0x4aab7fe4,"flixel.FlxObject.isOnScreen","flixel/FlxObject.hx",775,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(776)
	if (((Camera == null()))){
		HX_STACK_LINE(778)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(780)
	this->getScreenPosition(this->_point,Camera);
	HX_STACK_LINE(781)
	Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(781)
	Float _g1 = (this->_point->x + _g);		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::FlxObject_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",781,0xf0fe0d80)
			{
				HX_STACK_LINE(781)
				Float _g2 = __this->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(781)
				Float _g3 = (__this->_point->y + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(781)
				return (_g3 > (int)0);
			}
			return null();
		}
	};
	HX_STACK_LINE(781)
	if (((  (((  (((_g1 > (int)0))) ? bool((this->_point->x < Camera->width)) : bool(false) ))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(781)
		return (this->_point->y < Camera->height);
	}
	else{
		HX_STACK_LINE(781)
		return false;
	}
	HX_STACK_LINE(781)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isOnScreen,return )

bool FlxObject_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","isPixelPerfectRender",0xc4c93916,"flixel.FlxObject.isPixelPerfectRender","flixel/FlxObject.hx",788,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(789)
	if (((Camera == null()))){
		HX_STACK_LINE(791)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(794)
	if (((this->pixelPerfectRender == null()))){
		HX_STACK_LINE(794)
		return Camera->pixelPerfectRender;
	}
	else{
		HX_STACK_LINE(794)
		return this->pixelPerfectRender;
	}
	HX_STACK_LINE(794)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isPixelPerfectRender,return )

bool FlxObject_obj::isTouching( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","isTouching",0x23c6647c,"flixel.FlxObject.isTouching","flixel/FlxObject.hx",806,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(806)
	return (((int(this->touching) & int(Direction))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

bool FlxObject_obj::justTouched( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","justTouched",0xbcba8e43,"flixel.FlxObject.justTouched","flixel/FlxObject.hx",818,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(818)
	return (bool((((int(this->touching) & int(Direction))) > (int)0)) && bool((((int(this->wasTouching) & int(Direction))) <= (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

Void FlxObject_obj::hurt( Float Damage){
{
		HX_STACK_FRAME("flixel.FlxObject","hurt",0x21beeabe,"flixel.FlxObject.hurt","flixel/FlxObject.hx",828,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(829)
		this->health = (this->health - Damage);
		HX_STACK_LINE(830)
		if (((this->health <= (int)0))){
			HX_STACK_LINE(832)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

Void FlxObject_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxObject","setPosition",0x265d9f9c,"flixel.FlxObject.setPosition","flixel/FlxObject.hx",844,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(845)
		this->set_x(X);
		HX_STACK_LINE(846)
		this->set_y(Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setPosition,(void))

Void FlxObject_obj::setSize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.FlxObject","setSize",0xa7896a34,"flixel.FlxObject.setSize","flixel/FlxObject.hx",856,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(857)
		this->set_width(Width);
		HX_STACK_LINE(858)
		this->set_height(Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setSize,(void))

::flixel::math::FlxRect FlxObject_obj::getBoundingBox( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.FlxObject","getBoundingBox",0x58364780,"flixel.FlxObject.getBoundingBox","flixel/FlxObject.hx",928,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(929)
	this->getScreenPosition(this->_point,camera);
	HX_STACK_LINE(930)
	{
		HX_STACK_LINE(930)
		::flixel::math::FlxRect _this = this->_rect;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(930)
		Float Width = this->get_width();		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(930)
		Float Height = this->get_height();		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(930)
		_this->x = this->_point->x;
		HX_STACK_LINE(930)
		_this->y = this->_point->y;
		HX_STACK_LINE(930)
		_this->width = Width;
		HX_STACK_LINE(930)
		_this->height = Height;
		HX_STACK_LINE(930)
		_this;
	}
	HX_STACK_LINE(932)
	hx::MultEq(this->_rect->x,camera->totalScaleX);
	HX_STACK_LINE(933)
	hx::MultEq(this->_rect->y,camera->totalScaleY);
	HX_STACK_LINE(934)
	hx::MultEq(this->_rect->width,camera->totalScaleX);
	HX_STACK_LINE(935)
	hx::MultEq(this->_rect->height,camera->totalScaleY);
	HX_STACK_LINE(938)
	if ((this->isPixelPerfectRender(camera))){
		HX_STACK_LINE(940)
		::flixel::math::FlxRect _this = this->_rect;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(940)
		int _g = ::Math_obj::floor(_this->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(940)
		_this->x = _g;
		HX_STACK_LINE(940)
		int _g1 = ::Math_obj::floor(_this->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(940)
		_this->y = _g1;
		HX_STACK_LINE(940)
		int _g2 = ::Math_obj::floor(_this->width);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(940)
		_this->width = _g2;
		HX_STACK_LINE(940)
		int _g3 = ::Math_obj::floor(_this->height);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(940)
		_this->height = _g3;
		HX_STACK_LINE(940)
		_this;
	}
	HX_STACK_LINE(943)
	return this->_rect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getBoundingBox,return )

::String FlxObject_obj::toString( ){
	HX_STACK_FRAME("flixel.FlxObject","toString",0x9e14e2db,"flixel.FlxObject.toString","flixel/FlxObject.hx",950,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(952)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(952)
	{
		HX_STACK_LINE(952)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(952)
		_this->label = HX_CSTRING("x");
		HX_STACK_LINE(952)
		_this->value = this->x;
		HX_STACK_LINE(952)
		_g = _this;
	}
	HX_STACK_LINE(953)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(953)
	{
		HX_STACK_LINE(953)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(953)
		_this->label = HX_CSTRING("y");
		HX_STACK_LINE(953)
		_this->value = this->y;
		HX_STACK_LINE(953)
		_g1 = _this;
	}
	HX_STACK_LINE(954)
	::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(954)
	{
		HX_STACK_LINE(954)
		Dynamic value = this->get_width();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(954)
		{
			HX_STACK_LINE(954)
			::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(954)
			_this->label = HX_CSTRING("w");
			HX_STACK_LINE(954)
			_this->value = value;
			HX_STACK_LINE(954)
			_g2 = _this;
		}
	}
	HX_STACK_LINE(955)
	::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(955)
	{
		HX_STACK_LINE(955)
		Dynamic value = this->get_height();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(955)
		{
			HX_STACK_LINE(955)
			::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(955)
			_this->label = HX_CSTRING("h");
			HX_STACK_LINE(955)
			_this->value = value;
			HX_STACK_LINE(955)
			_g3 = _this;
		}
	}
	HX_STACK_LINE(956)
	::flixel::util::LabelValuePair _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(956)
	{
		HX_STACK_LINE(956)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(956)
		_this->label = HX_CSTRING("visible");
		HX_STACK_LINE(956)
		_this->value = this->visible;
		HX_STACK_LINE(956)
		_g4 = _this;
	}
	HX_STACK_LINE(957)
	::flixel::util::LabelValuePair _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(957)
	{
		HX_STACK_LINE(957)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(957)
		_this->label = HX_CSTRING("velocity");
		HX_STACK_LINE(957)
		_this->value = this->velocity;
		HX_STACK_LINE(957)
		_g5 = _this;
	}
	HX_STACK_LINE(951)
	Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3).Add(_g4).Add(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(951)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g6);
}


::flixel::math::FlxPoint FlxObject_obj::toPoint( ){
	HX_STACK_FRAME("flixel.FlxObject","toPoint",0x28c58986,"flixel.FlxObject.toPoint","flixel/FlxObject.hx",962,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(962)
	::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(this->x,this->y);		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(962)
	point->_inPool = false;
	HX_STACK_LINE(962)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,toPoint,return )

::flixel::math::FlxRect FlxObject_obj::toRect( ){
	HX_STACK_FRAME("flixel.FlxObject","toRect",0x820c90ae,"flixel.FlxObject.toRect","flixel/FlxObject.hx",967,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(967)
	Float Width = this->get_width();		HX_STACK_VAR(Width,"Width");
	HX_STACK_LINE(967)
	Float Height = this->get_height();		HX_STACK_VAR(Height,"Height");
	HX_STACK_LINE(967)
	::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(967)
	{
		HX_STACK_LINE(967)
		::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(967)
		_this->x = this->x;
		HX_STACK_LINE(967)
		_this->y = this->y;
		HX_STACK_LINE(967)
		_this->width = Width;
		HX_STACK_LINE(967)
		_this->height = Height;
		HX_STACK_LINE(967)
		rect = _this;
	}
	HX_STACK_LINE(967)
	rect->_inPool = false;
	HX_STACK_LINE(967)
	return rect;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,toRect,return )

Float FlxObject_obj::set_x( Float NewX){
	HX_STACK_FRAME("flixel.FlxObject","set_x",0xb024e5cc,"flixel.FlxObject.set_x","flixel/FlxObject.hx",972,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewX,"NewX")
	HX_STACK_LINE(972)
	return this->x = NewX;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_x,return )

Float FlxObject_obj::set_y( Float NewY){
	HX_STACK_FRAME("flixel.FlxObject","set_y",0xb024e5cd,"flixel.FlxObject.set_y","flixel/FlxObject.hx",977,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewY,"NewY")
	HX_STACK_LINE(977)
	return this->y = NewY;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_y,return )

Float FlxObject_obj::set_width( Float Width){
	HX_STACK_FRAME("flixel.FlxObject","set_width",0x7d06d55a,"flixel.FlxObject.set_width","flixel/FlxObject.hx",981,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_LINE(990)
	this->width = Width;
	HX_STACK_LINE(995)
	return Width;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

Float FlxObject_obj::set_height( Float Height){
	HX_STACK_FRAME("flixel.FlxObject","set_height",0x9f435213,"flixel.FlxObject.set_height","flixel/FlxObject.hx",999,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Height,"Height")
	HX_STACK_LINE(1008)
	this->height = Height;
	HX_STACK_LINE(1013)
	return Height;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::get_width( ){
	HX_STACK_FRAME("flixel.FlxObject","get_width",0x99b5e94e,"flixel.FlxObject.get_width","flixel/FlxObject.hx",1018,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1018)
	return this->width;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_width,return )

Float FlxObject_obj::get_height( ){
	HX_STACK_FRAME("flixel.FlxObject","get_height",0x9bc5b39f,"flixel.FlxObject.get_height","flixel/FlxObject.hx",1023,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1023)
	return this->height;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_height,return )

bool FlxObject_obj::get_solid( ){
	HX_STACK_FRAME("flixel.FlxObject","get_solid",0x5018e773,"flixel.FlxObject.get_solid","flixel/FlxObject.hx",1028,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1028)
	return (((int(this->allowCollisions) & int((int)4369))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

bool FlxObject_obj::set_solid( bool Solid){
	HX_STACK_FRAME("flixel.FlxObject","set_solid",0x3369d37f,"flixel.FlxObject.set_solid","flixel/FlxObject.hx",1032,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Solid,"Solid")
	HX_STACK_LINE(1033)
	if ((Solid)){
		HX_STACK_LINE(1033)
		this->allowCollisions = (int)4369;
	}
	else{
		HX_STACK_LINE(1033)
		this->allowCollisions = (int)0;
	}
	HX_STACK_LINE(1034)
	return Solid;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

Float FlxObject_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.FlxObject","set_angle",0xd5866327,"flixel.FlxObject.set_angle","flixel/FlxObject.hx",1039,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1039)
	return this->angle = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_angle,return )

bool FlxObject_obj::set_moves( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_moves",0xbf09eb96,"flixel.FlxObject.set_moves","flixel/FlxObject.hx",1044,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1044)
	return this->moves = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_moves,return )

bool FlxObject_obj::set_immovable( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_immovable",0xc5b8805e,"flixel.FlxObject.set_immovable","flixel/FlxObject.hx",1049,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1049)
	return this->immovable = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_immovable,return )

bool FlxObject_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_pixelPerfectRender",0x84233609,"flixel.FlxObject.set_pixelPerfectRender","flixel/FlxObject.hx",1054,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1054)
	return this->pixelPerfectRender = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_pixelPerfectRender,return )

Float FlxObject_obj::SEPARATE_BIAS;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

::flixel::math::FlxRect FlxObject_obj::_firstSeparateFlxRect;

::flixel::math::FlxRect FlxObject_obj::_secondSeparateFlxRect;

bool FlxObject_obj::separate( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separate",0x6cc23192,"flixel.FlxObject.separate","flixel/FlxObject.hx",75,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(76)
	bool separatedX = ::flixel::FlxObject_obj::separateX(Object1,Object2);		HX_STACK_VAR(separatedX,"separatedX");
	HX_STACK_LINE(77)
	bool separatedY = ::flixel::FlxObject_obj::separateY(Object1,Object2);		HX_STACK_VAR(separatedY,"separatedY");
	HX_STACK_LINE(78)
	return (bool(separatedX) || bool(separatedY));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::separateX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateX",0xbd292e86,"flixel.FlxObject.separateX","flixel/FlxObject.hx",89,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(91)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(92)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(93)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(95)
		return false;
	}
	HX_STACK_LINE(99)
	if (((Object1->flixelType == (int)3))){
		HX_STACK_LINE(101)
		return (hx::TCast< flixel::tile::FlxBaseTilemap >::cast(Object1))->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateX_dyn(),null(),null());
	}
	HX_STACK_LINE(103)
	if (((Object2->flixelType == (int)3))){
		HX_STACK_LINE(105)
		return (hx::TCast< flixel::tile::FlxBaseTilemap >::cast(Object2))->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateX_dyn(),true,null());
	}
	HX_STACK_LINE(109)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(110)
	Float obj1delta = (Object1->x - Object1->last->x);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(111)
	Float obj2delta = (Object2->x - Object2->last->x);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(113)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(116)
		Float obj1deltaAbs;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(116)
		if (((obj1delta > (int)0))){
			HX_STACK_LINE(116)
			obj1deltaAbs = obj1delta;
		}
		else{
			HX_STACK_LINE(116)
			obj1deltaAbs = -(obj1delta);
		}
		HX_STACK_LINE(117)
		Float obj2deltaAbs;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		HX_STACK_LINE(117)
		if (((obj2delta > (int)0))){
			HX_STACK_LINE(117)
			obj2deltaAbs = obj2delta;
		}
		else{
			HX_STACK_LINE(117)
			obj2deltaAbs = -(obj2delta);
		}
		HX_STACK_LINE(119)
		::flixel::math::FlxRect obj1rect;		HX_STACK_VAR(obj1rect,"obj1rect");
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(119)
			Float _g = Object1->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			Float Width = (_g + obj1deltaAbs);		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(119)
			Float Height = Object1->get_height();		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(119)
			_this->x = (Object1->x - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
			HX_STACK_LINE(119)
			_this->y = Object1->last->y;
			HX_STACK_LINE(119)
			_this->width = Width;
			HX_STACK_LINE(119)
			_this->height = Height;
			HX_STACK_LINE(119)
			obj1rect = _this;
		}
		HX_STACK_LINE(120)
		::flixel::math::FlxRect obj2rect;		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(120)
			Float _g1 = Object2->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(120)
			Float Width = (_g1 + obj2deltaAbs);		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(120)
			Float Height = Object2->get_height();		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(120)
			_this->x = (Object2->x - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
			HX_STACK_LINE(120)
			_this->y = Object2->last->y;
			HX_STACK_LINE(120)
			_this->width = Width;
			HX_STACK_LINE(120)
			_this->height = Height;
			HX_STACK_LINE(120)
			obj2rect = _this;
		}
		HX_STACK_LINE(122)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(124)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(127)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(129)
				Float _g2 = Object1->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(129)
				Float _g3 = (Object1->x + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(129)
				Float _g4 = (_g3 - Object2->x);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(129)
				overlap = _g4;
				HX_STACK_LINE(130)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)16))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)1))) == (int)0))))){
					HX_STACK_LINE(132)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(136)
					hx::OrEq(Object1->touching,(int)16);
					HX_STACK_LINE(137)
					hx::OrEq(Object2->touching,(int)1);
				}
			}
			else{
				HX_STACK_LINE(140)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(142)
					Float _g5 = Object2->get_width();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(142)
					Float _g6 = (Object1->x - _g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(142)
					Float _g7 = (_g6 - Object2->x);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(142)
					overlap = _g7;
					HX_STACK_LINE(143)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)1))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)16))) == (int)0))))){
						HX_STACK_LINE(145)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(149)
						hx::OrEq(Object1->touching,(int)1);
						HX_STACK_LINE(150)
						hx::OrEq(Object2->touching,(int)16);
					}
				}
			}
		}
	}
	HX_STACK_LINE(157)
	if (((overlap != (int)0))){
		HX_STACK_LINE(159)
		Float obj1v = Object1->velocity->x;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(160)
		Float obj2v = Object2->velocity->x;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(162)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(164)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(165)
			Object1->set_x((Object1->x - overlap));
			HX_STACK_LINE(166)
			{
				HX_STACK_LINE(166)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(166)
				_g->set_x((_g->x + overlap));
			}
			HX_STACK_LINE(168)
			Float _g8 = ::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass)));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(168)
			Float obj1velocity;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(168)
			obj1velocity = (_g8 * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));
			HX_STACK_LINE(169)
			Float _g9 = ::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass)));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(169)
			Float obj2velocity;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(169)
			obj2velocity = (_g9 * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));
			HX_STACK_LINE(170)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(171)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(172)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(173)
			Object1->velocity->set_x((average + (obj1velocity * Object1->elasticity)));
			HX_STACK_LINE(174)
			Object2->velocity->set_x((average + (obj2velocity * Object2->elasticity)));
		}
		else{
			HX_STACK_LINE(176)
			if ((!(obj1immovable))){
				HX_STACK_LINE(178)
				Object1->set_x((Object1->x - overlap));
				HX_STACK_LINE(179)
				Object1->velocity->set_x((obj2v - (obj1v * Object1->elasticity)));
			}
			else{
				HX_STACK_LINE(181)
				if ((!(obj2immovable))){
					HX_STACK_LINE(183)
					{
						HX_STACK_LINE(183)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(183)
						_g->set_x((_g->x + overlap));
					}
					HX_STACK_LINE(184)
					Object2->velocity->set_x((obj1v - (obj2v * Object2->elasticity)));
				}
			}
		}
		HX_STACK_LINE(186)
		return true;
	}
	else{
		HX_STACK_LINE(190)
		return false;
	}
	HX_STACK_LINE(157)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::separateY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateY",0xbd292e87,"flixel.FlxObject.separateY","flixel/FlxObject.hx",202,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(204)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(205)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(206)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(208)
		return false;
	}
	HX_STACK_LINE(212)
	if (((Object1->flixelType == (int)3))){
		HX_STACK_LINE(214)
		return (hx::TCast< flixel::tile::FlxBaseTilemap >::cast(Object1))->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateY_dyn(),null(),null());
	}
	HX_STACK_LINE(216)
	if (((Object2->flixelType == (int)3))){
		HX_STACK_LINE(218)
		return (hx::TCast< flixel::tile::FlxBaseTilemap >::cast(Object2))->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateY_dyn(),true,null());
	}
	HX_STACK_LINE(222)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(223)
	Float obj1delta = (Object1->y - Object1->last->y);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(224)
	Float obj2delta = (Object2->y - Object2->last->y);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(226)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(229)
		Float obj1deltaAbs;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(229)
		if (((obj1delta > (int)0))){
			HX_STACK_LINE(229)
			obj1deltaAbs = obj1delta;
		}
		else{
			HX_STACK_LINE(229)
			obj1deltaAbs = -(obj1delta);
		}
		HX_STACK_LINE(230)
		Float obj2deltaAbs;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		HX_STACK_LINE(230)
		if (((obj2delta > (int)0))){
			HX_STACK_LINE(230)
			obj2deltaAbs = obj2delta;
		}
		else{
			HX_STACK_LINE(230)
			obj2deltaAbs = -(obj2delta);
		}
		HX_STACK_LINE(232)
		::flixel::math::FlxRect obj1rect;		HX_STACK_VAR(obj1rect,"obj1rect");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(232)
			Float Width = Object1->get_width();		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(232)
			Float _g = Object1->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(232)
			Float Height = (_g + obj1deltaAbs);		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(232)
			_this->x = Object1->x;
			HX_STACK_LINE(232)
			_this->y = (Object1->y - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
			HX_STACK_LINE(232)
			_this->width = Width;
			HX_STACK_LINE(232)
			_this->height = Height;
			HX_STACK_LINE(232)
			obj1rect = _this;
		}
		HX_STACK_LINE(233)
		::flixel::math::FlxRect obj2rect;		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(233)
			Float Width = Object2->get_width();		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(233)
			Float _g1 = Object2->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(233)
			Float Height = (_g1 + obj2deltaAbs);		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(233)
			_this->x = Object2->x;
			HX_STACK_LINE(233)
			_this->y = (Object2->y - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
			HX_STACK_LINE(233)
			_this->width = Width;
			HX_STACK_LINE(233)
			_this->height = Height;
			HX_STACK_LINE(233)
			obj2rect = _this;
		}
		HX_STACK_LINE(235)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(237)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(240)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(242)
				Float _g2 = Object1->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(242)
				Float _g3 = (Object1->y + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(242)
				Float _g4 = (_g3 - Object2->y);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(242)
				overlap = _g4;
				HX_STACK_LINE(243)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)4096))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)256))) == (int)0))))){
					HX_STACK_LINE(245)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(249)
					hx::OrEq(Object1->touching,(int)4096);
					HX_STACK_LINE(250)
					hx::OrEq(Object2->touching,(int)256);
				}
			}
			else{
				HX_STACK_LINE(253)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(255)
					Float _g5 = Object2->get_height();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(255)
					Float _g6 = (Object1->y - _g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(255)
					Float _g7 = (_g6 - Object2->y);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(255)
					overlap = _g7;
					HX_STACK_LINE(256)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)256))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)4096))) == (int)0))))){
						HX_STACK_LINE(258)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(262)
						hx::OrEq(Object1->touching,(int)256);
						HX_STACK_LINE(263)
						hx::OrEq(Object2->touching,(int)4096);
					}
				}
			}
		}
	}
	HX_STACK_LINE(270)
	if (((overlap != (int)0))){
		HX_STACK_LINE(272)
		Float obj1v = Object1->velocity->y;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(273)
		Float obj2v = Object2->velocity->y;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(275)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(277)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(278)
			Object1->set_y((Object1->y - overlap));
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(279)
				_g->set_y((_g->y + overlap));
			}
			HX_STACK_LINE(281)
			Float _g8 = ::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass)));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(281)
			Float obj1velocity;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(281)
			obj1velocity = (_g8 * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));
			HX_STACK_LINE(282)
			Float _g9 = ::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass)));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(282)
			Float obj2velocity;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(282)
			obj2velocity = (_g9 * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));
			HX_STACK_LINE(283)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(284)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(285)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(286)
			Object1->velocity->set_y((average + (obj1velocity * Object1->elasticity)));
			HX_STACK_LINE(287)
			Object2->velocity->set_y((average + (obj2velocity * Object2->elasticity)));
		}
		else{
			HX_STACK_LINE(289)
			if ((!(obj1immovable))){
				HX_STACK_LINE(291)
				Object1->set_y((Object1->y - overlap));
				HX_STACK_LINE(292)
				Object1->velocity->set_y((obj2v - (obj1v * Object1->elasticity)));
				HX_STACK_LINE(294)
				if (((bool((bool((bool(Object1->collisonXDrag) && bool(Object2->active))) && bool(Object2->moves))) && bool((obj1delta > obj2delta))))){
					HX_STACK_LINE(296)
					::flixel::FlxObject _g = Object1;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(296)
					_g->set_x((_g->x + ((Object2->x - Object2->last->x))));
				}
			}
			else{
				HX_STACK_LINE(299)
				if ((!(obj2immovable))){
					HX_STACK_LINE(301)
					{
						HX_STACK_LINE(301)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(301)
						_g->set_y((_g->y + overlap));
					}
					HX_STACK_LINE(302)
					Object2->velocity->set_y((obj1v - (obj2v * Object2->elasticity)));
					HX_STACK_LINE(304)
					if (((bool((bool((bool(Object2->collisonXDrag) && bool(Object1->active))) && bool(Object1->moves))) && bool((obj1delta < obj2delta))))){
						HX_STACK_LINE(306)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(306)
						_g->set_x((_g->x + ((Object1->x - Object1->last->x))));
					}
				}
			}
		}
		HX_STACK_LINE(309)
		return true;
	}
	else{
		HX_STACK_LINE(313)
		return false;
	}
	HX_STACK_LINE(270)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )


FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"solid") ) { return get_solid(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"toRect") ) { return toRect_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"toPoint") ) { return toPoint_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { return separate_dyn(); }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"touching") ) { return touching; }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { return separateX_dyn(); }
		if (HX_FIELD_EQ(inName,"separateY") ) { return separateY_dyn(); }
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return get_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return set_moves_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return maxAngular; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return isTouching_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return maxVelocity; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return wasTouching; }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return getMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"justTouched") ) { return justTouched_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return scrollFactor; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return updateMotion_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { return SEPARATE_BIAS; }
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { return collisonXDrag; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"inWorldBounds") ) { return inWorldBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return set_immovable_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initMotionVars") ) { return initMotionVars_dyn(); }
		if (HX_FIELD_EQ(inName,"getBoundingBox") ) { return getBoundingBox_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overlapsCallback") ) { return overlapsCallback_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		if (HX_FIELD_EQ(inName,"overlapsAtCallback") ) { return overlapsAtCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { return pixelPerfectPosition; }
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return isPixelPerfectRender_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { return _firstSeparateFlxRect; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { return _secondSeparateFlxRect; }
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp) return set_moves(inValue);moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { return set_solid(inValue); }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp) return set_immovable(inValue);immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { collisonXDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { if (inCallProp) return set_pixelPerfectRender(inValue);pixelPerfectRender=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { pixelPerfectPosition=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("pixelPerfectRender"));
	outFields->push(HX_CSTRING("pixelPerfectPosition"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("moves"));
	outFields->push(HX_CSTRING("immovable"));
	outFields->push(HX_CSTRING("solid"));
	outFields->push(HX_CSTRING("scrollFactor"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("acceleration"));
	outFields->push(HX_CSTRING("drag"));
	outFields->push(HX_CSTRING("maxVelocity"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("angularVelocity"));
	outFields->push(HX_CSTRING("angularAcceleration"));
	outFields->push(HX_CSTRING("angularDrag"));
	outFields->push(HX_CSTRING("maxAngular"));
	outFields->push(HX_CSTRING("health"));
	outFields->push(HX_CSTRING("touching"));
	outFields->push(HX_CSTRING("wasTouching"));
	outFields->push(HX_CSTRING("allowCollisions"));
	outFields->push(HX_CSTRING("collisonXDrag"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_rect"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SEPARATE_BIAS"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("UP"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("NONE"),
	HX_CSTRING("CEILING"),
	HX_CSTRING("FLOOR"),
	HX_CSTRING("WALL"),
	HX_CSTRING("ANY"),
	HX_CSTRING("_firstSeparateFlxRect"),
	HX_CSTRING("_secondSeparateFlxRect"),
	HX_CSTRING("separate"),
	HX_CSTRING("separateX"),
	HX_CSTRING("separateY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxObject_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxObject_obj,pixelPerfectRender),HX_CSTRING("pixelPerfectRender")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,pixelPerfectPosition),HX_CSTRING("pixelPerfectPosition")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angle),HX_CSTRING("angle")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,moves),HX_CSTRING("moves")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,immovable),HX_CSTRING("immovable")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,scrollFactor),HX_CSTRING("scrollFactor")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,velocity),HX_CSTRING("velocity")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,acceleration),HX_CSTRING("acceleration")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,drag),HX_CSTRING("drag")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,maxVelocity),HX_CSTRING("maxVelocity")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,last),HX_CSTRING("last")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,mass),HX_CSTRING("mass")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,elasticity),HX_CSTRING("elasticity")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularVelocity),HX_CSTRING("angularVelocity")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularAcceleration),HX_CSTRING("angularAcceleration")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularDrag),HX_CSTRING("angularDrag")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,maxAngular),HX_CSTRING("maxAngular")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,health),HX_CSTRING("health")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,touching),HX_CSTRING("touching")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,wasTouching),HX_CSTRING("wasTouching")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,allowCollisions),HX_CSTRING("allowCollisions")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,collisonXDrag),HX_CSTRING("collisonXDrag")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,_point),HX_CSTRING("_point")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxObject_obj,_rect),HX_CSTRING("_rect")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("pixelPerfectRender"),
	HX_CSTRING("pixelPerfectPosition"),
	HX_CSTRING("angle"),
	HX_CSTRING("moves"),
	HX_CSTRING("immovable"),
	HX_CSTRING("scrollFactor"),
	HX_CSTRING("velocity"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("drag"),
	HX_CSTRING("maxVelocity"),
	HX_CSTRING("last"),
	HX_CSTRING("mass"),
	HX_CSTRING("elasticity"),
	HX_CSTRING("angularVelocity"),
	HX_CSTRING("angularAcceleration"),
	HX_CSTRING("angularDrag"),
	HX_CSTRING("maxAngular"),
	HX_CSTRING("health"),
	HX_CSTRING("touching"),
	HX_CSTRING("wasTouching"),
	HX_CSTRING("allowCollisions"),
	HX_CSTRING("collisonXDrag"),
	HX_CSTRING("_point"),
	HX_CSTRING("_rect"),
	HX_CSTRING("initVars"),
	HX_CSTRING("initMotionVars"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("updateMotion"),
	HX_CSTRING("draw"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("overlapsCallback"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("overlapsAtCallback"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("inWorldBounds"),
	HX_CSTRING("getScreenPosition"),
	HX_CSTRING("getMidpoint"),
	HX_CSTRING("reset"),
	HX_CSTRING("isOnScreen"),
	HX_CSTRING("isPixelPerfectRender"),
	HX_CSTRING("isTouching"),
	HX_CSTRING("justTouched"),
	HX_CSTRING("hurt"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("setSize"),
	HX_CSTRING("getBoundingBox"),
	HX_CSTRING("toString"),
	HX_CSTRING("toPoint"),
	HX_CSTRING("toRect"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_width"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_solid"),
	HX_CSTRING("set_solid"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("set_moves"),
	HX_CSTRING("set_immovable"),
	HX_CSTRING("set_pixelPerfectRender"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#endif

Class FlxObject_obj::__mClass;

void FlxObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxObject"), hx::TCanCast< FlxObject_obj> ,sStaticFields,sMemberFields,
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

void FlxObject_obj::__boot()
{
	SEPARATE_BIAS= (int)4;
	LEFT= (int)1;
	RIGHT= (int)16;
	UP= (int)256;
	DOWN= (int)4096;
	NONE= (int)0;
	CEILING= (int)256;
	FLOOR= (int)4096;
	WALL= (int)17;
	ANY= (int)4369;
struct _Function_0_1{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",64,0xf0fe0d80)
		{
			HX_STACK_LINE(64)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(64)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(64)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(64)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(64)
			::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(64)
				_this->x = X;
				HX_STACK_LINE(64)
				_this->y = Y;
				HX_STACK_LINE(64)
				_this->width = Width;
				HX_STACK_LINE(64)
				_this->height = Height;
				HX_STACK_LINE(64)
				rect = _this;
			}
			HX_STACK_LINE(64)
			rect->_inPool = false;
			HX_STACK_LINE(64)
			return rect;
		}
		return null();
	}
};
	_firstSeparateFlxRect= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",65,0xf0fe0d80)
		{
			HX_STACK_LINE(65)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(65)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(65)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(65)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(65)
			::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(65)
				_this->x = X;
				HX_STACK_LINE(65)
				_this->y = Y;
				HX_STACK_LINE(65)
				_this->width = Width;
				HX_STACK_LINE(65)
				_this->height = Height;
				HX_STACK_LINE(65)
				rect = _this;
			}
			HX_STACK_LINE(65)
			rect->_inPool = false;
			HX_STACK_LINE(65)
			return rect;
		}
		return null();
	}
};
	_secondSeparateFlxRect= _Function_0_2::Block();
}

} // end namespace flixel
