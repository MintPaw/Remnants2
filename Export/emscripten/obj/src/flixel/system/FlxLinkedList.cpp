#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_system_FlxLinkedList
#include <flixel/system/FlxLinkedList.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace system{

Void FlxLinkedList_obj::__construct()
{
HX_STACK_FRAME("flixel.system.FlxLinkedList","new",0xf2c6bf4e,"flixel.system.FlxLinkedList.new","flixel/system/FlxLinkedList.hx",11,0xa1edd602)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(65)
	this->exists = true;
}
;
	return null();
}

//FlxLinkedList_obj::~FlxLinkedList_obj() { }

Dynamic FlxLinkedList_obj::__CreateEmpty() { return  new FlxLinkedList_obj; }
hx::ObjectPtr< FlxLinkedList_obj > FlxLinkedList_obj::__new()
{  hx::ObjectPtr< FlxLinkedList_obj > result = new FlxLinkedList_obj();
	result->__construct();
	return result;}

Dynamic FlxLinkedList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxLinkedList_obj > result = new FlxLinkedList_obj();
	result->__construct();
	return result;}

hx::Object *FlxLinkedList_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxLinkedList_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.FlxLinkedList","destroy",0x9f662ae8,"flixel.system.FlxLinkedList.destroy","flixel/system/FlxLinkedList.hx",76,0xa1edd602)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		if ((!(this->exists))){
			HX_STACK_LINE(79)
			return null();
		}
		HX_STACK_LINE(81)
		this->object = null();
		HX_STACK_LINE(82)
		if (((this->next != null()))){
			HX_STACK_LINE(84)
			this->next->destroy();
		}
		HX_STACK_LINE(86)
		this->exists = false;
		HX_STACK_LINE(89)
		this->next = ::flixel::system::FlxLinkedList_obj::_cachedListsHead;
		HX_STACK_LINE(90)
		::flixel::system::FlxLinkedList_obj::_cachedListsHead = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(91)
		(::flixel::system::FlxLinkedList_obj::_NUM_CACHED_FLX_LIST)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxLinkedList_obj,destroy,(void))

int FlxLinkedList_obj::_NUM_CACHED_FLX_LIST;

::flixel::system::FlxLinkedList FlxLinkedList_obj::_cachedListsHead;

::flixel::system::FlxLinkedList FlxLinkedList_obj::recycle( ){
	HX_STACK_FRAME("flixel.system.FlxLinkedList","recycle",0xb26c0e01,"flixel.system.FlxLinkedList.recycle","flixel/system/FlxLinkedList.hx",25,0xa1edd602)
	HX_STACK_LINE(25)
	if (((::flixel::system::FlxLinkedList_obj::_cachedListsHead != null()))){
		HX_STACK_LINE(27)
		::flixel::system::FlxLinkedList cachedList = ::flixel::system::FlxLinkedList_obj::_cachedListsHead;		HX_STACK_VAR(cachedList,"cachedList");
		HX_STACK_LINE(28)
		::flixel::system::FlxLinkedList_obj::_cachedListsHead = ::flixel::system::FlxLinkedList_obj::_cachedListsHead->next;
		HX_STACK_LINE(29)
		(::flixel::system::FlxLinkedList_obj::_NUM_CACHED_FLX_LIST)--;
		HX_STACK_LINE(31)
		cachedList->exists = true;
		HX_STACK_LINE(32)
		cachedList->next = null();
		HX_STACK_LINE(33)
		return cachedList;
	}
	else{
		HX_STACK_LINE(36)
		return ::flixel::system::FlxLinkedList_obj::__new();
	}
	HX_STACK_LINE(25)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxLinkedList_obj,recycle,return )

Void FlxLinkedList_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.FlxLinkedList","clearCache",0x48ebc447,"flixel.system.FlxLinkedList.clearCache","flixel/system/FlxLinkedList.hx",44,0xa1edd602)
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			if ((!(((::flixel::system::FlxLinkedList_obj::_cachedListsHead != null()))))){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(48)
			::flixel::system::FlxLinkedList node = ::flixel::system::FlxLinkedList_obj::_cachedListsHead;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(49)
			::flixel::system::FlxLinkedList_obj::_cachedListsHead = ::flixel::system::FlxLinkedList_obj::_cachedListsHead->next;
			HX_STACK_LINE(50)
			node->object = null();
			HX_STACK_LINE(51)
			node->next = null();
		}
		HX_STACK_LINE(53)
		::flixel::system::FlxLinkedList_obj::_NUM_CACHED_FLX_LIST = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxLinkedList_obj,clearCache,(void))


FlxLinkedList_obj::FlxLinkedList_obj()
{
}

void FlxLinkedList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxLinkedList);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_END_CLASS();
}

void FlxLinkedList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(exists,"exists");
}

Dynamic FlxLinkedList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { return _cachedListsHead; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { return _NUM_CACHED_FLX_LIST; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxLinkedList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::system::FlxLinkedList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { _cachedListsHead=inValue.Cast< ::flixel::system::FlxLinkedList >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { _NUM_CACHED_FLX_LIST=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxLinkedList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("object"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("exists"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_NUM_CACHED_FLX_LIST"),
	HX_CSTRING("_cachedListsHead"),
	HX_CSTRING("recycle"),
	HX_CSTRING("clearCache"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxLinkedList_obj,object),HX_CSTRING("object")},
	{hx::fsObject /*::flixel::system::FlxLinkedList*/ ,(int)offsetof(FlxLinkedList_obj,next),HX_CSTRING("next")},
	{hx::fsBool,(int)offsetof(FlxLinkedList_obj,exists),HX_CSTRING("exists")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("object"),
	HX_CSTRING("next"),
	HX_CSTRING("exists"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxLinkedList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxLinkedList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_MARK_MEMBER_NAME(FlxLinkedList_obj::_cachedListsHead,"_cachedListsHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxLinkedList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxLinkedList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_VISIT_MEMBER_NAME(FlxLinkedList_obj::_cachedListsHead,"_cachedListsHead");
};

#endif

Class FlxLinkedList_obj::__mClass;

void FlxLinkedList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxLinkedList"), hx::TCanCast< FlxLinkedList_obj> ,sStaticFields,sMemberFields,
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

void FlxLinkedList_obj::__boot()
{
	_NUM_CACHED_FLX_LIST= (int)0;
}

} // end namespace flixel
} // end namespace system
