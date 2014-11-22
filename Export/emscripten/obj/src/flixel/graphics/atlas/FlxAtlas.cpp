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
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace graphics{
namespace atlas{

Void FlxAtlas_obj::__construct(::String name,hx::Null< bool >  __o_powerOfTwo,hx::Null< int >  __o_border,hx::Null< bool >  __o_rotate,::flixel::math::FlxPoint minSize,::flixel::math::FlxPoint maxSize)
{
HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","new",0xc05046bf,"flixel.graphics.atlas.FlxAtlas.new","flixel/graphics/atlas/FlxAtlas.hx",25,0x03972f50)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(__o_powerOfTwo,"powerOfTwo")
HX_STACK_ARG(__o_border,"border")
HX_STACK_ARG(__o_rotate,"rotate")
HX_STACK_ARG(minSize,"minSize")
HX_STACK_ARG(maxSize,"maxSize")
bool powerOfTwo = __o_powerOfTwo.Default(false);
int border = __o_border.Default(1);
bool rotate = __o_rotate.Default(false);
{
	HX_STACK_LINE(97)
	this->powerOfTwo = false;
	HX_STACK_LINE(92)
	this->allowRotation = false;
	HX_STACK_LINE(87)
	this->maxHeight = (int)1024;
	HX_STACK_LINE(83)
	this->maxWidth = (int)1024;
	HX_STACK_LINE(78)
	this->minHeight = (int)128;
	HX_STACK_LINE(74)
	this->minWidth = (int)128;
	HX_STACK_LINE(57)
	this->border = (int)1;
	HX_STACK_LINE(117)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(117)
	this->nodes = _g;
	HX_STACK_LINE(118)
	this->name = name;
	HX_STACK_LINE(119)
	this->set_powerOfTwo(powerOfTwo);
	HX_STACK_LINE(120)
	this->border = border;
	HX_STACK_LINE(122)
	if (((minSize != null()))){
		HX_STACK_LINE(122)
		minSize = minSize;
	}
	else{
		HX_STACK_LINE(122)
		minSize = ::flixel::graphics::atlas::FlxAtlas_obj::defaultMinSize;
	}
	HX_STACK_LINE(123)
	if (((maxSize != null()))){
		HX_STACK_LINE(123)
		maxSize = maxSize;
	}
	else{
		HX_STACK_LINE(123)
		maxSize = ::flixel::graphics::atlas::FlxAtlas_obj::defaultMaxSize;
	}
	HX_STACK_LINE(125)
	int _g1 = ::Std_obj::_int(minSize->x);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(125)
	this->set_minWidth(_g1);
	HX_STACK_LINE(126)
	int _g2 = ::Std_obj::_int(minSize->y);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(126)
	this->set_minHeight(_g2);
	HX_STACK_LINE(127)
	int _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(127)
	if (((maxSize->x > minSize->x))){
		HX_STACK_LINE(127)
		_g3 = ::Std_obj::_int(maxSize->x);
	}
	else{
		HX_STACK_LINE(127)
		_g3 = this->minWidth;
	}
	HX_STACK_LINE(127)
	this->set_maxWidth(_g3);
	HX_STACK_LINE(128)
	int _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(128)
	if (((maxSize->y > minSize->x))){
		HX_STACK_LINE(128)
		_g4 = ::Std_obj::_int(maxSize->y);
	}
	else{
		HX_STACK_LINE(128)
		_g4 = this->minHeight;
	}
	HX_STACK_LINE(128)
	this->set_maxHeight(_g4);
	HX_STACK_LINE(129)
	this->allowRotation = rotate;
	HX_STACK_LINE(131)
	this->initRoot();
}
;
	return null();
}

//FlxAtlas_obj::~FlxAtlas_obj() { }

Dynamic FlxAtlas_obj::__CreateEmpty() { return  new FlxAtlas_obj; }
hx::ObjectPtr< FlxAtlas_obj > FlxAtlas_obj::__new(::String name,hx::Null< bool >  __o_powerOfTwo,hx::Null< int >  __o_border,hx::Null< bool >  __o_rotate,::flixel::math::FlxPoint minSize,::flixel::math::FlxPoint maxSize)
{  hx::ObjectPtr< FlxAtlas_obj > result = new FlxAtlas_obj();
	result->__construct(name,__o_powerOfTwo,__o_border,__o_rotate,minSize,maxSize);
	return result;}

Dynamic FlxAtlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAtlas_obj > result = new FlxAtlas_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

hx::Object *FlxAtlas_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxAtlas_obj::initRoot( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","initRoot",0x37652e93,"flixel.graphics.atlas.FlxAtlas.initRoot","flixel/graphics/atlas/FlxAtlas.hx",135,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		int rootWidth = this->minWidth;		HX_STACK_VAR(rootWidth,"rootWidth");
		HX_STACK_LINE(137)
		int rootHeight = this->minHeight;		HX_STACK_VAR(rootHeight,"rootHeight");
		HX_STACK_LINE(139)
		if ((this->powerOfTwo)){
			HX_STACK_LINE(141)
			int _g = this->getNextPowerOf2(rootWidth);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			rootWidth = _g;
			HX_STACK_LINE(142)
			int _g1 = this->getNextPowerOf2(rootHeight);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(142)
			rootHeight = _g1;
		}
		HX_STACK_LINE(145)
		::flixel::math::FlxRect _g2 = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,rootWidth,rootHeight);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(145)
		::flixel::graphics::atlas::FlxNode _g3 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g2,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(145)
		this->root = _g3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,initRoot,(void))

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::addNode( Dynamic Graphic,::String Key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNode",0xeec7dea2,"flixel.graphics.atlas.FlxAtlas.addNode","flixel/graphics/atlas/FlxAtlas.hx",155,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(156)
	::String key = ::flixel::system::FlxAssets_obj::resolveKey(Graphic,Key);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(158)
	if (((key == null()))){
		HX_STACK_LINE(163)
		return null();
	}
	HX_STACK_LINE(166)
	bool _g = this->hasNodeWithName(key);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(166)
	if (((_g == true))){
		HX_STACK_LINE(167)
		return this->nodes->get(key);
	}
	HX_STACK_LINE(169)
	::openfl::_v2::display::BitmapData data = ::flixel::system::FlxAssets_obj::resolveBitmapData(Graphic);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(171)
	if (((data == null()))){
		HX_STACK_LINE(176)
		return null();
	}
	HX_STACK_LINE(180)
	if (((this->root->left == null()))){
		HX_STACK_LINE(181)
		return this->insertFirstNodeInRoot(data,key);
	}
	HX_STACK_LINE(183)
	if (((this->root->right == null()))){
		HX_STACK_LINE(185)
		return this->expand(data,key);
	}
	HX_STACK_LINE(189)
	::flixel::graphics::atlas::FlxNode inserted = this->tryInsert(data,key);		HX_STACK_VAR(inserted,"inserted");
	HX_STACK_LINE(190)
	if (((inserted != null()))){
		HX_STACK_LINE(191)
		return inserted;
	}
	HX_STACK_LINE(194)
	this->wrapRoot();
	HX_STACK_LINE(195)
	return this->expand(data,key);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addNode,return )

Void FlxAtlas_obj::wrapRoot( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","wrapRoot",0x7e08124d,"flixel.graphics.atlas.FlxAtlas.wrapRoot","flixel/graphics/atlas/FlxAtlas.hx",199,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(200)
		::flixel::graphics::atlas::FlxNode temp = this->root;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(201)
		int _g = ::Std_obj::_int(temp->rect->width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(201)
		int _g1 = ::Std_obj::_int(temp->rect->height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(201)
		::flixel::math::FlxRect _g2 = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(201)
		::flixel::graphics::atlas::FlxNode _g3 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g2,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(201)
		this->root = _g3;
		HX_STACK_LINE(202)
		this->root->left = temp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,wrapRoot,(void))

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::tryInsert( ::openfl::_v2::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","tryInsert",0xc0214673,"flixel.graphics.atlas.FlxAtlas.tryInsert","flixel/graphics/atlas/FlxAtlas.hx",206,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(207)
	int _g = data->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(207)
	int insertWidth = (_g + this->border);		HX_STACK_VAR(insertWidth,"insertWidth");
	HX_STACK_LINE(208)
	int _g1 = data->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(208)
	int insertHeight = (_g1 + this->border);		HX_STACK_VAR(insertHeight,"insertHeight");
	HX_STACK_LINE(210)
	bool rotateNode = false;		HX_STACK_VAR(rotateNode,"rotateNode");
	HX_STACK_LINE(211)
	::flixel::graphics::atlas::FlxNode nodeToInsert = this->findNodeToInsert(insertWidth,insertHeight);		HX_STACK_VAR(nodeToInsert,"nodeToInsert");
	HX_STACK_LINE(213)
	if ((this->allowRotation)){
		HX_STACK_LINE(215)
		::flixel::graphics::atlas::FlxNode nodeToInsertWithRotation = this->findNodeToInsert(insertHeight,insertWidth);		HX_STACK_VAR(nodeToInsertWithRotation,"nodeToInsertWithRotation");
		HX_STACK_LINE(217)
		if (((nodeToInsertWithRotation != null()))){
			HX_STACK_LINE(219)
			int _g2 = ::Std_obj::_int(nodeToInsertWithRotation->rect->width);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(219)
			int _g3 = ::Std_obj::_int(nodeToInsertWithRotation->rect->height);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(219)
			int nodeWithRotationArea = (_g2 * _g3);		HX_STACK_VAR(nodeWithRotationArea,"nodeWithRotationArea");
			struct _Function_3_1{
				inline static bool Block( ::flixel::graphics::atlas::FlxNode &nodeToInsert,int &nodeWithRotationArea){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",221,0x03972f50)
					{
						struct _Function_4_1{
							inline static bool Block( ::flixel::graphics::atlas::FlxNode &nodeToInsert,int &nodeWithRotationArea){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",221,0x03972f50)
								{
									HX_STACK_LINE(221)
									int _g4 = ::Std_obj::_int(nodeToInsert->rect->width);		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(221)
									int _g5 = ::Std_obj::_int(nodeToInsert->rect->height);		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(221)
									int _g6 = (_g4 * _g5);		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(221)
									return (_g6 > nodeWithRotationArea);
								}
								return null();
							}
						};
						HX_STACK_LINE(221)
						return (  (((nodeToInsert != null()))) ? bool(_Function_4_1::Block(nodeToInsert,nodeWithRotationArea)) : bool(false) );
					}
					return null();
				}
			};
			HX_STACK_LINE(221)
			if (((  ((!(((nodeToInsert == null()))))) ? bool(_Function_3_1::Block(nodeToInsert,nodeWithRotationArea)) : bool(true) ))){
				HX_STACK_LINE(223)
				nodeToInsert = nodeToInsertWithRotation;
				HX_STACK_LINE(224)
				rotateNode = true;
				HX_STACK_LINE(225)
				int temp = insertWidth;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(226)
				insertWidth = insertHeight;
				HX_STACK_LINE(227)
				insertHeight = temp;
			}
		}
	}
	HX_STACK_LINE(232)
	if (((nodeToInsert != null()))){
		HX_STACK_LINE(234)
		bool horizontally = this->needToDivideHorizontally(nodeToInsert,insertWidth,insertHeight);		HX_STACK_VAR(horizontally,"horizontally");
		HX_STACK_LINE(235)
		return this->divideNode(nodeToInsert,insertWidth,insertHeight,horizontally,data,key,rotateNode);
	}
	HX_STACK_LINE(238)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,tryInsert,return )

bool FlxAtlas_obj::needToDivideHorizontally( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","needToDivideHorizontally",0x28a8e09c,"flixel.graphics.atlas.FlxAtlas.needToDivideHorizontally","flixel/graphics/atlas/FlxAtlas.hx",242,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nodeToDivide,"nodeToDivide")
	HX_STACK_ARG(insertWidth,"insertWidth")
	HX_STACK_ARG(insertHeight,"insertHeight")
	HX_STACK_LINE(243)
	int _g = ::Std_obj::_int(nodeToDivide->rect->width);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(243)
	int dw = (_g - insertWidth);		HX_STACK_VAR(dw,"dw");
	HX_STACK_LINE(244)
	int _g1 = ::Std_obj::_int(nodeToDivide->rect->height);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(244)
	int dh = (_g1 - insertHeight);		HX_STACK_VAR(dh,"dh");
	HX_STACK_LINE(246)
	return (dw > dh);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAtlas_obj,needToDivideHorizontally,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::divideNode( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight,bool divideHorizontally,::openfl::_v2::display::BitmapData firstGrandChildData,::String firstGrandChildKey,hx::Null< bool >  __o_firstGrandChildRotated){
bool firstGrandChildRotated = __o_firstGrandChildRotated.Default(false);
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","divideNode",0x568bb99c,"flixel.graphics.atlas.FlxAtlas.divideNode","flixel/graphics/atlas/FlxAtlas.hx",250,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nodeToDivide,"nodeToDivide")
	HX_STACK_ARG(insertWidth,"insertWidth")
	HX_STACK_ARG(insertHeight,"insertHeight")
	HX_STACK_ARG(divideHorizontally,"divideHorizontally")
	HX_STACK_ARG(firstGrandChildData,"firstGrandChildData")
	HX_STACK_ARG(firstGrandChildKey,"firstGrandChildKey")
	HX_STACK_ARG(firstGrandChildRotated,"firstGrandChildRotated")
{
		HX_STACK_LINE(251)
		if (((nodeToDivide != null()))){
			HX_STACK_LINE(253)
			::flixel::graphics::atlas::FlxNode firstChild = null();		HX_STACK_VAR(firstChild,"firstChild");
			HX_STACK_LINE(254)
			::flixel::graphics::atlas::FlxNode secondChild = null();		HX_STACK_VAR(secondChild,"secondChild");
			HX_STACK_LINE(255)
			::flixel::graphics::atlas::FlxNode firstGrandChild = null();		HX_STACK_VAR(firstGrandChild,"firstGrandChild");
			HX_STACK_LINE(256)
			::flixel::graphics::atlas::FlxNode secondGrandChild = null();		HX_STACK_VAR(secondGrandChild,"secondGrandChild");
			HX_STACK_LINE(257)
			bool firstGrandChildFilled = (firstGrandChildKey != null());		HX_STACK_VAR(firstGrandChildFilled,"firstGrandChildFilled");
			HX_STACK_LINE(259)
			if ((divideHorizontally)){
				HX_STACK_LINE(261)
				int _g = ::Std_obj::_int(nodeToDivide->rect->x);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(261)
				int _g1 = ::Std_obj::_int(nodeToDivide->rect->y);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(261)
				int _g2 = ::Std_obj::_int(nodeToDivide->rect->height);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(261)
				::flixel::math::FlxRect _g3 = ::flixel::math::FlxRect_obj::__new(_g,_g1,insertWidth,_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(261)
				::flixel::graphics::atlas::FlxNode _g4 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g3,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(261)
				firstChild = _g4;
				HX_STACK_LINE(263)
				int _g5 = ::Std_obj::_int(nodeToDivide->rect->width);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(263)
				int _g6 = (_g5 - insertWidth);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(263)
				if (((_g6 > (int)0))){
					HX_STACK_LINE(265)
					int _g7 = ::Std_obj::_int(nodeToDivide->rect->x);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(265)
					int _g8 = (_g7 + insertWidth);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(265)
					int _g9 = ::Std_obj::_int(nodeToDivide->rect->y);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(265)
					int _g10 = ::Std_obj::_int(nodeToDivide->rect->width);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(265)
					int _g11 = (_g10 - insertWidth);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(265)
					int _g12 = ::Std_obj::_int(nodeToDivide->rect->height);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(265)
					::flixel::math::FlxRect _g13 = ::flixel::math::FlxRect_obj::__new(_g8,_g9,_g11,_g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(265)
					::flixel::graphics::atlas::FlxNode _g14 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g13,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(265)
					secondChild = _g14;
				}
				HX_STACK_LINE(268)
				int _g15 = ::Std_obj::_int(firstChild->rect->x);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(268)
				int _g16 = ::Std_obj::_int(firstChild->rect->y);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(268)
				::flixel::math::FlxRect _g17 = ::flixel::math::FlxRect_obj::__new(_g15,_g16,insertWidth,insertHeight);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(268)
				::flixel::graphics::atlas::FlxNode _g18 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g17,hx::ObjectPtr<OBJ_>(this),firstGrandChildFilled,firstGrandChildKey,firstGrandChildRotated);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(268)
				firstGrandChild = _g18;
				HX_STACK_LINE(270)
				int _g19 = ::Std_obj::_int(firstChild->rect->height);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(270)
				int _g20 = (_g19 - insertHeight);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(270)
				if (((_g20 > (int)0))){
					HX_STACK_LINE(272)
					int _g21 = ::Std_obj::_int(firstChild->rect->x);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(272)
					int _g22 = ::Std_obj::_int(firstChild->rect->y);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(272)
					int _g23 = (_g22 + insertHeight);		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(272)
					int _g24 = ::Std_obj::_int(firstChild->rect->height);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(272)
					int _g25 = (_g24 - insertHeight);		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(272)
					::flixel::math::FlxRect _g26 = ::flixel::math::FlxRect_obj::__new(_g21,_g23,insertWidth,_g25);		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(272)
					::flixel::graphics::atlas::FlxNode _g27 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g26,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(272)
					secondGrandChild = _g27;
				}
			}
			else{
				HX_STACK_LINE(278)
				int _g28 = ::Std_obj::_int(nodeToDivide->rect->x);		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(278)
				int _g29 = ::Std_obj::_int(nodeToDivide->rect->y);		HX_STACK_VAR(_g29,"_g29");
				HX_STACK_LINE(278)
				int _g30 = ::Std_obj::_int(nodeToDivide->rect->width);		HX_STACK_VAR(_g30,"_g30");
				HX_STACK_LINE(278)
				::flixel::math::FlxRect _g31 = ::flixel::math::FlxRect_obj::__new(_g28,_g29,_g30,insertHeight);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(278)
				::flixel::graphics::atlas::FlxNode _g32 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g31,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(278)
				firstChild = _g32;
				HX_STACK_LINE(280)
				int _g33 = ::Std_obj::_int(nodeToDivide->rect->height);		HX_STACK_VAR(_g33,"_g33");
				HX_STACK_LINE(280)
				int _g34 = (_g33 - insertHeight);		HX_STACK_VAR(_g34,"_g34");
				HX_STACK_LINE(280)
				if (((_g34 > (int)0))){
					HX_STACK_LINE(282)
					int _g35 = ::Std_obj::_int(nodeToDivide->rect->x);		HX_STACK_VAR(_g35,"_g35");
					HX_STACK_LINE(282)
					int _g36 = ::Std_obj::_int(nodeToDivide->rect->y);		HX_STACK_VAR(_g36,"_g36");
					HX_STACK_LINE(282)
					int _g37 = (_g36 + insertHeight);		HX_STACK_VAR(_g37,"_g37");
					HX_STACK_LINE(282)
					int _g38 = ::Std_obj::_int(nodeToDivide->rect->width);		HX_STACK_VAR(_g38,"_g38");
					HX_STACK_LINE(282)
					int _g39 = ::Std_obj::_int(nodeToDivide->rect->height);		HX_STACK_VAR(_g39,"_g39");
					HX_STACK_LINE(282)
					int _g40 = (_g39 - insertHeight);		HX_STACK_VAR(_g40,"_g40");
					HX_STACK_LINE(282)
					::flixel::math::FlxRect _g41 = ::flixel::math::FlxRect_obj::__new(_g35,_g37,_g38,_g40);		HX_STACK_VAR(_g41,"_g41");
					HX_STACK_LINE(282)
					::flixel::graphics::atlas::FlxNode _g42 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g41,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(_g42,"_g42");
					HX_STACK_LINE(282)
					secondChild = _g42;
				}
				HX_STACK_LINE(285)
				int _g43 = ::Std_obj::_int(firstChild->rect->x);		HX_STACK_VAR(_g43,"_g43");
				HX_STACK_LINE(285)
				int _g44 = ::Std_obj::_int(firstChild->rect->y);		HX_STACK_VAR(_g44,"_g44");
				HX_STACK_LINE(285)
				::flixel::math::FlxRect _g45 = ::flixel::math::FlxRect_obj::__new(_g43,_g44,insertWidth,insertHeight);		HX_STACK_VAR(_g45,"_g45");
				HX_STACK_LINE(285)
				::flixel::graphics::atlas::FlxNode _g46 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g45,hx::ObjectPtr<OBJ_>(this),firstGrandChildFilled,firstGrandChildKey,firstGrandChildRotated);		HX_STACK_VAR(_g46,"_g46");
				HX_STACK_LINE(285)
				firstGrandChild = _g46;
				HX_STACK_LINE(287)
				int _g47 = ::Std_obj::_int(firstChild->rect->width);		HX_STACK_VAR(_g47,"_g47");
				HX_STACK_LINE(287)
				int _g48 = (_g47 - insertWidth);		HX_STACK_VAR(_g48,"_g48");
				HX_STACK_LINE(287)
				if (((_g48 > (int)0))){
					HX_STACK_LINE(289)
					int _g49 = ::Std_obj::_int(firstChild->rect->x);		HX_STACK_VAR(_g49,"_g49");
					HX_STACK_LINE(289)
					int _g50 = (_g49 + insertWidth);		HX_STACK_VAR(_g50,"_g50");
					HX_STACK_LINE(289)
					int _g51 = ::Std_obj::_int(firstChild->rect->y);		HX_STACK_VAR(_g51,"_g51");
					HX_STACK_LINE(289)
					int _g52 = ::Std_obj::_int(firstChild->rect->width);		HX_STACK_VAR(_g52,"_g52");
					HX_STACK_LINE(289)
					int _g53 = (_g52 - insertWidth);		HX_STACK_VAR(_g53,"_g53");
					HX_STACK_LINE(289)
					::flixel::math::FlxRect _g54 = ::flixel::math::FlxRect_obj::__new(_g50,_g51,_g53,insertHeight);		HX_STACK_VAR(_g54,"_g54");
					HX_STACK_LINE(289)
					::flixel::graphics::atlas::FlxNode _g55 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g54,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(_g55,"_g55");
					HX_STACK_LINE(289)
					secondGrandChild = _g55;
				}
			}
			HX_STACK_LINE(293)
			firstChild->left = firstGrandChild;
			HX_STACK_LINE(294)
			firstChild->right = secondGrandChild;
			HX_STACK_LINE(296)
			nodeToDivide->left = firstChild;
			HX_STACK_LINE(297)
			nodeToDivide->right = secondChild;
			HX_STACK_LINE(300)
			if (((bool((firstGrandChildKey != null())) && bool((firstGrandChildData != null()))))){
				HX_STACK_LINE(302)
				this->expandBitmapData();
				HX_STACK_LINE(304)
				if ((firstGrandChildRotated)){
					HX_STACK_LINE(306)
					::openfl::_v2::geom::Matrix matrix = ::flixel::math::FlxMatrix_obj::matrix;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(307)
					matrix->identity();
					HX_STACK_LINE(308)
					matrix->rotate((Float(::Math_obj::PI) / Float((int)2)));
					HX_STACK_LINE(309)
					int _g56 = firstGrandChildData->get_height();		HX_STACK_VAR(_g56,"_g56");
					HX_STACK_LINE(309)
					int _g57 = ::Std_obj::_int(firstGrandChild->rect->x);		HX_STACK_VAR(_g57,"_g57");
					HX_STACK_LINE(309)
					int _g58 = (_g56 + _g57);		HX_STACK_VAR(_g58,"_g58");
					HX_STACK_LINE(309)
					int _g59 = ::Std_obj::_int(firstGrandChild->rect->y);		HX_STACK_VAR(_g59,"_g59");
					HX_STACK_LINE(309)
					matrix->translate(_g58,_g59);
					HX_STACK_LINE(310)
					this->_bitmapData->draw(firstGrandChildData,matrix,null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(314)
					::openfl::_v2::geom::Point point = ::flixel::math::FlxPoint_obj::point;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(315)
					int _g60 = ::Std_obj::_int(firstGrandChild->rect->x);		HX_STACK_VAR(_g60,"_g60");
					HX_STACK_LINE(315)
					int _g61 = ::Std_obj::_int(firstGrandChild->rect->y);		HX_STACK_VAR(_g61,"_g61");
					HX_STACK_LINE(315)
					point->setTo(_g60,_g61);
					HX_STACK_LINE(316)
					::openfl::_v2::geom::Rectangle _g62 = firstGrandChildData->get_rect();		HX_STACK_VAR(_g62,"_g62");
					HX_STACK_LINE(316)
					this->_bitmapData->copyPixels(firstGrandChildData,_g62,point,null(),null(),null());
				}
				HX_STACK_LINE(319)
				this->addNodeToAtlasFrames(firstGrandChild);
				HX_STACK_LINE(320)
				this->nodes->set(firstGrandChildKey,firstGrandChild);
			}
			HX_STACK_LINE(323)
			return firstGrandChild;
		}
		HX_STACK_LINE(326)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxAtlas_obj,divideNode,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::insertFirstNodeInRoot( ::openfl::_v2::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","insertFirstNodeInRoot",0xea82177f,"flixel.graphics.atlas.FlxAtlas.insertFirstNodeInRoot","flixel/graphics/atlas/FlxAtlas.hx",330,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(331)
	if (((this->root->left == null()))){
		HX_STACK_LINE(333)
		int _g = data->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(333)
		int insertWidth = (_g + this->border);		HX_STACK_VAR(insertWidth,"insertWidth");
		HX_STACK_LINE(334)
		int _g1 = data->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(334)
		int insertHeight = (_g1 + this->border);		HX_STACK_VAR(insertHeight,"insertHeight");
		HX_STACK_LINE(336)
		int rootWidth = insertWidth;		HX_STACK_VAR(rootWidth,"rootWidth");
		HX_STACK_LINE(337)
		int rootHeight = insertHeight;		HX_STACK_VAR(rootHeight,"rootHeight");
		HX_STACK_LINE(339)
		if ((this->powerOfTwo)){
			HX_STACK_LINE(341)
			int _g2 = this->getNextPowerOf2(rootWidth);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(341)
			rootWidth = _g2;
			HX_STACK_LINE(342)
			int _g3 = this->getNextPowerOf2(rootHeight);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(342)
			rootHeight = _g3;
		}
		HX_STACK_LINE(345)
		if (((this->minWidth > rootWidth))){
			HX_STACK_LINE(345)
			rootWidth = this->minWidth;
		}
		else{
			HX_STACK_LINE(345)
			rootWidth = rootWidth;
		}
		HX_STACK_LINE(346)
		if (((this->minHeight > rootHeight))){
			HX_STACK_LINE(346)
			rootHeight = this->minHeight;
		}
		else{
			HX_STACK_LINE(346)
			rootHeight = rootHeight;
		}
		HX_STACK_LINE(348)
		if ((this->powerOfTwo)){
			HX_STACK_LINE(350)
			int _g4 = this->getNextPowerOf2(rootWidth);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(350)
			rootWidth = _g4;
			HX_STACK_LINE(351)
			int _g5 = this->getNextPowerOf2(rootHeight);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(351)
			rootHeight = _g5;
		}
		HX_STACK_LINE(354)
		if (((bool((bool((this->maxWidth > (int)0)) && bool((rootWidth > this->maxWidth)))) || bool((bool((this->maxHeight > (int)0)) && bool((rootHeight > this->maxHeight))))))){
			HX_STACK_LINE(359)
			return null();
		}
		HX_STACK_LINE(362)
		this->root->set_width(rootWidth);
		HX_STACK_LINE(363)
		this->root->set_height(rootHeight);
		HX_STACK_LINE(365)
		bool horizontally = this->needToDivideHorizontally(this->root,insertWidth,insertHeight);		HX_STACK_VAR(horizontally,"horizontally");
		HX_STACK_LINE(366)
		return this->divideNode(this->root,insertWidth,insertHeight,horizontally,data,key,null());
	}
	HX_STACK_LINE(369)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,insertFirstNodeInRoot,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::expand( ::openfl::_v2::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","expand",0x67ef7d5b,"flixel.graphics.atlas.FlxAtlas.expand","flixel/graphics/atlas/FlxAtlas.hx",373,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(374)
	if (((this->root->right == null()))){
		HX_STACK_LINE(376)
		int _g = data->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(376)
		int insertWidth = (_g + this->border);		HX_STACK_VAR(insertWidth,"insertWidth");
		HX_STACK_LINE(377)
		int _g1 = data->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(377)
		int insertHeight = (_g1 + this->border);		HX_STACK_VAR(insertHeight,"insertHeight");
		HX_STACK_LINE(380)
		int _g2 = ::Std_obj::_int(this->root->rect->width);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(380)
		int addRightWidth = (_g2 + insertWidth);		HX_STACK_VAR(addRightWidth,"addRightWidth");
		HX_STACK_LINE(381)
		int _g3 = ::Std_obj::_int(this->root->rect->height);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(381)
		Float _g4 = ::Math_obj::max(_g3,insertHeight);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(381)
		int addRightHeight = ::Std_obj::_int(_g4);		HX_STACK_VAR(addRightHeight,"addRightHeight");
		HX_STACK_LINE(383)
		int _g5 = ::Std_obj::_int(this->root->rect->width);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(383)
		Float _g6 = ::Math_obj::max(_g5,insertWidth);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(383)
		int addBottomWidth = ::Std_obj::_int(_g6);		HX_STACK_VAR(addBottomWidth,"addBottomWidth");
		HX_STACK_LINE(384)
		int _g7 = ::Std_obj::_int(this->root->rect->height);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(384)
		int addBottomHeight = (_g7 + insertHeight);		HX_STACK_VAR(addBottomHeight,"addBottomHeight");
		HX_STACK_LINE(386)
		int addRightWidthRotate = addRightWidth;		HX_STACK_VAR(addRightWidthRotate,"addRightWidthRotate");
		HX_STACK_LINE(387)
		int addRightHeightRotate = addRightHeight;		HX_STACK_VAR(addRightHeightRotate,"addRightHeightRotate");
		HX_STACK_LINE(389)
		int addBottomWidthRotate = addBottomWidth;		HX_STACK_VAR(addBottomWidthRotate,"addBottomWidthRotate");
		HX_STACK_LINE(390)
		int addBottomHeightRotate = addBottomHeight;		HX_STACK_VAR(addBottomHeightRotate,"addBottomHeightRotate");
		HX_STACK_LINE(392)
		if ((this->allowRotation)){
			HX_STACK_LINE(394)
			int _g8 = ::Std_obj::_int(this->root->rect->width);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(394)
			int _g9 = (_g8 + insertHeight);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(394)
			addRightWidthRotate = _g9;
			HX_STACK_LINE(395)
			int _g10 = ::Std_obj::_int(this->root->rect->height);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(395)
			Float _g11 = ::Math_obj::max(_g10,insertWidth);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(395)
			int _g12 = ::Std_obj::_int(_g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(395)
			addRightHeightRotate = _g12;
			HX_STACK_LINE(397)
			int _g13 = ::Std_obj::_int(this->root->rect->width);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(397)
			Float _g14 = ::Math_obj::max(_g13,insertHeight);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(397)
			int _g15 = ::Std_obj::_int(_g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(397)
			addBottomWidthRotate = _g15;
			HX_STACK_LINE(398)
			int _g16 = ::Std_obj::_int(this->root->rect->height);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(398)
			int _g17 = (_g16 + insertWidth);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(398)
			addBottomHeightRotate = _g17;
		}
		HX_STACK_LINE(401)
		if ((this->powerOfTwo)){
			HX_STACK_LINE(403)
			int _g18 = this->getNextPowerOf2(addRightWidth);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(403)
			int _g19 = addRightWidth = _g18;		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(403)
			addRightWidthRotate = _g19;
			HX_STACK_LINE(404)
			int _g20 = this->getNextPowerOf2(addRightHeight);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(404)
			int _g21 = addRightHeight = _g20;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(404)
			addRightHeightRotate = _g21;
			HX_STACK_LINE(405)
			int _g22 = this->getNextPowerOf2(addBottomWidth);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(405)
			int _g23 = addBottomWidth = _g22;		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(405)
			addBottomWidthRotate = _g23;
			HX_STACK_LINE(406)
			int _g24 = this->getNextPowerOf2(addBottomHeight);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(406)
			int _g25 = addBottomHeight = _g24;		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(406)
			addBottomHeightRotate = _g25;
			HX_STACK_LINE(408)
			if ((this->allowRotation)){
				HX_STACK_LINE(410)
				int _g26 = this->getNextPowerOf2(addRightWidthRotate);		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(410)
				addRightWidthRotate = _g26;
				HX_STACK_LINE(411)
				int _g27 = this->getNextPowerOf2(addRightHeightRotate);		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(411)
				addRightHeightRotate = _g27;
				HX_STACK_LINE(412)
				int _g28 = this->getNextPowerOf2(addBottomWidthRotate);		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(412)
				addBottomWidthRotate = _g28;
				HX_STACK_LINE(413)
				int _g29 = this->getNextPowerOf2(addBottomHeightRotate);		HX_STACK_VAR(_g29,"_g29");
				HX_STACK_LINE(413)
				addBottomHeightRotate = _g29;
			}
		}
		HX_STACK_LINE(418)
		bool canExpandRight = true;		HX_STACK_VAR(canExpandRight,"canExpandRight");
		HX_STACK_LINE(419)
		bool canExpandBottom = true;		HX_STACK_VAR(canExpandBottom,"canExpandBottom");
		HX_STACK_LINE(421)
		bool canExpandRightRotate = this->allowRotation;		HX_STACK_VAR(canExpandRightRotate,"canExpandRightRotate");
		HX_STACK_LINE(422)
		bool canExpandBottomRotate = this->allowRotation;		HX_STACK_VAR(canExpandBottomRotate,"canExpandBottomRotate");
		HX_STACK_LINE(424)
		if (((bool((bool((this->maxWidth > (int)0)) && bool((addRightWidth > this->maxWidth)))) || bool((bool((this->maxHeight > (int)0)) && bool((addRightHeight > this->maxHeight))))))){
			HX_STACK_LINE(425)
			canExpandRight = false;
		}
		HX_STACK_LINE(427)
		if (((bool((bool((this->maxWidth > (int)0)) && bool((addBottomWidth > this->maxWidth)))) || bool((bool((this->maxHeight > (int)0)) && bool((addBottomHeight > this->maxHeight))))))){
			HX_STACK_LINE(428)
			canExpandBottom = false;
		}
		HX_STACK_LINE(430)
		if (((bool((bool((this->maxWidth > (int)0)) && bool((addRightWidthRotate > this->maxWidth)))) || bool((bool((this->maxHeight > (int)0)) && bool((addRightHeightRotate > this->maxHeight))))))){
			HX_STACK_LINE(431)
			canExpandRightRotate = false;
		}
		HX_STACK_LINE(433)
		if (((bool((bool((this->maxWidth > (int)0)) && bool((addBottomWidthRotate > this->maxWidth)))) || bool((bool((this->maxHeight > (int)0)) && bool((addBottomHeightRotate > this->maxHeight))))))){
			HX_STACK_LINE(434)
			canExpandBottomRotate = false;
		}
		HX_STACK_LINE(436)
		if (((bool((bool((bool(!(canExpandRight)) && bool(!(canExpandBottom)))) && bool(!(canExpandRightRotate)))) && bool(!(canExpandBottomRotate))))){
			HX_STACK_LINE(441)
			return null();
		}
		HX_STACK_LINE(446)
		int addRightArea = (addRightWidth * addRightHeight);		HX_STACK_VAR(addRightArea,"addRightArea");
		HX_STACK_LINE(447)
		int addBottomArea = (addBottomWidth * addBottomHeight);		HX_STACK_VAR(addBottomArea,"addBottomArea");
		HX_STACK_LINE(449)
		int addRightAreaRotate = (addRightWidthRotate * addRightHeightRotate);		HX_STACK_VAR(addRightAreaRotate,"addRightAreaRotate");
		HX_STACK_LINE(450)
		int addBottomAreaRotate = (addBottomWidthRotate * addBottomHeightRotate);		HX_STACK_VAR(addBottomAreaRotate,"addBottomAreaRotate");
		HX_STACK_LINE(452)
		bool rotateRight = false;		HX_STACK_VAR(rotateRight,"rotateRight");
		HX_STACK_LINE(453)
		bool rotateBottom = false;		HX_STACK_VAR(rotateBottom,"rotateBottom");
		HX_STACK_LINE(454)
		bool rotateNode = false;		HX_STACK_VAR(rotateNode,"rotateNode");
		HX_STACK_LINE(456)
		if (((bool((bool((bool(canExpandRight) && bool(canExpandRightRotate))) && bool((addRightArea > addRightAreaRotate)))) || bool((bool(!(canExpandRight)) && bool(canExpandRightRotate)))))){
			HX_STACK_LINE(458)
			addRightArea = addBottomAreaRotate;
			HX_STACK_LINE(459)
			addRightWidth = addRightWidthRotate;
			HX_STACK_LINE(460)
			addRightHeight = addRightHeightRotate;
			HX_STACK_LINE(461)
			canExpandRight = true;
			HX_STACK_LINE(462)
			rotateRight = true;
		}
		HX_STACK_LINE(465)
		if (((bool((bool((bool(canExpandBottom) && bool(canExpandBottomRotate))) && bool((addBottomArea > addBottomAreaRotate)))) || bool((bool(!(canExpandBottom)) && bool(canExpandBottomRotate)))))){
			HX_STACK_LINE(467)
			addBottomArea = addBottomAreaRotate;
			HX_STACK_LINE(468)
			addBottomWidth = addBottomWidthRotate;
			HX_STACK_LINE(469)
			addBottomHeight = addBottomHeightRotate;
			HX_STACK_LINE(470)
			canExpandBottom = true;
			HX_STACK_LINE(471)
			rotateBottom = true;
		}
		HX_STACK_LINE(474)
		if (((bool(!(canExpandRight)) && bool(canExpandBottom)))){
			HX_STACK_LINE(476)
			addRightArea = (addBottomArea + (int)1);
			HX_STACK_LINE(477)
			rotateNode = rotateRight;
		}
		else{
			HX_STACK_LINE(479)
			if (((bool(canExpandRight) && bool(!(canExpandBottom))))){
				HX_STACK_LINE(481)
				addBottomArea = (addRightArea + (int)1);
				HX_STACK_LINE(482)
				rotateNode = rotateBottom;
			}
		}
		HX_STACK_LINE(485)
		::flixel::graphics::atlas::FlxNode dataNode = null();		HX_STACK_VAR(dataNode,"dataNode");
		HX_STACK_LINE(486)
		::flixel::graphics::atlas::FlxNode temp = this->root;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(487)
		int insertNodeWidth = insertWidth;		HX_STACK_VAR(insertNodeWidth,"insertNodeWidth");
		HX_STACK_LINE(488)
		int insertNodeHeight = insertHeight;		HX_STACK_VAR(insertNodeHeight,"insertNodeHeight");
		HX_STACK_LINE(491)
		if (((addBottomArea >= addRightArea))){
			HX_STACK_LINE(493)
			if ((rotateRight)){
				HX_STACK_LINE(495)
				insertNodeWidth = insertHeight;
				HX_STACK_LINE(496)
				insertNodeHeight = insertWidth;
			}
			HX_STACK_LINE(499)
			int _g30 = ::Std_obj::_int(temp->rect->width);		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(499)
			int _g31 = (_g30 + insertNodeWidth);		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(499)
			int _g32 = ::Std_obj::_int(temp->rect->height);		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(499)
			Float _g33 = ::Math_obj::max(_g32,insertNodeHeight);		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(499)
			this->expandRoot(_g31,_g33,true,null());
			HX_STACK_LINE(500)
			::flixel::graphics::atlas::FlxNode _g34 = this->divideNode(this->root->right,insertNodeWidth,insertNodeHeight,true,data,key,rotateRight);		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(500)
			dataNode = _g34;
			HX_STACK_LINE(501)
			this->expandRoot(addRightWidth,addRightHeight,false,true);
		}
		else{
			HX_STACK_LINE(505)
			if ((rotateBottom)){
				HX_STACK_LINE(507)
				insertNodeWidth = insertHeight;
				HX_STACK_LINE(508)
				insertNodeHeight = insertWidth;
			}
			HX_STACK_LINE(511)
			int _g35 = ::Std_obj::_int(temp->rect->width);		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(511)
			Float _g36 = ::Math_obj::max(_g35,insertNodeWidth);		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(511)
			int _g37 = ::Std_obj::_int(temp->rect->height);		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(511)
			int _g38 = (_g37 + insertNodeHeight);		HX_STACK_VAR(_g38,"_g38");
			HX_STACK_LINE(511)
			this->expandRoot(_g36,_g38,false,null());
			HX_STACK_LINE(512)
			::flixel::graphics::atlas::FlxNode _g39 = this->divideNode(this->root->right,insertNodeWidth,insertNodeHeight,true,data,key,rotateBottom);		HX_STACK_VAR(_g39,"_g39");
			HX_STACK_LINE(512)
			dataNode = _g39;
			HX_STACK_LINE(513)
			this->expandRoot(addBottomWidth,addBottomHeight,false,true);
		}
		HX_STACK_LINE(516)
		return dataNode;
	}
	HX_STACK_LINE(519)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,expand,return )

Void FlxAtlas_obj::expandRoot( Float newWidth,Float newHeight,bool divideHorizontally,hx::Null< bool >  __o_decideHowToDivide){
bool decideHowToDivide = __o_decideHowToDivide.Default(false);
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","expandRoot",0x3df0e11d,"flixel.graphics.atlas.FlxAtlas.expandRoot","flixel/graphics/atlas/FlxAtlas.hx",523,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newWidth,"newWidth")
	HX_STACK_ARG(newHeight,"newHeight")
	HX_STACK_ARG(divideHorizontally,"divideHorizontally")
	HX_STACK_ARG(decideHowToDivide,"decideHowToDivide")
{
		HX_STACK_LINE(524)
		int _g = ::Std_obj::_int(this->root->rect->width);		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::graphics::atlas::FlxAtlas_obj > __this,Float &newHeight){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",524,0x03972f50)
				{
					HX_STACK_LINE(524)
					int _g1 = ::Std_obj::_int(__this->root->rect->height);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(524)
					return (newHeight > _g1);
				}
				return null();
			}
		};
		HX_STACK_LINE(524)
		if (((  ((!(((newWidth > _g))))) ? bool(_Function_1_1::Block(this,newHeight)) : bool(true) ))){
			HX_STACK_LINE(526)
			::flixel::graphics::atlas::FlxNode temp = this->root;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(527)
			::flixel::math::FlxRect _g2 = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,newWidth,newHeight);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(527)
			::flixel::graphics::atlas::FlxNode _g3 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g2,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(527)
			this->root = _g3;
			HX_STACK_LINE(529)
			bool _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(529)
			if ((decideHowToDivide)){
				HX_STACK_LINE(529)
				int _g4 = ::Std_obj::_int(temp->rect->width);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(529)
				int _g5 = ::Std_obj::_int(temp->rect->height);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(529)
				_g6 = this->needToDivideHorizontally(this->root,_g4,_g5);
			}
			else{
				HX_STACK_LINE(529)
				_g6 = divideHorizontally;
			}
			HX_STACK_LINE(529)
			divideHorizontally = _g6;
			HX_STACK_LINE(531)
			int _g7 = ::Std_obj::_int(temp->rect->width);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(531)
			int _g8 = ::Std_obj::_int(temp->rect->height);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(531)
			this->divideNode(this->root,_g7,_g8,divideHorizontally,null(),null(),null());
			HX_STACK_LINE(532)
			this->root->left->left = temp;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAtlas_obj,expandRoot,(void))

Void FlxAtlas_obj::expandBitmapData( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","expandBitmapData",0xdc8f96f4,"flixel.graphics.atlas.FlxAtlas.expandBitmapData","flixel/graphics/atlas/FlxAtlas.hx",537,0x03972f50)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::graphics::atlas::FlxAtlas_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",538,0x03972f50)
				{
					HX_STACK_LINE(538)
					int _g = __this->_bitmapData->get_width();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(538)
					int _g1 = ::Std_obj::_int(__this->root->rect->width);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(538)
					return (_g == _g1);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::flixel::graphics::atlas::FlxAtlas_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",538,0x03972f50)
				{
					HX_STACK_LINE(538)
					int _g2 = __this->_bitmapData->get_height();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(538)
					int _g3 = ::Std_obj::_int(__this->root->rect->height);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(538)
					return (_g2 == _g3);
				}
				return null();
			}
		};
		HX_STACK_LINE(538)
		if (((  (((  (((this->_bitmapData != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool(_Function_1_2::Block(this)) : bool(false) ))){
			HX_STACK_LINE(540)
			return null();
		}
		HX_STACK_LINE(543)
		int _g4 = ::Std_obj::_int(this->root->rect->width);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(543)
		int _g5 = ::Std_obj::_int(this->root->rect->height);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(543)
		::openfl::_v2::display::BitmapData newBitmapData = ::openfl::_v2::display::BitmapData_obj::__new(_g4,_g5,true,(int)0,null());		HX_STACK_VAR(newBitmapData,"newBitmapData");
		HX_STACK_LINE(544)
		if (((this->_bitmapData != null()))){
			HX_STACK_LINE(546)
			::openfl::_v2::geom::Point point = ::flixel::math::FlxPoint_obj::point;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(547)
			point->setTo((int)0,(int)0);
			HX_STACK_LINE(548)
			::openfl::_v2::geom::Rectangle _g6 = this->_bitmapData->get_rect();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(548)
			newBitmapData->copyPixels(this->_bitmapData,_g6,point,null(),null(),null());
		}
		HX_STACK_LINE(551)
		::openfl::_v2::display::BitmapData _g7 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_bitmapData);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(551)
		this->_bitmapData = _g7;
		HX_STACK_LINE(552)
		this->set_bitmapData(newBitmapData);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,expandBitmapData,(void))

int FlxAtlas_obj::getNextPowerOf2( Float number){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getNextPowerOf2",0x4894dade,"flixel.graphics.atlas.FlxAtlas.getNextPowerOf2","flixel/graphics/atlas/FlxAtlas.hx",556,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(number,"number")
	HX_STACK_LINE(557)
	Float _g = ::Math_obj::log(number);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(557)
	Float _g1 = ::Math_obj::log((int)2);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(557)
	Float powerFloat = (Float(_g) / Float(_g1));		HX_STACK_VAR(powerFloat,"powerFloat");
	HX_STACK_LINE(558)
	Float powerInt = ::Std_obj::_int(powerFloat);		HX_STACK_VAR(powerInt,"powerInt");
	HX_STACK_LINE(560)
	if ((((powerFloat - powerInt) == (int)0))){
		HX_STACK_LINE(561)
		return ::Std_obj::_int(number);
	}
	HX_STACK_LINE(563)
	Float _g2 = ::Math_obj::pow((int)2,(powerInt + (int)1));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(563)
	return ::Std_obj::_int(_g2);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,getNextPowerOf2,return )

::flixel::graphics::frames::FlxTileFrames FlxAtlas_obj::addNodeWithSpacings( Dynamic Graphic,::String Key,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNodeWithSpacings",0x60c91d78,"flixel.graphics.atlas.FlxAtlas.addNodeWithSpacings","flixel/graphics/atlas/FlxAtlas.hx",578,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(579)
	::String key = ::flixel::system::FlxAssets_obj::resolveKey(Graphic,Key);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(581)
	if (((key == null()))){
		HX_STACK_LINE(586)
		return null();
	}
	HX_STACK_LINE(589)
	::String _g = ::flixel::FlxG_obj::bitmap->getKeyWithSpacings(key,tileSize,tileSpacing,region);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(589)
	key = _g;
	HX_STACK_LINE(591)
	bool _g1 = this->hasNodeWithName(key);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(591)
	if (((_g1 == true))){
		HX_STACK_LINE(592)
		return this->nodes->get(key)->__Field(HX_CSTRING("getTileFrames"),true)(tileSize,tileSpacing);
	}
	HX_STACK_LINE(594)
	::openfl::_v2::display::BitmapData data = ::flixel::system::FlxAssets_obj::resolveBitmapData(Graphic);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(596)
	if (((data == null()))){
		HX_STACK_LINE(601)
		return null();
	}
	HX_STACK_LINE(604)
	::openfl::_v2::display::BitmapData nodeData = ::flixel::util::FlxBitmapDataUtil_obj::addSpacing(data,tileSize,tileSpacing,region);		HX_STACK_VAR(nodeData,"nodeData");
	HX_STACK_LINE(605)
	::flixel::graphics::atlas::FlxNode node = this->addNode(nodeData,key);		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(607)
	if (((node == null()))){
		HX_STACK_LINE(612)
		return null();
	}
	HX_STACK_LINE(615)
	return node->getTileFrames(tileSize,tileSpacing);
}


HX_DEFINE_DYNAMIC_FUNC5(FlxAtlas_obj,addNodeWithSpacings,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlas_obj::getAtlasFrames( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getAtlasFrames",0xe2ec465c,"flixel.graphics.atlas.FlxAtlas.getAtlasFrames","flixel/graphics/atlas/FlxAtlas.hx",624,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(625)
	::openfl::_v2::display::BitmapData _g = this->get_bitmapData();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(625)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(_g,false,this->name);		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(627)
	::flixel::graphics::frames::FlxAtlasFrames atlasFrames = null();		HX_STACK_VAR(atlasFrames,"atlasFrames");
	HX_STACK_LINE(628)
	if (((graphic->atlasFrames == null()))){
		HX_STACK_LINE(630)
		::flixel::graphics::frames::FlxAtlasFrames _g1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(630)
		graphic->atlasFrames = _g1;
		HX_STACK_LINE(631)
		atlasFrames = graphic->atlasFrames;
	}
	HX_STACK_LINE(634)
	for(::cpp::FastIterator_obj< ::flixel::graphics::atlas::FlxNode > *__it = ::cpp::CreateFastIterator< ::flixel::graphics::atlas::FlxNode >(this->nodes->iterator());  __it->hasNext(); ){
		::flixel::graphics::atlas::FlxNode node = __it->next();
		this->addNodeToAtlasFrames(node);
	}
	HX_STACK_LINE(637)
	return graphic->atlasFrames;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,getAtlasFrames,return )

Void FlxAtlas_obj::addNodeToAtlasFrames( ::flixel::graphics::atlas::FlxNode node){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNodeToAtlasFrames",0x19696d94,"flixel.graphics.atlas.FlxAtlas.addNodeToAtlasFrames","flixel/graphics/atlas/FlxAtlas.hx",641,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(642)
		::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->get(this->name);		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(643)
		if (((bool((bool((graphic == null())) || bool((graphic->atlasFrames == null())))) || bool((node == null()))))){
			HX_STACK_LINE(644)
			return null();
		}
		HX_STACK_LINE(646)
		::flixel::graphics::frames::FlxAtlasFrames atlasFrames = graphic->atlasFrames;		HX_STACK_VAR(atlasFrames,"atlasFrames");
		HX_STACK_LINE(648)
		if (((  ((node->filled)) ? bool(!(atlasFrames->framesHash->exists(node->key))) : bool(false) ))){
			HX_STACK_LINE(650)
			int _g = ::Std_obj::_int(node->rect->x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(650)
			int _g1 = ::Std_obj::_int(node->rect->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(650)
			int _g2 = ::Std_obj::_int(node->rect->width);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(650)
			int _g3 = (_g2 - this->border);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(650)
			int _g4 = ::Std_obj::_int(node->rect->height);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(650)
			int _g5 = (_g4 - this->border);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(650)
			::flixel::math::FlxRect frame = ::flixel::math::FlxRect_obj::__new(_g,_g1,_g3,_g5);		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(651)
			::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
			HX_STACK_LINE(651)
			if ((node->rotated)){
				HX_STACK_LINE(651)
				int _g6 = ::Std_obj::_int(node->rect->height);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(651)
				Float X = (_g6 - this->border);		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(651)
				int _g7 = ::Std_obj::_int(node->rect->width);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(651)
				Float Y = (_g7 - this->border);		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(651)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(651)
				point->_inPool = false;
				HX_STACK_LINE(651)
				sourceSize = point;
			}
			else{
				HX_STACK_LINE(651)
				int _g8 = ::Std_obj::_int(node->rect->width);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(651)
				Float X = (_g8 - this->border);		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(651)
				int _g9 = ::Std_obj::_int(node->rect->height);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(651)
				Float Y = (_g9 - this->border);		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(651)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(651)
				point->_inPool = false;
				HX_STACK_LINE(651)
				sourceSize = point;
			}
			HX_STACK_LINE(652)
			::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(652)
			{
				HX_STACK_LINE(652)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(652)
				point->_inPool = false;
				HX_STACK_LINE(652)
				offset = point;
			}
			HX_STACK_LINE(653)
			int angle;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(653)
			if ((node->rotated)){
				HX_STACK_LINE(653)
				angle = (int)-90;
			}
			else{
				HX_STACK_LINE(653)
				angle = (int)0;
			}
			HX_STACK_LINE(654)
			atlasFrames->addAtlasFrame(frame,sourceSize,offset,node->key,angle);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,addNodeToAtlasFrames,(void))

bool FlxAtlas_obj::hasNodeWithName( ::String nodeName){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","hasNodeWithName",0x3a185aec,"flixel.graphics.atlas.FlxAtlas.hasNodeWithName","flixel/graphics/atlas/FlxAtlas.hx",665,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nodeName,"nodeName")
	HX_STACK_LINE(665)
	return this->nodes->exists(nodeName);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,hasNodeWithName,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::getNode( ::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getNode",0x850d4b97,"flixel.graphics.atlas.FlxAtlas.getNode","flixel/graphics/atlas/FlxAtlas.hx",675,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(675)
	return this->nodes->get(key);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,getNode,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::addNodes( Array< ::Dynamic > bitmaps,Array< ::String > keys){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNodes",0x001aef91,"flixel.graphics.atlas.FlxAtlas.addNodes","flixel/graphics/atlas/FlxAtlas.hx",686,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmaps,"bitmaps")
	HX_STACK_ARG(keys,"keys")
	HX_STACK_LINE(687)
	int numKeys = keys->length;		HX_STACK_VAR(numKeys,"numKeys");
	HX_STACK_LINE(688)
	int numBitmaps = bitmaps->length;		HX_STACK_VAR(numBitmaps,"numBitmaps");
	HX_STACK_LINE(690)
	if (((numBitmaps != numKeys))){
		HX_STACK_LINE(695)
		return null();
	}
	HX_STACK_LINE(698)
	Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(698)
	this->_tempStorage = _g;
	HX_STACK_LINE(699)
	{
		HX_STACK_LINE(699)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(699)
		int _g2 = numBitmaps;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(699)
		while((true)){
			HX_STACK_LINE(699)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(699)
				break;
			}
			HX_STACK_LINE(699)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			struct _Function_3_1{
				inline static Dynamic Block( int &i,Array< ::Dynamic > &bitmaps,Array< ::String > &keys){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",701,0x03972f50)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("bmd") , bitmaps->__get(i).StaticCast< ::openfl::_v2::display::BitmapData >(),false);
						__result->Add(HX_CSTRING("keyStr") , keys->__get(i),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(701)
			this->_tempStorage->__Field(HX_CSTRING("push"),true)(_Function_3_1::Block(i,bitmaps,keys));
		}
	}
	HX_STACK_LINE(704)
	this->addFromAtlasObjects(this->_tempStorage);
	HX_STACK_LINE(705)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addNodes,return )

Void FlxAtlas_obj::addFromAtlasObjects( Dynamic objects){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addFromAtlasObjects",0xc364fff3,"flixel.graphics.atlas.FlxAtlas.addFromAtlasObjects","flixel/graphics/atlas/FlxAtlas.hx",709,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(objects,"objects")
		HX_STACK_LINE(710)
		objects->__Field(HX_CSTRING("sort"),true)(this->bitmapSorter_dyn());
		HX_STACK_LINE(711)
		int numBitmaps = objects->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(numBitmaps,"numBitmaps");
		HX_STACK_LINE(713)
		{
			HX_STACK_LINE(713)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(713)
			int _g = numBitmaps;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(713)
			while((true)){
				HX_STACK_LINE(713)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(713)
					break;
				}
				HX_STACK_LINE(713)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(715)
				this->addNode(objects->__GetItem(i)->__Field(HX_CSTRING("bmd"),true),objects->__GetItem(i)->__Field(HX_CSTRING("keyStr"),true));
			}
		}
		HX_STACK_LINE(718)
		this->_tempStorage = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,addFromAtlasObjects,(void))

int FlxAtlas_obj::bitmapSorter( Dynamic obj1,Dynamic obj2){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","bitmapSorter",0x4abe7a5b,"flixel.graphics.atlas.FlxAtlas.bitmapSorter","flixel/graphics/atlas/FlxAtlas.hx",725,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj1,"obj1")
	HX_STACK_ARG(obj2,"obj2")
	HX_STACK_LINE(726)
	if ((this->allowRotation)){
		HX_STACK_LINE(728)
		int _g = obj1->__Field(HX_CSTRING("bmd"),true)->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(728)
		int _g1 = obj1->__Field(HX_CSTRING("bmd"),true)->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(728)
		int area1 = (_g * _g1);		HX_STACK_VAR(area1,"area1");
		HX_STACK_LINE(729)
		int _g2 = obj2->__Field(HX_CSTRING("bmd"),true)->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(729)
		int _g3 = obj2->__Field(HX_CSTRING("bmd"),true)->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(729)
		int area2 = (_g2 * _g3);		HX_STACK_VAR(area2,"area2");
		HX_STACK_LINE(730)
		return (area2 - area1);
	}
	HX_STACK_LINE(733)
	int _g4 = obj2->__Field(HX_CSTRING("bmd"),true)->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(733)
	int _g5 = obj1->__Field(HX_CSTRING("bmd"),true)->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(733)
	if (((_g4 == _g5))){
		HX_STACK_LINE(735)
		int _g6 = obj2->__Field(HX_CSTRING("bmd"),true)->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(735)
		int _g7 = obj1->__Field(HX_CSTRING("bmd"),true)->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(735)
		return (_g6 - _g7);
	}
	HX_STACK_LINE(738)
	int _g8 = obj2->__Field(HX_CSTRING("bmd"),true)->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(738)
	int _g9 = obj1->__Field(HX_CSTRING("bmd"),true)->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(738)
	return (_g8 - _g9);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,bitmapSorter,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::createQueue( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","createQueue",0x315e3254,"flixel.graphics.atlas.FlxAtlas.createQueue","flixel/graphics/atlas/FlxAtlas.hx",749,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(750)
	Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(750)
	this->_tempStorage = _g;
	HX_STACK_LINE(751)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,createQueue,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::addToQueue( ::openfl::_v2::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addToQueue",0x83cfa976,"flixel.graphics.atlas.FlxAtlas.addToQueue","flixel/graphics/atlas/FlxAtlas.hx",760,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(761)
	if (((this->_tempStorage == null()))){
		HX_STACK_LINE(763)
		Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(763)
		this->_tempStorage = _g;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::openfl::_v2::display::BitmapData &data,::String &key){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",766,0x03972f50)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("bmd") , data,false);
				__result->Add(HX_CSTRING("keyStr") , key,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(766)
	this->_tempStorage->__Field(HX_CSTRING("push"),true)(_Function_1_1::Block(data,key));
	HX_STACK_LINE(767)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addToQueue,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::generateFromQueue( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","generateFromQueue",0x8e4a2871,"flixel.graphics.atlas.FlxAtlas.generateFromQueue","flixel/graphics/atlas/FlxAtlas.hx",774,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(775)
	if (((this->_tempStorage != null()))){
		HX_STACK_LINE(777)
		this->addFromAtlasObjects(this->_tempStorage);
	}
	HX_STACK_LINE(780)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,generateFromQueue,return )

Void FlxAtlas_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","destroy",0x8e06bed9,"flixel.graphics.atlas.FlxAtlas.destroy","flixel/graphics/atlas/FlxAtlas.hx",788,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(789)
		::flixel::graphics::FlxGraphic _g = ::flixel::FlxG_obj::bitmap->get(this->name);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(789)
		::flixel::FlxG_obj::bitmap->removeIfNoUse(_g);
		HX_STACK_LINE(790)
		this->_tempStorage = null();
		HX_STACK_LINE(791)
		this->deleteSubtree(this->root);
		HX_STACK_LINE(792)
		this->root = null();
		HX_STACK_LINE(793)
		::openfl::_v2::display::BitmapData _g1 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_bitmapData);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(793)
		this->_bitmapData = _g1;
		HX_STACK_LINE(794)
		this->nodes = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,destroy,(void))

Void FlxAtlas_obj::clear( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","clear",0x59297dac,"flixel.graphics.atlas.FlxAtlas.clear","flixel/graphics/atlas/FlxAtlas.hx",802,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(803)
		this->deleteSubtree(this->root);
		HX_STACK_LINE(804)
		this->initRoot();
		HX_STACK_LINE(805)
		::flixel::FlxG_obj::bitmap->removeByKey(this->name);
		HX_STACK_LINE(806)
		this->_bitmapData = null();
		HX_STACK_LINE(807)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(807)
		this->nodes = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,clear,(void))

::String FlxAtlas_obj::getLibGdxData( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getLibGdxData",0x1a9c9615,"flixel.graphics.atlas.FlxAtlas.getLibGdxData","flixel/graphics/atlas/FlxAtlas.hx",814,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(815)
	::String data = HX_CSTRING("\n");		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(816)
	hx::AddEq(data,(this->name + HX_CSTRING("\n")));
	HX_STACK_LINE(817)
	hx::AddEq(data,HX_CSTRING("format: RGBA8888\n"));
	HX_STACK_LINE(818)
	hx::AddEq(data,HX_CSTRING("filter: Linear,Linear\n"));
	HX_STACK_LINE(819)
	hx::AddEq(data,HX_CSTRING("repeat: none\n"));
	HX_STACK_LINE(821)
	for(::cpp::FastIterator_obj< ::flixel::graphics::atlas::FlxNode > *__it = ::cpp::CreateFastIterator< ::flixel::graphics::atlas::FlxNode >(this->nodes->iterator());  __it->hasNext(); ){
		::flixel::graphics::atlas::FlxNode node = __it->next();
		{
			HX_STACK_LINE(823)
			hx::AddEq(data,(node->key + HX_CSTRING("\n")));
			HX_STACK_LINE(824)
			::String _g = ::Std_obj::string(node->rotated);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(824)
			::String _g1 = (HX_CSTRING("  rotate: ") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(824)
			::String _g2 = (_g1 + HX_CSTRING("\n"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(824)
			hx::AddEq(data,_g2);
			HX_STACK_LINE(825)
			int _g3 = ::Std_obj::_int(node->rect->x);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(825)
			::String _g4 = (HX_CSTRING("  xy: ") + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(825)
			::String _g5 = (_g4 + HX_CSTRING(", "));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(825)
			int _g6 = ::Std_obj::_int(node->rect->y);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(825)
			::String _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(825)
			::String _g8 = (_g7 + HX_CSTRING("\n"));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(825)
			hx::AddEq(data,_g8);
			HX_STACK_LINE(827)
			if ((this->allowRotation)){
				HX_STACK_LINE(829)
				int _g9 = ::Std_obj::_int(node->rect->height);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(829)
				::String _g10 = (HX_CSTRING("size: ") + _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(829)
				::String _g11 = (_g10 + HX_CSTRING(", "));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(829)
				int _g12 = ::Std_obj::_int(node->rect->width);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(829)
				::String _g13 = (_g11 + _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(829)
				::String _g14 = (_g13 + HX_CSTRING("\n"));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(829)
				hx::AddEq(data,_g14);
				HX_STACK_LINE(830)
				int _g15 = ::Std_obj::_int(node->rect->height);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(830)
				::String _g16 = (HX_CSTRING("orig: ") + _g15);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(830)
				::String _g17 = (_g16 + HX_CSTRING(", "));		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(830)
				int _g18 = ::Std_obj::_int(node->rect->width);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(830)
				::String _g19 = (_g17 + _g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(830)
				::String _g20 = (_g19 + HX_CSTRING("\n"));		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(830)
				hx::AddEq(data,_g20);
			}
			else{
				HX_STACK_LINE(834)
				int _g21 = ::Std_obj::_int(node->rect->width);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(834)
				::String _g22 = (HX_CSTRING("size: ") + _g21);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(834)
				::String _g23 = (_g22 + HX_CSTRING(", "));		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(834)
				int _g24 = ::Std_obj::_int(node->rect->height);		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(834)
				::String _g25 = (_g23 + _g24);		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(834)
				::String _g26 = (_g25 + HX_CSTRING("\n"));		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(834)
				hx::AddEq(data,_g26);
				HX_STACK_LINE(835)
				int _g27 = ::Std_obj::_int(node->rect->width);		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(835)
				::String _g28 = (HX_CSTRING("orig: ") + _g27);		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(835)
				::String _g29 = (_g28 + HX_CSTRING(", "));		HX_STACK_VAR(_g29,"_g29");
				HX_STACK_LINE(835)
				int _g30 = ::Std_obj::_int(node->rect->height);		HX_STACK_VAR(_g30,"_g30");
				HX_STACK_LINE(835)
				::String _g31 = (_g29 + _g30);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(835)
				::String _g32 = (_g31 + HX_CSTRING("\n"));		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(835)
				hx::AddEq(data,_g32);
			}
			HX_STACK_LINE(838)
			hx::AddEq(data,HX_CSTRING("  offset: 0, 0\n"));
			HX_STACK_LINE(839)
			hx::AddEq(data,HX_CSTRING("  index: -1\n"));
		}
;
	}
	HX_STACK_LINE(842)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,getLibGdxData,return )

Void FlxAtlas_obj::deleteSubtree( ::flixel::graphics::atlas::FlxNode node){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","deleteSubtree",0xf9ad5912,"flixel.graphics.atlas.FlxAtlas.deleteSubtree","flixel/graphics/atlas/FlxAtlas.hx",847,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(847)
		if (((node != null()))){
			HX_STACK_LINE(849)
			if (((node->left != null()))){
				HX_STACK_LINE(849)
				this->deleteSubtree(node->left);
			}
			HX_STACK_LINE(850)
			if (((node->right != null()))){
				HX_STACK_LINE(850)
				this->deleteSubtree(node->right);
			}
			HX_STACK_LINE(851)
			{
				HX_STACK_LINE(851)
				node->key = null();
				HX_STACK_LINE(851)
				node->left = null();
				HX_STACK_LINE(851)
				node->right = null();
				HX_STACK_LINE(851)
				node->rect = null();
				HX_STACK_LINE(851)
				node->atlas = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,deleteSubtree,(void))

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::findNodeToInsert( int insertWidth,int insertHeight){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","findNodeToInsert",0x513a4b50,"flixel.graphics.atlas.FlxAtlas.findNodeToInsert","flixel/graphics/atlas/FlxAtlas.hx",857,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(insertWidth,"insertWidth")
	HX_STACK_ARG(insertHeight,"insertHeight")
	HX_STACK_LINE(859)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(861)
	::flixel::graphics::atlas::FlxNode current = this->root;		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(863)
	Array< ::Dynamic > emptyNodes = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(emptyNodes,"emptyNodes");
	HX_STACK_LINE(865)
	bool canPlaceRight = false;		HX_STACK_VAR(canPlaceRight,"canPlaceRight");
	HX_STACK_LINE(866)
	bool canPlaceLeft = false;		HX_STACK_VAR(canPlaceLeft,"canPlaceLeft");
	HX_STACK_LINE(868)
	bool looping = true;		HX_STACK_VAR(looping,"looping");
	HX_STACK_LINE(870)
	::flixel::graphics::atlas::FlxNode result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(871)
	int minArea = ((this->maxWidth * this->maxHeight) + (int)1);		HX_STACK_VAR(minArea,"minArea");
	HX_STACK_LINE(872)
	int nodeArea;		HX_STACK_VAR(nodeArea,"nodeArea");
	HX_STACK_LINE(875)
	while((true)){
		HX_STACK_LINE(875)
		if ((!(looping))){
			HX_STACK_LINE(875)
			break;
		}
		HX_STACK_LINE(878)
		if (((bool((bool((bool(!(current->filled)) && bool((current->left == null())))) && bool((current->right == null())))) && bool(((bool((current->rect->width >= insertWidth)) && bool((current->rect->height >= insertHeight)))))))){
			HX_STACK_LINE(880)
			int _g = ::Std_obj::_int(current->rect->width);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(880)
			int _g1 = ::Std_obj::_int(current->rect->height);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(880)
			int _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(880)
			nodeArea = _g2;
			HX_STACK_LINE(882)
			if (((nodeArea < minArea))){
				HX_STACK_LINE(884)
				minArea = nodeArea;
				HX_STACK_LINE(885)
				result = current;
			}
		}
		struct _Function_2_1{
			inline static bool Block( int &insertWidth,::flixel::graphics::atlas::FlxNode &current,int &insertHeight){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",889,0x03972f50)
				{
					HX_STACK_LINE(889)
					::flixel::graphics::atlas::FlxNode _this = current->right;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(889)
					return (bool((_this->rect->width >= insertWidth)) && bool((_this->rect->height >= insertHeight)));
				}
				return null();
			}
		};
		HX_STACK_LINE(889)
		canPlaceRight = (bool((current->right != null())) && bool(_Function_2_1::Block(insertWidth,current,insertHeight)));
		struct _Function_2_2{
			inline static bool Block( int &insertWidth,::flixel::graphics::atlas::FlxNode &current,int &insertHeight){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",890,0x03972f50)
				{
					HX_STACK_LINE(890)
					::flixel::graphics::atlas::FlxNode _this = current->left;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(890)
					return (bool((_this->rect->width >= insertWidth)) && bool((_this->rect->height >= insertHeight)));
				}
				return null();
			}
		};
		HX_STACK_LINE(890)
		canPlaceLeft = (bool((current->left != null())) && bool(_Function_2_2::Block(insertWidth,current,insertHeight)));
		HX_STACK_LINE(891)
		if (((bool(canPlaceRight) && bool(canPlaceLeft)))){
			HX_STACK_LINE(893)
			stack->push(current->right);
			HX_STACK_LINE(894)
			current = current->left;
		}
		else{
			HX_STACK_LINE(896)
			if ((canPlaceLeft)){
				HX_STACK_LINE(898)
				current = current->left;
			}
			else{
				HX_STACK_LINE(900)
				if ((canPlaceRight)){
					HX_STACK_LINE(902)
					current = current->right;
				}
				else{
					HX_STACK_LINE(906)
					if (((stack->length > (int)0))){
						HX_STACK_LINE(909)
						::flixel::graphics::atlas::FlxNode _g3 = stack->pop().StaticCast< ::flixel::graphics::atlas::FlxNode >();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(909)
						current = _g3;
					}
					else{
						HX_STACK_LINE(914)
						looping = false;
					}
				}
			}
		}
	}
	HX_STACK_LINE(919)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,findNodeToInsert,return )

::openfl::_v2::display::BitmapData FlxAtlas_obj::get_bitmapData( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","get_bitmapData",0xd5cb3603,"flixel.graphics.atlas.FlxAtlas.get_bitmapData","flixel/graphics/atlas/FlxAtlas.hx",924,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(924)
	return this->_bitmapData;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_bitmapData,return )

::openfl::_v2::display::BitmapData FlxAtlas_obj::set_bitmapData( ::openfl::_v2::display::BitmapData value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_bitmapData",0xf5eb1e77,"flixel.graphics.atlas.FlxAtlas.set_bitmapData","flixel/graphics/atlas/FlxAtlas.hx",928,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(929)
	if (((value != null()))){
		HX_STACK_LINE(932)
		::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->get(this->name);		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(933)
		if (((graphic != null()))){
			HX_STACK_LINE(935)
			graphic->set_bitmap(value);
		}
	}
	HX_STACK_LINE(939)
	return this->_bitmapData = value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_bitmapData,return )

int FlxAtlas_obj::set_minWidth( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_minWidth",0x9b144052,"flixel.graphics.atlas.FlxAtlas.set_minWidth","flixel/graphics/atlas/FlxAtlas.hx",943,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(944)
	if (((value <= this->maxWidth))){
		HX_STACK_LINE(946)
		this->minWidth = value;
		HX_STACK_LINE(948)
		int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(948)
		if (((value > _g))){
			HX_STACK_LINE(950)
			this->set_width(value);
		}
	}
	HX_STACK_LINE(954)
	return this->minWidth;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_minWidth,return )

int FlxAtlas_obj::set_minHeight( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_minHeight",0xccf3801b,"flixel.graphics.atlas.FlxAtlas.set_minHeight","flixel/graphics/atlas/FlxAtlas.hx",958,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(959)
	if (((value <= this->maxHeight))){
		HX_STACK_LINE(961)
		this->minHeight = value;
		HX_STACK_LINE(963)
		int _g = this->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(963)
		if (((value > _g))){
			HX_STACK_LINE(965)
			this->set_height(value);
		}
	}
	HX_STACK_LINE(969)
	return this->minHeight;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_minHeight,return )

int FlxAtlas_obj::get_width( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","get_width",0x463c19fc,"flixel.graphics.atlas.FlxAtlas.get_width","flixel/graphics/atlas/FlxAtlas.hx",973,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(974)
	if (((this->root != null()))){
		HX_STACK_LINE(976)
		return ::Std_obj::_int(this->root->rect->width);
	}
	HX_STACK_LINE(979)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_width,return )

int FlxAtlas_obj::set_width( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_width",0x298d0608,"flixel.graphics.atlas.FlxAtlas.set_width","flixel/graphics/atlas/FlxAtlas.hx",983,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(984)
	int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(984)
	if (((value > _g))){
		HX_STACK_LINE(986)
		if ((this->powerOfTwo)){
			HX_STACK_LINE(988)
			int _g1 = this->getNextPowerOf2(value);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(988)
			value = _g1;
		}
		HX_STACK_LINE(991)
		if (((value <= this->maxWidth))){
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::graphics::atlas::FlxAtlas_obj > __this,int &value){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",993,0x03972f50)
					{
						HX_STACK_LINE(993)
						int _g2 = ::Std_obj::_int(__this->root->rect->width);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(993)
						return (_g2 < value);
					}
					return null();
				}
			};
			HX_STACK_LINE(993)
			if (((  (((this->root != null()))) ? bool(_Function_3_1::Block(this,value)) : bool(false) ))){
				HX_STACK_LINE(995)
				int _g3 = ::Std_obj::_int(this->root->rect->height);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(995)
				int _g4 = ::Std_obj::_int(this->root->rect->width);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(995)
				int _g5 = ::Std_obj::_int(this->root->rect->height);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(995)
				bool _g6 = this->needToDivideHorizontally(this->root,_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(995)
				this->expandRoot(value,_g3,_g6,null());
			}
		}
	}
	HX_STACK_LINE(1000)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_width,return )

int FlxAtlas_obj::get_height( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","get_height",0xe4aa1b31,"flixel.graphics.atlas.FlxAtlas.get_height","flixel/graphics/atlas/FlxAtlas.hx",1004,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1005)
	if (((this->root != null()))){
		HX_STACK_LINE(1007)
		return ::Std_obj::_int(this->root->rect->height);
	}
	HX_STACK_LINE(1010)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_height,return )

int FlxAtlas_obj::set_height( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_height",0xe827b9a5,"flixel.graphics.atlas.FlxAtlas.set_height","flixel/graphics/atlas/FlxAtlas.hx",1014,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1015)
	int _g = this->get_height();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1015)
	if (((value > _g))){
		HX_STACK_LINE(1017)
		if ((this->powerOfTwo)){
			HX_STACK_LINE(1019)
			int _g1 = this->getNextPowerOf2(value);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1019)
			value = _g1;
		}
		HX_STACK_LINE(1022)
		if (((value <= this->maxHeight))){
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::graphics::atlas::FlxAtlas_obj > __this,int &value){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",1024,0x03972f50)
					{
						HX_STACK_LINE(1024)
						int _g2 = ::Std_obj::_int(__this->root->rect->height);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1024)
						return (_g2 < value);
					}
					return null();
				}
			};
			HX_STACK_LINE(1024)
			if (((  (((this->root != null()))) ? bool(_Function_3_1::Block(this,value)) : bool(false) ))){
				HX_STACK_LINE(1026)
				int _g3 = ::Std_obj::_int(this->root->rect->width);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1026)
				int _g4 = ::Std_obj::_int(this->root->rect->width);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1026)
				int _g5 = ::Std_obj::_int(this->root->rect->height);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1026)
				bool _g6 = this->needToDivideHorizontally(this->root,_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1026)
				this->expandRoot(_g3,value,_g6,null());
			}
		}
	}
	HX_STACK_LINE(1031)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_height,return )

int FlxAtlas_obj::set_maxWidth( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_maxWidth",0x4dfa2600,"flixel.graphics.atlas.FlxAtlas.set_maxWidth","flixel/graphics/atlas/FlxAtlas.hx",1035,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::graphics::atlas::FlxAtlas_obj > __this,int &value){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",1036,0x03972f50)
			{
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::flixel::graphics::atlas::FlxAtlas_obj > __this,int &value){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",1036,0x03972f50)
						{
							HX_STACK_LINE(1036)
							int _g = __this->get_width();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1036)
							return (value >= _g);
						}
						return null();
					}
				};
				HX_STACK_LINE(1036)
				return (  ((!(((__this->root == null()))))) ? bool(_Function_2_1::Block(__this,value)) : bool(true) );
			}
			return null();
		}
	};
	HX_STACK_LINE(1036)
	if (((  (((value >= this->minWidth))) ? bool(_Function_1_1::Block(this,value)) : bool(false) ))){
		HX_STACK_LINE(1038)
		this->maxWidth = value;
	}
	HX_STACK_LINE(1041)
	return this->maxWidth;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_maxWidth,return )

int FlxAtlas_obj::set_maxHeight( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_maxHeight",0xa33692ad,"flixel.graphics.atlas.FlxAtlas.set_maxHeight","flixel/graphics/atlas/FlxAtlas.hx",1045,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::graphics::atlas::FlxAtlas_obj > __this,int &value){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",1046,0x03972f50)
			{
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::flixel::graphics::atlas::FlxAtlas_obj > __this,int &value){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",1046,0x03972f50)
						{
							HX_STACK_LINE(1046)
							int _g = __this->get_height();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1046)
							return (value >= _g);
						}
						return null();
					}
				};
				HX_STACK_LINE(1046)
				return (  ((!(((__this->root == null()))))) ? bool(_Function_2_1::Block(__this,value)) : bool(true) );
			}
			return null();
		}
	};
	HX_STACK_LINE(1046)
	if (((  (((value >= this->minHeight))) ? bool(_Function_1_1::Block(this,value)) : bool(false) ))){
		HX_STACK_LINE(1048)
		this->maxHeight = value;
	}
	HX_STACK_LINE(1051)
	return this->maxHeight;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_maxHeight,return )

bool FlxAtlas_obj::set_powerOfTwo( bool value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_powerOfTwo",0xacd9272e,"flixel.graphics.atlas.FlxAtlas.set_powerOfTwo","flixel/graphics/atlas/FlxAtlas.hx",1055,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1056)
	if (((bool((value != this->powerOfTwo)) && bool((value == true))))){
		HX_STACK_LINE(1058)
		int _g = ::Std_obj::_int(this->root->rect->width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1058)
		int nextWidth = this->getNextPowerOf2(_g);		HX_STACK_VAR(nextWidth,"nextWidth");
		HX_STACK_LINE(1059)
		int _g1 = ::Std_obj::_int(this->root->rect->height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1059)
		int nextHeight = this->getNextPowerOf2(_g1);		HX_STACK_VAR(nextHeight,"nextHeight");
		HX_STACK_LINE(1061)
		int _g2 = ::Std_obj::_int(this->root->rect->width);		HX_STACK_VAR(_g2,"_g2");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::graphics::atlas::FlxAtlas_obj > __this,int &nextHeight){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",1061,0x03972f50)
				{
					HX_STACK_LINE(1061)
					int _g3 = ::Std_obj::_int(__this->root->rect->height);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1061)
					return (nextHeight != _g3);
				}
				return null();
			}
		};
		HX_STACK_LINE(1061)
		if (((  ((!(((nextWidth != _g2))))) ? bool(_Function_2_1::Block(this,nextHeight)) : bool(true) ))){
			HX_STACK_LINE(1063)
			if (((bool((bool((this->maxWidth > (int)0)) && bool((nextWidth > this->maxWidth)))) || bool((bool((this->maxHeight > (int)0)) && bool((nextHeight > this->maxHeight))))))){
				HX_STACK_LINE(1068)
				return false;
			}
			HX_STACK_LINE(1071)
			::flixel::graphics::atlas::FlxNode temp = this->root;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(1072)
			::flixel::math::FlxRect _g4 = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,nextWidth,nextHeight);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1072)
			::flixel::graphics::atlas::FlxNode _g5 = ::flixel::graphics::atlas::FlxNode_obj::__new(_g4,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1072)
			this->root = _g5;
			HX_STACK_LINE(1074)
			if (((temp->left != null()))){
				HX_STACK_LINE(1076)
				int _g6 = ::Std_obj::_int(temp->rect->width);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1076)
				int _g7 = ::Std_obj::_int(temp->rect->height);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1076)
				int _g8 = ::Std_obj::_int(temp->rect->width);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1076)
				int _g9 = ::Std_obj::_int(temp->rect->height);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(1076)
				bool _g10 = this->needToDivideHorizontally(this->root,_g8,_g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(1076)
				this->divideNode(this->root,_g6,_g7,_g10,null(),null(),null());
				HX_STACK_LINE(1077)
				this->root->left->left = temp;
			}
		}
	}
	HX_STACK_LINE(1082)
	return this->powerOfTwo = value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_powerOfTwo,return )

::flixel::math::FlxPoint FlxAtlas_obj::defaultMinSize;

::flixel::math::FlxPoint FlxAtlas_obj::defaultMaxSize;


FlxAtlas_obj::FlxAtlas_obj()
{
}

void FlxAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAtlas);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(minWidth,"minWidth");
	HX_MARK_MEMBER_NAME(minHeight,"minHeight");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_MEMBER_NAME(allowRotation,"allowRotation");
	HX_MARK_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_MARK_MEMBER_NAME(_tempStorage,"_tempStorage");
	HX_MARK_END_CLASS();
}

void FlxAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(minWidth,"minWidth");
	HX_VISIT_MEMBER_NAME(minHeight,"minHeight");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
	HX_VISIT_MEMBER_NAME(allowRotation,"allowRotation");
	HX_VISIT_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_VISIT_MEMBER_NAME(_tempStorage,"_tempStorage");
}

