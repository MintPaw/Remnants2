#include <hxcpp.h>

#ifndef INCLUDED_flixel_effects_postprocess__PostProcess_Uniform
#include <flixel/effects/postprocess/_PostProcess/Uniform.h>
#endif
namespace flixel{
namespace effects{
namespace postprocess{
namespace _PostProcess{

Void Uniform_obj::__construct(int id,Float value)
{
HX_STACK_FRAME("flixel.effects.postprocess._PostProcess.Uniform","new",0xa5501325,"flixel.effects.postprocess._PostProcess.Uniform.new","flixel/effects/postprocess/PostProcess.hx",18,0x6a90b60f)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
HX_STACK_ARG(value,"value")
{
	HX_STACK_LINE(19)
	this->id = id;
	HX_STACK_LINE(20)
	this->value = value;
}
;
	return null();
}

//Uniform_obj::~Uniform_obj() { }

Dynamic Uniform_obj::__CreateEmpty() { return  new Uniform_obj; }
hx::ObjectPtr< Uniform_obj > Uniform_obj::__new(int id,Float value)
{  hx::ObjectPtr< Uniform_obj > result = new Uniform_obj();
	result->__construct(id,value);
	return result;}

Dynamic Uniform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uniform_obj > result = new Uniform_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Uniform_obj::Uniform_obj()
{
}

Dynamic Uniform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Uniform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uniform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("value"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Uniform_obj,id),HX_CSTRING("id")},
	{hx::fsFloat,(int)offsetof(Uniform_obj,value),HX_CSTRING("value")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("value"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#endif

Class Uniform_obj::__mClass;

void Uniform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.postprocess._PostProcess.Uniform"), hx::TCanCast< Uniform_obj> ,sStaticFields,sMemberFields,
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

void Uniform_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace postprocess
} // end namespace _PostProcess
