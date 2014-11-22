#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_net_SharedObject
#include <openfl/_v2/net/SharedObject.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_net_SharedObjectFlushStatus
#include <openfl/net/SharedObjectFlushStatus.h>
#endif
namespace flixel{
namespace util{

Void FlxSave_obj::__construct()
{
HX_STACK_FRAME("flixel.util.FlxSave","new",0x2c4b0107,"flixel.util.FlxSave.new","flixel/util/FlxSave.hx",17,0xc43cd0a9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	this->_closeRequested = false;
}
;
	return null();
}

//FlxSave_obj::~FlxSave_obj() { }

Dynamic FlxSave_obj::__CreateEmpty() { return  new FlxSave_obj; }
hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__new()
{  hx::ObjectPtr< FlxSave_obj > result = new FlxSave_obj();
	result->__construct();
	return result;}

Dynamic FlxSave_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSave_obj > result = new FlxSave_obj();
	result->__construct();
	return result;}

hx::Object *FlxSave_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxSave_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxSave","destroy",0x7bc03d21,"flixel.util.FlxSave.destroy","flixel/util/FlxSave.hx",47,0xc43cd0a9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		this->_sharedObject = null();
		HX_STACK_LINE(49)
		this->name = null();
		HX_STACK_LINE(50)
		this->data = null();
		HX_STACK_LINE(51)
		this->_onComplete = null();
		HX_STACK_LINE(52)
		this->_closeRequested = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,destroy,(void))

