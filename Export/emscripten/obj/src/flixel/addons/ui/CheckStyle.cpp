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
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_CheckStyle
#include <flixel/addons/ui/CheckStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void CheckStyle_obj::__construct(Dynamic CheckColor,::flixel::addons::ui::FontDef Font,::String Align,Dynamic Color,::flixel::addons::ui::BorderDef Border)
{
HX_STACK_FRAME("flixel.addons.ui.CheckStyle","new",0xda9b8dcc,"flixel.addons.ui.CheckStyle.new","flixel/addons/ui/FlxUIRadioGroup.hx",477,0x807a4586)
HX_STACK_THIS(this)
HX_STACK_ARG(CheckColor,"CheckColor")
HX_STACK_ARG(Font,"Font")
HX_STACK_ARG(Align,"Align")
HX_STACK_ARG(Color,"Color")
HX_STACK_ARG(Border,"Border")
{
	HX_STACK_LINE(478)
	this->checkColor = null();
	HX_STACK_LINE(481)
	this->checkColor = CheckColor;
	HX_STACK_LINE(482)
	super::__construct(Font,Align,Color,Border);
}
;
	return null();
}

//CheckStyle_obj::~CheckStyle_obj() { }

Dynamic CheckStyle_obj::__CreateEmpty() { return  new CheckStyle_obj; }
hx::ObjectPtr< CheckStyle_obj > CheckStyle_obj::__new(Dynamic CheckColor,::flixel::addons::ui::FontDef Font,::String Align,Dynamic Color,::flixel::addons::ui::BorderDef Border)
{  hx::ObjectPtr< CheckStyle_obj > result = new CheckStyle_obj();
	result->__construct(CheckColor,Font,Align,Color,Border);
	return result;}

Dynamic CheckStyle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CheckStyle_obj > result = new CheckStyle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void CheckStyle_obj::applyToCheck( ::flixel::addons::ui::FlxUICheckBox c){
{
		HX_STACK_FRAME("flixel.addons.ui.CheckStyle","applyToCheck",0x906b6693,"flixel.addons.ui.CheckStyle.applyToCheck","flixel/addons/ui/FlxUIRadioGroup.hx",485,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(486)
		if (((this->checkColor != null()))){
			HX_STACK_LINE(487)
			c->set_color(this->checkColor);
		}
		HX_STACK_LINE(489)
		this->apply(c->button->label);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CheckStyle_obj,applyToCheck,(void))


CheckStyle_obj::CheckStyle_obj()
{
}

void CheckStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CheckStyle);
	HX_MARK_MEMBER_NAME(checkColor,"checkColor");
	::flixel::addons::ui::ButtonLabelStyle_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CheckStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(checkColor,"checkColor");
	::flixel::addons::ui::ButtonLabelStyle_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CheckStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"checkColor") ) { return checkColor; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"applyToCheck") ) { return applyToCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CheckStyle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"checkColor") ) { checkColor=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("checkColor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CheckStyle_obj,checkColor),HX_CSTRING("checkColor")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("checkColor"),
	HX_CSTRING("applyToCheck"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CheckStyle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CheckStyle_obj::__mClass,"__mClass");
};

#endif

Class CheckStyle_obj::__mClass;

void CheckStyle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.CheckStyle"), hx::TCanCast< CheckStyle_obj> ,sStaticFields,sMemberFields,
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

void CheckStyle_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
