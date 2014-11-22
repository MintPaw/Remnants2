#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace graphics{
namespace atlas{

Void FlxNode_obj::__construct(::flixel::math::FlxRect rect,::flixel::graphics::atlas::FlxAtlas atlas,hx::Null< bool >  __o_filled,::String __o_key,hx::Null< bool >  __o_rotated)
{
HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","new",0xeedfd332,"flixel.graphics.atlas.FlxNode.new","flixel/graphics/atlas/FlxNode.hx",77,0x6d18bb9f)
HX_STACK_THIS(this)
HX_STACK_ARG(rect,"rect")
HX_STACK_ARG(atlas,"atlas")
HX_STACK_ARG(__o_filled,"filled")
HX_STACK_ARG(__o_key,"key")
HX_STACK_ARG(__o_rotated,"rotated")
bool filled = __o_filled.Default(false);
::String key = __o_key.Default(HX_CSTRING(""));
bool rotated = __o_rotated.Default(false);
{
	HX_STACK_LINE(78)
	this->filled = filled;
	HX_STACK_LINE(79)
	this->left = null();
	HX_STACK_LINE(80)
	this->right = null();
	HX_STACK_LINE(81)
	this->rect = rect;
	HX_STACK_LINE(82)
	this->key = key;
	HX_STACK_LINE(83)
	this->atlas = atlas;
	HX_STACK_LINE(84)
	this->rotated = rotated;
}
;
	return null();
}

//FlxNode_obj::~FlxNode_obj() { }

Dynamic FlxNode_obj::__CreateEmpty() { return  new FlxNode_obj; }
hx::ObjectPtr< FlxNode_obj > FlxNode_obj::__new(::flixel::math::FlxRect rect,::flixel::graphics::atlas::FlxAtlas atlas,hx::Null< bool >  __o_filled,::String __o_key,hx::Null< bool >  __o_rotated)
{  hx::ObjectPtr< FlxNode_obj > result = new FlxNode_obj();
	result->__construct(rect,atlas,__o_filled,__o_key,__o_rotated);
	return result;}

Dynamic FlxNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxNode_obj > result = new FlxNode_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

hx::Object *FlxNode_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxNode_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","destroy",0x006100cc,"flixel.graphics.atlas.FlxNode.destroy","flixel/graphics/atlas/FlxNode.hx",88,0x6d18bb9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		this->key = null();
		HX_STACK_LINE(90)
		this->left = null();
		HX_STACK_LINE(91)
		this->right = null();
		HX_STACK_LINE(92)
		this->rect = null();
		HX_STACK_LINE(93)
		this->atlas = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,destroy,(void))

bool FlxNode_obj::canPlace( int width,int height){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","canPlace",0xb6bfba85,"flixel.graphics.atlas.FlxNode.canPlace","flixel/graphics/atlas/FlxNode.hx",101,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(101)
	return (bool((this->rect->width >= width)) && bool((this->rect->height >= height)));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxNode_obj,canPlace,return )

::flixel::graphics::frames::FlxTileFrames FlxNode_obj::getTileFrames( ::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","getTileFrames",0xf6655efc,"flixel.graphics.atlas.FlxNode.getTileFrames","flixel/graphics/atlas/FlxNode.hx",111,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(112)
	::openfl::_v2::display::BitmapData _g = this->atlas->get_bitmapData();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(112)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(_g,false,this->atlas->name);		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(113)
	::flixel::graphics::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(113)
	{
		HX_STACK_LINE(113)
		::flixel::graphics::frames::FlxAtlasFrames _this = this->atlas->getAtlasFrames();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(113)
		frame = _this->framesHash->get(this->key);
	}
	HX_STACK_LINE(115)
	if (((frame != null()))){
		HX_STACK_LINE(117)
		return ::flixel::graphics::frames::FlxTileFrames_obj::fromFrame(frame,tileSize,tileSpacing);
	}
	HX_STACK_LINE(120)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxNode_obj,getTileFrames,return )

::flixel::graphics::frames::FlxImageFrame FlxNode_obj::getImageFrame( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","getImageFrame",0xf79a185a,"flixel.graphics.atlas.FlxNode.getImageFrame","flixel/graphics/atlas/FlxNode.hx",128,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	::openfl::_v2::display::BitmapData _g = this->atlas->get_bitmapData();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(129)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(_g,false,this->atlas->name);		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(130)
	::flixel::graphics::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		::flixel::graphics::frames::FlxAtlasFrames _this = this->atlas->getAtlasFrames();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(130)
		frame = _this->framesHash->get(this->key);
	}
	HX_STACK_LINE(132)
	if (((frame != null()))){
		HX_STACK_LINE(134)
		return ::flixel::graphics::frames::FlxImageFrame_obj::fromFrame(frame);
	}
	HX_STACK_LINE(137)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,getImageFrame,return )