bool FlxSave_obj::bind( ::String Name){
	HX_STACK_FRAME("flixel.util.FlxSave","bind",0x8d6a5736,"flixel.util.FlxSave.bind","flixel/util/FlxSave.hx",62,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(63)
	this->destroy();
	HX_STACK_LINE(64)
	this->name = Name;
	HX_STACK_LINE(65)
	try
	{
	HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
	{
		HX_STACK_LINE(67)
		::openfl::_v2::net::SharedObject _g = ::openfl::_v2::net::SharedObject_obj::getLocal(this->name,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		this->_sharedObject = _g;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::openfl::errors::Error >() ){
			HX_STACK_BEGIN_CATCH
			::openfl::errors::Error e = __e;{
				HX_STACK_LINE(72)
				this->destroy();
				HX_STACK_LINE(73)
				return false;
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(75)
	this->data = this->_sharedObject->data;
	HX_STACK_LINE(76)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,bind,return )

bool FlxSave_obj::close( hx::Null< int >  __o_MinFileSize,Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSave","close",0xc505001f,"flixel.util.FlxSave.close","flixel/util/FlxSave.hx",89,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MinFileSize,"MinFileSize")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(90)
		this->_closeRequested = true;
		HX_STACK_LINE(91)
		return this->flush(MinFileSize,OnComplete);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,close,return )

bool FlxSave_obj::flush( hx::Null< int >  __o_MinFileSize,Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSave","flush",0x7f3d4b2b,"flixel.util.FlxSave.flush","flixel/util/FlxSave.hx",102,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MinFileSize,"MinFileSize")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(103)
		if ((!(this->checkBinding()))){
			HX_STACK_LINE(105)
			return false;
		}
		HX_STACK_LINE(107)
		this->_onComplete = OnComplete;
		HX_STACK_LINE(111)
		::openfl::net::SharedObjectFlushStatus result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(113)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(116)
			::openfl::net::SharedObjectFlushStatus _g = this->_sharedObject->flush(MinFileSize);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(116)
			result = _g;
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error e = __e;{
					HX_STACK_LINE(121)
					return this->onDone(::flixel::util::FlxSaveStatus_obj::ERROR);
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(125)
		if (((result == ::openfl::net::SharedObjectFlushStatus_obj::PENDING))){
		}
		HX_STACK_LINE(135)
		return this->onDone((  (((result == ::openfl::net::SharedObjectFlushStatus_obj::FLUSHED))) ? ::flixel::util::FlxSaveStatus(::flixel::util::FlxSaveStatus_obj::SUCCESS) : ::flixel::util::FlxSaveStatus(::flixel::util::FlxSaveStatus_obj::PENDING) ));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,flush,return )

bool FlxSave_obj::erase( ){
	HX_STACK_FRAME("flixel.util.FlxSave","erase",0xefbed14d,"flixel.util.FlxSave.erase","flixel/util/FlxSave.hx",147,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	if ((!(this->checkBinding()))){
		HX_STACK_LINE(150)
		return false;
	}
	HX_STACK_LINE(152)
	this->_sharedObject->clear();
	HX_STACK_LINE(153)
	this->data = this->_sharedObject->data;
	HX_STACK_LINE(154)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,erase,return )

bool FlxSave_obj::onDone( ::flixel::util::FlxSaveStatus Result){
	HX_STACK_FRAME("flixel.util.FlxSave","onDone",0x76016afa,"flixel.util.FlxSave.onDone","flixel/util/FlxSave.hx",176,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Result,"Result")
	HX_STACK_LINE(177)
	switch( (int)(Result->__Index())){
		case (int)1: {
			HX_STACK_LINE(180)
			Dynamic();
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(182)
			Dynamic();
		}
		;break;
		default: {
		}
	}
	HX_STACK_LINE(186)
	if (((this->_onComplete_dyn() != null()))){
		HX_STACK_LINE(187)
		this->_onComplete((Result == ::flixel::util::FlxSaveStatus_obj::SUCCESS));
	}
	HX_STACK_LINE(189)
	if ((this->_closeRequested)){
		HX_STACK_LINE(190)
		this->destroy();
	}
	HX_STACK_LINE(192)
	return (Result == ::flixel::util::FlxSaveStatus_obj::SUCCESS);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,onDone,return )

bool FlxSave_obj::checkBinding( ){
	HX_STACK_FRAME("flixel.util.FlxSave","checkBinding",0xf0eb45d6,"flixel.util.FlxSave.checkBinding","flixel/util/FlxSave.hx",201,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(202)
	if (((this->_sharedObject == null()))){
		HX_STACK_LINE(205)
		return false;
	}
	HX_STACK_LINE(207)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,checkBinding,return )


FlxSave_obj::FlxSave_obj()
{
}

void FlxSave_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSave);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_closeRequested,"_closeRequested");
	HX_MARK_END_CLASS();
}

void FlxSave_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_closeRequested,"_closeRequested");
}

Dynamic FlxSave_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDone") ) { return onDone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return _onComplete; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkBinding") ) { return checkBinding_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { return _sharedObject; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { return _closeRequested; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSave_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { _sharedObject=inValue.Cast< ::openfl::_v2::net::SharedObject >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { _closeRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSave_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("_sharedObject"));
	outFields->push(HX_CSTRING("_closeRequested"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSave_obj,data),HX_CSTRING("data")},
	{hx::fsString,(int)offsetof(FlxSave_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::openfl::_v2::net::SharedObject*/ ,(int)offsetof(FlxSave_obj,_sharedObject),HX_CSTRING("_sharedObject")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSave_obj,_onComplete),HX_CSTRING("_onComplete")},
	{hx::fsBool,(int)offsetof(FlxSave_obj,_closeRequested),HX_CSTRING("_closeRequested")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("name"),
	HX_CSTRING("_sharedObject"),
	HX_CSTRING("_onComplete"),
	HX_CSTRING("_closeRequested"),
	HX_CSTRING("destroy"),
	HX_CSTRING("bind"),
	HX_CSTRING("close"),
	HX_CSTRING("flush"),
	HX_CSTRING("erase"),
	HX_CSTRING("onDone"),
	HX_CSTRING("checkBinding"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
};

#endif

Class FlxSave_obj::__mClass;

void FlxSave_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxSave"), hx::TCanCast< FlxSave_obj> ,sStaticFields,sMemberFields,
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

void FlxSave_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
