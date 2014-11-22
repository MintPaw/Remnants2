#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
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

Void FlxVelocity_obj::__construct()
{
	return null();
}

//FlxVelocity_obj::~FlxVelocity_obj() { }

Dynamic FlxVelocity_obj::__CreateEmpty() { return  new FlxVelocity_obj; }
hx::ObjectPtr< FlxVelocity_obj > FlxVelocity_obj::__new()
{  hx::ObjectPtr< FlxVelocity_obj > result = new FlxVelocity_obj();
	result->__construct();
	return result;}

Dynamic FlxVelocity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVelocity_obj > result = new FlxVelocity_obj();
	result->__construct();
	return result;}

Void FlxVelocity_obj::moveTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVelocity","moveTowardsObject",0xaf722b77,"flixel.math.FlxVelocity.moveTowardsObject","flixel/math/FlxVelocity.hx",25,0xbea30ec3)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Dest,"Dest")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(26)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(26)
			Float dx = ((Dest->x + Dest->origin->x) - ((Source->x + Source->origin->x)));		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(26)
			Float dy = ((Dest->y + Dest->origin->y) - ((Source->y + Source->origin->y)));		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(26)
			if ((AsDegrees)){
				HX_STACK_LINE(26)
				Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(26)
				a = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
			}
			else{
				HX_STACK_LINE(26)
				a = ::Math_obj::atan2(dy,dx);
			}
		}
		HX_STACK_LINE(28)
		if (((MaxTime > (int)0))){
			HX_STACK_LINE(30)
			int d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				Float dx = ((Source->x + Source->origin->x) - ((Dest->x + Dest->origin->x)));		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(30)
				Float dy = ((Source->y + Source->origin->y) - ((Dest->y + Dest->origin->y)));		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(30)
				Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(30)
				d = ::Std_obj::_int(_g);
			}
			HX_STACK_LINE(33)
			int _g1 = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(33)
			Speed = _g1;
		}
		HX_STACK_LINE(36)
		Float _g2 = ::Math_obj::cos(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(36)
		Float _g3 = (_g2 * Speed);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(36)
		Source->velocity->set_x(_g3);
		HX_STACK_LINE(37)
		Float _g4 = ::Math_obj::sin(a);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(37)
		Float _g5 = (_g4 * Speed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(37)
		Source->velocity->set_y(_g5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsObject,(void))

Void FlxVelocity_obj::accelerateTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,Float Acceleration,Float MaxSpeed){
{
		HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateTowardsObject",0x1ebf81eb,"flixel.math.FlxVelocity.accelerateTowardsObject","flixel/math/FlxVelocity.hx",51,0xbea30ec3)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Dest,"Dest")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxSpeed,"MaxSpeed")
		HX_STACK_LINE(52)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(52)
			Float dx = ((Dest->x + Dest->origin->x) - ((Source->x + Source->origin->x)));		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(52)
			Float dy = ((Dest->y + Dest->origin->y) - ((Source->y + Source->origin->y)));		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(52)
			if ((AsDegrees)){
				HX_STACK_LINE(52)
				Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(52)
				a = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
			}
			else{
				HX_STACK_LINE(52)
				a = ::Math_obj::atan2(dy,dx);
			}
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			bool resetVelocity = true;		HX_STACK_VAR(resetVelocity,"resetVelocity");
			HX_STACK_LINE(54)
			Float sin = ::Math_obj::sin(a);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(54)
			Float cos = ::Math_obj::cos(a);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(54)
			if ((resetVelocity)){
				HX_STACK_LINE(54)
				Source->velocity->set((int)0,(int)0);
			}
			HX_STACK_LINE(54)
			Source->acceleration->set((cos * Acceleration),(sin * Acceleration));
			HX_STACK_LINE(54)
			Source->maxVelocity->set((cos * MaxSpeed),(sin * MaxSpeed));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsObject,(void))

Void FlxVelocity_obj::moveTowardsMouse( ::flixel::FlxSprite Source,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVelocity","moveTowardsMouse",0x58da686d,"flixel.math.FlxVelocity.moveTowardsMouse","flixel/math/FlxVelocity.hx",69,0xbea30ec3)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(70)
		Float a = ::flixel::math::FlxAngle_obj::angleBetweenMouse(Source,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(72)
		if (((MaxTime > (int)0))){
			HX_STACK_LINE(74)
			int d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				Float dx = ((Source->x + Source->origin->x) - ::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(74)
				Float dy = ((Source->y + Source->origin->y) - ::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(74)
				Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(74)
				d = ::Std_obj::_int(_g);
			}
			HX_STACK_LINE(77)
			int _g1 = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(77)
			Speed = _g1;
		}
		HX_STACK_LINE(80)
		Float _g2 = ::Math_obj::cos(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(80)
		Float _g3 = (_g2 * Speed);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(80)
		Source->velocity->set_x(_g3);
		HX_STACK_LINE(81)
		Float _g4 = ::Math_obj::sin(a);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(81)
		Float _g5 = (_g4 * Speed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(81)
		Source->velocity->set_y(_g5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,moveTowardsMouse,(void))

Void FlxVelocity_obj::moveTowardsTouch( ::flixel::FlxSprite Source,::flixel::input::touch::FlxTouch Touch,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVelocity","moveTowardsTouch",0x60a86a07,"flixel.math.FlxVelocity.moveTowardsTouch","flixel/math/FlxVelocity.hx",97,0xbea30ec3)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(98)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(98)
			::flixel::math::FlxPoint p = Source->getScreenPosition(null(),null());		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(98)
			Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(98)
			Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(98)
			if ((AsDegrees)){
				HX_STACK_LINE(98)
				Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(98)
				a = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
			}
			else{
				HX_STACK_LINE(98)
				a = ::Math_obj::atan2(dy,dx);
			}
		}
		HX_STACK_LINE(100)
		if (((MaxTime > (int)0))){
			HX_STACK_LINE(102)
			int d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				Float dx = ((Source->x + Source->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(102)
				Float dy = ((Source->y + Source->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(102)
				Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(102)
				d = ::Std_obj::_int(_g);
			}
			HX_STACK_LINE(105)
			int _g1 = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			Speed = _g1;
		}
		HX_STACK_LINE(108)
		Float _g2 = ::Math_obj::cos(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(108)
		Float _g3 = (_g2 * Speed);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(108)
		Source->velocity->set_x(_g3);
		HX_STACK_LINE(109)
		Float _g4 = ::Math_obj::sin(a);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(109)
		Float _g5 = (_g4 * Speed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(109)
		Source->velocity->set_y(_g5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsTouch,(void))

Void FlxVelocity_obj::accelerateTowardsMouse( ::flixel::FlxSprite Source,Float Acceleration,Float MaxSpeed){
{
		HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateTowardsMouse",0x2dba9c79,"flixel.math.FlxVelocity.accelerateTowardsMouse","flixel/math/FlxVelocity.hx",124,0xbea30ec3)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxSpeed,"MaxSpeed")
		HX_STACK_LINE(125)
		Float a = ::flixel::math::FlxAngle_obj::angleBetweenMouse(Source,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			bool resetVelocity = true;		HX_STACK_VAR(resetVelocity,"resetVelocity");
			HX_STACK_LINE(127)
			Float sin = ::Math_obj::sin(a);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(127)
			Float cos = ::Math_obj::cos(a);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(127)
			if ((resetVelocity)){
				HX_STACK_LINE(127)
				Source->velocity->set((int)0,(int)0);
			}
			HX_STACK_LINE(127)
			Source->acceleration->set((cos * Acceleration),(sin * Acceleration));
			HX_STACK_LINE(127)
			Source->maxVelocity->set((cos * MaxSpeed),(sin * MaxSpeed));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,accelerateTowardsMouse,(void))

Void FlxVelocity_obj::accelerateTowardsTouch( ::flixel::FlxSprite Source,::flixel::input::touch::FlxTouch Touch,Float Acceleration,Float MaxSpeed){
{
		HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateTowardsTouch",0x35889e13,"flixel.math.FlxVelocity.accelerateTowardsTouch","flixel/math/FlxVelocity.hx",143,0xbea30ec3)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Touch,"Touch")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxSpeed,"MaxSpeed")
		HX_STACK_LINE(144)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(144)
			::flixel::math::FlxPoint p = Source->getScreenPosition(null(),null());		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(144)
			Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(144)
			Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(144)
			if ((AsDegrees)){
				HX_STACK_LINE(144)
				Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(144)
				a = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
			}
			else{
				HX_STACK_LINE(144)
				a = ::Math_obj::atan2(dy,dx);
			}
		}
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			bool resetVelocity = true;		HX_STACK_VAR(resetVelocity,"resetVelocity");
			HX_STACK_LINE(146)
			Float sin = ::Math_obj::sin(a);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(146)
			Float cos = ::Math_obj::cos(a);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(146)
			if ((resetVelocity)){
				HX_STACK_LINE(146)
				Source->velocity->set((int)0,(int)0);
			}
			HX_STACK_LINE(146)
			Source->acceleration->set((cos * Acceleration),(sin * Acceleration));
			HX_STACK_LINE(146)
			Source->maxVelocity->set((cos * MaxSpeed),(sin * MaxSpeed));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsTouch,(void))

Void FlxVelocity_obj::moveTowardsPoint( ::flixel::FlxSprite Source,::flixel::math::FlxPoint Target,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVelocity","moveTowardsPoint",0x13050698,"flixel.math.FlxVelocity.moveTowardsPoint","flixel/math/FlxVelocity.hx",162,0xbea30ec3)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(163)
		Float a = ::flixel::math::FlxAngle_obj::angleBetweenPoint(Source,Target,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(165)
		if (((MaxTime > (int)0))){
			HX_STACK_LINE(167)
			int d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(167)
			{
				HX_STACK_LINE(167)
				Float dx = ((Source->x + Source->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(167)
				Float dy = ((Source->y + Source->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(167)
				if ((Target->_weak)){
					HX_STACK_LINE(167)
					Target->put();
				}
				HX_STACK_LINE(167)
				Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(167)
				d = ::Std_obj::_int(_g);
			}
			HX_STACK_LINE(170)
			int _g1 = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(170)
			Speed = _g1;
		}
		HX_STACK_LINE(173)
		Float _g2 = ::Math_obj::cos(a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(173)
		Float _g3 = (_g2 * Speed);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(173)
		Source->velocity->set_x(_g3);
		HX_STACK_LINE(174)
		Float _g4 = ::Math_obj::sin(a);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(174)
		Float _g5 = (_g4 * Speed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(174)
		Source->velocity->set_y(_g5);
		HX_STACK_LINE(176)
		if ((Target->_weak)){
			HX_STACK_LINE(176)
			Target->put();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsPoint,(void))

Void FlxVelocity_obj::accelerateTowardsPoint( ::flixel::FlxSprite Source,::flixel::math::FlxPoint Target,Float Acceleration,Float MaxSpeed){
{
		HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateTowardsPoint",0xe7e53aa4,"flixel.math.FlxVelocity.accelerateTowardsPoint","flixel/math/FlxVelocity.hx",190,0xbea30ec3)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Target,"Target")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxSpeed,"MaxSpeed")
		HX_STACK_LINE(191)
		Float a = ::flixel::math::FlxAngle_obj::angleBetweenPoint(Source,Target,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			bool resetVelocity = true;		HX_STACK_VAR(resetVelocity,"resetVelocity");
			HX_STACK_LINE(193)
			Float sin = ::Math_obj::sin(a);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(193)
			Float cos = ::Math_obj::cos(a);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(193)
			if ((resetVelocity)){
				HX_STACK_LINE(193)
				Source->velocity->set((int)0,(int)0);
			}
			HX_STACK_LINE(193)
			Source->acceleration->set((cos * Acceleration),(sin * Acceleration));
			HX_STACK_LINE(193)
			Source->maxVelocity->set((cos * MaxSpeed),(sin * MaxSpeed));
		}
		HX_STACK_LINE(195)
		if ((Target->_weak)){
			HX_STACK_LINE(195)
			Target->put();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsPoint,(void))

::flixel::math::FlxPoint FlxVelocity_obj::velocityFromAngle( Float Angle,Float Speed){
	HX_STACK_FRAME("flixel.math.FlxVelocity","velocityFromAngle",0x954f2639,"flixel.math.FlxVelocity.velocityFromAngle","flixel/math/FlxVelocity.hx",206,0xbea30ec3)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_LINE(207)
	Float a = (Angle * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(209)
	Float _g = ::Math_obj::cos(a);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(209)
	Float X = (_g * Speed);		HX_STACK_VAR(X,"X");
	HX_STACK_LINE(209)
	Float _g1 = ::Math_obj::sin(a);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(209)
	Float Y = (_g1 * Speed);		HX_STACK_VAR(Y,"Y");
	HX_STACK_LINE(209)
	::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(209)
	point->_inPool = false;
	HX_STACK_LINE(209)
	return point;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromAngle,return )

::flixel::math::FlxPoint FlxVelocity_obj::velocityFromFacing( ::flixel::FlxSprite Parent,Float Speed){
	HX_STACK_FRAME("flixel.math.FlxVelocity","velocityFromFacing",0x90de75f4,"flixel.math.FlxVelocity.velocityFromFacing","flixel/math/FlxVelocity.hx",220,0xbea30ec3)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_LINE(221)
	Float a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(221)
		bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
		HX_STACK_LINE(221)
		int degrees;		HX_STACK_VAR(degrees,"degrees");
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			int _g = Parent->facing;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				int f = _g;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(221)
				int f1 = _g;		HX_STACK_VAR(f1,"f1");
				HX_STACK_LINE(221)
				int f2 = _g;		HX_STACK_VAR(f2,"f2");
				HX_STACK_LINE(221)
				int f3 = _g;		HX_STACK_VAR(f3,"f3");
				HX_STACK_LINE(221)
				switch( (int)(_g)){
					case (int)1: {
						HX_STACK_LINE(221)
						degrees = (int)180;
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(221)
						degrees = (int)0;
					}
					;break;
					case (int)256: {
						HX_STACK_LINE(221)
						degrees = (int)-90;
					}
					;break;
					case (int)4096: {
						HX_STACK_LINE(221)
						degrees = (int)90;
					}
					;break;
					default: {
						HX_STACK_LINE(221)
						if (((f == (int)257))){
							HX_STACK_LINE(221)
							degrees = (int)-135;
						}
						else{
							HX_STACK_LINE(221)
							if (((f1 == (int)272))){
								HX_STACK_LINE(221)
								degrees = (int)-45;
							}
							else{
								HX_STACK_LINE(221)
								if (((f2 == (int)4097))){
									HX_STACK_LINE(221)
									degrees = (int)135;
								}
								else{
									HX_STACK_LINE(221)
									if (((f3 == (int)4112))){
										HX_STACK_LINE(221)
										degrees = (int)45;
									}
									else{
										HX_STACK_LINE(221)
										degrees = (int)0;
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(221)
		if ((AsDegrees)){
			HX_STACK_LINE(221)
			a = degrees;
		}
		else{
			HX_STACK_LINE(221)
			a = (degrees * ((Float(::Math_obj::PI) / Float((int)180))));
		}
	}
	HX_STACK_LINE(222)
	Float _g = ::Math_obj::cos(a);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(222)
	Float X = (_g * Speed);		HX_STACK_VAR(X,"X");
	HX_STACK_LINE(222)
	Float _g1 = ::Math_obj::sin(a);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(222)
	Float Y = (_g1 * Speed);		HX_STACK_VAR(Y,"Y");
	HX_STACK_LINE(222)
	::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(222)
	point->_inPool = false;
	HX_STACK_LINE(222)
	return point;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromFacing,return )

Float FlxVelocity_obj::computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max,Float Elapsed){
	HX_STACK_FRAME("flixel.math.FlxVelocity","computeVelocity",0xd7550d81,"flixel.math.FlxVelocity.computeVelocity","flixel/math/FlxVelocity.hx",236,0xbea30ec3)
	HX_STACK_ARG(Velocity,"Velocity")
	HX_STACK_ARG(Acceleration,"Acceleration")
	HX_STACK_ARG(Drag,"Drag")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Elapsed,"Elapsed")
	HX_STACK_LINE(237)
	if (((Acceleration != (int)0))){
		HX_STACK_LINE(239)
		hx::AddEq(Velocity,(Acceleration * Elapsed));
	}
	else{
		HX_STACK_LINE(241)
		if (((Drag != (int)0))){
			HX_STACK_LINE(243)
			Float drag = (Drag * Elapsed);		HX_STACK_VAR(drag,"drag");
			HX_STACK_LINE(244)
			if ((((Velocity - drag) > (int)0))){
				HX_STACK_LINE(246)
				Velocity = (Velocity - drag);
			}
			else{
				HX_STACK_LINE(248)
				if ((((Velocity + drag) < (int)0))){
					HX_STACK_LINE(250)
					hx::AddEq(Velocity,drag);
				}
				else{
					HX_STACK_LINE(254)
					Velocity = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(257)
	if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
		HX_STACK_LINE(259)
		if (((Velocity > Max))){
			HX_STACK_LINE(261)
			Velocity = Max;
		}
		else{
			HX_STACK_LINE(263)
			if (((Velocity < -(Max)))){
				HX_STACK_LINE(265)
				Velocity = -(Max);
			}
		}
	}
	HX_STACK_LINE(268)
	return Velocity;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,computeVelocity,return )

Void FlxVelocity_obj::accelerateFromAngle( ::flixel::FlxSprite source,Float radians,Float acceleration,Float maxSpeed,hx::Null< bool >  __o_resetVelocity){
bool resetVelocity = __o_resetVelocity.Default(true);
	HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateFromAngle",0x5b8d48b9,"flixel.math.FlxVelocity.accelerateFromAngle","flixel/math/FlxVelocity.hx",272,0xbea30ec3)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(radians,"radians")
	HX_STACK_ARG(acceleration,"acceleration")
	HX_STACK_ARG(maxSpeed,"maxSpeed")
	HX_STACK_ARG(resetVelocity,"resetVelocity")
{
		HX_STACK_LINE(273)
		Float sin = ::Math_obj::sin(radians);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(274)
		Float cos = ::Math_obj::cos(radians);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(276)
		if ((resetVelocity)){
			HX_STACK_LINE(277)
			source->velocity->set((int)0,(int)0);
		}
		HX_STACK_LINE(279)
		source->acceleration->set((cos * acceleration),(sin * acceleration));
		HX_STACK_LINE(280)
		source->maxVelocity->set((cos * maxSpeed),(sin * maxSpeed));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateFromAngle,(void))


FlxVelocity_obj::FlxVelocity_obj()
{
}

Dynamic FlxVelocity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"computeVelocity") ) { return computeVelocity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"moveTowardsMouse") ) { return moveTowardsMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowardsTouch") ) { return moveTowardsTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowardsPoint") ) { return moveTowardsPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"moveTowardsObject") ) { return moveTowardsObject_dyn(); }
		if (HX_FIELD_EQ(inName,"velocityFromAngle") ) { return velocityFromAngle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityFromFacing") ) { return velocityFromFacing_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"accelerateFromAngle") ) { return accelerateFromAngle_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accelerateTowardsMouse") ) { return accelerateTowardsMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerateTowardsTouch") ) { return accelerateTowardsTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerateTowardsPoint") ) { return accelerateTowardsPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accelerateTowardsObject") ) { return accelerateTowardsObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVelocity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVelocity_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("moveTowardsObject"),
	HX_CSTRING("accelerateTowardsObject"),
	HX_CSTRING("moveTowardsMouse"),
	HX_CSTRING("moveTowardsTouch"),
	HX_CSTRING("accelerateTowardsMouse"),
	HX_CSTRING("accelerateTowardsTouch"),
	HX_CSTRING("moveTowardsPoint"),
	HX_CSTRING("accelerateTowardsPoint"),
	HX_CSTRING("velocityFromAngle"),
	HX_CSTRING("velocityFromFacing"),
	HX_CSTRING("computeVelocity"),
	HX_CSTRING("accelerateFromAngle"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

#endif

Class FlxVelocity_obj::__mClass;

void FlxVelocity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.math.FlxVelocity"), hx::TCanCast< FlxVelocity_obj> ,sStaticFields,sMemberFields,
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

void FlxVelocity_obj::__boot()
{
}

} // end namespace flixel
} // end namespace math
