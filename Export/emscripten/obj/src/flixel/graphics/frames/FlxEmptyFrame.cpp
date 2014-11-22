#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxEmptyFrame
#include <flixel/graphics/frames/FlxEmptyFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxEmptyFrame_obj::__construct(::flixel::graphics::FlxGraphic parent)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxEmptyFrame","new",0x3af4f3ed,"flixel.graphics.frames.FlxEmptyFrame.new","flixel/graphics/frames/FlxEmptyFrame.hx",18,0x48befe44)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(19)
	super::__construct(parent);
	HX_STACK_LINE(20)
	this->type = (int)2;
	HX_STACK_LINE(22)
	this->tileID = (int)-1;
}
;
	return null();
}

//FlxEmptyFrame_obj::~FlxEmptyFrame_obj() { }

Dynamic FlxEmptyFrame_obj::__CreateEmpty() { return  new FlxEmptyFrame_obj; }
hx::ObjectPtr< FlxEmptyFrame_obj > FlxEmptyFrame_obj::__new(::flixel::graphics::FlxGraphic parent)
{  hx::ObjectPtr< FlxEmptyFrame_obj > result = new FlxEmptyFrame_obj();
	result->__construct(parent);
	return result;}

Dynamic FlxEmptyFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxEmptyFrame_obj > result = new FlxEmptyFrame_obj();
	result->__construct(inArgs[0]);
	return result;}

::openfl::_v2::display::BitmapData FlxEmptyFrame_obj::paintOnBitmap( ::openfl::_v2::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.graphics.frames.FlxEmptyFrame","paintOnBitmap",0xb9d33df9,"flixel.graphics.frames.FlxEmptyFrame.paintOnBitmap","flixel/graphics/frames/FlxEmptyFrame.hx",27,0x48befe44)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(28)
	::openfl::_v2::display::BitmapData result = null();		HX_STACK_VAR(result,"result");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::graphics::frames::FlxEmptyFrame_obj > __this,::openfl::_v2::display::BitmapData &bmd){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxEmptyFrame.hx",30,0x48befe44)
			{
				HX_STACK_LINE(30)
				int _g = bmd->get_width();		HX_STACK_VAR(_g,"_g");
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::flixel::graphics::frames::FlxEmptyFrame_obj > __this,::openfl::_v2::display::BitmapData &bmd){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxEmptyFrame.hx",30,0x48befe44)
						{
							HX_STACK_LINE(30)
							int _g1 = bmd->get_height();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(30)
							return (_g1 == __this->sourceSize->y);
						}
						return null();
					}
				};
				HX_STACK_LINE(30)
				return (  (((_g == __this->sourceSize->x))) ? bool(_Function_2_1::Block(__this,bmd)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(30)
	if (((  (((bmd != null()))) ? bool(_Function_1_1::Block(this,bmd)) : bool(false) ))){
		HX_STACK_LINE(32)
		result = bmd;
	}
	else{
		HX_STACK_LINE(34)
		if (((bmd != null()))){
			HX_STACK_LINE(36)
			bmd->dispose();
		}
	}
	HX_STACK_LINE(39)
	if (((result == null()))){
		HX_STACK_LINE(41)
		int _g2 = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(41)
		int _g3 = ::Std_obj::_int(this->sourceSize->y);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(41)
		return ::openfl::_v2::display::BitmapData_obj::__new(_g2,_g3,true,(int)0,null());
	}
	HX_STACK_LINE(44)
	::openfl::_v2::geom::Rectangle rect = ::flixel::math::FlxRect_obj::rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(45)
	int _g4 = result->get_width();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(45)
	int _g5 = result->get_height();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(45)
	rect->setTo((int)0,(int)0,_g4,_g5);
	HX_STACK_LINE(46)
	bmd->fillRect(rect,(int)0);
	HX_STACK_LINE(48)
	return result;
}


::openfl::_v2::display::BitmapData FlxEmptyFrame_obj::getHReversedBitmap( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxEmptyFrame","getHReversedBitmap",0xc59bf436,"flixel.graphics.frames.FlxEmptyFrame.getHReversedBitmap","flixel/graphics/frames/FlxEmptyFrame.hx",53,0x48befe44)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	return this->getBitmap();
}


::openfl::_v2::display::BitmapData FlxEmptyFrame_obj::getVReversedBitmap( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxEmptyFrame","getVReversedBitmap",0xeb5eb0c4,"flixel.graphics.frames.FlxEmptyFrame.getVReversedBitmap","flixel/graphics/frames/FlxEmptyFrame.hx",58,0x48befe44)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return this->getBitmap();
}


::openfl::_v2::display::BitmapData FlxEmptyFrame_obj::getHVReversedBitmap( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxEmptyFrame","getHVReversedBitmap",0xd3d92062,"flixel.graphics.frames.FlxEmptyFrame.getHVReversedBitmap","flixel/graphics/frames/FlxEmptyFrame.hx",63,0x48befe44)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	return this->getBitmap();
}



FlxEmptyFrame_obj::FlxEmptyFrame_obj()
{
}

Dynamic FlxEmptyFrame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"paintOnBitmap") ) { return paintOnBitmap_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getHReversedBitmap") ) { return getHReversedBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"getVReversedBitmap") ) { return getVReversedBitmap_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getHVReversedBitmap") ) { return getHVReversedBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxEmptyFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxEmptyFrame_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("paintOnBitmap"),
	HX_CSTRING("getHReversedBitmap"),
	HX_CSTRING("getVReversedBitmap"),
	HX_CSTRING("getHVReversedBitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEmptyFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEmptyFrame_obj::__mClass,"__mClass");
};

#endif

Class FlxEmptyFrame_obj::__mClass;

void FlxEmptyFrame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames.FlxEmptyFrame"), hx::TCanCast< FlxEmptyFrame_obj> ,sStaticFields,sMemberFields,
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

void FlxEmptyFrame_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
