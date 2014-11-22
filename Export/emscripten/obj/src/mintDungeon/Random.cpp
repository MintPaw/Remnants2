#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_mintDungeon_Random
#include <mintDungeon/Random.h>
#endif
namespace mintDungeon{

Void Random_obj::__construct()
{
	return null();
}

//Random_obj::~Random_obj() { }

Dynamic Random_obj::__CreateEmpty() { return  new Random_obj; }
hx::ObjectPtr< Random_obj > Random_obj::__new()
{  hx::ObjectPtr< Random_obj > result = new Random_obj();
	result->__construct();
	return result;}

Dynamic Random_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Random_obj > result = new Random_obj();
	result->__construct();
	return result;}

int Random_obj::seed;

Void Random_obj::giveSeed( int s){
{
		HX_STACK_FRAME("mintDungeon.Random","giveSeed",0x0de77597,"mintDungeon.Random.giveSeed","mintDungeon/Random.hx",16,0xccfee6e4)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(16)
		::mintDungeon::Random_obj::seed = s;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,giveSeed,(void))

Float Random_obj::random( ){
	HX_STACK_FRAME("mintDungeon.Random","random",0xdc74d478,"mintDungeon.Random.random","mintDungeon/Random.hx",21,0xccfee6e4)
	HX_STACK_LINE(21)
	return ::Math_obj::random();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,random,return )

int Random_obj::minMaxInt( Float min,Float max){
	HX_STACK_FRAME("mintDungeon.Random","minMaxInt",0x45217c88,"mintDungeon.Random.minMaxInt","mintDungeon/Random.hx",25,0xccfee6e4)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(26)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	Float _g1 = (_g * (((max - min) + (int)1)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(26)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(26)
	Float _g3 = (min + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(26)
	return ::Math_obj::round(_g3);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,minMaxInt,return )


Random_obj::Random_obj()
{
}

Dynamic Random_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seed") ) { return seed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"random") ) { return random_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"giveSeed") ) { return giveSeed_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minMaxInt") ) { return minMaxInt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Random_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seed") ) { seed=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Random_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("seed"),
	HX_CSTRING("giveSeed"),
	HX_CSTRING("random"),
	HX_CSTRING("minMaxInt"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Random_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Random_obj::seed,"seed");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Random_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Random_obj::seed,"seed");
};

#endif

Class Random_obj::__mClass;

void Random_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("mintDungeon.Random"), hx::TCanCast< Random_obj> ,sStaticFields,sMemberFields,
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

void Random_obj::__boot()
{
}

} // end namespace mintDungeon
