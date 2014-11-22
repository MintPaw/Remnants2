#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
namespace flixel{

Void FlxBasic_obj::__construct()
{
HX_STACK_FRAME("flixel.FlxBasic","new",0x9d630540,"flixel.FlxBasic.new","flixel/FlxBasic.hx",10,0xd8d6cfcf)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(59)
	this->flixelType = (int)0;
	HX_STACK_LINE(44)
	this->exists = true;
	HX_STACK_LINE(39)
	this->alive = true;
	HX_STACK_LINE(34)
	this->visible = true;
	HX_STACK_LINE(30)
	this->active = true;
	HX_STACK_LINE(26)
	this->ID = (int)-1;
}
;
	return null();
}

//FlxBasic_obj::~FlxBasic_obj() { }

Dynamic FlxBasic_obj::__CreateEmpty() { return  new FlxBasic_obj; }
hx::ObjectPtr< FlxBasic_obj > FlxBasic_obj::__new()
{  hx::ObjectPtr< FlxBasic_obj > result = new FlxBasic_obj();
	result->__construct();
	return result;}

Dynamic FlxBasic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBasic_obj > result = new FlxBasic_obj();
	result->__construct();
	return result;}

hx::Object *FlxBasic_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxBasic_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxBasic","destroy",0xc50151da,"flixel.FlxBasic.destroy","flixel/FlxBasic.hx",70,0xd8d6cfcf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->set_exists(false);
		HX_STACK_LINE(72)
		this->_cameras = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,destroy,(void))

Void FlxBasic_obj::kill( ){
{
		HX_STACK_FRAME("flixel.FlxBasic","kill",0x1748eebe,"flixel.FlxBasic.kill","flixel/FlxBasic.hx",80,0xd8d6cfcf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		this->set_alive(false);
		HX_STACK_LINE(82)
		this->set_exists(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,kill,(void))

Void FlxBasic_obj::revive( ){
{
		HX_STACK_FRAME("flixel.FlxBasic","revive",0xb3f01175,"flixel.FlxBasic.revive","flixel/FlxBasic.hx",90,0xd8d6cfcf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		this->set_alive(true);
		HX_STACK_LINE(92)
		this->set_exists(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,revive,(void))

Void FlxBasic_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxBasic","update",0x307e9d29,"flixel.FlxBasic.update","flixel/FlxBasic.hx",100,0xd8d6cfcf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,update,(void))

Void FlxBasic_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxBasic","draw",0x12af3b24,"flixel.FlxBasic.draw","flixel/FlxBasic.hx",111,0xd8d6cfcf)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,draw,(void))

::String FlxBasic_obj::toString( ){
	HX_STACK_FRAME("flixel.FlxBasic","toString",0x03b3efcc,"flixel.FlxBasic.toString","flixel/FlxBasic.hx",118,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(120)
		_this->label = HX_CSTRING("active");
		HX_STACK_LINE(120)
		_this->value = this->active;
		HX_STACK_LINE(120)
		_g = _this;
	}
	HX_STACK_LINE(121)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(121)
		_this->label = HX_CSTRING("visible");
		HX_STACK_LINE(121)
		_this->value = this->visible;
		HX_STACK_LINE(121)
		_g1 = _this;
	}
	HX_STACK_LINE(122)
	::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(122)
		_this->label = HX_CSTRING("alive");
		HX_STACK_LINE(122)
		_this->value = this->alive;
		HX_STACK_LINE(122)
		_g2 = _this;
	}
	HX_STACK_LINE(123)
	::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(123)
		_this->label = HX_CSTRING("exists");
		HX_STACK_LINE(123)
		_this->value = this->exists;
		HX_STACK_LINE(123)
		_g3 = _this;
	}
	HX_STACK_LINE(119)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(119)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g4);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,toString,return )

bool FlxBasic_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_visible",0x942af475,"flixel.FlxBasic.set_visible","flixel/FlxBasic.hx",128,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(128)
	return this->visible = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_visible,return )

bool FlxBasic_obj::set_active( bool Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_active",0x086e7723,"flixel.FlxBasic.set_active","flixel/FlxBasic.hx",133,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(133)
	return this->active = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_active,return )

bool FlxBasic_obj::set_exists( bool Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_exists",0xb2085339,"flixel.FlxBasic.set_exists","flixel/FlxBasic.hx",138,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(138)
	return this->exists = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_exists,return )

bool FlxBasic_obj::set_alive( bool Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_alive",0x59c1c910,"flixel.FlxBasic.set_alive","flixel/FlxBasic.hx",143,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(143)
	return this->alive = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_alive,return )

::flixel::FlxCamera FlxBasic_obj::get_camera( ){
	HX_STACK_FRAME("flixel.FlxBasic","get_camera",0xa636dd8e,"flixel.FlxBasic.get_camera","flixel/FlxBasic.hx",148,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	if (((bool((this->_cameras == null())) || bool((this->_cameras->length == (int)0))))){
		HX_STACK_LINE(148)
		return ::flixel::FlxCamera_obj::defaultCameras->__get((int)0).StaticCast< ::flixel::FlxCamera >();
	}
	else{
		HX_STACK_LINE(148)
		return this->_cameras->__get((int)0).StaticCast< ::flixel::FlxCamera >();
	}
	HX_STACK_LINE(148)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,get_camera,return )

::flixel::FlxCamera FlxBasic_obj::set_camera( ::flixel::FlxCamera Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_camera",0xa9b47c02,"flixel.FlxBasic.set_camera","flixel/FlxBasic.hx",152,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(153)
	if (((this->_cameras == null()))){
		HX_STACK_LINE(154)
		this->_cameras = Array_obj< ::Dynamic >::__new().Add(Value);
	}
	else{
		HX_STACK_LINE(156)
		this->_cameras[(int)0] = Value;
	}
	HX_STACK_LINE(157)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_camera,return )

Array< ::Dynamic > FlxBasic_obj::get_cameras( ){
	HX_STACK_FRAME("flixel.FlxBasic","get_cameras",0xc9caff25,"flixel.FlxBasic.get_cameras","flixel/FlxBasic.hx",162,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	if (((this->_cameras == null()))){
		HX_STACK_LINE(162)
		return ::flixel::FlxCamera_obj::defaultCameras;
	}
	else{
		HX_STACK_LINE(162)
		return this->_cameras;
	}
	HX_STACK_LINE(162)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,get_cameras,return )

Array< ::Dynamic > FlxBasic_obj::set_cameras( Array< ::Dynamic > Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_cameras",0xd4380631,"flixel.FlxBasic.set_cameras","flixel/FlxBasic.hx",167,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(167)
	return this->_cameras = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_cameras,return )


FlxBasic_obj::FlxBasic_obj()
{
}

void FlxBasic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBasic);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(alive,"alive");
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_MEMBER_NAME(flixelType,"flixelType");
	HX_MARK_MEMBER_NAME(_cameras,"_cameras");
	HX_MARK_END_CLASS();
}

void FlxBasic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(alive,"alive");
	HX_VISIT_MEMBER_NAME(exists,"exists");
	HX_VISIT_MEMBER_NAME(flixelType,"flixelType");
	HX_VISIT_MEMBER_NAME(_cameras,"_cameras");
}

