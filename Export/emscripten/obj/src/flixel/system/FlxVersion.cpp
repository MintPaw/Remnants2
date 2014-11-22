#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
namespace flixel{
namespace system{

Void FlxVersion_obj::__construct(int Major,int Minor,int Patch)
{
HX_STACK_FRAME("flixel.system.FlxVersion","new",0xf87933e5,"flixel.system.FlxVersion.new","flixel/system/FlxVersion.hx",15,0x2361490b)
HX_STACK_THIS(this)
HX_STACK_ARG(Major,"Major")
HX_STACK_ARG(Minor,"Minor")
HX_STACK_ARG(Patch,"Patch")
{
	HX_STACK_LINE(16)
	this->major = Major;
	HX_STACK_LINE(17)
	this->minor = Minor;
	HX_STACK_LINE(18)
	this->patch = Patch;
}
;
	return null();
}

//FlxVersion_obj::~FlxVersion_obj() { }

Dynamic FlxVersion_obj::__CreateEmpty() { return  new FlxVersion_obj; }
hx::ObjectPtr< FlxVersion_obj > FlxVersion_obj::__new(int Major,int Minor,int Patch)
{  hx::ObjectPtr< FlxVersion_obj > result = new FlxVersion_obj();
	result->__construct(Major,Minor,Patch);
	return result;}

Dynamic FlxVersion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVersion_obj > result = new FlxVersion_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String FlxVersion_obj::toString( ){
	HX_STACK_FRAME("flixel.system.FlxVersion","toString",0x1c598b07,"flixel.system.FlxVersion.toString","flixel/system/FlxVersion.hx",27,0x2361490b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::String sha = ::flixel::system::FlxVersion_obj::sha;		HX_STACK_VAR(sha,"sha");
	HX_STACK_LINE(29)
	if (((sha != HX_CSTRING("")))){
		HX_STACK_LINE(31)
		sha = (HX_CSTRING("@") + sha);
	}
	HX_STACK_LINE(33)
	return ((((((HX_CSTRING("HaxeFlixel ") + this->major) + HX_CSTRING(".")) + this->minor) + HX_CSTRING(".")) + this->patch) + sha);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVersion_obj,toString,return )

Dynamic FlxVersion_obj::sha;


FlxVersion_obj::FlxVersion_obj()
{
}

Dynamic FlxVersion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sha") ) { return sha; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { return major; }
		if (HX_FIELD_EQ(inName,"minor") ) { return minor; }
		if (HX_FIELD_EQ(inName,"patch") ) { return patch; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVersion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sha") ) { sha=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { major=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minor") ) { minor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"patch") ) { patch=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVersion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("major"));
	outFields->push(HX_CSTRING("minor"));
	outFields->push(HX_CSTRING("patch"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sha"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxVersion_obj,major),HX_CSTRING("major")},
	{hx::fsInt,(int)offsetof(FlxVersion_obj,minor),HX_CSTRING("minor")},
	{hx::fsInt,(int)offsetof(FlxVersion_obj,patch),HX_CSTRING("patch")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("major"),
	HX_CSTRING("minor"),
	HX_CSTRING("patch"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVersion_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxVersion_obj::sha,"sha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVersion_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxVersion_obj::sha,"sha");
};

#endif

Class FlxVersion_obj::__mClass;

void FlxVersion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxVersion"), hx::TCanCast< FlxVersion_obj> ,sStaticFields,sMemberFields,
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

void FlxVersion_obj::__boot()
{
	sha= HX_CSTRING("");
}

} // end namespace flixel
} // end namespace system
