#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_game_Door
#include <game/Door.h>
#endif
namespace game{

Void Door_obj::__construct(Float xpos,Float ypos,int colour)
{
HX_STACK_FRAME("game.Door","new",0xfaac797c,"game.Door.new","game/Door.hx",11,0x83cabb93)
HX_STACK_THIS(this)
HX_STACK_ARG(xpos,"xpos")
HX_STACK_ARG(ypos,"ypos")
HX_STACK_ARG(colour,"colour")
{
	HX_STACK_LINE(12)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(14)
	this->colour = colour;
	HX_STACK_LINE(16)
	this->set_x(xpos);
	HX_STACK_LINE(17)
	this->set_y(ypos);
	HX_STACK_LINE(19)
	this->set_immovable(true);
	HX_STACK_LINE(21)
	this->makeGraphic(::Reg_obj::TILE_SIZE,::Reg_obj::TILE_SIZE,(int)-1,null(),null());
	HX_STACK_LINE(23)
	int _g = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(colour);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	this->set_color(_g);
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		hx::AndEq(this->color,(int)16777215);
		HX_STACK_LINE(24)
		hx::OrEq(this->color,(int)16777216);
		HX_STACK_LINE(24)
		(int)1;
	}
}
;
	return null();
}

//Door_obj::~Door_obj() { }

Dynamic Door_obj::__CreateEmpty() { return  new Door_obj; }
hx::ObjectPtr< Door_obj > Door_obj::__new(Float xpos,Float ypos,int colour)
{  hx::ObjectPtr< Door_obj > result = new Door_obj();
	result->__construct(xpos,ypos,colour);
	return result;}

Dynamic Door_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Door_obj > result = new Door_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


Door_obj::Door_obj()
{
}

Dynamic Door_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { return colour; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Door_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Door_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("colour"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Door_obj,colour),HX_CSTRING("colour")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("colour"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Door_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Door_obj::__mClass,"__mClass");
};

#endif

Class Door_obj::__mClass;

void Door_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.Door"), hx::TCanCast< Door_obj> ,sStaticFields,sMemberFields,
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

void Door_obj::__boot()
{
}

} // end namespace game
