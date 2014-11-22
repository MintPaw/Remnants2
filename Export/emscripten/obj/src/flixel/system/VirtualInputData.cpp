#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_VirtualInputData
#include <flixel/system/VirtualInputData.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace system{

Void VirtualInputData_obj::__construct(Dynamic __o_size)
{
HX_STACK_FRAME("flixel.system.VirtualInputData","new",0x4566b028,"flixel.system.VirtualInputData.new","openfl/_v2/Assets.hx",1697,0x2846aac8)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
Dynamic size = __o_size.Default(0);
{
	HX_STACK_LINE(1699)
	super::__construct(null());
	HX_STACK_LINE(1704)
	{
		HX_STACK_LINE(1704)
		::haxe::io::Bytes bytes = ::haxe::Resource_obj::getBytes(::flixel::system::VirtualInputData_obj::resourceName);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(1704)
		this->b = bytes->b;
		HX_STACK_LINE(1704)
		this->length = bytes->length;
	}
}
;
	return null();
}

//VirtualInputData_obj::~VirtualInputData_obj() { }

Dynamic VirtualInputData_obj::__CreateEmpty() { return  new VirtualInputData_obj; }
hx::ObjectPtr< VirtualInputData_obj > VirtualInputData_obj::__new(Dynamic __o_size)
{  hx::ObjectPtr< VirtualInputData_obj > result = new VirtualInputData_obj();
	result->__construct(__o_size);
	return result;}

Dynamic VirtualInputData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VirtualInputData_obj > result = new VirtualInputData_obj();
	result->__construct(inArgs[0]);
	return result;}

::String VirtualInputData_obj::resourceName;


VirtualInputData_obj::VirtualInputData_obj()
{
}

Dynamic VirtualInputData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VirtualInputData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VirtualInputData_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("resourceName"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VirtualInputData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VirtualInputData_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VirtualInputData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VirtualInputData_obj::resourceName,"resourceName");
};

#endif

Class VirtualInputData_obj::__mClass;

void VirtualInputData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.VirtualInputData"), hx::TCanCast< VirtualInputData_obj> ,sStaticFields,sMemberFields,
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

void VirtualInputData_obj::__boot()
{
	resourceName= HX_CSTRING("__ASSET__:file_flixel_system_VirtualInputData");
}

} // end namespace flixel
} // end namespace system
