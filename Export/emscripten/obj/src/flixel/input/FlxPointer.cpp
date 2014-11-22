#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
namespace flixel{
namespace input{

Void FlxPointer_obj::__construct()
{
HX_STACK_FRAME("flixel.input.FlxPointer","new",0x20c36c33,"flixel.input.FlxPointer.new","flixel/input/FlxPointer.hx",8,0xe6a2529b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->_globalScreenY = (int)0;
	HX_STACK_LINE(16)
	this->_globalScreenX = (int)0;
	HX_STACK_LINE(14)
	this->screenY = (int)0;
	HX_STACK_LINE(13)
	this->screenX = (int)0;
	HX_STACK_LINE(11)
	this->y = (int)0;
	HX_STACK_LINE(10)
	this->x = (int)0;
}
;
	return null();
}

//FlxPointer_obj::~FlxPointer_obj() { }

Dynamic FlxPointer_obj::__CreateEmpty() { return  new FlxPointer_obj; }
hx::ObjectPtr< FlxPointer_obj > FlxPointer_obj::__new()
{  hx::ObjectPtr< FlxPointer_obj > result = new FlxPointer_obj();
	result->__construct();
	return result;}

Dynamic FlxPointer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPointer_obj > result = new FlxPointer_obj();
	result->__construct();
	return result;}

::flixel::math::FlxPoint FlxPointer_obj::getWorldPosition( ::flixel::FlxCamera Camera,::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.input.FlxPointer","getWorldPosition",0x52927af2,"flixel.input.FlxPointer.getWorldPosition","flixel/input/FlxPointer.hx",30,0xe6a2529b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(31)
	if (((Camera == null()))){
		HX_STACK_LINE(33)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(35)
	if (((point == null()))){
		HX_STACK_LINE(37)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(37)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(37)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(37)
			point1->_inPool = false;
			HX_STACK_LINE(37)
			_g = point1;
		}
		HX_STACK_LINE(37)
		point = _g;
	}
	HX_STACK_LINE(39)
	::flixel::math::FlxPoint screenPosition = this->getScreenPosition(Camera,null());		HX_STACK_VAR(screenPosition,"screenPosition");
	HX_STACK_LINE(40)
	point->set_x((screenPosition->x + Camera->scroll->x));
	HX_STACK_LINE(41)
	point->set_y((screenPosition->y + Camera->scroll->y));
	HX_STACK_LINE(42)
	screenPosition->put();
	HX_STACK_LINE(43)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getWorldPosition,return )

::flixel::math::FlxPoint FlxPointer_obj::getScreenPosition( ::flixel::FlxCamera Camera,::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.input.FlxPointer","getScreenPosition",0xae561a7e,"flixel.input.FlxPointer.getScreenPosition","flixel/input/FlxPointer.hx",55,0xe6a2529b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(56)
	if (((Camera == null()))){
		HX_STACK_LINE(58)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(60)
	if (((point == null()))){
		HX_STACK_LINE(62)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(62)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(62)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(62)
			point1->_inPool = false;
			HX_STACK_LINE(62)
			_g = point1;
		}
		HX_STACK_LINE(62)
		point = _g;
	}
	HX_STACK_LINE(65)
	point->set_x((Float((((this->_globalScreenX - Camera->x) + ((0.5 * Camera->width) * ((Camera->zoom - Camera->initialZoom)))))) / Float(Camera->zoom)));
	HX_STACK_LINE(66)
	point->set_y((Float((((this->_globalScreenY - Camera->y) + ((0.5 * Camera->height) * ((Camera->zoom - Camera->initialZoom)))))) / Float(Camera->zoom)));
	HX_STACK_LINE(68)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getScreenPosition,return )

::flixel::math::FlxPoint FlxPointer_obj::toPoint( ){
	HX_STACK_FRAME("flixel.input.FlxPointer","toPoint",0xb0798228,"flixel.input.FlxPointer.toPoint","flixel/input/FlxPointer.hx",76,0xe6a2529b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(this->x,this->y);		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(76)
	point->_inPool = false;
	HX_STACK_LINE(76)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,toPoint,return )

bool FlxPointer_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.input.FlxPointer","overlaps",0xe0967a59,"flixel.input.FlxPointer.overlaps","flixel/input/FlxPointer.hx",88,0xe6a2529b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(88)
	Array< ::Dynamic > Camera1 = Array_obj< ::Dynamic >::__new().Add(Camera);		HX_STACK_VAR(Camera1,"Camera1");
	HX_STACK_LINE(88)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(90)
	Array< bool > result = Array_obj< bool >::__new().Add(false);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(92)
	::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
		HX_STACK_LINE(92)
		if (((ObjectOrGroup != null()))){
			HX_STACK_LINE(92)
			if (((ObjectOrGroup->flixelType == (int)2))){
				HX_STACK_LINE(92)
				group1 = ObjectOrGroup;
			}
			else{
				HX_STACK_LINE(92)
				if (((ObjectOrGroup->flixelType == (int)4))){
					HX_STACK_LINE(92)
					group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(ObjectOrGroup))->group;
				}
			}
		}
		HX_STACK_LINE(92)
		group = group1;
	}
	HX_STACK_LINE(93)
	if (((group != null()))){

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,Array< bool >,result,Array< ::Dynamic >,_g,Array< ::Dynamic >,Camera1)
		Void run(::flixel::FlxBasic basic){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/input/FlxPointer.hx",96,0xe6a2529b)
			HX_STACK_ARG(basic,"basic")
			{
				HX_STACK_LINE(96)
				if ((_g->__get((int)0).StaticCast< ::flixel::input::FlxPointer >()->overlaps(basic,Camera1->__get((int)0).StaticCast< ::flixel::FlxCamera >()))){
					HX_STACK_LINE(98)
					result[(int)0] = true;
					HX_STACK_LINE(99)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(95)
		group->forEachExists( Dynamic(new _Function_2_1(result,_g,Camera1)),null());
	}
	else{
		HX_STACK_LINE(105)
		::flixel::math::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(this->x,this->y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(105)
			point1->_inPool = false;
			HX_STACK_LINE(105)
			point = point1;
		}
		HX_STACK_LINE(106)
		bool _g1 = (hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup))->overlapsPoint(point,true,Camera1->__get((int)0).StaticCast< ::flixel::FlxCamera >());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(106)
		result[(int)0] = _g1;
		HX_STACK_LINE(107)
		point->put();
	}
	HX_STACK_LINE(110)
	return result->__get((int)0);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,overlaps,return )

