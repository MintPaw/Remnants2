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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void BorderDef_obj::__construct(::flixel::text::FlxTextBorderStyle Style,int Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality)
{
HX_STACK_FRAME("flixel.addons.ui.BorderDef","new",0x371bd1ba,"flixel.addons.ui.BorderDef.new","flixel/addons/ui/BorderDef.hx",11,0xa0e6b257)
HX_STACK_THIS(this)
HX_STACK_ARG(Style,"Style")
HX_STACK_ARG(Color,"Color")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_Quality,"Quality")
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
{
	HX_STACK_LINE(12)
	this->style = Style;
	HX_STACK_LINE(13)
	this->color = Color;
	HX_STACK_LINE(14)
	this->size = Size;
	HX_STACK_LINE(15)
	this->quality = Quality;
}
;
	return null();
}

//BorderDef_obj::~BorderDef_obj() { }

Dynamic BorderDef_obj::__CreateEmpty() { return  new BorderDef_obj; }
hx::ObjectPtr< BorderDef_obj > BorderDef_obj::__new(::flixel::text::FlxTextBorderStyle Style,int Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality)
{  hx::ObjectPtr< BorderDef_obj > result = new BorderDef_obj();
	result->__construct(Style,Color,__o_Size,__o_Quality);
	return result;}

Dynamic BorderDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BorderDef_obj > result = new BorderDef_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void BorderDef_obj::apply( ::flixel::text::FlxText f){
{
		HX_STACK_FRAME("flixel.addons.ui.BorderDef","apply",0x9e0a1148,"flixel.addons.ui.BorderDef.apply","flixel/addons/ui/BorderDef.hx",19,0xa0e6b257)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(19)
		f->set_borderStyle(this->style);
		HX_STACK_LINE(19)
		f->set_borderColor(this->color);
		HX_STACK_LINE(19)
		f->set_borderSize(this->size);
		HX_STACK_LINE(19)
		f->set_borderQuality(this->quality);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BorderDef_obj,apply,(void))


BorderDef_obj::BorderDef_obj()
{
}

void BorderDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BorderDef);
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(quality,"quality");
	HX_MARK_END_CLASS();
}

void BorderDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(quality,"quality");
}

Dynamic BorderDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BorderDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< ::flixel::text::FlxTextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BorderDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("quality"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxTextBorderStyle*/ ,(int)offsetof(BorderDef_obj,style),HX_CSTRING("style")},
	{hx::fsInt,(int)offsetof(BorderDef_obj,color),HX_CSTRING("color")},
	{hx::fsFloat,(int)offsetof(BorderDef_obj,size),HX_CSTRING("size")},
	{hx::fsFloat,(int)offsetof(BorderDef_obj,quality),HX_CSTRING("quality")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("style"),
	HX_CSTRING("color"),
	HX_CSTRING("size"),
	HX_CSTRING("quality"),
	HX_CSTRING("apply"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BorderDef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BorderDef_obj::__mClass,"__mClass");
};

#endif

Class BorderDef_obj::__mClass;

void BorderDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.BorderDef"), hx::TCanCast< BorderDef_obj> ,sStaticFields,sMemberFields,
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

void BorderDef_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