bool FlxNode_obj::get_isEmpty( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","get_isEmpty",0xd9c0632c,"flixel.graphics.atlas.FlxNode.get_isEmpty","flixel/graphics/atlas/FlxNode.hx",142,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	return (bool((bool(!(this->filled)) && bool((this->left == null())))) && bool((this->right == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_isEmpty,return )

int FlxNode_obj::get_x( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","get_x",0x3d1080a1,"flixel.graphics.atlas.FlxNode.get_x","flixel/graphics/atlas/FlxNode.hx",147,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	return ::Std_obj::_int(this->rect->x);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_x,return )

int FlxNode_obj::get_y( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","get_y",0x3d1080a2,"flixel.graphics.atlas.FlxNode.get_y","flixel/graphics/atlas/FlxNode.hx",152,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	return ::Std_obj::_int(this->rect->y);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_y,return )

int FlxNode_obj::get_width( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","get_width",0xb520feaf,"flixel.graphics.atlas.FlxNode.get_width","flixel/graphics/atlas/FlxNode.hx",157,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	return ::Std_obj::_int(this->rect->width);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_width,return )

int FlxNode_obj::set_width( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","set_width",0x9871eabb,"flixel.graphics.atlas.FlxNode.set_width","flixel/graphics/atlas/FlxNode.hx",161,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(162)
	this->rect->width = value;
	HX_STACK_LINE(163)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNode_obj,set_width,return )

int FlxNode_obj::get_height( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","get_height",0x7e0d531e,"flixel.graphics.atlas.FlxNode.get_height","flixel/graphics/atlas/FlxNode.hx",168,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(168)
	return ::Std_obj::_int(this->rect->height);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_height,return )

int FlxNode_obj::set_height( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","set_height",0x818af192,"flixel.graphics.atlas.FlxNode.set_height","flixel/graphics/atlas/FlxNode.hx",172,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(173)
	this->rect->height = value;
	HX_STACK_LINE(174)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNode_obj,set_height,return )


FlxNode_obj::FlxNode_obj()
{
}

void FlxNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxNode);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(filled,"filled");
	HX_MARK_MEMBER_NAME(atlas,"atlas");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(isEmpty,"isEmpty");
	HX_MARK_MEMBER_NAME(rotated,"rotated");
	HX_MARK_END_CLASS();
}

void FlxNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(filled,"filled");
	HX_VISIT_MEMBER_NAME(atlas,"atlas");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(isEmpty,"isEmpty");
	HX_VISIT_MEMBER_NAME(rotated,"rotated");
}

Dynamic FlxNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp ? get_x() : x; }
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp ? get_y() : y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"atlas") ) { return atlas; }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filled") ) { return filled; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return inCallProp ? get_isEmpty() : isEmpty; }
		if (HX_FIELD_EQ(inName,"rotated") ) { return rotated; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canPlace") ) { return canPlace_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isEmpty") ) { return get_isEmpty_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTileFrames") ) { return getTileFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"getImageFrame") ) { return getImageFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::flixel::graphics::atlas::FlxNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::flixel::graphics::atlas::FlxNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlas") ) { atlas=inValue.Cast< ::flixel::graphics::atlas::FlxAtlas >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filled") ) { filled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { isEmpty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotated") ) { rotated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("key"));
	outFields->push(HX_CSTRING("filled"));
	outFields->push(HX_CSTRING("atlas"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("isEmpty"));
	outFields->push(HX_CSTRING("rotated"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::atlas::FlxNode*/ ,(int)offsetof(FlxNode_obj,left),HX_CSTRING("left")},
	{hx::fsObject /*::flixel::graphics::atlas::FlxNode*/ ,(int)offsetof(FlxNode_obj,right),HX_CSTRING("right")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxNode_obj,rect),HX_CSTRING("rect")},
	{hx::fsString,(int)offsetof(FlxNode_obj,key),HX_CSTRING("key")},
	{hx::fsBool,(int)offsetof(FlxNode_obj,filled),HX_CSTRING("filled")},
	{hx::fsObject /*::flixel::graphics::atlas::FlxAtlas*/ ,(int)offsetof(FlxNode_obj,atlas),HX_CSTRING("atlas")},
	{hx::fsInt,(int)offsetof(FlxNode_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(FlxNode_obj,y),HX_CSTRING("y")},
	{hx::fsBool,(int)offsetof(FlxNode_obj,isEmpty),HX_CSTRING("isEmpty")},
	{hx::fsBool,(int)offsetof(FlxNode_obj,rotated),HX_CSTRING("rotated")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("rect"),
	HX_CSTRING("key"),
	HX_CSTRING("filled"),
	HX_CSTRING("atlas"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("rotated"),
	HX_CSTRING("destroy"),
	HX_CSTRING("canPlace"),
	HX_CSTRING("getTileFrames"),
	HX_CSTRING("getImageFrame"),
	HX_CSTRING("get_isEmpty"),
	HX_CSTRING("get_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxNode_obj::__mClass,"__mClass");
};

#endif

Class FlxNode_obj::__mClass;

void FlxNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.atlas.FlxNode"), hx::TCanCast< FlxNode_obj> ,sStaticFields,sMemberFields,
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

void FlxNode_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