Void FlxPointer_obj::setGlobalScreenPositionUnsafe( int X,int Y){
{
		HX_STACK_FRAME("flixel.input.FlxPointer","setGlobalScreenPositionUnsafe",0x8f7aed13,"flixel.input.FlxPointer.setGlobalScreenPositionUnsafe","flixel/input/FlxPointer.hx",118,0xe6a2529b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(119)
		this->_globalScreenX = X;
		HX_STACK_LINE(120)
		this->_globalScreenY = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,setGlobalScreenPositionUnsafe,(void))

::String FlxPointer_obj::toString( ){
	HX_STACK_FRAME("flixel.input.FlxPointer","toString",0xd3da77f9,"flixel.input.FlxPointer.toString","flixel/input/FlxPointer.hx",124,0xe6a2529b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(126)
		_this->label = HX_CSTRING("x");
		HX_STACK_LINE(126)
		_this->value = this->x;
		HX_STACK_LINE(126)
		_g = _this;
	}
	HX_STACK_LINE(127)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(127)
	{
		HX_STACK_LINE(127)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(127)
		_this->label = HX_CSTRING("y");
		HX_STACK_LINE(127)
		_this->value = this->y;
		HX_STACK_LINE(127)
		_g1 = _this;
	}
	HX_STACK_LINE(125)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(125)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,toString,return )

Void FlxPointer_obj::updatePositions( ){
{
		HX_STACK_FRAME("flixel.input.FlxPointer","updatePositions",0xb47050b4,"flixel.input.FlxPointer.updatePositions","flixel/input/FlxPointer.hx",135,0xe6a2529b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		::flixel::math::FlxPoint screenPosition = this->getScreenPosition(null(),null());		HX_STACK_VAR(screenPosition,"screenPosition");
		HX_STACK_LINE(137)
		int _g = ::Std_obj::_int(screenPosition->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		this->screenX = _g;
		HX_STACK_LINE(138)
		int _g1 = ::Std_obj::_int(screenPosition->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(138)
		this->screenY = _g1;
		HX_STACK_LINE(139)
		screenPosition->put();
		HX_STACK_LINE(141)
		::flixel::math::FlxPoint worldPosition = this->getWorldPosition(null(),null());		HX_STACK_VAR(worldPosition,"worldPosition");
		HX_STACK_LINE(142)
		int _g2 = ::Std_obj::_int(worldPosition->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(142)
		this->x = _g2;
		HX_STACK_LINE(143)
		int _g3 = ::Std_obj::_int(worldPosition->y);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(143)
		this->y = _g3;
		HX_STACK_LINE(144)
		worldPosition->put();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,updatePositions,(void))


FlxPointer_obj::FlxPointer_obj()
{
}

Dynamic FlxPointer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"toPoint") ) { return toPoint_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_globalScreenX") ) { return _globalScreenX; }
		if (HX_FIELD_EQ(inName,"_globalScreenY") ) { return _globalScreenY; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updatePositions") ) { return updatePositions_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setGlobalScreenPositionUnsafe") ) { return setGlobalScreenPositionUnsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPointer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_globalScreenX") ) { _globalScreenX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_globalScreenY") ) { _globalScreenY=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPointer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("screenX"));
	outFields->push(HX_CSTRING("screenY"));
	outFields->push(HX_CSTRING("_globalScreenX"));
	outFields->push(HX_CSTRING("_globalScreenY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxPointer_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,screenX),HX_CSTRING("screenX")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,screenY),HX_CSTRING("screenY")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,_globalScreenX),HX_CSTRING("_globalScreenX")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,_globalScreenY),HX_CSTRING("_globalScreenY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("screenX"),
	HX_CSTRING("screenY"),
	HX_CSTRING("_globalScreenX"),
	HX_CSTRING("_globalScreenY"),
	HX_CSTRING("getWorldPosition"),
	HX_CSTRING("getScreenPosition"),
	HX_CSTRING("toPoint"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("setGlobalScreenPositionUnsafe"),
	HX_CSTRING("toString"),
	HX_CSTRING("updatePositions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPointer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPointer_obj::__mClass,"__mClass");
};

#endif

Class FlxPointer_obj::__mClass;

void FlxPointer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.FlxPointer"), hx::TCanCast< FlxPointer_obj> ,sStaticFields,sMemberFields,
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

void FlxPointer_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