Dynamic FlxBasic_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alive") ) { return alive; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		if (HX_FIELD_EQ(inName,"camera") ) { return get_camera(); }
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"cameras") ) { return get_cameras(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cameras") ) { return _cameras; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_alive") ) { return set_alive_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flixelType") ) { return flixelType; }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"set_exists") ) { return set_exists_dyn(); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return get_camera_dyn(); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return set_camera_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cameras") ) { return get_cameras_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return set_cameras_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBasic_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alive") ) { if (inCallProp) return set_alive(inValue);alive=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp) return set_active(inValue);active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { if (inCallProp) return set_exists(inValue);exists=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { return set_camera(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameras") ) { return set_cameras(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cameras") ) { _cameras=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flixelType") ) { flixelType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBasic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("alive"));
	outFields->push(HX_CSTRING("exists"));
	outFields->push(HX_CSTRING("camera"));
	outFields->push(HX_CSTRING("cameras"));
	outFields->push(HX_CSTRING("flixelType"));
	outFields->push(HX_CSTRING("_cameras"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBasic_obj,ID),HX_CSTRING("ID")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,active),HX_CSTRING("active")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,visible),HX_CSTRING("visible")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,alive),HX_CSTRING("alive")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,exists),HX_CSTRING("exists")},
	{hx::fsInt,(int)offsetof(FlxBasic_obj,flixelType),HX_CSTRING("flixelType")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxBasic_obj,_cameras),HX_CSTRING("_cameras")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ID"),
	HX_CSTRING("active"),
	HX_CSTRING("visible"),
	HX_CSTRING("alive"),
	HX_CSTRING("exists"),
	HX_CSTRING("flixelType"),
	HX_CSTRING("_cameras"),
	HX_CSTRING("destroy"),
	HX_CSTRING("kill"),
	HX_CSTRING("revive"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("toString"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("set_active"),
	HX_CSTRING("set_exists"),
	HX_CSTRING("set_alive"),
	HX_CSTRING("get_camera"),
	HX_CSTRING("set_camera"),
	HX_CSTRING("get_cameras"),
	HX_CSTRING("set_cameras"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBasic_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBasic_obj::__mClass,"__mClass");
};

#endif

Class FlxBasic_obj::__mClass;

void FlxBasic_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxBasic"), hx::TCanCast< FlxBasic_obj> ,sStaticFields,sMemberFields,
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

void FlxBasic_obj::__boot()
{
}

} // end namespace flixel
