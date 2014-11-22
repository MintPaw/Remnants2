#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
namespace flixel{
namespace tweens{

Void FlxTweenManager_obj::__construct()
{
HX_STACK_FRAME("flixel.tweens.FlxTweenManager","new",0x3916c2b2,"flixel.tweens.FlxTweenManager.new","flixel/tweens/FlxTween.hx",628,0x5d58d691)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(633)
	this->_tweens = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(637)
	super::__construct();
	HX_STACK_LINE(638)
	this->set_visible(false);
	HX_STACK_LINE(639)
	::flixel::FlxG_obj::signals->stateSwitched->add(this->clear_dyn());
}
;
	return null();
}

//FlxTweenManager_obj::~FlxTweenManager_obj() { }

Dynamic FlxTweenManager_obj::__CreateEmpty() { return  new FlxTweenManager_obj; }
hx::ObjectPtr< FlxTweenManager_obj > FlxTweenManager_obj::__new()
{  hx::ObjectPtr< FlxTweenManager_obj > result = new FlxTweenManager_obj();
	result->__construct();
	return result;}

Dynamic FlxTweenManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTweenManager_obj > result = new FlxTweenManager_obj();
	result->__construct();
	return result;}

::flixel::tweens::motion::QuadPath FlxTweenManager_obj::add_flixel_tweens_motion_QuadPath( ::flixel::tweens::motion::QuadPath Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadPath",0xa68abf75,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadPath","flixel/tweens/FlxTween.hx",688,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(690)
		if (((Tween == null()))){
			HX_STACK_LINE(692)
			return null();
		}
		HX_STACK_LINE(695)
		this->_tweens->push(Tween);
		HX_STACK_LINE(697)
		if ((Start)){
			HX_STACK_LINE(699)
			Tween->start();
		}
		HX_STACK_LINE(701)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadPath,return )

::flixel::tweens::motion::LinearPath FlxTweenManager_obj::add_flixel_tweens_motion_LinearPath( ::flixel::tweens::motion::LinearPath Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearPath",0x58c1abd3,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearPath","flixel/tweens/FlxTween.hx",688,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(690)
		if (((Tween == null()))){
			HX_STACK_LINE(692)
			return null();
		}
		HX_STACK_LINE(695)
		this->_tweens->push(Tween);
		HX_STACK_LINE(697)
		if ((Start)){
			HX_STACK_LINE(699)
			Tween->start();
		}
		HX_STACK_LINE(701)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearPath,return )

::flixel::tweens::motion::CircularMotion FlxTweenManager_obj::add_flixel_tweens_motion_CircularMotion( ::flixel::tweens::motion::CircularMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CircularMotion",0xdd77ac1e,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CircularMotion","flixel/tweens/FlxTween.hx",688,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(690)
		if (((Tween == null()))){
			HX_STACK_LINE(692)
			return null();
		}
		HX_STACK_LINE(695)
		this->_tweens->push(Tween);
		HX_STACK_LINE(697)
		if ((Start)){
			HX_STACK_LINE(699)
			Tween->start();
		}
		HX_STACK_LINE(701)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CircularMotion,return )

::flixel::tweens::motion::CubicMotion FlxTweenManager_obj::add_flixel_tweens_motion_CubicMotion( ::flixel::tweens::motion::CubicMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CubicMotion",0x3bc2ad57,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CubicMotion","flixel/tweens/FlxTween.hx",688,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(690)
		if (((Tween == null()))){
			HX_STACK_LINE(692)
			return null();
		}
		HX_STACK_LINE(695)
		this->_tweens->push(Tween);
		HX_STACK_LINE(697)
		if ((Start)){
			HX_STACK_LINE(699)
			Tween->start();
		}
		HX_STACK_LINE(701)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CubicMotion,return )

::flixel::tweens::motion::QuadMotion FlxTweenManager_obj::add_flixel_tweens_motion_QuadMotion( ::flixel::tweens::motion::QuadMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadMotion",0x4adc7406,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadMotion","flixel/tweens/FlxTween.hx",688,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(690)
		if (((Tween == null()))){
			HX_STACK_LINE(692)
			return null();
		}
		HX_STACK_LINE(695)
		this->_tweens->push(Tween);
		HX_STACK_LINE(697)
		if ((Start)){
			HX_STACK_LINE(699)
			Tween->start();
		}
		HX_STACK_LINE(701)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadMotion,return )

