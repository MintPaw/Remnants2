#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPathManager
#include <flixel/util/FlxPathManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
namespace flixel{
namespace util{

Void FlxPathManager_obj::__construct()
{
HX_STACK_FRAME("flixel.util.FlxPathManager","new",0x379870e2,"flixel.util.FlxPathManager.new","flixel/util/FlxPath.hx",718,0x22aae741)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(720)
	this->_paths = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(724)
	super::__construct();
	HX_STACK_LINE(728)
	::flixel::FlxG_obj::signals->stateSwitched->add(this->clear_dyn());
}
;
	return null();
}

//FlxPathManager_obj::~FlxPathManager_obj() { }

Dynamic FlxPathManager_obj::__CreateEmpty() { return  new FlxPathManager_obj; }
hx::ObjectPtr< FlxPathManager_obj > FlxPathManager_obj::__new()
{  hx::ObjectPtr< FlxPathManager_obj > result = new FlxPathManager_obj();
	result->__construct();
	return result;}

Dynamic FlxPathManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPathManager_obj > result = new FlxPathManager_obj();
	result->__construct();
	return result;}

Void FlxPathManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxPathManager","destroy",0x44b2367c,"flixel.util.FlxPathManager.destroy","flixel/util/FlxPath.hx",735,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(736)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_util_FlxPath(this->_paths,null());
		HX_STACK_LINE(737)
		this->_paths = null();
		HX_STACK_LINE(738)
		::flixel::FlxG_obj::signals->stateSwitched->remove(this->clear_dyn());
		HX_STACK_LINE(739)
		this->super::destroy();
	}
return null();
}


Void FlxPathManager_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.util.FlxPathManager","update",0x4a52a2c7,"flixel.util.FlxPathManager.update","flixel/util/FlxPath.hx",744,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(744)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(744)
		Array< ::Dynamic > _g1 = this->_paths;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(744)
		while((true)){
			HX_STACK_LINE(744)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(744)
				break;
			}
			HX_STACK_LINE(744)
			::flixel::util::FlxPath path = _g1->__get(_g).StaticCast< ::flixel::util::FlxPath >();		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(744)
			++(_g);
			HX_STACK_LINE(746)
			if ((path->active)){
				HX_STACK_LINE(748)
				path->update(elapsed);
			}
		}
	}
return null();
}


Void FlxPathManager_obj::add( ::flixel::util::FlxPath Path){
{
		HX_STACK_FRAME("flixel.util.FlxPathManager","add",0x378e92a3,"flixel.util.FlxPathManager.add","flixel/util/FlxPath.hx",782,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Path,"Path")
		HX_STACK_LINE(782)
		this->_paths->push(Path);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPathManager_obj,add,(void))

Void FlxPathManager_obj::remove( ::flixel::util::FlxPath Path,hx::Null< bool >  __o_ReturnInPool){
bool ReturnInPool = __o_ReturnInPool.Default(true);
	HX_STACK_FRAME("flixel.util.FlxPathManager","remove",0xc7d5b902,"flixel.util.FlxPathManager.remove","flixel/util/FlxPath.hx",793,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Path,"Path")
	HX_STACK_ARG(ReturnInPool,"ReturnInPool")
{
		HX_STACK_LINE(793)
		Array< ::Dynamic > array = this->_paths;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(793)
		int index = array->indexOf(Path,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(793)
		if (((index != (int)-1))){
			HX_STACK_LINE(793)
			array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::util::FlxPath >();
			HX_STACK_LINE(793)
			array->pop().StaticCast< ::flixel::util::FlxPath >();
			HX_STACK_LINE(793)
			array;
		}
		else{
			HX_STACK_LINE(793)
			array;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPathManager_obj,remove,(void))

Void FlxPathManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.util.FlxPathManager","clear",0x526ab68f,"flixel.util.FlxPathManager.clear","flixel/util/FlxPath.hx",801,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(801)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_util_FlxPath(this->_paths,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPathManager_obj,clear,(void))


FlxPathManager_obj::FlxPathManager_obj()
{
}

void FlxPathManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPathManager);
	HX_MARK_MEMBER_NAME(_paths,"_paths");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxPathManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_paths,"_paths");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxPathManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_paths") ) { return _paths; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPathManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_paths") ) { _paths=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPathManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_paths"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxPathManager_obj,_paths),HX_CSTRING("_paths")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_paths"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPathManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPathManager_obj::__mClass,"__mClass");
};

#endif

Class FlxPathManager_obj::__mClass;

void FlxPathManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxPathManager"), hx::TCanCast< FlxPathManager_obj> ,sStaticFields,sMemberFields,
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

void FlxPathManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
