#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void Motion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.Motion","new",0x8c813b8c,"flixel.tweens.motion.Motion.new","flixel/tweens/motion/Motion.hx",10,0xc6c8a363)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(19)
	this->y = (int)0;
	HX_STACK_LINE(15)
	this->x = (int)0;
	HX_STACK_LINE(10)
	super::__construct(Options);
}
;
	return null();
}

//Motion_obj::~Motion_obj() { }

Dynamic Motion_obj::__CreateEmpty() { return  new Motion_obj; }
hx::ObjectPtr< Motion_obj > Motion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< Motion_obj > result = new Motion_obj();
	result->__construct(Options);
	return result;}

Dynamic Motion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Motion_obj > result = new Motion_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Motion_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.Motion","destroy",0x00e69e26,"flixel.tweens.motion.Motion.destroy","flixel/tweens/motion/Motion.hx",25,0xc6c8a363)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->super::destroy();
		HX_STACK_LINE(27)
		this->_object = null();
	}
return null();
}


::flixel::tweens::motion::Motion Motion_obj::setObject( ::flixel::FlxObject object){
	HX_STACK_FRAME("flixel.tweens.motion.Motion","setObject",0x7f27082d,"flixel.tweens.motion.Motion.setObject","flixel/tweens/motion/Motion.hx",31,0xc6c8a363)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(32)
	this->_object = object;
	HX_STACK_LINE(33)
	this->_wasObjectImmovable = this->_object->immovable;
	HX_STACK_LINE(34)
	this->_object->set_immovable(true);
	HX_STACK_LINE(35)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Motion_obj,setObject,return )

Void Motion_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.motion.Motion","update",0xebe25e5d,"flixel.tweens.motion.Motion.update","flixel/tweens/motion/Motion.hx",39,0xc6c8a363)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(40)
		this->super::update(elapsed);
		HX_STACK_LINE(41)
		this->postUpdate();
	}
return null();
}


Void Motion_obj::onEnd( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.Motion","onEnd",0x35242628,"flixel.tweens.motion.Motion.onEnd","flixel/tweens/motion/Motion.hx",45,0xc6c8a363)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->_object->set_immovable(this->_wasObjectImmovable);
		HX_STACK_LINE(47)
		this->super::onEnd();
	}
return null();
}


Void Motion_obj::postUpdate( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.Motion","postUpdate",0xca0f98dd,"flixel.tweens.motion.Motion.postUpdate","flixel/tweens/motion/Motion.hx",52,0xc6c8a363)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		if (((this->_object != null()))){
			HX_STACK_LINE(54)
			this->_object->setPosition(this->x,this->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Motion_obj,postUpdate,(void))


Motion_obj::Motion_obj()
{
}

void Motion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Motion);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(_object,"_object");
	HX_MARK_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Motion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(_object,"_object");
	HX_VISIT_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Motion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onEnd") ) { return onEnd_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setObject") ) { return setObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { return _wasObjectImmovable; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Motion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { _wasObjectImmovable=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Motion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("_object"));
	outFields->push(HX_CSTRING("_wasObjectImmovable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Motion_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Motion_obj,y),HX_CSTRING("y")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(Motion_obj,_object),HX_CSTRING("_object")},
	{hx::fsBool,(int)offsetof(Motion_obj,_wasObjectImmovable),HX_CSTRING("_wasObjectImmovable")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("_object"),
	HX_CSTRING("_wasObjectImmovable"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setObject"),
	HX_CSTRING("update"),
	HX_CSTRING("onEnd"),
	HX_CSTRING("postUpdate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Motion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Motion_obj::__mClass,"__mClass");
};

#endif

Class Motion_obj::__mClass;

void Motion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.Motion"), hx::TCanCast< Motion_obj> ,sStaticFields,sMemberFields,
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

void Motion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
