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
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void ButtonLabelStyle_obj::__construct(::flixel::addons::ui::FontDef Font,::String Align,Dynamic Color,::flixel::addons::ui::BorderDef Border)
{
HX_STACK_FRAME("flixel.addons.ui.ButtonLabelStyle","new",0x18d06f72,"flixel.addons.ui.ButtonLabelStyle.new","flixel/addons/ui/ButtonLabelStyle.hx",4,0x3fd572fd)
HX_STACK_THIS(this)
HX_STACK_ARG(Font,"Font")
HX_STACK_ARG(Align,"Align")
HX_STACK_ARG(Color,"Color")
HX_STACK_ARG(Border,"Border")
{
	HX_STACK_LINE(9)
	this->align = null();
	HX_STACK_LINE(8)
	this->color = null();
	HX_STACK_LINE(7)
	this->border = null();
	HX_STACK_LINE(6)
	this->font = null();
	HX_STACK_LINE(12)
	this->font = Font;
	HX_STACK_LINE(13)
	this->border = Border;
	HX_STACK_LINE(14)
	this->color = Color;
	HX_STACK_LINE(15)
	this->align = Align;
}
;
	return null();
}

//ButtonLabelStyle_obj::~ButtonLabelStyle_obj() { }

Dynamic ButtonLabelStyle_obj::__CreateEmpty() { return  new ButtonLabelStyle_obj; }
hx::ObjectPtr< ButtonLabelStyle_obj > ButtonLabelStyle_obj::__new(::flixel::addons::ui::FontDef Font,::String Align,Dynamic Color,::flixel::addons::ui::BorderDef Border)
{  hx::ObjectPtr< ButtonLabelStyle_obj > result = new ButtonLabelStyle_obj();
	result->__construct(Font,Align,Color,Border);
	return result;}

Dynamic ButtonLabelStyle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ButtonLabelStyle_obj > result = new ButtonLabelStyle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void ButtonLabelStyle_obj::apply( ::flixel::text::FlxText f){
{
		HX_STACK_FRAME("flixel.addons.ui.ButtonLabelStyle","apply",0xcc6b8d00,"flixel.addons.ui.ButtonLabelStyle.apply","flixel/addons/ui/ButtonLabelStyle.hx",18,0x3fd572fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(19)
		if (((this->font != null()))){
			HX_STACK_LINE(20)
			this->font->apply(null(),f);
		}
		HX_STACK_LINE(22)
		if (((this->border != null()))){
			HX_STACK_LINE(23)
			this->border->apply(f);
		}
		HX_STACK_LINE(25)
		if (((this->color != null()))){
			HX_STACK_LINE(26)
			f->set_color(this->color);
		}
		HX_STACK_LINE(28)
		if (((this->align != null()))){
			HX_STACK_LINE(29)
			f->set_alignment(this->align);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ButtonLabelStyle_obj,apply,(void))


ButtonLabelStyle_obj::ButtonLabelStyle_obj()
{
}

void ButtonLabelStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonLabelStyle);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_END_CLASS();
}

void ButtonLabelStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(align,"align");
}

Dynamic ButtonLabelStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ButtonLabelStyle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::flixel::addons::ui::FontDef >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< ::flixel::addons::ui::BorderDef >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonLabelStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("border"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("align"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::ui::FontDef*/ ,(int)offsetof(ButtonLabelStyle_obj,font),HX_CSTRING("font")},
	{hx::fsObject /*::flixel::addons::ui::BorderDef*/ ,(int)offsetof(ButtonLabelStyle_obj,border),HX_CSTRING("border")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ButtonLabelStyle_obj,color),HX_CSTRING("color")},
	{hx::fsString,(int)offsetof(ButtonLabelStyle_obj,align),HX_CSTRING("align")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("font"),
	HX_CSTRING("border"),
	HX_CSTRING("color"),
	HX_CSTRING("align"),
	HX_CSTRING("apply"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonLabelStyle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonLabelStyle_obj::__mClass,"__mClass");
};

#endif

Class ButtonLabelStyle_obj::__mClass;

void ButtonLabelStyle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.ButtonLabelStyle"), hx::TCanCast< ButtonLabelStyle_obj> ,sStaticFields,sMemberFields,
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

void ButtonLabelStyle_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
