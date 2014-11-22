#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
namespace flixel{
namespace math{

Void FlxMatrix_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
HX_STACK_FRAME("flixel.math.FlxMatrix","new",0x62dffc51,"flixel.math.FlxMatrix.new","flixel/math/FlxMatrix.hx",19,0x564a249f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_a,"a")
HX_STACK_ARG(__o_b,"b")
HX_STACK_ARG(__o_c,"c")
HX_STACK_ARG(__o_d,"d")
HX_STACK_ARG(__o_tx,"tx")
HX_STACK_ARG(__o_ty,"ty")
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
	HX_STACK_LINE(19)
	super::__construct(a,b,c,d,tx,ty);
}
;
	return null();
}

//FlxMatrix_obj::~FlxMatrix_obj() { }

Dynamic FlxMatrix_obj::__CreateEmpty() { return  new FlxMatrix_obj; }
hx::ObjectPtr< FlxMatrix_obj > FlxMatrix_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< FlxMatrix_obj > result = new FlxMatrix_obj();
	result->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return result;}

Dynamic FlxMatrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMatrix_obj > result = new FlxMatrix_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::flixel::math::FlxMatrix FlxMatrix_obj::rotateWithTrig( Float cos,Float sin){
	HX_STACK_FRAME("flixel.math.FlxMatrix","rotateWithTrig",0xc09bf72c,"flixel.math.FlxMatrix.rotateWithTrig","flixel/math/FlxMatrix.hx",30,0x564a249f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cos,"cos")
	HX_STACK_ARG(sin,"sin")
	HX_STACK_LINE(31)
	Float a1 = ((this->a * cos) - (this->b * sin));		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(32)
	this->b = ((this->a * sin) + (this->b * cos));
	HX_STACK_LINE(33)
	this->a = a1;
	HX_STACK_LINE(35)
	Float c1 = ((this->c * cos) - (this->d * sin));		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(36)
	this->d = ((this->c * sin) + (this->d * cos));
	HX_STACK_LINE(37)
	this->c = c1;
	HX_STACK_LINE(39)
	Float tx1 = ((this->tx * cos) - (this->ty * sin));		HX_STACK_VAR(tx1,"tx1");
	HX_STACK_LINE(40)
	this->ty = ((this->tx * sin) + (this->ty * cos));
	HX_STACK_LINE(41)
	this->tx = tx1;
	HX_STACK_LINE(43)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMatrix_obj,rotateWithTrig,return )

::flixel::math::FlxMatrix FlxMatrix_obj::rotateByPositive90( ){
	HX_STACK_FRAME("flixel.math.FlxMatrix","rotateByPositive90",0xae397fb1,"flixel.math.FlxMatrix.rotateByPositive90","flixel/math/FlxMatrix.hx",51,0x564a249f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	this->setTo(-(this->b),this->a,-(this->d),this->c,-(this->ty),this->tx);
	HX_STACK_LINE(53)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMatrix_obj,rotateByPositive90,return )

::flixel::math::FlxMatrix FlxMatrix_obj::rotateByNegative90( ){
	HX_STACK_FRAME("flixel.math.FlxMatrix","rotateByNegative90",0xf52d666d,"flixel.math.FlxMatrix.rotateByNegative90","flixel/math/FlxMatrix.hx",61,0x564a249f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	this->setTo(this->b,-(this->a),this->d,-(this->c),this->ty,-(this->tx));
	HX_STACK_LINE(63)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMatrix_obj,rotateByNegative90,return )

::flixel::math::FlxMatrix FlxMatrix_obj::matrix;


FlxMatrix_obj::FlxMatrix_obj()
{
}

Dynamic FlxMatrix_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rotateWithTrig") ) { return rotateWithTrig_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"rotateByPositive90") ) { return rotateByPositive90_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateByNegative90") ) { return rotateByNegative90_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

static int __id_matrix = __hxcpp_field_to_id("matrix");
static int __id_rotateWithTrig = __hxcpp_field_to_id("rotateWithTrig");
static int __id_rotateByPositive90 = __hxcpp_field_to_id("rotateByPositive90");
static int __id_rotateByNegative90 = __hxcpp_field_to_id("rotateByNegative90");


double FlxMatrix_obj::__INumField(int inFieldID)
{
	return super::__INumField(inFieldID);
}

Dynamic FlxMatrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::flixel::math::FlxMatrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMatrix_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("matrix"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("rotateWithTrig"),
	HX_CSTRING("rotateByPositive90"),
	HX_CSTRING("rotateByNegative90"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMatrix_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMatrix_obj::matrix,"matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMatrix_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMatrix_obj::matrix,"matrix");
};

#endif

Class FlxMatrix_obj::__mClass;

void FlxMatrix_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.math.FlxMatrix"), hx::TCanCast< FlxMatrix_obj> ,sStaticFields,sMemberFields,
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

void FlxMatrix_obj::__boot()
{
	matrix= ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace math