Dynamic FlxAtlas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"expand") ) { return expand_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addNode") ) { return addNode_dyn(); }
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { return minWidth; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return maxWidth; }
		if (HX_FIELD_EQ(inName,"initRoot") ) { return initRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapRoot") ) { return wrapRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"addNodes") ) { return addNodes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { return minHeight; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return maxHeight; }
		if (HX_FIELD_EQ(inName,"tryInsert") ) { return tryInsert_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return get_bitmapData(); }
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { return powerOfTwo; }
		if (HX_FIELD_EQ(inName,"divideNode") ) { return divideNode_dyn(); }
		if (HX_FIELD_EQ(inName,"expandRoot") ) { return expandRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"addToQueue") ) { return addToQueue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return _bitmapData; }
		if (HX_FIELD_EQ(inName,"createQueue") ) { return createQueue_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tempStorage") ) { return _tempStorage; }
		if (HX_FIELD_EQ(inName,"bitmapSorter") ) { return bitmapSorter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minWidth") ) { return set_minWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxWidth") ) { return set_maxWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowRotation") ) { return allowRotation; }
		if (HX_FIELD_EQ(inName,"getLibGdxData") ) { return getLibGdxData_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSubtree") ) { return deleteSubtree_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minHeight") ) { return set_minHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxHeight") ) { return set_maxHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultMinSize") ) { return defaultMinSize; }
		if (HX_FIELD_EQ(inName,"defaultMaxSize") ) { return defaultMaxSize; }
		if (HX_FIELD_EQ(inName,"getAtlasFrames") ) { return getAtlasFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bitmapData") ) { return get_bitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_powerOfTwo") ) { return set_powerOfTwo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getNextPowerOf2") ) { return getNextPowerOf2_dyn(); }
		if (HX_FIELD_EQ(inName,"hasNodeWithName") ) { return hasNodeWithName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"expandBitmapData") ) { return expandBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"findNodeToInsert") ) { return findNodeToInsert_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"generateFromQueue") ) { return generateFromQueue_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addNodeWithSpacings") ) { return addNodeWithSpacings_dyn(); }
		if (HX_FIELD_EQ(inName,"addFromAtlasObjects") ) { return addFromAtlasObjects_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addNodeToAtlasFrames") ) { return addNodeToAtlasFrames_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"insertFirstNodeInRoot") ) { return insertFirstNodeInRoot_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"needToDivideHorizontally") ) { return needToDivideHorizontally_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAtlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::flixel::graphics::atlas::FlxNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { if (inCallProp) return set_minWidth(inValue);minWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { if (inCallProp) return set_maxWidth(inValue);maxWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { if (inCallProp) return set_minHeight(inValue);minHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { if (inCallProp) return set_maxHeight(inValue);maxHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return set_bitmapData(inValue); }
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp) return set_powerOfTwo(inValue);powerOfTwo=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tempStorage") ) { _tempStorage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowRotation") ) { allowRotation=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultMinSize") ) { defaultMinSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultMaxSize") ) { defaultMaxSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("root"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("nodes"));
	outFields->push(HX_CSTRING("bitmapData"));
	outFields->push(HX_CSTRING("border"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("minWidth"));
	outFields->push(HX_CSTRING("minHeight"));
	outFields->push(HX_CSTRING("maxWidth"));
	outFields->push(HX_CSTRING("maxHeight"));
	outFields->push(HX_CSTRING("allowRotation"));
	outFields->push(HX_CSTRING("powerOfTwo"));
	outFields->push(HX_CSTRING("_bitmapData"));
	outFields->push(HX_CSTRING("_tempStorage"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("defaultMinSize"),
	HX_CSTRING("defaultMaxSize"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::atlas::FlxNode*/ ,(int)offsetof(FlxAtlas_obj,root),HX_CSTRING("root")},
	{hx::fsString,(int)offsetof(FlxAtlas_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxAtlas_obj,nodes),HX_CSTRING("nodes")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,border),HX_CSTRING("border")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,minWidth),HX_CSTRING("minWidth")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,minHeight),HX_CSTRING("minHeight")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,maxWidth),HX_CSTRING("maxWidth")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,maxHeight),HX_CSTRING("maxHeight")},
	{hx::fsBool,(int)offsetof(FlxAtlas_obj,allowRotation),HX_CSTRING("allowRotation")},
	{hx::fsBool,(int)offsetof(FlxAtlas_obj,powerOfTwo),HX_CSTRING("powerOfTwo")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxAtlas_obj,_bitmapData),HX_CSTRING("_bitmapData")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAtlas_obj,_tempStorage),HX_CSTRING("_tempStorage")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("root"),
	HX_CSTRING("name"),
	HX_CSTRING("nodes"),
	HX_CSTRING("border"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("minWidth"),
	HX_CSTRING("minHeight"),
	HX_CSTRING("maxWidth"),
	HX_CSTRING("maxHeight"),
	HX_CSTRING("allowRotation"),
	HX_CSTRING("powerOfTwo"),
	HX_CSTRING("_bitmapData"),
	HX_CSTRING("_tempStorage"),
	HX_CSTRING("initRoot"),
	HX_CSTRING("addNode"),
	HX_CSTRING("wrapRoot"),
	HX_CSTRING("tryInsert"),
	HX_CSTRING("needToDivideHorizontally"),
	HX_CSTRING("divideNode"),
	HX_CSTRING("insertFirstNodeInRoot"),
	HX_CSTRING("expand"),
	HX_CSTRING("expandRoot"),
	HX_CSTRING("expandBitmapData"),
	HX_CSTRING("getNextPowerOf2"),
	HX_CSTRING("addNodeWithSpacings"),
	HX_CSTRING("getAtlasFrames"),
	HX_CSTRING("addNodeToAtlasFrames"),
	HX_CSTRING("hasNodeWithName"),
	HX_CSTRING("getNode"),
	HX_CSTRING("addNodes"),
	HX_CSTRING("addFromAtlasObjects"),
	HX_CSTRING("bitmapSorter"),
	HX_CSTRING("createQueue"),
	HX_CSTRING("addToQueue"),
	HX_CSTRING("generateFromQueue"),
	HX_CSTRING("destroy"),
	HX_CSTRING("clear"),
	HX_CSTRING("getLibGdxData"),
	HX_CSTRING("deleteSubtree"),
	HX_CSTRING("findNodeToInsert"),
	HX_CSTRING("get_bitmapData"),
	HX_CSTRING("set_bitmapData"),
	HX_CSTRING("set_minWidth"),
	HX_CSTRING("set_minHeight"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("set_maxWidth"),
	HX_CSTRING("set_maxHeight"),
	HX_CSTRING("set_powerOfTwo"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::defaultMinSize,"defaultMinSize");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::defaultMaxSize,"defaultMaxSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::defaultMinSize,"defaultMinSize");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::defaultMaxSize,"defaultMaxSize");
};

#endif

Class FlxAtlas_obj::__mClass;

void FlxAtlas_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.atlas.FlxAtlas"), hx::TCanCast< FlxAtlas_obj> ,sStaticFields,sMemberFields,
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

void FlxAtlas_obj::__boot()
{
	defaultMinSize= ::flixel::math::FlxPoint_obj::__new((int)128,(int)128);
	defaultMaxSize= ::flixel::math::FlxPoint_obj::__new((int)1024,(int)1024);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
