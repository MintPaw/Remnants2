#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Inputs
#include <Inputs.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxAxes
#include <flixel/input/gamepad/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_XboxButtonID
#include <flixel/input/gamepad/XboxButtonID.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_game_Player
#include <game/Player.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

Void Inputs_obj::__construct()
{
HX_STACK_FRAME("Inputs","new",0x378eb2bb,"Inputs.new","Inputs.hx",35,0xca4b3d15)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Inputs_obj::~Inputs_obj() { }

Dynamic Inputs_obj::__CreateEmpty() { return  new Inputs_obj; }
hx::ObjectPtr< Inputs_obj > Inputs_obj::__new()
{  hx::ObjectPtr< Inputs_obj > result = new Inputs_obj();
	result->__construct();
	return result;}

Dynamic Inputs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Inputs_obj > result = new Inputs_obj();
	result->__construct();
	return result;}

::flixel::group::FlxTypedGroup Inputs_obj::players;

::haxe::ds::StringMap Inputs_obj::binds;

::haxe::ds::EnumValueMap Inputs_obj::LEFT_STICK;

::haxe::ds::EnumValueMap Inputs_obj::RIGHT_STICK;

int Inputs_obj::A;

int Inputs_obj::B;

int Inputs_obj::X;

int Inputs_obj::Y;

Array< ::String > Inputs_obj::actions;

