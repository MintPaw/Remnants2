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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_game_Player
#include <game/Player.h>
#endif
namespace game{

Void Player_obj::__construct(int model)
{
HX_STACK_FRAME("game.Player","new",0x0db227ef,"game.Player.new","game/Player.hx",7,0x8819e240)
HX_STACK_THIS(this)
HX_STACK_ARG(model,"model")
{
	HX_STACK_LINE(14)
	this->_down = false;
	HX_STACK_LINE(13)
	this->_up = false;
	HX_STACK_LINE(12)
	this->_right = false;
	HX_STACK_LINE(11)
	this->_left = false;
	HX_STACK_LINE(9)
	this->keys = Array_obj< int >::__new();
	HX_STACK_LINE(20)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(22)
	this->makeGraphic((int)10,(int)10,(  (((model == (int)0))) ? int((int)-65536) : int((int)-16711936) ),null(),null());
	HX_STACK_LINE(24)
	this->maxVelocity->set_x((int)300);
	HX_STACK_LINE(25)
	this->maxVelocity->set_y((int)300);
	HX_STACK_LINE(26)
	this->drag->set_x((int)5000);
	HX_STACK_LINE(27)
	this->drag->set_y((int)5000);
	HX_STACK_LINE(29)
	::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(29)
	this->aimer = _g;
	HX_STACK_LINE(30)
	this->aimer->makeGraphic((int)2,(int)2,(int)-6710887,null(),null());
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int model)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(model);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Player_obj::move( int dir){
{
		HX_STACK_FRAME("game.Player","move",0xed8f28a2,"game.Player.move","game/Player.hx",34,0x8819e240)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dir,"dir")
		struct _Function_1_1{
			inline static Float Block( int &dir){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/Player.hx",35,0x8819e240)
				{
					HX_STACK_LINE(35)
					int _int = dir;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(35)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		if (((_Function_1_1::Block(dir) == (int)1))){
			HX_STACK_LINE(35)
			this->_left = true;
		}
		struct _Function_1_2{
			inline static Float Block( int &dir){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/Player.hx",36,0x8819e240)
				{
					HX_STACK_LINE(36)
					int _int = dir;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(36)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		if (((_Function_1_2::Block(dir) == (int)16))){
			HX_STACK_LINE(36)
			this->_right = true;
		}
		struct _Function_1_3{
			inline static Float Block( int &dir){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/Player.hx",37,0x8819e240)
				{
					HX_STACK_LINE(37)
					int _int = dir;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(37)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(37)
		if (((_Function_1_3::Block(dir) == (int)256))){
			HX_STACK_LINE(37)
			this->_up = true;
		}
		struct _Function_1_4{
			inline static Float Block( int &dir){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/Player.hx",38,0x8819e240)
				{
					HX_STACK_LINE(38)
					int _int = dir;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(38)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		if (((_Function_1_4::Block(dir) == (int)4096))){
			HX_STACK_LINE(38)
			this->_down = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,move,(void))

Void Player_obj::update( Float elapsed){
{
		HX_STACK_FRAME("game.Player","update",0x887d11da,"game.Player.update","game/Player.hx",42,0x8819e240)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(43)
		this->acceleration->set(null(),null());
		HX_STACK_LINE(45)
		if ((this->_left)){
			HX_STACK_LINE(45)
			this->acceleration->set_x((-(this->maxVelocity->x) * (int)8));
		}
		HX_STACK_LINE(46)
		if ((this->_right)){
			HX_STACK_LINE(46)
			this->acceleration->set_x((this->maxVelocity->x * (int)8));
		}
		HX_STACK_LINE(47)
		if ((this->_up)){
			HX_STACK_LINE(47)
			this->acceleration->set_y((-(this->maxVelocity->x) * (int)8));
		}
		HX_STACK_LINE(48)
		if ((this->_down)){
			HX_STACK_LINE(48)
			this->acceleration->set_y((this->maxVelocity->x * (int)8));
		}
		HX_STACK_LINE(50)
		this->super::update(elapsed);
		HX_STACK_LINE(52)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(52)
		Float _g2 = (this->x + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(52)
		Float _g3 = this->aimer->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(52)
		Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(52)
		Float _g5 = (_g2 - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(52)
		this->aimer->set_x(_g5);
		HX_STACK_LINE(53)
		Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(53)
		Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(53)
		Float _g8 = (this->y + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(53)
		Float _g9 = this->aimer->get_height();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(53)
		Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(53)
		Float _g11 = (_g8 - _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(53)
		this->aimer->set_y(_g11);
		HX_STACK_LINE(55)
		if ((this->_left)){
			HX_STACK_LINE(55)
			Float _g12 = this->get_width();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(55)
			Float _g13 = (Float(_g12) / Float((int)2));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(55)
			Float _g14 = (this->x - _g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(55)
			this->aimer->set_x(_g14);
		}
		HX_STACK_LINE(56)
		if ((this->_right)){
			HX_STACK_LINE(56)
			Float _g15 = this->get_width();		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(56)
			Float _g16 = (this->x + _g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(56)
			Float _g17 = this->aimer->get_width();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(56)
			Float _g18 = (_g17 * (int)2);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(56)
			Float _g19 = (_g16 + _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(56)
			this->aimer->set_x(_g19);
		}
		HX_STACK_LINE(57)
		if ((this->_up)){
			HX_STACK_LINE(57)
			Float _g20 = this->get_height();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(57)
			Float _g21 = (Float(_g20) / Float((int)2));		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(57)
			Float _g22 = (this->y - _g21);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(57)
			this->aimer->set_y(_g22);
		}
		HX_STACK_LINE(58)
		if ((this->_down)){
			HX_STACK_LINE(58)
			Float _g23 = this->get_height();		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(58)
			Float _g24 = (this->y + _g23);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(58)
			Float _g25 = this->aimer->get_height();		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(58)
			Float _g26 = (_g25 * (int)2);		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(58)
			Float _g27 = (_g24 + _g26);		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(58)
			this->aimer->set_y(_g27);
		}
		HX_STACK_LINE(60)
		this->aimer->set_visible((bool((bool((bool(this->_left) || bool(this->_right))) || bool(this->_up))) || bool(this->_down)));
		HX_STACK_LINE(62)
		bool _g28 = this->_down = false;		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(62)
		bool _g29 = this->_up = _g28;		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(62)
		bool _g30 = this->_right = _g29;		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(62)
		this->_left = _g30;
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_right,"_right");
	HX_MARK_MEMBER_NAME(_up,"_up");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(aimer,"aimer");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_right,"_right");
	HX_VISIT_MEMBER_NAME(_up,"_up");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(aimer,"aimer");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { return _up; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { return _left; }
		if (HX_FIELD_EQ(inName,"_down") ) { return _down; }
		if (HX_FIELD_EQ(inName,"aimer") ) { return aimer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { return _right; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { _up=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aimer") ) { aimer=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("keys"));
	outFields->push(HX_CSTRING("_left"));
	outFields->push(HX_CSTRING("_right"));
	outFields->push(HX_CSTRING("_up"));
	outFields->push(HX_CSTRING("_down"));
	outFields->push(HX_CSTRING("aimer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Player_obj,keys),HX_CSTRING("keys")},
	{hx::fsBool,(int)offsetof(Player_obj,_left),HX_CSTRING("_left")},
	{hx::fsBool,(int)offsetof(Player_obj,_right),HX_CSTRING("_right")},
	{hx::fsBool,(int)offsetof(Player_obj,_up),HX_CSTRING("_up")},
	{hx::fsBool,(int)offsetof(Player_obj,_down),HX_CSTRING("_down")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Player_obj,aimer),HX_CSTRING("aimer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("keys"),
	HX_CSTRING("_left"),
	HX_CSTRING("_right"),
	HX_CSTRING("_up"),
	HX_CSTRING("_down"),
	HX_CSTRING("aimer"),
	HX_CSTRING("move"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

} // end namespace game
