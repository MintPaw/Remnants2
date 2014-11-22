#include <hxcpp.h>

#ifndef INCLUDED_mintDungeon_DrawableObject
#include <mintDungeon/DrawableObject.h>
#endif
#ifndef INCLUDED_mintDungeon_Hallway
#include <mintDungeon/Hallway.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace mintDungeon{

Void Hallway_obj::__construct()
{
HX_STACK_FRAME("mintDungeon.Hallway","new",0x9a05cdf2,"mintDungeon.Hallway.new","mintDungeon/Hallway.hx",6,0x64dc20ff)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->endPoint = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(8)
	this->startPoint = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//Hallway_obj::~Hallway_obj() { }

Dynamic Hallway_obj::__CreateEmpty() { return  new Hallway_obj; }
hx::ObjectPtr< Hallway_obj > Hallway_obj::__new()
{  hx::ObjectPtr< Hallway_obj > result = new Hallway_obj();
	result->__construct();
	return result;}

Dynamic Hallway_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hallway_obj > result = new Hallway_obj();
	result->__construct();
	return result;}


Hallway_obj::Hallway_obj()
{
}

void Hallway_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hallway);
	HX_MARK_MEMBER_NAME(startPoint,"startPoint");
	HX_MARK_MEMBER_NAME(endPoint,"endPoint");
	HX_MARK_MEMBER_NAME(direction,"direction");
	::mintDungeon::DrawableObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Hallway_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(startPoint,"startPoint");
	HX_VISIT_MEMBER_NAME(endPoint,"endPoint");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	::mintDungeon::DrawableObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Hallway_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"endPoint") ) { return endPoint; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startPoint") ) { return startPoint; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hallway_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"endPoint") ) { endPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startPoint") ) { startPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hallway_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("startPoint"));
	outFields->push(HX_CSTRING("endPoint"));
	outFields->push(HX_CSTRING("direction"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Hallway_obj,startPoint),HX_CSTRING("startPoint")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Hallway_obj,endPoint),HX_CSTRING("endPoint")},
	{hx::fsInt,(int)offsetof(Hallway_obj,direction),HX_CSTRING("direction")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("startPoint"),
	HX_CSTRING("endPoint"),
	HX_CSTRING("direction"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hallway_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hallway_obj::__mClass,"__mClass");
};

#endif

Class Hallway_obj::__mClass;

void Hallway_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("mintDungeon.Hallway"), hx::TCanCast< Hallway_obj> ,sStaticFields,sMemberFields,
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

void Hallway_obj::__boot()
{
}

} // end namespace mintDungeon