Void Inputs_obj::setPlatform( ::String platfrom){
{
		HX_STACK_FRAME("Inputs","setPlatform",0xb417b1d0,"Inputs.setPlatform","Inputs.hx",41,0xca4b3d15)
		HX_STACK_ARG(platfrom,"platfrom")
		HX_STACK_LINE(41)
		if (((platfrom == HX_CSTRING("windows")))){
			HX_STACK_LINE(43)
			::Inputs_obj::LEFT_STICK = ::flixel::input::gamepad::XboxButtonID_obj::LEFT_ANALOG_STICK;
			HX_STACK_LINE(44)
			::Inputs_obj::RIGHT_STICK = ::flixel::input::gamepad::XboxButtonID_obj::RIGHT_ANALOG_STICK;
			HX_STACK_LINE(45)
			::Inputs_obj::A = (int)10;
			HX_STACK_LINE(46)
			::Inputs_obj::B = (int)11;
			HX_STACK_LINE(47)
			::Inputs_obj::X = (int)12;
			HX_STACK_LINE(48)
			::Inputs_obj::Y = (int)13;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Inputs_obj,setPlatform,(void))

Void Inputs_obj::makeBind( ::String key,::String action){
{
		HX_STACK_FRAME("Inputs","makeBind",0x98409e90,"Inputs.makeBind","Inputs.hx",54,0xca4b3d15)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(54)
		::String key1 = key.toUpperCase();		HX_STACK_VAR(key1,"key1");
		HX_STACK_LINE(54)
		::Inputs_obj::binds->set(key1,action);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Inputs_obj,makeBind,(void))

Void Inputs_obj::update( ){
{
		HX_STACK_FRAME("Inputs","update",0xae6a4e8e,"Inputs.update","Inputs.hx",58,0xca4b3d15)
		HX_STACK_LINE(59)
		Array< ::String > commands = Array_obj< ::String >::__new();		HX_STACK_VAR(commands,"commands");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::keys->getIsDown();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(61)
			while((true)){
				HX_STACK_LINE(61)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(61)
					break;
				}
				HX_STACK_LINE(61)
				::flixel::input::FlxInput i = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(61)
				++(_g);
				HX_STACK_LINE(61)
				::String _g2 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get(i->ID);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(61)
				commands->push(_g2);
			}
		}
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			while((true)){
				HX_STACK_LINE(63)
				if ((!(((_g < (int)4))))){
					HX_STACK_LINE(63)
					break;
				}
				HX_STACK_LINE(63)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(65)
				if (((bool((::flixel::FlxG_obj::gamepads->_activeGamepads->__get(i).StaticCast< ::flixel::input::gamepad::FlxGamepad >() != null())) && bool(::flixel::FlxG_obj::gamepads->_activeGamepads->__get(i).StaticCast< ::flixel::input::gamepad::FlxGamepad >()->connected)))){
					HX_STACK_LINE(67)
					::flixel::input::gamepad::FlxGamepad pad = ::flixel::FlxG_obj::gamepads->_activeGamepads->__get(i).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(pad,"pad");
					HX_STACK_LINE(68)
					Float _g1 = pad->getAnalogueAxisValue(::flixel::input::gamepad::FlxAxes_obj::X,::Inputs_obj::LEFT_STICK);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(68)
					if (((_g1 < (int)0))){
						HX_STACK_LINE(68)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("LSleft")));
					}
					HX_STACK_LINE(69)
					Float _g2 = pad->getAnalogueAxisValue(::flixel::input::gamepad::FlxAxes_obj::X,::Inputs_obj::LEFT_STICK);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(69)
					if (((_g2 > (int)0))){
						HX_STACK_LINE(69)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("LSright")));
					}
					HX_STACK_LINE(70)
					Float _g3 = pad->getYAxis(::Inputs_obj::LEFT_STICK);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(70)
					if (((_g3 < (int)0))){
						HX_STACK_LINE(70)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("LSup")));
					}
					HX_STACK_LINE(71)
					Float _g4 = pad->getYAxis(::Inputs_obj::LEFT_STICK);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(71)
					if (((_g4 > (int)0))){
						HX_STACK_LINE(71)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("LSdown")));
					}
					HX_STACK_LINE(73)
					Float _g5 = pad->getAnalogueAxisValue(::flixel::input::gamepad::FlxAxes_obj::X,::Inputs_obj::RIGHT_STICK);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(73)
					if (((_g5 < (int)0))){
						HX_STACK_LINE(73)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("RSleft")));
					}
					HX_STACK_LINE(74)
					Float _g6 = pad->getAnalogueAxisValue(::flixel::input::gamepad::FlxAxes_obj::X,::Inputs_obj::RIGHT_STICK);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(74)
					if (((_g6 > (int)0))){
						HX_STACK_LINE(74)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("RSright")));
					}
					HX_STACK_LINE(75)
					Float _g7 = pad->getYAxis(::Inputs_obj::RIGHT_STICK);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(75)
					if (((_g7 < (int)0))){
						HX_STACK_LINE(75)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("RSup")));
					}
					HX_STACK_LINE(76)
					Float _g8 = pad->getYAxis(::Inputs_obj::RIGHT_STICK);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(76)
					if (((_g8 > (int)0))){
						HX_STACK_LINE(76)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("RSdown")));
					}
					HX_STACK_LINE(78)
					if ((pad->justReleased(::Inputs_obj::A))){
						HX_STACK_LINE(78)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("A")));
					}
					HX_STACK_LINE(79)
					if ((pad->justReleased(::Inputs_obj::B))){
						HX_STACK_LINE(79)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("B")));
					}
					HX_STACK_LINE(80)
					if ((pad->justReleased(::Inputs_obj::X))){
						HX_STACK_LINE(80)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("X")));
					}
					HX_STACK_LINE(81)
					if ((pad->justReleased(::Inputs_obj::Y))){
						HX_STACK_LINE(81)
						commands->push(((HX_CSTRING("pad") + i) + HX_CSTRING("Y")));
					}
				}
			}
		}
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(85)
			while((true)){
				HX_STACK_LINE(85)
				if ((!(((_g < commands->length))))){
					HX_STACK_LINE(85)
					break;
				}
				HX_STACK_LINE(85)
				::String i = commands->__get(_g);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(85)
				++(_g);
				HX_STACK_LINE(87)
				::String _g9 = i.toUpperCase();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(87)
				i = _g9;
				HX_STACK_LINE(88)
				::String _g10 = ::Inputs_obj::binds->get(i);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(88)
				if (((_g10 != null()))){
					HX_STACK_LINE(90)
					::String _g11 = ::Inputs_obj::binds->get(i)->__Field(HX_CSTRING("charAt"),true)((::Inputs_obj::binds->get(i)->__Field(HX_CSTRING("length"),true) - (int)1));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(90)
					int p = ::Std_obj::parseInt(_g11);		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(91)
					if (((::Inputs_obj::players->members->__GetItem(p) != null()))){
						HX_STACK_LINE(93)
						int _g12 = ::Inputs_obj::binds->get(i)->__Field(HX_CSTRING("indexOf"),true)(HX_CSTRING("moveLeft"),null());		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(93)
						if (((_g12 != (int)-1))){
							HX_STACK_LINE(93)
							::Inputs_obj::players->members->__GetItem(p)->__Field(HX_CSTRING("move"),true)((int)1);
						}
						HX_STACK_LINE(94)
						int _g13 = ::Inputs_obj::binds->get(i)->__Field(HX_CSTRING("indexOf"),true)(HX_CSTRING("moveRight"),null());		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(94)
						if (((_g13 != (int)-1))){
							HX_STACK_LINE(94)
							::Inputs_obj::players->members->__GetItem(p)->__Field(HX_CSTRING("move"),true)((int)16);
						}
						HX_STACK_LINE(95)
						int _g14 = ::Inputs_obj::binds->get(i)->__Field(HX_CSTRING("indexOf"),true)(HX_CSTRING("moveUp"),null());		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(95)
						if (((_g14 != (int)-1))){
							HX_STACK_LINE(95)
							::Inputs_obj::players->members->__GetItem(p)->__Field(HX_CSTRING("move"),true)((int)256);
						}
						HX_STACK_LINE(96)
						int _g15 = ::Inputs_obj::binds->get(i)->__Field(HX_CSTRING("indexOf"),true)(HX_CSTRING("moveDown"),null());		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(96)
						if (((_g15 != (int)-1))){
							HX_STACK_LINE(96)
							::Inputs_obj::players->members->__GetItem(p)->__Field(HX_CSTRING("move"),true)((int)4096);
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Inputs_obj,update,(void))


Inputs_obj::Inputs_obj()
{
}

Dynamic Inputs_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { return A; }
		if (HX_FIELD_EQ(inName,"B") ) { return B; }
		if (HX_FIELD_EQ(inName,"X") ) { return X; }
		if (HX_FIELD_EQ(inName,"Y") ) { return Y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"binds") ) { return binds; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"players") ) { return players; }
		if (HX_FIELD_EQ(inName,"actions") ) { return actions; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"makeBind") ) { return makeBind_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LEFT_STICK") ) { return LEFT_STICK; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RIGHT_STICK") ) { return RIGHT_STICK; }
		if (HX_FIELD_EQ(inName,"setPlatform") ) { return setPlatform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Inputs_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { A=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B") ) { B=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"X") ) { X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Y") ) { Y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"binds") ) { binds=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"players") ) { players=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actions") ) { actions=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LEFT_STICK") ) { LEFT_STICK=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RIGHT_STICK") ) { RIGHT_STICK=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Inputs_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("players"),
	HX_CSTRING("binds"),
	HX_CSTRING("LEFT_STICK"),
	HX_CSTRING("RIGHT_STICK"),
	HX_CSTRING("A"),
	HX_CSTRING("B"),
	HX_CSTRING("X"),
	HX_CSTRING("Y"),
	HX_CSTRING("actions"),
	HX_CSTRING("setPlatform"),
	HX_CSTRING("makeBind"),
	HX_CSTRING("update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Inputs_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Inputs_obj::players,"players");
	HX_MARK_MEMBER_NAME(Inputs_obj::binds,"binds");
	HX_MARK_MEMBER_NAME(Inputs_obj::LEFT_STICK,"LEFT_STICK");
	HX_MARK_MEMBER_NAME(Inputs_obj::RIGHT_STICK,"RIGHT_STICK");
	HX_MARK_MEMBER_NAME(Inputs_obj::A,"A");
	HX_MARK_MEMBER_NAME(Inputs_obj::B,"B");
	HX_MARK_MEMBER_NAME(Inputs_obj::X,"X");
	HX_MARK_MEMBER_NAME(Inputs_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(Inputs_obj::actions,"actions");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Inputs_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Inputs_obj::players,"players");
	HX_VISIT_MEMBER_NAME(Inputs_obj::binds,"binds");
	HX_VISIT_MEMBER_NAME(Inputs_obj::LEFT_STICK,"LEFT_STICK");
	HX_VISIT_MEMBER_NAME(Inputs_obj::RIGHT_STICK,"RIGHT_STICK");
	HX_VISIT_MEMBER_NAME(Inputs_obj::A,"A");
	HX_VISIT_MEMBER_NAME(Inputs_obj::B,"B");
	HX_VISIT_MEMBER_NAME(Inputs_obj::X,"X");
	HX_VISIT_MEMBER_NAME(Inputs_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(Inputs_obj::actions,"actions");
};

#endif

Class Inputs_obj::__mClass;

void Inputs_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Inputs"), hx::TCanCast< Inputs_obj> ,sStaticFields,sMemberFields,
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

void Inputs_obj::__boot()
{
	binds= ::haxe::ds::StringMap_obj::__new();
	actions= Array_obj< ::String >::__new().Add(HX_CSTRING("moveLeft0")).Add(HX_CSTRING("moveRight0")).Add(HX_CSTRING("moveUp0")).Add(HX_CSTRING("moveDown0")).Add(HX_CSTRING("moveLeft1")).Add(HX_CSTRING("moveRight1")).Add(HX_CSTRING("moveUp1")).Add(HX_CSTRING("moveDown1"));
}

