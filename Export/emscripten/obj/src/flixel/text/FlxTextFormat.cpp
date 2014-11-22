#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
namespace flixel{
namespace text{

Void FlxTextFormat_obj::__construct(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor)
{
HX_STACK_FRAME("flixel.text.FlxTextFormat","new",0x67be2279,"flixel.text.FlxTextFormat.new","flixel/text/FlxText.hx",1022,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(FontColor,"FontColor")
HX_STACK_ARG(Bold,"Bold")
HX_STACK_ARG(Italic,"Italic")
HX_STACK_ARG(BorderColor,"BorderColor")
{
	HX_STACK_LINE(1023)
	::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),FontColor,Bold,Italic,null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1023)
	this->format = _g;
	HX_STACK_LINE(1024)
	if (((BorderColor == null()))){
		HX_STACK_LINE(1024)
		this->borderColor = (int)0;
	}
	else{
		HX_STACK_LINE(1024)
		this->borderColor = BorderColor;
	}
}
;
	return null();
}

//FlxTextFormat_obj::~FlxTextFormat_obj() { }

Dynamic FlxTextFormat_obj::__CreateEmpty() { return  new FlxTextFormat_obj; }
hx::ObjectPtr< FlxTextFormat_obj > FlxTextFormat_obj::__new(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor)
{  hx::ObjectPtr< FlxTextFormat_obj > result = new FlxTextFormat_obj();
	result->__construct(FontColor,Bold,Italic,BorderColor);
	return result;}

Dynamic FlxTextFormat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTextFormat_obj > result = new FlxTextFormat_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


FlxTextFormat_obj::FlxTextFormat_obj()
{
}

void FlxTextFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTextFormat);
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void FlxTextFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(format,"format");
}

Dynamic FlxTextFormat_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTextFormat_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTextFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("format"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxTextFormat_obj,borderColor),HX_CSTRING("borderColor")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(FlxTextFormat_obj,format),HX_CSTRING("format")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("borderColor"),
	HX_CSTRING("format"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextFormat_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextFormat_obj::__mClass,"__mClass");
};

#endif

Class FlxTextFormat_obj::__mClass;

void FlxTextFormat_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.FlxTextFormat"), hx::TCanCast< FlxTextFormat_obj> ,sStaticFields,sMemberFields,
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

void FlxTextFormat_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
