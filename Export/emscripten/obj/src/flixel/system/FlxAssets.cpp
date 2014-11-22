#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_GraphicVirtualInput
#include <flixel/system/GraphicVirtualInput.h>
#endif
#ifndef INCLUDED_flixel_system_VirtualInputData
#include <flixel/system/VirtualInputData.h>
#endif
#ifndef INCLUDED_flixel_system__FlxAssets_FontDefault
#include <flixel/system/_FlxAssets/FontDefault.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_media_Sound
#include <openfl/_v2/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
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

Void FlxAssets_obj::__construct()
{
	return null();
}

//FlxAssets_obj::~FlxAssets_obj() { }

Dynamic FlxAssets_obj::__CreateEmpty() { return  new FlxAssets_obj; }
hx::ObjectPtr< FlxAssets_obj > FlxAssets_obj::__new()
{  hx::ObjectPtr< FlxAssets_obj > result = new FlxAssets_obj();
	result->__construct();
	return result;}

Dynamic FlxAssets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAssets_obj > result = new FlxAssets_obj();
	result->__construct();
	return result;}

::String FlxAssets_obj::FONT_DEFAULT;

::String FlxAssets_obj::FONT_DEBUGGER;

Void FlxAssets_obj::init( ){
{
		HX_STACK_FRAME("flixel.system.FlxAssets","init",0x4cb026b6,"flixel.system.FlxAssets.init","flixel/system/FlxAssets.hx",116,0xd3ac1356)
		HX_STACK_LINE(116)
		::openfl::_v2::text::Font_obj::registerFont(hx::ClassOf< ::flixel::system::_FlxAssets::FontDefault >());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,init,(void))

Void FlxAssets_obj::drawLogo( ::openfl::_v2::display::Graphics graph){
{
		HX_STACK_FRAME("flixel.system.FlxAssets","drawLogo",0xabec0035,"flixel.system.FlxAssets.drawLogo","flixel/system/FlxAssets.hx",124,0xd3ac1356)
		HX_STACK_ARG(graph,"graph")
		HX_STACK_LINE(126)
		graph->beginFill((int)47394,null());
		HX_STACK_LINE(127)
		graph->moveTo((int)50,(int)13);
		HX_STACK_LINE(128)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(129)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(130)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(131)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(132)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(133)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(134)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(135)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(136)
		graph->endFill();
		HX_STACK_LINE(139)
		graph->beginFill((int)16761138,null());
		HX_STACK_LINE(140)
		graph->moveTo((int)0,(int)0);
		HX_STACK_LINE(141)
		graph->lineTo((int)25,(int)0);
		HX_STACK_LINE(142)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(143)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(144)
		graph->lineTo((int)0,(int)25);
		HX_STACK_LINE(145)
		graph->lineTo((int)0,(int)0);
		HX_STACK_LINE(146)
		graph->endFill();
		HX_STACK_LINE(149)
		graph->beginFill((int)16066382,null());
		HX_STACK_LINE(150)
		graph->moveTo((int)100,(int)0);
		HX_STACK_LINE(151)
		graph->lineTo((int)75,(int)0);
		HX_STACK_LINE(152)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(153)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(154)
		graph->lineTo((int)100,(int)25);
		HX_STACK_LINE(155)
		graph->lineTo((int)100,(int)0);
		HX_STACK_LINE(156)
		graph->endFill();
		HX_STACK_LINE(159)
		graph->beginFill((int)3555839,null());
		HX_STACK_LINE(160)
		graph->moveTo((int)0,(int)100);
		HX_STACK_LINE(161)
		graph->lineTo((int)25,(int)100);
		HX_STACK_LINE(162)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(163)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(164)
		graph->lineTo((int)0,(int)75);
		HX_STACK_LINE(165)
		graph->lineTo((int)0,(int)100);
		HX_STACK_LINE(166)
		graph->endFill();
		HX_STACK_LINE(169)
		graph->beginFill((int)314875,null());
		HX_STACK_LINE(170)
		graph->moveTo((int)100,(int)100);
		HX_STACK_LINE(171)
		graph->lineTo((int)75,(int)100);
		HX_STACK_LINE(172)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(173)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(174)
		graph->lineTo((int)100,(int)75);
		HX_STACK_LINE(175)
		graph->lineTo((int)100,(int)100);
		HX_STACK_LINE(176)
		graph->endFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,drawLogo,(void))

::openfl::_v2::display::BitmapData FlxAssets_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("flixel.system.FlxAssets","getBitmapData",0x17128189,"flixel.system.FlxAssets.getBitmapData","flixel/system/FlxAssets.hx",181,0xd3ac1356)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(181)
	return ::openfl::_v2::Assets_obj::getBitmapData(id,false);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapData,return )

::openfl::_v2::display::BitmapData FlxAssets_obj::getBitmapFromClass( ::Class source){
	HX_STACK_FRAME("flixel.system.FlxAssets","getBitmapFromClass",0x223d9eaf,"flixel.system.FlxAssets.getBitmapFromClass","flixel/system/FlxAssets.hx",191,0xd3ac1356)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(192)
	::openfl::_v2::display::BitmapData bitmap = ::Type_obj::createInstance(source,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(bitmap,"bitmap");
	HX_STACK_LINE(193)
	return bitmap;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapFromClass,return )

::openfl::_v2::display::BitmapData FlxAssets_obj::resolveBitmapData( Dynamic Graphic){
	HX_STACK_FRAME("flixel.system.FlxAssets","resolveBitmapData",0x02df705f,"flixel.system.FlxAssets.resolveBitmapData","flixel/system/FlxAssets.hx",207,0xd3ac1356)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_LINE(208)
	if ((::Std_obj::is(Graphic,hx::ClassOf< ::openfl::_v2::display::BitmapData >()))){
		HX_STACK_LINE(210)
		return hx::TCast< openfl::_v2::display::BitmapData >::cast(Graphic);
	}
	else{
		HX_STACK_LINE(212)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(214)
			::openfl::_v2::display::BitmapData bitmap = ::Type_obj::createInstance(Graphic,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(214)
			return bitmap;
		}
		else{
			HX_STACK_LINE(216)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(218)
				return ::openfl::_v2::Assets_obj::getBitmapData(Graphic,false);
			}
		}
	}
	HX_STACK_LINE(221)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,resolveBitmapData,return )

::String FlxAssets_obj::resolveKey( Dynamic Graphic,::String Key){
	HX_STACK_FRAME("flixel.system.FlxAssets","resolveKey",0xd790f639,"flixel.system.FlxAssets.resolveKey","flixel/system/FlxAssets.hx",236,0xd3ac1356)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(237)
	if (((Key != null()))){
		HX_STACK_LINE(239)
		return Key;
	}
	HX_STACK_LINE(242)
	if ((::Std_obj::is(Graphic,hx::ClassOf< ::openfl::_v2::display::BitmapData >()))){
		HX_STACK_LINE(244)
		return Key;
	}
	else{
		HX_STACK_LINE(246)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(248)
			return ::Type_obj::getClassName(Graphic);
		}
		else{
			HX_STACK_LINE(250)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(252)
				return Graphic;
			}
		}
	}
	HX_STACK_LINE(255)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAssets_obj,resolveKey,return )

