#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

Void Reg_obj::__construct()
{
HX_STACK_FRAME("Reg","new",0x20ecdc26,"Reg.new","Reg.hx",12,0x34f46a0a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Reg_obj::~Reg_obj() { }

Dynamic Reg_obj::__CreateEmpty() { return  new Reg_obj; }
hx::ObjectPtr< Reg_obj > Reg_obj::__new()
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

Dynamic Reg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

int Reg_obj::currentLevel;

int Reg_obj::TILE_SIZE;

::flixel::math::FlxPoint Reg_obj::centroid( Array< ::Dynamic > points){
	HX_STACK_FRAME("Reg","centroid",0xc44e66ba,"Reg.centroid","Reg.hx",17,0x34f46a0a)
	HX_STACK_ARG(points,"points")
	HX_STACK_LINE(18)
	::flixel::math::FlxPoint center = ::flixel::math::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(center,"center");
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(19)
		int _g = points->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		while((true)){
			HX_STACK_LINE(19)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(19)
				break;
			}
			HX_STACK_LINE(19)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(21)
			{
				HX_STACK_LINE(21)
				::flixel::math::FlxPoint _g2 = center;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(21)
				_g2->set_x((_g2->x + points->__get(i).StaticCast< ::flixel::math::FlxPoint >()->x));
			}
			HX_STACK_LINE(22)
			{
				HX_STACK_LINE(22)
				::flixel::math::FlxPoint _g2 = center;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(22)
				_g2->set_y((_g2->y + points->__get(i).StaticCast< ::flixel::math::FlxPoint >()->y));
			}
		}
	}
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::flixel::math::FlxPoint _g = center;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		_g->set_x((Float(_g->x) / Float(points->length)));
	}
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::flixel::math::FlxPoint _g = center;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		_g->set_y((Float(_g->y) / Float(points->length)));
	}
	HX_STACK_LINE(28)
	return center;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reg_obj,centroid,return )


Reg_obj::Reg_obj()
{
}

Dynamic Reg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"centroid") ) { return centroid_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TILE_SIZE") ) { return TILE_SIZE; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { return currentLevel; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"TILE_SIZE") ) { TILE_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reg_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("currentLevel"),
	HX_CSTRING("TILE_SIZE"),
	HX_CSTRING("centroid"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Reg_obj::currentLevel,"currentLevel");
	HX_MARK_MEMBER_NAME(Reg_obj::TILE_SIZE,"TILE_SIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Reg_obj::currentLevel,"currentLevel");
	HX_VISIT_MEMBER_NAME(Reg_obj::TILE_SIZE,"TILE_SIZE");
};

#endif

Class Reg_obj::__mClass;

void Reg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Reg"), hx::TCanCast< Reg_obj> ,sStaticFields,sMemberFields,
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

void Reg_obj::__boot()
{
	TILE_SIZE= (int)40;
}

