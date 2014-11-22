#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxBaseSignal_obj::__construct()
{
HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","new",0x2468c304,"flixel.util._FlxSignal.FlxBaseSignal.new","flixel/util/FlxSignal.hx",106,0x3c758c5e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(106)
	this->_handlers = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//FlxBaseSignal_obj::~FlxBaseSignal_obj() { }

Dynamic FlxBaseSignal_obj::__CreateEmpty() { return  new FlxBaseSignal_obj; }
hx::ObjectPtr< FlxBaseSignal_obj > FlxBaseSignal_obj::__new()
{  hx::ObjectPtr< FlxBaseSignal_obj > result = new FlxBaseSignal_obj();
	result->__construct();
	return result;}

Dynamic FlxBaseSignal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBaseSignal_obj > result = new FlxBaseSignal_obj();
	result->__construct();
	return result;}

hx::Object *FlxBaseSignal_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::util::IFlxSignal_obj)) return operator ::flixel::util::IFlxSignal_obj *();
	return super::__ToInterface(inType);
}

Void FlxBaseSignal_obj::add( Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","add",0x245ee4c5,"flixel.util._FlxSignal.FlxBaseSignal.add","flixel/util/FlxSignal.hx",111,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(111)
		if (((listener != null()))){
			HX_STACK_LINE(112)
			this->registerListener(listener,false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,add,(void))

Void FlxBaseSignal_obj::addOnce( Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","addOnce",0xaa1cd4e6,"flixel.util._FlxSignal.FlxBaseSignal.addOnce","flixel/util/FlxSignal.hx",117,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(117)
		if (((listener != null()))){
			HX_STACK_LINE(118)
			this->registerListener(listener,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,addOnce,(void))

Void FlxBaseSignal_obj::remove( Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","remove",0x06fde820,"flixel.util._FlxSignal.FlxBaseSignal.remove","flixel/util/FlxSignal.hx",123,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(123)
		if (((listener != null()))){
			HX_STACK_LINE(125)
			::flixel::util::_FlxSignal::FlxSignalHandler handler = this->getHandler(listener);		HX_STACK_VAR(handler,"handler");
			HX_STACK_LINE(126)
			if (((handler != null()))){
				HX_STACK_LINE(128)
				this->_handlers->remove(handler);
				HX_STACK_LINE(129)
				handler->destroy();
				HX_STACK_LINE(130)
				handler = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,remove,(void))

bool FlxBaseSignal_obj::has( Dynamic listener){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","has",0x246431fe,"flixel.util._FlxSignal.FlxBaseSignal.has","flixel/util/FlxSignal.hx",136,0x3c758c5e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(137)
	if (((listener == null()))){
		HX_STACK_LINE(138)
		return false;
	}
	HX_STACK_LINE(139)
	::flixel::util::_FlxSignal::FlxSignalHandler _g = this->getHandler(listener);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(139)
	return (_g != null());
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,has,return )

Void FlxBaseSignal_obj::removeAll( ){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","removeAll",0x23fb9ce1,"flixel.util._FlxSignal.FlxBaseSignal.removeAll","flixel/util/FlxSignal.hx",144,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_handlers);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseSignal_obj,removeAll,(void))

Void FlxBaseSignal_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","destroy",0x48b3419e,"flixel.util._FlxSignal.FlxBaseSignal.destroy","flixel/util/FlxSignal.hx",148,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_handlers);
		HX_STACK_LINE(150)
		this->_handlers = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseSignal_obj,destroy,(void))

::flixel::util::_FlxSignal::FlxSignalHandler FlxBaseSignal_obj::registerListener( Dynamic listener,bool dispatchOnce){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","registerListener",0xa63a34d3,"flixel.util._FlxSignal.FlxBaseSignal.registerListener","flixel/util/FlxSignal.hx",154,0x3c758c5e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(dispatchOnce,"dispatchOnce")
	HX_STACK_LINE(155)
	::flixel::util::_FlxSignal::FlxSignalHandler handler = this->getHandler(listener);		HX_STACK_VAR(handler,"handler");
	HX_STACK_LINE(157)
	if (((handler == null()))){
		HX_STACK_LINE(159)
		::flixel::util::_FlxSignal::FlxSignalHandler _g = ::flixel::util::_FlxSignal::FlxSignalHandler_obj::__new(listener,dispatchOnce);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(159)
		handler = _g;
		HX_STACK_LINE(160)
		this->_handlers->push(handler);
		HX_STACK_LINE(161)
		return handler;
	}
	else{
		HX_STACK_LINE(167)
		if (((handler->dispatchOnce != dispatchOnce))){
			HX_STACK_LINE(168)
			HX_STACK_DO_THROW(HX_CSTRING("You cannot addOnce() then add() the same listener without removing the relationship first."));
		}
		else{
			HX_STACK_LINE(170)
			return handler;
		}
	}
	HX_STACK_LINE(157)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseSignal_obj,registerListener,return )

::flixel::util::_FlxSignal::FlxSignalHandler FlxBaseSignal_obj::getHandler( Dynamic listener){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","getHandler",0x2fd59fb0,"flixel.util._FlxSignal.FlxBaseSignal.getHandler","flixel/util/FlxSignal.hx",175,0x3c758c5e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		Array< ::Dynamic > _g1 = this->_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(176)
			::flixel::util::_FlxSignal::FlxSignalHandler handler = _g1->__get(_g).StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(handler,"handler");
			HX_STACK_LINE(176)
			++(_g);
			HX_STACK_LINE(178)
			if (((handler->listener == listener))){
				HX_STACK_LINE(185)
				return handler;
			}
		}
	}
	HX_STACK_LINE(188)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,getHandler,return )


FlxBaseSignal_obj::FlxBaseSignal_obj()
{
}

void FlxBaseSignal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseSignal);
	HX_MARK_MEMBER_NAME(dispatch,"dispatch");
	HX_MARK_MEMBER_NAME(_handlers,"_handlers");
	HX_MARK_END_CLASS();
}

void FlxBaseSignal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dispatch,"dispatch");
	HX_VISIT_MEMBER_NAME(_handlers,"_handlers");
}

Dynamic FlxBaseSignal_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addOnce") ) { return addOnce_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_handlers") ) { return _handlers; }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getHandler") ) { return getHandler_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerListener") ) { return registerListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBaseSignal_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { dispatch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_handlers") ) { _handlers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseSignal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dispatch"));
	outFields->push(HX_CSTRING("_handlers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBaseSignal_obj,dispatch),HX_CSTRING("dispatch")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxBaseSignal_obj,_handlers),HX_CSTRING("_handlers")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("dispatch"),
	HX_CSTRING("_handlers"),
	HX_CSTRING("add"),
	HX_CSTRING("addOnce"),
	HX_CSTRING("remove"),
	HX_CSTRING("has"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("destroy"),
	HX_CSTRING("registerListener"),
	HX_CSTRING("getHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseSignal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseSignal_obj::__mClass,"__mClass");
};

#endif

Class FlxBaseSignal_obj::__mClass;

void FlxBaseSignal_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util._FlxSignal.FlxBaseSignal"), hx::TCanCast< FlxBaseSignal_obj> ,sStaticFields,sMemberFields,
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

void FlxBaseSignal_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