::flixel::tweens::motion::LinearMotion FlxTweenManager_obj::add_flixel_tweens_motion_LinearMotion( ::flixel::tweens::motion::LinearMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearMotion",0x29edb3e4,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearMotion","flixel/tweens/FlxTween.hx",688,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(690)
		if (((Tween == null()))){
			HX_STACK_LINE(692)
			return null();
		}
		HX_STACK_LINE(695)
		this->_tweens->push(Tween);
		HX_STACK_LINE(697)
		if ((Start)){
			HX_STACK_LINE(699)
			Tween->start();
		}
		HX_STACK_LINE(701)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearMotion,return )

::flixel::tweens::misc::ColorTween FlxTweenManager_obj::add_flixel_tweens_misc_ColorTween( ::flixel::tweens::misc::ColorTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_ColorTween",0xd92edebb,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_ColorTween","flixel/tweens/FlxTween.hx",688,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(690)
		if (((Tween == null()))){
			HX_STACK_LINE(692)
			return null();
		}
		HX_STACK_LINE(695)
		this->_tweens->push(Tween);
		HX_STACK_LINE(697)
		if ((Start)){
			HX_STACK_LINE(699)
			Tween->start();
		}
		HX_STACK_LINE(701)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_ColorTween,return )

::flixel::tweens::misc::AngleTween FlxTweenManager_obj::add_flixel_tweens_misc_AngleTween( ::flixel::tweens::misc::AngleTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_AngleTween",0xb848364b,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_AngleTween","flixel/tweens/FlxTween.hx",688,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(690)
		if (((Tween == null()))){
			HX_STACK_LINE(692)
			return null();
		}
		HX_STACK_LINE(695)
		this->_tweens->push(Tween);
		HX_STACK_LINE(697)
		if ((Start)){
			HX_STACK_LINE(699)
			Tween->start();
		}
		HX_STACK_LINE(701)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_AngleTween,return )

::flixel::tweens::misc::NumTween FlxTweenManager_obj::add_flixel_tweens_misc_NumTween( ::flixel::tweens::misc::NumTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_NumTween",0xa10a3838,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_NumTween","flixel/tweens/FlxTween.hx",688,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(690)
		if (((Tween == null()))){
			HX_STACK_LINE(692)
			return null();
		}
		HX_STACK_LINE(695)
		this->_tweens->push(Tween);
		HX_STACK_LINE(697)
		if ((Start)){
			HX_STACK_LINE(699)
			Tween->start();
		}
		HX_STACK_LINE(701)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_NumTween,return )

::flixel::tweens::misc::VarTween FlxTweenManager_obj::add_flixel_tweens_misc_VarTween( ::flixel::tweens::misc::VarTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_VarTween",0x2ab94ff7,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_VarTween","flixel/tweens/FlxTween.hx",688,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(690)
		if (((Tween == null()))){
			HX_STACK_LINE(692)
			return null();
		}
		HX_STACK_LINE(695)
		this->_tweens->push(Tween);
		HX_STACK_LINE(697)
		if ((Start)){
			HX_STACK_LINE(699)
			Tween->start();
		}
		HX_STACK_LINE(701)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_VarTween,return )

Void FlxTweenManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTweenManager","destroy",0x1585b04c,"flixel.tweens.FlxTweenManager.destroy","flixel/tweens/FlxTween.hx",643,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(644)
		this->super::destroy();
		HX_STACK_LINE(645)
		::flixel::FlxG_obj::signals->stateSwitched->remove(this->clear_dyn());
	}
return null();
}


Void FlxTweenManager_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.FlxTweenManager","update",0xdf5952f7,"flixel.tweens.FlxTweenManager.update","flixel/tweens/FlxTween.hx",649,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(651)
		Array< ::Dynamic > finishedTweens = null();		HX_STACK_VAR(finishedTweens,"finishedTweens");
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(653)
			Array< ::Dynamic > _g1 = this->_tweens;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(653)
			while((true)){
				HX_STACK_LINE(653)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(653)
					break;
				}
				HX_STACK_LINE(653)
				::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tween,"tween");
				HX_STACK_LINE(653)
				++(_g);
				HX_STACK_LINE(655)
				if ((tween->active)){
					HX_STACK_LINE(657)
					tween->update(elapsed);
					HX_STACK_LINE(658)
					if ((tween->finished)){
						HX_STACK_LINE(660)
						if (((finishedTweens == null()))){
							HX_STACK_LINE(662)
							Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(662)
							finishedTweens = _g2;
						}
						HX_STACK_LINE(664)
						finishedTweens->push(tween);
					}
				}
			}
		}
		HX_STACK_LINE(669)
		if (((finishedTweens != null()))){
			HX_STACK_LINE(671)
			while((true)){
				HX_STACK_LINE(671)
				if ((!(((finishedTweens->length > (int)0))))){
					HX_STACK_LINE(671)
					break;
				}
				HX_STACK_LINE(673)
				finishedTweens->shift().StaticCast< ::flixel::tweens::FlxTween >()->finish();
			}
		}
	}
