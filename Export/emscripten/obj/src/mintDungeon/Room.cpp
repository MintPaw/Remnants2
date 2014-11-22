#include <hxcpp.h>

#ifndef INCLUDED_mintDungeon_DrawableObject
#include <mintDungeon/DrawableObject.h>
#endif
#ifndef INCLUDED_mintDungeon_Room
#include <mintDungeon/Room.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace mintDungeon{

Void Room_obj::__construct()
{
HX_STACK_FRAME("mintDungeon.Room","new",0x94ae8963,"mintDungeon.Room.new","mintDungeon/Room.hx",6,0x721d658c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	this->location = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(12)
	super::__construct();
}
;
	return null();
}

//Room_obj::~Room_obj() { }

Dynamic Room_obj::__CreateEmpty() { return  new Room_obj; }
hx::ObjectPtr< Room_obj > Room_obj::__new()
{  hx::ObjectPtr< Room_obj > result = new Room_obj();
	result->__construct();
	return result;}

Dynamic Room_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Room_obj > result = new Room_obj();
	result->__construct();
	return result;}


Room_obj::Room_obj()
{
}

void Room_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Room);
	HX_MARK_MEMBER_NAME(location,"location");
	::mintDungeon::DrawableObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Room_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(location,"location");
	::mintDungeon::DrawableObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Room_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { return location; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Room_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { location=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Room_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("location"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Room_obj,location),HX_CSTRING("location")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("location"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Room_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Room_obj::__mClass,"__mClass");
};

#endif

Class Room_obj::__mClass;

void Room_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("mintDungeon.Room"), hx::TCanCast< Room_obj> ,sStaticFields,sMemberFields,
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

void Room_obj::__boot()
{
}

} // end namespace mintDungeon
