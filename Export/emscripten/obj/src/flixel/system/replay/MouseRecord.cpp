#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
namespace flixel{
namespace system{
namespace replay{

Void MouseRecord_obj::__construct(int x,int y,int button,int wheel)
{
HX_STACK_FRAME("flixel.system.replay.MouseRecord","new",0xbd087b2e,"flixel.system.replay.MouseRecord.new","flixel/system/replay/MouseRecord.hx",31,0x6a00bda3)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(button,"button")
HX_STACK_ARG(wheel,"wheel")
{
	HX_STACK_LINE(32)
	this->x = x;
	HX_STACK_LINE(33)
	this->y = y;
	HX_STACK_LINE(34)
	this->button = button;
	HX_STACK_LINE(35)
	this->wheel = wheel;
}
;
	return null();
}

//MouseRecord_obj::~MouseRecord_obj() { }

Dynamic MouseRecord_obj::__CreateEmpty() { return  new MouseRecord_obj; }
hx::ObjectPtr< MouseRecord_obj > MouseRecord_obj::__new(int x,int y,int button,int wheel)
{  hx::ObjectPtr< MouseRecord_obj > result = new MouseRecord_obj();
	result->__construct(x,y,button,wheel);
	return result;}

Dynamic MouseRecord_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseRecord_obj > result = new MouseRecord_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


MouseRecord_obj::MouseRecord_obj()
{
}

Dynamic MouseRecord_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseRecord_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseRecord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("button"));
	outFields->push(HX_CSTRING("wheel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MouseRecord_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(MouseRecord_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(MouseRecord_obj,button),HX_CSTRING("button")},
	{hx::fsInt,(int)offsetof(MouseRecord_obj,wheel),HX_CSTRING("wheel")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("button"),
	HX_CSTRING("wheel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseRecord_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseRecord_obj::__mClass,"__mClass");
};

#endif

Class MouseRecord_obj::__mClass;

void MouseRecord_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.replay.MouseRecord"), hx::TCanCast< MouseRecord_obj> ,sStaticFields,sMemberFields,
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

void MouseRecord_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace replay
