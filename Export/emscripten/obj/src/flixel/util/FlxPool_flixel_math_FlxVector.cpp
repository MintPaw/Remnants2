#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#include <flixel/util/FlxPool_flixel_math_FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace util{

Void FlxPool_flixel_math_FlxVector_obj::__construct(::Class classObj)
{
HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","new",0xff321b68,"flixel.util.FlxPool_flixel_math_FlxVector.new","flixel/util/FlxPool.hx",10,0xdd4de86a)
HX_STACK_THIS(this)
HX_STACK_ARG(classObj,"classObj")
{
	HX_STACK_LINE(21)
	this->_count = (int)0;
	HX_STACK_LINE(14)
	this->_pool = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(25)
	this->_class = classObj;
}
;
	return null();
}

//FlxPool_flixel_math_FlxVector_obj::~FlxPool_flixel_math_FlxVector_obj() { }

Dynamic FlxPool_flixel_math_FlxVector_obj::__CreateEmpty() { return  new FlxPool_flixel_math_FlxVector_obj; }
hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > FlxPool_flixel_math_FlxVector_obj::__new(::Class classObj)
{  hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > result = new FlxPool_flixel_math_FlxVector_obj();
	result->__construct(classObj);
	return result;}

Dynamic FlxPool_flixel_math_FlxVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > result = new FlxPool_flixel_math_FlxVector_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::math::FlxVector FlxPool_flixel_math_FlxVector_obj::get( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","get",0xff2ccb9e,"flixel.util.FlxPool_flixel_math_FlxVector.get","flixel/util/FlxPool.hx",29,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	if (((this->_count == (int)0))){
		HX_STACK_LINE(32)
		return ::Type_obj::createInstance(this->_class,Dynamic( Array_obj<Dynamic>::__new()));
	}
	HX_STACK_LINE(34)
	int _g = --(this->_count);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(34)
	return this->_pool->__get(_g).StaticCast< ::flixel::math::FlxVector >();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxVector_obj,get,return )

Void FlxPool_flixel_math_FlxVector_obj::put( ::flixel::math::FlxVector obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","put",0xff33add7,"flixel.util.FlxPool_flixel_math_FlxVector.put","flixel/util/FlxPool.hx",40,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(40)
		if (((obj != null()))){
			HX_STACK_LINE(42)
			int i = this->_pool->indexOf(obj,null());		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(44)
			if (((bool((i == (int)-1)) || bool((i >= this->_count))))){
				HX_STACK_LINE(46)
				obj->destroy();
				HX_STACK_LINE(47)
				int _g = (this->_count)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(47)
				this->_pool[_g] = obj;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxVector_obj,put,(void))

Void FlxPool_flixel_math_FlxVector_obj::putUnsafe( ::flixel::math::FlxVector obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","putUnsafe",0x73f1215d,"flixel.util.FlxPool_flixel_math_FlxVector.putUnsafe","flixel/util/FlxPool.hx",54,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(54)
		if (((obj != null()))){
			HX_STACK_LINE(56)
			obj->destroy();
			HX_STACK_LINE(57)
			int _g = (this->_count)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			this->_pool[_g] = obj;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxVector_obj,putUnsafe,(void))

Void FlxPool_flixel_math_FlxVector_obj::preAllocate( int numObjects){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","preAllocate",0x047fdd08,"flixel.util.FlxPool_flixel_math_FlxVector.preAllocate","flixel/util/FlxPool.hx",63,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(numObjects,"numObjects")
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			int _g = (numObjects)--;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(65)
			int _g1 = (this->_count)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(65)
			this->_pool[_g1] = ::Type_obj::createInstance(this->_class,Dynamic( Array_obj<Dynamic>::__new()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxVector_obj,preAllocate,(void))

Array< ::Dynamic > FlxPool_flixel_math_FlxVector_obj::clear( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","clear",0x73a88e95,"flixel.util.FlxPool_flixel_math_FlxVector.clear","flixel/util/FlxPool.hx",70,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	this->_count = (int)0;
	HX_STACK_LINE(72)
	Array< ::Dynamic > oldPool = this->_pool;		HX_STACK_VAR(oldPool,"oldPool");
	HX_STACK_LINE(73)
	this->_pool = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(74)
	return oldPool;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxVector_obj,clear,return )

int FlxPool_flixel_math_FlxVector_obj::get_length( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","get_length",0xd973aaa7,"flixel.util.FlxPool_flixel_math_FlxVector.get_length","flixel/util/FlxPool.hx",79,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxVector_obj,get_length,return )


FlxPool_flixel_math_FlxVector_obj::FlxPool_flixel_math_FlxVector_obj()
{
}

void FlxPool_flixel_math_FlxVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPool_flixel_math_FlxVector);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_END_CLASS();
}

void FlxPool_flixel_math_FlxVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(_count,"_count");
}

Dynamic FlxPool_flixel_math_FlxVector_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"putUnsafe") ) { return putUnsafe_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preAllocate") ) { return preAllocate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPool_flixel_math_FlxVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPool_flixel_math_FlxVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("_pool"));
	outFields->push(HX_CSTRING("_class"));
	outFields->push(HX_CSTRING("_count"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxPool_flixel_math_FlxVector_obj,_pool),HX_CSTRING("_pool")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxPool_flixel_math_FlxVector_obj,_class),HX_CSTRING("_class")},
	{hx::fsInt,(int)offsetof(FlxPool_flixel_math_FlxVector_obj,_count),HX_CSTRING("_count")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_pool"),
	HX_CSTRING("_class"),
	HX_CSTRING("_count"),
	HX_CSTRING("get"),
	HX_CSTRING("put"),
	HX_CSTRING("putUnsafe"),
	HX_CSTRING("preAllocate"),
	HX_CSTRING("clear"),
	HX_CSTRING("get_length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPool_flixel_math_FlxVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPool_flixel_math_FlxVector_obj::__mClass,"__mClass");
};

#endif

Class FlxPool_flixel_math_FlxVector_obj::__mClass;

void FlxPool_flixel_math_FlxVector_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxPool_flixel_math_FlxVector"), hx::TCanCast< FlxPool_flixel_math_FlxVector_obj> ,sStaticFields,sMemberFields,
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

void FlxPool_flixel_math_FlxVector_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