::openfl::_v2::media::Sound FlxAssets_obj::getSound( ::String id){
	HX_STACK_FRAME("flixel.system.FlxAssets","getSound",0x306e52ff,"flixel.system.FlxAssets.getSound","flixel/system/FlxAssets.hx",259,0xd3ac1356)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(260)
	::String extension = HX_CSTRING("");		HX_STACK_VAR(extension,"extension");
	HX_STACK_LINE(264)
	extension = HX_CSTRING(".ogg");
	HX_STACK_LINE(266)
	return ::openfl::_v2::Assets_obj::getSound((id + extension),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getSound,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAssets_obj::getVirtualInputFrames( ){
	HX_STACK_FRAME("flixel.system.FlxAssets","getVirtualInputFrames",0xfe1716d5,"flixel.system.FlxAssets.getVirtualInputFrames","flixel/system/FlxAssets.hx",270,0xd3ac1356)
	HX_STACK_LINE(271)
	::flixel::graphics::FlxGraphic graphic = ::flixel::graphics::FlxGraphic_obj::fromClass(hx::ClassOf< ::flixel::system::GraphicVirtualInput >(),null(),null(),null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(272)
	::flixel::system::VirtualInputData _g = ::flixel::system::VirtualInputData_obj::__new(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(272)
	::String _g1 = ::Std_obj::string(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(272)
	return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(graphic,_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,getVirtualInputFrames,return )


FlxAssets_obj::FlxAssets_obj()
{
}

Dynamic FlxAssets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawLogo") ) { return drawLogo_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resolveKey") ) { return resolveKey_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { return FONT_DEFAULT; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { return FONT_DEBUGGER; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resolveBitmapData") ) { return resolveBitmapData_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBitmapFromClass") ) { return getBitmapFromClass_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getVirtualInputFrames") ) { return getVirtualInputFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAssets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { FONT_DEFAULT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { FONT_DEBUGGER=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAssets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FONT_DEFAULT"),
	HX_CSTRING("FONT_DEBUGGER"),
	HX_CSTRING("init"),
	HX_CSTRING("drawLogo"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBitmapFromClass"),
	HX_CSTRING("resolveBitmapData"),
	HX_CSTRING("resolveKey"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getVirtualInputFrames"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#endif

Class FlxAssets_obj::__mClass;

void FlxAssets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxAssets"), hx::TCanCast< FlxAssets_obj> ,sStaticFields,sMemberFields,
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

void FlxAssets_obj::__boot()
{
	FONT_DEFAULT= HX_CSTRING("Nokia Cellphone FC Small");
	FONT_DEBUGGER= HX_CSTRING("Arial");
}

} // end namespace flixel
} // end namespace system
