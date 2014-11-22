#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetType
#include <openfl/_v2/AssetType.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxAtlasFrames_obj::__construct(::flixel::graphics::FlxGraphic parent)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","new",0xed20cbc8,"flixel.graphics.frames.FlxAtlasFrames.new","flixel/graphics/frames/FlxAtlasFrames.hx",23,0x501ecb67)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(24)
	super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS);
	HX_STACK_LINE(25)
	parent->atlasFrames = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//FlxAtlasFrames_obj::~FlxAtlasFrames_obj() { }

Dynamic FlxAtlasFrames_obj::__CreateEmpty() { return  new FlxAtlasFrames_obj; }
hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__new(::flixel::graphics::FlxGraphic parent)
{  hx::ObjectPtr< FlxAtlasFrames_obj > result = new FlxAtlasFrames_obj();
	result->__construct(parent);
	return result;}

Dynamic FlxAtlasFrames_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAtlasFrames_obj > result = new FlxAtlasFrames_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerJson( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerJson",0xae76e627,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerJson","flixel/graphics/frames/FlxAtlasFrames.hx",36,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(37)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(38)
	if (((graphic == null()))){
		HX_STACK_LINE(38)
		return null();
	}
	HX_STACK_LINE(41)
	::flixel::graphics::frames::FlxAtlasFrames frames = graphic->atlasFrames;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(42)
	if (((frames != null()))){
		HX_STACK_LINE(43)
		return frames;
	}
	HX_STACK_LINE(45)
	if (((bool((graphic == null())) || bool((Description == null()))))){
		HX_STACK_LINE(45)
		return null();
	}
	HX_STACK_LINE(47)
	::flixel::graphics::frames::FlxAtlasFrames _g = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	frames = _g;
	HX_STACK_LINE(49)
	if ((::openfl::_v2::Assets_obj::exists(Description,null()))){
		HX_STACK_LINE(51)
		::String _g1 = ::openfl::_v2::Assets_obj::getText(Description);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		Description = _g1;
	}
	HX_STACK_LINE(54)
	Dynamic data = ::haxe::format::JsonParser_obj::__new(Description)->parseRec();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(56)
	bool rotated;		HX_STACK_VAR(rotated,"rotated");
	HX_STACK_LINE(57)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(58)
	::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
	HX_STACK_LINE(59)
	::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(60)
	int angle;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(61)
	::flixel::math::FlxRect frameRect;		HX_STACK_VAR(frameRect,"frameRect");
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		Dynamic _g11 = ::Lambda_obj::array(data->__Field(HX_CSTRING("frames"),true));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(63)
			Dynamic frame = _g11->__GetItem(_g1);		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(63)
			++(_g1);
			HX_STACK_LINE(65)
			rotated = frame->__Field(HX_CSTRING("rotated"),true);
			HX_STACK_LINE(66)
			name = frame->__Field(HX_CSTRING("filename"),true);
			HX_STACK_LINE(67)
			::flixel::math::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(frame->__Field(HX_CSTRING("sourceSize"),true)->__Field(HX_CSTRING("w"),true),frame->__Field(HX_CSTRING("sourceSize"),true)->__Field(HX_CSTRING("h"),true));		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(67)
				point->_inPool = false;
				HX_STACK_LINE(67)
				_g2 = point;
			}
			HX_STACK_LINE(67)
			sourceSize = _g2;
			HX_STACK_LINE(68)
			::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(frame->__Field(HX_CSTRING("spriteSourceSize"),true)->__Field(HX_CSTRING("x"),true),frame->__Field(HX_CSTRING("spriteSourceSize"),true)->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(68)
				point->_inPool = false;
				HX_STACK_LINE(68)
				_g3 = point;
			}
			HX_STACK_LINE(68)
			offset = _g3;
			HX_STACK_LINE(69)
			angle = (int)0;
			HX_STACK_LINE(70)
			frameRect = null();
			HX_STACK_LINE(72)
			if ((rotated)){
				HX_STACK_LINE(74)
				::flixel::math::FlxRect _g4 = ::flixel::math::FlxRect_obj::__new(frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("x"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("y"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("h"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("w"),true));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(74)
				frameRect = _g4;
				HX_STACK_LINE(75)
				angle = (int)-90;
			}
			else{
				HX_STACK_LINE(79)
				::flixel::math::FlxRect _g5 = ::flixel::math::FlxRect_obj::__new(frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("x"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("y"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("w"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("h"),true));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(79)
				frameRect = _g5;
			}
			HX_STACK_LINE(82)
			frames->addAtlasFrame(frameRect,sourceSize,offset,name,angle);
		}
	}
	HX_STACK_LINE(85)
	return frames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerJson,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromLibGdx( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromLibGdx",0x5ef5c818,"flixel.graphics.frames.FlxAtlasFrames.fromLibGdx","flixel/graphics/frames/FlxAtlasFrames.hx",97,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(98)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(99)
	if (((graphic == null()))){
		HX_STACK_LINE(99)
		return null();
	}
	HX_STACK_LINE(102)
	::flixel::graphics::frames::FlxAtlasFrames frames = graphic->atlasFrames;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(103)
	if (((frames != null()))){
		HX_STACK_LINE(104)
		return frames;
	}
	HX_STACK_LINE(106)
	if (((bool((graphic == null())) || bool((Description == null()))))){
		HX_STACK_LINE(106)
		return null();
	}
	HX_STACK_LINE(108)
	::flixel::graphics::frames::FlxAtlasFrames _g = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(108)
	frames = _g;
	HX_STACK_LINE(110)
	if ((::openfl::_v2::Assets_obj::exists(Description,null()))){
		HX_STACK_LINE(112)
		::String _g1 = ::openfl::_v2::Assets_obj::getText(Description);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(112)
		Description = _g1;
	}
	HX_STACK_LINE(115)
	::String pack = ::StringTools_obj::trim(Description);		HX_STACK_VAR(pack,"pack");
	HX_STACK_LINE(116)
	Array< ::String > lines = pack.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(117)
	lines->splice((int)0,(int)4);
	HX_STACK_LINE(118)
	int numElementsPerImage = (int)7;		HX_STACK_VAR(numElementsPerImage,"numElementsPerImage");
	HX_STACK_LINE(119)
	int numImages = ::Std_obj::_int((Float(lines->length) / Float(numElementsPerImage)));		HX_STACK_VAR(numImages,"numImages");
	HX_STACK_LINE(121)
	int curIndex;		HX_STACK_VAR(curIndex,"curIndex");
	HX_STACK_LINE(122)
	int imageX;		HX_STACK_VAR(imageX,"imageX");
	HX_STACK_LINE(123)
	int imageY;		HX_STACK_VAR(imageY,"imageY");
	HX_STACK_LINE(125)
	int imageWidth;		HX_STACK_VAR(imageWidth,"imageWidth");
	HX_STACK_LINE(126)
	int imageHeight;		HX_STACK_VAR(imageHeight,"imageHeight");
	HX_STACK_LINE(128)
	Array< int > size = Array_obj< int >::__new();		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(129)
	::String tempString;		HX_STACK_VAR(tempString,"tempString");
	HX_STACK_LINE(131)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(132)
	bool rotated;		HX_STACK_VAR(rotated,"rotated");
	HX_STACK_LINE(133)
	int angle;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(134)
	::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(135)
	::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
	HX_STACK_LINE(136)
	::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(138)
		while((true)){
			HX_STACK_LINE(138)
			if ((!(((_g1 < numImages))))){
				HX_STACK_LINE(138)
				break;
			}
			HX_STACK_LINE(138)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(140)
			curIndex = (i * numElementsPerImage);
			HX_STACK_LINE(142)
			int _g2 = (curIndex)++;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(142)
			::String _g3 = lines->__get(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(142)
			name = _g3;
			HX_STACK_LINE(143)
			int _g4 = (curIndex)++;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(143)
			int _g5 = lines->__get(_g4).indexOf(HX_CSTRING("true"),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(143)
			bool _g6 = (_g5 >= (int)0);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(143)
			rotated = _g6;
			HX_STACK_LINE(144)
			angle = (int)0;
			HX_STACK_LINE(146)
			int _g7 = (curIndex)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(146)
			::String _g8 = lines->__get(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(146)
			tempString = _g8;
			HX_STACK_LINE(147)
			Array< int > _g9 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(147)
			size = _g9;
			HX_STACK_LINE(149)
			imageX = size->__get((int)0);
			HX_STACK_LINE(150)
			imageY = size->__get((int)1);
			HX_STACK_LINE(152)
			int _g10 = (curIndex)++;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(152)
			::String _g11 = lines->__get(_g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(152)
			tempString = _g11;
			HX_STACK_LINE(153)
			Array< int > _g12 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(153)
			size = _g12;
			HX_STACK_LINE(155)
			imageWidth = size->__get((int)0);
			HX_STACK_LINE(156)
			imageHeight = size->__get((int)1);
			HX_STACK_LINE(158)
			rect = null();
			HX_STACK_LINE(159)
			if ((rotated)){
				HX_STACK_LINE(161)
				::flixel::math::FlxRect _g13 = ::flixel::math::FlxRect_obj::__new(imageX,imageY,imageHeight,imageWidth);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(161)
				rect = _g13;
				HX_STACK_LINE(162)
				angle = (int)90;
			}
			else{
				HX_STACK_LINE(166)
				::flixel::math::FlxRect _g14 = ::flixel::math::FlxRect_obj::__new(imageX,imageY,imageWidth,imageHeight);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(166)
				rect = _g14;
			}
			HX_STACK_LINE(169)
			int _g15 = (curIndex)++;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(169)
			::String _g16 = lines->__get(_g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(169)
			tempString = _g16;
			HX_STACK_LINE(170)
			Array< int > _g17 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(170)
			size = _g17;
			HX_STACK_LINE(172)
			::flixel::math::FlxPoint _g18;		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(172)
			{
				HX_STACK_LINE(172)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(size->__get((int)0),size->__get((int)1));		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(172)
				point->_inPool = false;
				HX_STACK_LINE(172)
				_g18 = point;
			}
			HX_STACK_LINE(172)
			sourceSize = _g18;
			HX_STACK_LINE(174)
			int _g19 = (curIndex)++;		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(174)
			::String _g20 = lines->__get(_g19);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(174)
			tempString = _g20;
			HX_STACK_LINE(175)
			Array< int > _g21 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(175)
			size = _g21;
			HX_STACK_LINE(177)
			::flixel::math::FlxPoint _g22;		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(size->__get((int)0),size->__get((int)1));		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(177)
				point->_inPool = false;
				HX_STACK_LINE(177)
				_g22 = point;
			}
			HX_STACK_LINE(177)
			offset = _g22;
			HX_STACK_LINE(178)
			frames->addAtlasFrame(rect,sourceSize,offset,name,angle);
		}
	}
	HX_STACK_LINE(181)
	return frames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromLibGdx,return )

Array< int > FlxAtlasFrames_obj::getDimensions( ::String line,Array< int > size){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","getDimensions",0x0a6267eb,"flixel.graphics.frames.FlxAtlasFrames.getDimensions","flixel/graphics/frames/FlxAtlasFrames.hx",192,0x501ecb67)
	HX_STACK_ARG(line,"line")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(193)
	int colonPosition = line.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(colonPosition,"colonPosition");
	HX_STACK_LINE(194)
	int comaPosition = line.indexOf(HX_CSTRING(","),null());		HX_STACK_VAR(comaPosition,"comaPosition");
	HX_STACK_LINE(196)
	::String _g = line.substring((colonPosition + (int)1),comaPosition);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(196)
	size[(int)0] = ::Std_obj::parseInt(_g);
	HX_STACK_LINE(197)
	::String _g1 = line.substring((comaPosition + (int)1),line.length);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(197)
	size[(int)1] = ::Std_obj::parseInt(_g1);
	HX_STACK_LINE(199)
	return size;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,getDimensions,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSparrow( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromSparrow",0x30bf432a,"flixel.graphics.frames.FlxAtlasFrames.fromSparrow","flixel/graphics/frames/FlxAtlasFrames.hx",211,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(212)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(213)
	if (((graphic == null()))){
		HX_STACK_LINE(213)
		return null();
	}
	HX_STACK_LINE(216)
	::flixel::graphics::frames::FlxAtlasFrames frames = graphic->atlasFrames;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(217)
	if (((frames != null()))){
		HX_STACK_LINE(218)
		return frames;
	}
	HX_STACK_LINE(220)
	if (((bool((graphic == null())) || bool((Description == null()))))){
		HX_STACK_LINE(220)
		return null();
	}
	HX_STACK_LINE(222)
	::flixel::graphics::frames::FlxAtlasFrames _g = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(222)
	frames = _g;
	HX_STACK_LINE(224)
	if ((::openfl::_v2::Assets_obj::exists(Description,null()))){
		HX_STACK_LINE(226)
		::String _g1 = ::openfl::_v2::Assets_obj::getText(Description);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(226)
		Description = _g1;
	}
	HX_STACK_LINE(229)
	::Xml _g2 = ::Xml_obj::parse(Description)->firstElement();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(229)
	::haxe::xml::Fast data = ::haxe::xml::Fast_obj::__new(_g2);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(231)
	int angle;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(232)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(233)
	bool trimmed;		HX_STACK_VAR(trimmed,"trimmed");
	HX_STACK_LINE(234)
	bool rotated;		HX_STACK_VAR(rotated,"rotated");
	HX_STACK_LINE(235)
	::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(236)
	::openfl::_v2::geom::Rectangle size;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(237)
	::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(238)
	::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
	HX_STACK_LINE(240)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("SubTexture"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast texture = __it->next();
		{
			HX_STACK_LINE(242)
			::String _g3 = texture->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(242)
			name = _g3;
			HX_STACK_LINE(243)
			bool _g4 = texture->has->resolve(HX_CSTRING("frameX"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(243)
			trimmed = _g4;
			HX_STACK_LINE(244)
			bool _g6;		HX_STACK_VAR(_g6,"_g6");
			struct _Function_2_1{
				inline static bool Block( ::haxe::xml::Fast &texture){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxAtlasFrames.hx",244,0x501ecb67)
					{
						HX_STACK_LINE(244)
						::String _g5 = texture->att->resolve(HX_CSTRING("rotated"));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(244)
						return (_g5 == HX_CSTRING("true"));
					}
					return null();
				}
			};
			HX_STACK_LINE(244)
			if (((  ((texture->has->resolve(HX_CSTRING("rotated")))) ? bool(_Function_2_1::Block(texture)) : bool(false) ))){
				HX_STACK_LINE(244)
				_g6 = true;
			}
			else{
				HX_STACK_LINE(244)
				_g6 = false;
			}
			HX_STACK_LINE(244)
			rotated = _g6;
			HX_STACK_LINE(246)
			::String _g7 = texture->att->resolve(HX_CSTRING("x"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(246)
			Float _g8 = ::Std_obj::parseFloat(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(246)
			::String _g9 = texture->att->resolve(HX_CSTRING("y"));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(246)
			Float _g10 = ::Std_obj::parseFloat(_g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(246)
			::String _g11 = texture->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(246)
			Float _g12 = ::Std_obj::parseFloat(_g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(246)
			::String _g13 = texture->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(246)
			Float _g14 = ::Std_obj::parseFloat(_g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(246)
			::flixel::math::FlxRect _g15 = ::flixel::math::FlxRect_obj::__new(_g8,_g10,_g12,_g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(246)
			rect = _g15;
			HX_STACK_LINE(248)
			::openfl::_v2::geom::Rectangle _g24;		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(248)
			if ((trimmed)){
				HX_STACK_LINE(250)
				::String _g16 = texture->att->resolve(HX_CSTRING("frameX"));		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(250)
				Dynamic _g17 = ::Std_obj::parseInt(_g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(250)
				::String _g18 = texture->att->resolve(HX_CSTRING("frameY"));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(250)
				Dynamic _g19 = ::Std_obj::parseInt(_g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(250)
				::String _g20 = texture->att->resolve(HX_CSTRING("frameWidth"));		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(250)
				Dynamic _g21 = ::Std_obj::parseInt(_g20);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(250)
				::String _g22 = texture->att->resolve(HX_CSTRING("frameHeight"));		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(250)
				Dynamic _g23 = ::Std_obj::parseInt(_g22);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(250)
				_g24 = ::openfl::_v2::geom::Rectangle_obj::__new(_g17,_g19,_g21,_g23);
			}
			else{
				HX_STACK_LINE(254)
				_g24 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,rect->width,rect->height);
			}
			HX_STACK_LINE(248)
			size = _g24;
			HX_STACK_LINE(257)
			if ((rotated)){
				HX_STACK_LINE(257)
				angle = (int)-90;
			}
			else{
				HX_STACK_LINE(257)
				angle = (int)0;
			}
			HX_STACK_LINE(259)
			::flixel::math::FlxPoint _g25;		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				Float X = -(size->get_left());		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(259)
				Float Y = -(size->get_top());		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(259)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(259)
				point->_inPool = false;
				HX_STACK_LINE(259)
				_g25 = point;
			}
			HX_STACK_LINE(259)
			offset = _g25;
			HX_STACK_LINE(260)
			::flixel::math::FlxPoint _g26;		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(size->width,size->height);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(260)
				point->_inPool = false;
				HX_STACK_LINE(260)
				_g26 = point;
			}
			HX_STACK_LINE(260)
			sourceSize = _g26;
			HX_STACK_LINE(262)
			if (((bool(rotated) && bool(!(trimmed))))){
				HX_STACK_LINE(264)
				sourceSize->set(size->height,size->width);
			}
			HX_STACK_LINE(267)
			frames->addAtlasFrame(rect,sourceSize,offset,name,angle);
		}
;
	}
	HX_STACK_LINE(270)
	return frames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSparrow,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerXml( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerXml",0x5ca98eb8,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerXml","flixel/graphics/frames/FlxAtlasFrames.hx",282,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(283)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(284)
	if (((graphic == null()))){
		HX_STACK_LINE(284)
		return null();
	}
	HX_STACK_LINE(287)
	::flixel::graphics::frames::FlxAtlasFrames frames = graphic->atlasFrames;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(288)
	if (((frames != null()))){
		HX_STACK_LINE(289)
		return frames;
	}
	HX_STACK_LINE(291)
	if (((bool((graphic == null())) || bool((Description == null()))))){
		HX_STACK_LINE(291)
		return null();
	}
	HX_STACK_LINE(293)
	::flixel::graphics::frames::FlxAtlasFrames _g = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(293)
	frames = _g;
	HX_STACK_LINE(295)
	if ((::openfl::_v2::Assets_obj::exists(Description,null()))){
		HX_STACK_LINE(297)
		::String _g1 = ::openfl::_v2::Assets_obj::getText(Description);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(297)
		Description = _g1;
	}
	HX_STACK_LINE(300)
	::Xml xml = ::Xml_obj::parse(Description);		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(301)
	::Xml root = xml->firstElement();		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(303)
	bool rotated;		HX_STACK_VAR(rotated,"rotated");
	HX_STACK_LINE(304)
	bool trimmed;		HX_STACK_VAR(trimmed,"trimmed");
	HX_STACK_LINE(305)
	int angle;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(306)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(307)
	::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(308)
	::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(309)
	::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
	HX_STACK_LINE(311)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(root->elements());  __it->hasNext(); ){
		::Xml sprite = __it->next();
		{
			HX_STACK_LINE(313)
			bool _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(313)
			if ((!(sprite->exists(HX_CSTRING("oX"))))){
				HX_STACK_LINE(313)
				_g2 = sprite->exists(HX_CSTRING("oY"));
			}
			else{
				HX_STACK_LINE(313)
				_g2 = true;
			}
			HX_STACK_LINE(313)
			trimmed = _g2;
			HX_STACK_LINE(314)
			bool _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(314)
			if ((sprite->exists(HX_CSTRING("r")))){
				HX_STACK_LINE(314)
				::String _g3 = sprite->get(HX_CSTRING("r"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(314)
				_g4 = (_g3 == HX_CSTRING("y"));
			}
			else{
				HX_STACK_LINE(314)
				_g4 = false;
			}
			HX_STACK_LINE(314)
			rotated = _g4;
			HX_STACK_LINE(315)
			if ((rotated)){
				HX_STACK_LINE(315)
				angle = (int)-90;
			}
			else{
				HX_STACK_LINE(315)
				angle = (int)0;
			}
			HX_STACK_LINE(316)
			::String _g5 = sprite->get(HX_CSTRING("n"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(316)
			name = _g5;
			HX_STACK_LINE(317)
			::flixel::math::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(317)
			{
				HX_STACK_LINE(317)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(317)
				point->_inPool = false;
				HX_STACK_LINE(317)
				_g6 = point;
			}
			HX_STACK_LINE(317)
			offset = _g6;
			HX_STACK_LINE(318)
			::String _g7 = sprite->get(HX_CSTRING("x"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(318)
			Dynamic _g8 = ::Std_obj::parseInt(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(318)
			::String _g9 = sprite->get(HX_CSTRING("y"));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(318)
			Dynamic _g10 = ::Std_obj::parseInt(_g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(318)
			::String _g11 = sprite->get(HX_CSTRING("w"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(318)
			Dynamic _g12 = ::Std_obj::parseInt(_g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(318)
			::String _g13 = sprite->get(HX_CSTRING("h"));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(318)
			Dynamic _g14 = ::Std_obj::parseInt(_g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(318)
			::flixel::math::FlxRect _g15 = ::flixel::math::FlxRect_obj::__new(_g8,_g10,_g12,_g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(318)
			rect = _g15;
			HX_STACK_LINE(319)
			::flixel::math::FlxPoint _g16;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(rect->width,rect->height);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(319)
				point->_inPool = false;
				HX_STACK_LINE(319)
				_g16 = point;
			}
			HX_STACK_LINE(319)
			sourceSize = _g16;
			HX_STACK_LINE(321)
			if ((trimmed)){
				HX_STACK_LINE(323)
				::String _g17 = sprite->get(HX_CSTRING("oX"));		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(323)
				Dynamic _g18 = ::Std_obj::parseInt(_g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(323)
				::String _g19 = sprite->get(HX_CSTRING("oY"));		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(323)
				Dynamic _g20 = ::Std_obj::parseInt(_g19);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(323)
				offset->set(_g18,_g20);
				HX_STACK_LINE(324)
				::String _g21 = sprite->get(HX_CSTRING("oW"));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(324)
				Dynamic _g22 = ::Std_obj::parseInt(_g21);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(324)
				::String _g23 = sprite->get(HX_CSTRING("oH"));		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(324)
				Dynamic _g24 = ::Std_obj::parseInt(_g23);		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(324)
				sourceSize->set(_g22,_g24);
			}
			HX_STACK_LINE(327)
			frames->addAtlasFrame(rect,sourceSize,offset,name,angle);
		}
;
	}
	HX_STACK_LINE(330)
	return frames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerXml,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSpriteSheetPacker( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromSpriteSheetPacker",0x4fb8a81e,"flixel.graphics.frames.FlxAtlasFrames.fromSpriteSheetPacker","flixel/graphics/frames/FlxAtlasFrames.hx",342,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(343)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(344)
	if (((graphic == null()))){
		HX_STACK_LINE(344)
		return null();
	}
	HX_STACK_LINE(347)
	::flixel::graphics::frames::FlxAtlasFrames frames = graphic->atlasFrames;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(348)
	if (((frames != null()))){
		HX_STACK_LINE(349)
		return frames;
	}
	HX_STACK_LINE(351)
	if (((bool((graphic == null())) || bool((Description == null()))))){
		HX_STACK_LINE(351)
		return null();
	}
	HX_STACK_LINE(353)
	::flixel::graphics::frames::FlxAtlasFrames _g = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(353)
	frames = _g;
	HX_STACK_LINE(355)
	if ((::openfl::_v2::Assets_obj::exists(Description,null()))){
		HX_STACK_LINE(357)
		::String _g1 = ::openfl::_v2::Assets_obj::getText(Description);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(357)
		Description = _g1;
	}
	HX_STACK_LINE(360)
	::String pack = ::StringTools_obj::trim(Description);		HX_STACK_VAR(pack,"pack");
	HX_STACK_LINE(361)
	Array< ::String > lines = pack.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(362)
	int numImages = lines->length;		HX_STACK_VAR(numImages,"numImages");
	HX_STACK_LINE(364)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(365)
	int angle = (int)0;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(366)
	::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(367)
	::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
	HX_STACK_LINE(368)
	::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(370)
	Array< ::String > currImageData;		HX_STACK_VAR(currImageData,"currImageData");
	HX_STACK_LINE(371)
	Array< ::String > currImageRegion;		HX_STACK_VAR(currImageRegion,"currImageRegion");
	HX_STACK_LINE(373)
	{
		HX_STACK_LINE(373)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(373)
		while((true)){
			HX_STACK_LINE(373)
			if ((!(((_g1 < numImages))))){
				HX_STACK_LINE(373)
				break;
			}
			HX_STACK_LINE(373)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(375)
			Array< ::String > _g2 = lines->__get(i).split(HX_CSTRING("="));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(375)
			currImageData = _g2;
			HX_STACK_LINE(376)
			::String _g3 = ::StringTools_obj::trim(currImageData->__get((int)0));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(376)
			name = _g3;
			HX_STACK_LINE(377)
			Array< ::String > _g4 = ::StringTools_obj::trim(currImageData->__get((int)1)).split(HX_CSTRING(" "));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(377)
			currImageRegion = _g4;
			HX_STACK_LINE(379)
			Dynamic _g5 = ::Std_obj::parseInt(currImageRegion->__get((int)0));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(379)
			Dynamic _g6 = ::Std_obj::parseInt(currImageRegion->__get((int)1));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(379)
			Dynamic _g7 = ::Std_obj::parseInt(currImageRegion->__get((int)2));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(379)
			Dynamic _g8 = ::Std_obj::parseInt(currImageRegion->__get((int)3));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(379)
			::flixel::math::FlxRect _g9 = ::flixel::math::FlxRect_obj::__new(_g5,_g6,_g7,_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(379)
			rect = _g9;
			HX_STACK_LINE(380)
			::flixel::math::FlxPoint _g10 = ::flixel::math::FlxPoint_obj::__new(rect->width,rect->height);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(380)
			sourceSize = _g10;
			HX_STACK_LINE(381)
			::flixel::math::FlxPoint _g11 = ::flixel::math::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(381)
			offset = _g11;
			HX_STACK_LINE(383)
			frames->addAtlasFrame(rect,sourceSize,offset,name,angle);
		}
	}
	HX_STACK_LINE(386)
	return frames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSpriteSheetPacker,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","findFrame",0xf36e229c,"flixel.graphics.frames.FlxAtlasFrames.findFrame","flixel/graphics/frames/FlxAtlasFrames.hx",397,0x501ecb67)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_LINE(397)
	return graphic->atlasFrames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAtlasFrames_obj,findFrame,return )


FlxAtlasFrames_obj::FlxAtlasFrames_obj()
{
}

Dynamic FlxAtlasFrames_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"findFrame") ) { return findFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromLibGdx") ) { return fromLibGdx_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSparrow") ) { return fromSparrow_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDimensions") ) { return getDimensions_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromTexturePackerXml") ) { return fromTexturePackerXml_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fromTexturePackerJson") ) { return fromTexturePackerJson_dyn(); }
		if (HX_FIELD_EQ(inName,"fromSpriteSheetPacker") ) { return fromSpriteSheetPacker_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAtlasFrames_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAtlasFrames_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromTexturePackerJson"),
	HX_CSTRING("fromLibGdx"),
	HX_CSTRING("getDimensions"),
	HX_CSTRING("fromSparrow"),
	HX_CSTRING("fromTexturePackerXml"),
	HX_CSTRING("fromSpriteSheetPacker"),
	HX_CSTRING("findFrame"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAtlasFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAtlasFrames_obj::__mClass,"__mClass");
};

#endif

Class FlxAtlasFrames_obj::__mClass;

void FlxAtlasFrames_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames.FlxAtlasFrames"), hx::TCanCast< FlxAtlasFrames_obj> ,sStaticFields,sMemberFields,
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

void FlxAtlasFrames_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
