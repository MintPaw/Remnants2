#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif
namespace flixel{
namespace text{

Void FlxTextFormatMarkerPair_obj::__construct(::flixel::text::FlxTextFormat format,::String marker)
{
HX_STACK_FRAME("flixel.text.FlxTextFormatMarkerPair","new",0xb549f24d,"flixel.text.FlxTextFormatMarkerPair.new","flixel/text/FlxText.hx",1047,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(format,"format")
HX_STACK_ARG(marker,"marker")
{
	HX_STACK_LINE(1048)
	this->format = format;
	HX_STACK_LINE(1049)
	this->marker = marker;
}
;
	return null();
}

//FlxTextFormatMarkerPair_obj::~FlxTextFormatMarkerPair_obj() { }

Dynamic FlxTextFormatMarkerPair_obj::__CreateEmpty() { return  new FlxTextFormatMarkerPair_obj; }
hx::ObjectPtr< FlxTextFormatMarkerPair_obj > FlxTextFormatMarkerPair_obj::__new(::flixel::text::FlxTextFormat format,::String marker)
{  hx::ObjectPtr< FlxTextFormatMarkerPair_obj > result = new FlxTextFormatMarkerPair_obj();
	result->__construct(format,marker);
	return result;}

Dynamic FlxTextFormatMarkerPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTextFormatMarkerPair_obj > result = new FlxTextFormatMarkerPair_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


FlxTextFormatMarkerPair_obj::FlxTextFormatMarkerPair_obj()
{
}

void FlxTextFormatMarkerPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTextFormatMarkerPair);
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(marker,"marker");
	HX_MARK_END_CLASS();
}

void FlxTextFormatMarkerPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(marker,"marker");
}

Dynamic FlxTextFormatMarkerPair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"marker") ) { return marker; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTextFormatMarkerPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::flixel::text::FlxTextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marker") ) { marker=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTextFormatMarkerPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("format"));
	outFields->push(HX_CSTRING("marker"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxTextFormat*/ ,(int)offsetof(FlxTextFormatMarkerPair_obj,format),HX_CSTRING("format")},
	{hx::fsString,(int)offsetof(FlxTextFormatMarkerPair_obj,marker),HX_CSTRING("marker")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("format"),
	HX_CSTRING("marker"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextFormatMarkerPair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextFormatMarkerPair_obj::__mClass,"__mClass");
};

#endif

Class FlxTextFormatMarkerPair_obj::__mClass;

void FlxTextFormatMarkerPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.FlxTextFormatMarkerPair"), hx::TCanCast< FlxTextFormatMarkerPair_obj> ,sStaticFields,sMemberFields,
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

void FlxTextFormatMarkerPair_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
