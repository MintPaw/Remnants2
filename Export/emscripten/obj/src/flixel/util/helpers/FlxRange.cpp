#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
namespace flixel{
namespace util{
namespace helpers{

Void FlxRange_obj::__construct(Dynamic start,Dynamic end)
{
HX_STACK_FRAME("flixel.util.helpers.FlxRange","new",0x6d2b50a0,"flixel.util.helpers.FlxRange.new","flixel/util/helpers/FlxRange.hx",9,0x9ab2f00f)
HX_STACK_THIS(this)
HX_STACK_ARG(start,"start")
HX_STACK_ARG(end,"end")
{
	HX_STACK_LINE(22)
	this->active = false;
	HX_STACK_LINE(32)
	this->start = start;
	HX_STACK_LINE(33)
	if (((end == null()))){
		HX_STACK_LINE(33)
		this->end = start;
	}
	else{
		HX_STACK_LINE(33)
		this->end = end;
	}
}
;
	return null();
}

//FlxRange_obj::~FlxRange_obj() { }

Dynamic FlxRange_obj::__CreateEmpty() { return  new FlxRange_obj; }
hx::ObjectPtr< FlxRange_obj > FlxRange_obj::__new(Dynamic start,Dynamic end)
{  hx::ObjectPtr< FlxRange_obj > result = new FlxRange_obj();
	result->__construct(start,end);
	return result;}

Dynamic FlxRange_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRange_obj > result = new FlxRange_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flixel::util::helpers::FlxRange FlxRange_obj::set( Dynamic start,Dynamic end){
	HX_STACK_FRAME("flixel.util.helpers.FlxRange","set",0x6d2f1be2,"flixel.util.helpers.FlxRange.set","flixel/util/helpers/FlxRange.hx",44,0x9ab2f00f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(45)
	this->start = start;
	HX_STACK_LINE(46)
	if (((end == null()))){
		HX_STACK_LINE(46)
		this->end = start;
	}
	else{
		HX_STACK_LINE(46)
		this->end = end;
	}
	HX_STACK_LINE(48)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRange_obj,set,return )

bool FlxRange_obj::equals( ::flixel::util::helpers::FlxRange OtherFlxRange){
	HX_STACK_FRAME("flixel.util.helpers.FlxRange","equals",0x791915ff,"flixel.util.helpers.FlxRange.equals","flixel/util/helpers/FlxRange.hx",59,0x9ab2f00f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OtherFlxRange,"OtherFlxRange")
	HX_STACK_LINE(59)
	return (bool((this->start == OtherFlxRange->start)) && bool((this->end == OtherFlxRange->end)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRange_obj,equals,return )

::String FlxRange_obj::toString( ){
	HX_STACK_FRAME("flixel.util.helpers.FlxRange","toString",0x253e686c,"flixel.util.helpers.FlxRange.toString","flixel/util/helpers/FlxRange.hx",66,0x9ab2f00f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(68)
		_this->label = HX_CSTRING("start");
		HX_STACK_LINE(68)
		_this->value = this->start;
		HX_STACK_LINE(68)
		_g = _this;
	}
	HX_STACK_LINE(69)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(69)
		_this->label = HX_CSTRING("end");
		HX_STACK_LINE(69)
		_this->value = this->end;
		HX_STACK_LINE(69)
		_g1 = _this;
	}
	HX_STACK_LINE(67)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(67)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRange_obj,toString,return )


FlxRange_obj::FlxRange_obj()
{
}

void FlxRange_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRange);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxRange_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic FlxRange_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRange_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRange_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("end"));
	outFields->push(HX_CSTRING("active"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxRange_obj,start),HX_CSTRING("start")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxRange_obj,end),HX_CSTRING("end")},
	{hx::fsBool,(int)offsetof(FlxRange_obj,active),HX_CSTRING("active")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("start"),
	HX_CSTRING("end"),
	HX_CSTRING("active"),
	HX_CSTRING("set"),
	HX_CSTRING("equals"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRange_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRange_obj::__mClass,"__mClass");
};

#endif

Class FlxRange_obj::__mClass;

void FlxRange_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.helpers.FlxRange"), hx::TCanCast< FlxRange_obj> ,sStaticFields,sMemberFields,
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

void FlxRange_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace helpers
