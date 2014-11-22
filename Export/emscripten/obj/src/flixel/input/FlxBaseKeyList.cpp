#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace input{

Void FlxBaseKeyList_obj::__construct(int status,::flixel::input::FlxKeyManager keyManager)
{
HX_STACK_FRAME("flixel.input.FlxBaseKeyList","new",0x83657282,"flixel.input.FlxBaseKeyList.new","flixel/input/FlxBaseKeyList.hx",12,0x0418a22c)
HX_STACK_THIS(this)
HX_STACK_ARG(status,"status")
HX_STACK_ARG(keyManager,"keyManager")
{
	HX_STACK_LINE(13)
	this->status = status;
	HX_STACK_LINE(14)
	this->keyManager = keyManager;
}
;
	return null();
}

//FlxBaseKeyList_obj::~FlxBaseKeyList_obj() { }

Dynamic FlxBaseKeyList_obj::__CreateEmpty() { return  new FlxBaseKeyList_obj; }
hx::ObjectPtr< FlxBaseKeyList_obj > FlxBaseKeyList_obj::__new(int status,::flixel::input::FlxKeyManager keyManager)
{  hx::ObjectPtr< FlxBaseKeyList_obj > result = new FlxBaseKeyList_obj();
	result->__construct(status,keyManager);
	return result;}

Dynamic FlxBaseKeyList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBaseKeyList_obj > result = new FlxBaseKeyList_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool FlxBaseKeyList_obj::check( int keyCode){
	HX_STACK_FRAME("flixel.input.FlxBaseKeyList","check",0xea0e876a,"flixel.input.FlxBaseKeyList.check","flixel/input/FlxBaseKeyList.hx",19,0x0418a22c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_LINE(19)
	return this->keyManager->checkStatus(keyCode,this->status);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseKeyList_obj,check,return )

bool FlxBaseKeyList_obj::get_ANY( ){
	HX_STACK_FRAME("flixel.input.FlxBaseKeyList","get_ANY",0x83d0ba85,"flixel.input.FlxBaseKeyList.get_ANY","flixel/input/FlxBaseKeyList.hx",25,0x0418a22c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		Array< ::Dynamic > _g1 = this->keyManager->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(26)
			::flixel::input::FlxInput key = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(26)
			++(_g);
			HX_STACK_LINE(28)
			if (((key != null()))){
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::flixel::input::FlxBaseKeyList_obj > __this,::flixel::input::FlxInput &key){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/FlxBaseKeyList.hx",30,0x0418a22c)
						{
							HX_STACK_LINE(30)
							int keyCode = key->ID;		HX_STACK_VAR(keyCode,"keyCode");
							HX_STACK_LINE(30)
							return __this->keyManager->checkStatus(keyCode,__this->status);
						}
						return null();
					}
				};
				HX_STACK_LINE(30)
				if ((_Function_4_1::Block(this,key))){
					HX_STACK_LINE(32)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(37)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseKeyList_obj,get_ANY,return )


FlxBaseKeyList_obj::FlxBaseKeyList_obj()
{
}

void FlxBaseKeyList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseKeyList);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(keyManager,"keyManager");
	HX_MARK_END_CLASS();
}

void FlxBaseKeyList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(keyManager,"keyManager");
}

Dynamic FlxBaseKeyList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { return get_ANY(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return check_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ANY") ) { return get_ANY_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyManager") ) { return keyManager; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBaseKeyList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyManager") ) { keyManager=inValue.Cast< ::flixel::input::FlxKeyManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseKeyList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("status"));
	outFields->push(HX_CSTRING("keyManager"));
	outFields->push(HX_CSTRING("ANY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBaseKeyList_obj,status),HX_CSTRING("status")},
	{hx::fsObject /*::flixel::input::FlxKeyManager*/ ,(int)offsetof(FlxBaseKeyList_obj,keyManager),HX_CSTRING("keyManager")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("status"),
	HX_CSTRING("keyManager"),
	HX_CSTRING("check"),
	HX_CSTRING("get_ANY"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseKeyList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseKeyList_obj::__mClass,"__mClass");
};

#endif

Class FlxBaseKeyList_obj::__mClass;

void FlxBaseKeyList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.FlxBaseKeyList"), hx::TCanCast< FlxBaseKeyList_obj> ,sStaticFields,sMemberFields,
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

void FlxBaseKeyList_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