return null();
}


::flixel::tweens::FlxTween FlxTweenManager_obj::remove( ::flixel::tweens::FlxTween Tween){
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","remove",0x5cdc6932,"flixel.tweens.FlxTweenManager.remove","flixel/tweens/FlxTween.hx",713,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_LINE(714)
	if (((Tween == null()))){
		HX_STACK_LINE(716)
		return null();
	}
	HX_STACK_LINE(719)
	Tween->set_active(false);
	HX_STACK_LINE(720)
	Tween->destroy();
	HX_STACK_LINE(722)
	{
		HX_STACK_LINE(722)
		Array< ::Dynamic > array = this->_tweens;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(722)
		int index = array->indexOf(Tween,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(722)
		if (((index != (int)-1))){
			HX_STACK_LINE(722)
			array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::tweens::FlxTween >();
			HX_STACK_LINE(722)
			array->pop().StaticCast< ::flixel::tweens::FlxTween >();
			HX_STACK_LINE(722)
			array;
		}
		else{
			HX_STACK_LINE(722)
			array;
		}
	}
	HX_STACK_LINE(724)
	return Tween;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTweenManager_obj,remove,return )

Void FlxTweenManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTweenManager","clear",0x6d7d1c5f,"flixel.tweens.FlxTweenManager.clear","flixel/tweens/FlxTween.hx",732,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(732)
		while((true)){
			HX_STACK_LINE(732)
			if ((!(((this->_tweens->length > (int)0))))){
				HX_STACK_LINE(732)
				break;
			}
			HX_STACK_LINE(734)
			this->remove(this->_tweens->__get((int)0).StaticCast< ::flixel::tweens::FlxTween >());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTweenManager_obj,clear,(void))


FlxTweenManager_obj::FlxTweenManager_obj()
{
}

void FlxTweenManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTweenManager);
	HX_MARK_MEMBER_NAME(_tweens,"_tweens");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTweenManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tweens,"_tweens");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTweenManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { return _tweens; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_NumTween") ) { return add_flixel_tweens_misc_NumTween_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_VarTween") ) { return add_flixel_tweens_misc_VarTween_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadPath") ) { return add_flixel_tweens_motion_QuadPath_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_ColorTween") ) { return add_flixel_tweens_misc_ColorTween_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_AngleTween") ) { return add_flixel_tweens_misc_AngleTween_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearPath") ) { return add_flixel_tweens_motion_LinearPath_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadMotion") ) { return add_flixel_tweens_motion_QuadMotion_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CubicMotion") ) { return add_flixel_tweens_motion_CubicMotion_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearMotion") ) { return add_flixel_tweens_motion_LinearMotion_dyn(); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CircularMotion") ) { return add_flixel_tweens_motion_CircularMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTweenManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { _tweens=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTweenManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tweens"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTweenManager_obj,_tweens),HX_CSTRING("_tweens")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("add_flixel_tweens_motion_QuadPath"),
	HX_CSTRING("add_flixel_tweens_motion_LinearPath"),
	HX_CSTRING("add_flixel_tweens_motion_CircularMotion"),
	HX_CSTRING("add_flixel_tweens_motion_CubicMotion"),
	HX_CSTRING("add_flixel_tweens_motion_QuadMotion"),
	HX_CSTRING("add_flixel_tweens_motion_LinearMotion"),
	HX_CSTRING("add_flixel_tweens_misc_ColorTween"),
	HX_CSTRING("add_flixel_tweens_misc_AngleTween"),
	HX_CSTRING("add_flixel_tweens_misc_NumTween"),
	HX_CSTRING("add_flixel_tweens_misc_VarTween"),
	HX_CSTRING("_tweens"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTweenManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTweenManager_obj::__mClass,"__mClass");
};

#endif

Class FlxTweenManager_obj::__mClass;

void FlxTweenManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.FlxTweenManager"), hx::TCanCast< FlxTweenManager_obj> ,sStaticFields,sMemberFields,
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

void FlxTweenManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
