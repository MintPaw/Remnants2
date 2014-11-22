#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawStackItem
#include <flixel/graphics/tile/FlxDrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
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
namespace tile{

Void FlxTilemap_obj::__construct()
{
HX_STACK_FRAME("flixel.tile.FlxTilemap","new",0xbe02531c,"flixel.tile.FlxTilemap.new","flixel/tile/FlxTilemap.hx",46,0x448feb74)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(138)
	this->_blendInt = (int)0;
	HX_STACK_LINE(111)
	this->_scaledTileHeight = (int)0;
	HX_STACK_LINE(110)
	this->_scaledTileWidth = (int)0;
	HX_STACK_LINE(108)
	this->_tileHeight = (int)0;
	HX_STACK_LINE(104)
	this->_tileWidth = (int)0;
	HX_STACK_LINE(87)
	this->blend = null();
	HX_STACK_LINE(80)
	this->alpha = 1.0;
	HX_STACK_LINE(75)
	this->color = (int)16777215;
	HX_STACK_LINE(57)
	this->tileScaleHack = 1.00;
	HX_STACK_LINE(148)
	super::__construct();
	HX_STACK_LINE(150)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(150)
	this->_buffers = _g;
	HX_STACK_LINE(151)
	::openfl::_v2::geom::Point _g1 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(151)
	this->_flashPoint = _g1;
	HX_STACK_LINE(152)
	::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(152)
	this->_flashRect = _g2;
	HX_STACK_LINE(155)
	::openfl::_v2::geom::Point _g3 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(155)
	this->_helperPoint = _g3;
	HX_STACK_LINE(156)
	::flixel::math::FlxMatrix _g4 = ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(156)
	this->_matrix = _g4;
	HX_STACK_LINE(159)
	::openfl::_v2::geom::ColorTransform _g5 = ::openfl::_v2::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(159)
	this->colorTransform = _g5;
	HX_STACK_LINE(161)
	::flixel::math::FlxCallbackPoint _g6 = ::flixel::math::FlxCallbackPoint_obj::__new(this->setScaleXCallback_dyn(),this->setScaleYCallback_dyn(),this->setScaleXYCallback_dyn());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(161)
	this->scale = _g6;
	HX_STACK_LINE(162)
	this->scale->set((int)1,(int)1);
	HX_STACK_LINE(164)
	::flixel::FlxG_obj::signals->gameResized->add(this->onGameResize_dyn());
}
;
	return null();
}

//FlxTilemap_obj::~FlxTilemap_obj() { }

Dynamic FlxTilemap_obj::__CreateEmpty() { return  new FlxTilemap_obj; }
hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new()
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Dynamic FlxTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Void FlxTilemap_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","destroy",0xa7f2bdb6,"flixel.tile.FlxTilemap.destroy","flixel/tile/FlxTilemap.hx",171,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		this->_flashPoint = null();
		HX_STACK_LINE(173)
		this->_flashRect = null();
		HX_STACK_LINE(174)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(175)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(177)
		Array< ::Dynamic > _g = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tileObjects);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(177)
		this->_tileObjects = _g;
		HX_STACK_LINE(178)
		Array< ::Dynamic > _g1 = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_buffers);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(178)
		this->_buffers = _g1;
		HX_STACK_LINE(188)
		this->_helperPoint = null();
		HX_STACK_LINE(189)
		this->_matrix = null();
		HX_STACK_LINE(192)
		this->set_frames(null());
		HX_STACK_LINE(193)
		this->set_graphic(null());
		HX_STACK_LINE(196)
		::flixel::math::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->scale);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(196)
		this->scale = _g2;
		HX_STACK_LINE(198)
		this->colorTransform = null();
		HX_STACK_LINE(200)
		::flixel::FlxG_obj::signals->gameResized->remove(this->onGameResize_dyn());
		HX_STACK_LINE(202)
		this->super::destroy();
	}
return null();
}


::flixel::graphics::frames::FlxFramesCollection FlxTilemap_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_frames",0xb39c4aa7,"flixel.tile.FlxTilemap.set_frames","flixel/tile/FlxTilemap.hx",206,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(207)
	this->frames = value;
	HX_STACK_LINE(209)
	if (((value != null()))){
		HX_STACK_LINE(211)
		int _g = ::Std_obj::_int(value->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >()->sourceSize->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(211)
		this->_tileWidth = _g;
		HX_STACK_LINE(212)
		int _g1 = ::Std_obj::_int(value->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >()->sourceSize->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(212)
		this->_tileHeight = _g1;
		HX_STACK_LINE(213)
		this->_flashRect->setTo((int)0,(int)0,this->_tileWidth,this->_tileHeight);
		HX_STACK_LINE(214)
		this->set_graphic(value->parent);
		HX_STACK_LINE(215)
		this->postGraphicLoad();
	}
	HX_STACK_LINE(218)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_frames,return )

Void FlxTilemap_obj::cacheGraphics( int TileWidth,int TileHeight,Dynamic _tmp_TileGraphic){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","cacheGraphics",0x759126e9,"flixel.tile.FlxTilemap.cacheGraphics","flixel/tile/FlxTilemap.hx",222,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(TileWidth,"TileWidth")
		HX_STACK_ARG(TileHeight,"TileHeight")
		HX_STACK_ARG(_tmp_TileGraphic,"_tmp_TileGraphic")
		HX_STACK_LINE(223)
		Dynamic TileGraphic = _tmp_TileGraphic;		HX_STACK_VAR(TileGraphic,"TileGraphic");
		HX_STACK_LINE(223)
		if ((::Std_obj::is(TileGraphic,hx::ClassOf< ::flixel::graphics::frames::FlxTileFrames >()))){
			HX_STACK_LINE(225)
			::flixel::graphics::frames::FlxTileFrames _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(225)
			_g = hx::TCast< flixel::graphics::frames::FlxTileFrames >::cast(TileGraphic);
			HX_STACK_LINE(225)
			this->set_frames(_g);
			HX_STACK_LINE(226)
			return null();
		}
		HX_STACK_LINE(229)
		::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->add(TileGraphic,null(),null());		HX_STACK_VAR(graph,"graph");
		HX_STACK_LINE(231)
		this->_tileWidth = TileWidth;
		HX_STACK_LINE(233)
		if (((this->_tileWidth <= (int)0))){
			HX_STACK_LINE(235)
			this->_tileWidth = graph->height;
		}
		HX_STACK_LINE(238)
		this->_tileHeight = TileHeight;
		HX_STACK_LINE(240)
		if (((this->_tileHeight <= (int)0))){
			HX_STACK_LINE(242)
			this->_tileHeight = this->_tileWidth;
		}
		HX_STACK_LINE(245)
		::flixel::math::FlxPoint _g1 = ::flixel::math::FlxPoint_obj::__new(this->_tileWidth,this->_tileHeight);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(245)
		::flixel::graphics::frames::FlxTileFrames _g2 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graph,_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(245)
		this->set_frames(_g2);
	}
return null();
}


Void FlxTilemap_obj::initTileObjects( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","initTileObjects",0xb20b6ad2,"flixel.tile.FlxTilemap.initTileObjects","flixel/tile/FlxTilemap.hx",249,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(250)
		Array< ::Dynamic > _g = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tileObjects);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(250)
		this->_tileObjects = _g;
		HX_STACK_LINE(252)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(252)
		this->_tileObjects = _g1;
		HX_STACK_LINE(254)
		int length = this->frames->frames->length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(255)
		hx::AddEq(length,this->_startingIndex);
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(257)
			while((true)){
				HX_STACK_LINE(257)
				if ((!(((_g2 < length))))){
					HX_STACK_LINE(257)
					break;
				}
				HX_STACK_LINE(257)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(259)
				hx::IndexRef((this->_tileObjects).mPtr,i) = ::flixel::tile::FlxTile_obj::__new(hx::ObjectPtr<OBJ_>(this),i,this->_tileWidth,this->_tileHeight,(i >= this->_drawIndex),(  (((i >= this->_collideIndex))) ? int(this->allowCollisions) : int((int)0) ));
			}
		}
	}
return null();
}


Void FlxTilemap_obj::computeDimensions( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","computeDimensions",0x3602f860,"flixel.tile.FlxTilemap.computeDimensions","flixel/tile/FlxTilemap.hx",271,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(272)
		this->_scaledTileWidth = (this->_tileWidth * this->scale->x);
		HX_STACK_LINE(273)
		this->_scaledTileHeight = (this->_tileHeight * this->scale->y);
		HX_STACK_LINE(276)
		this->set_width((this->widthInTiles * this->_scaledTileWidth));
		HX_STACK_LINE(277)
		this->set_height((this->heightInTiles * this->_scaledTileHeight));
	}
return null();
}


Void FlxTilemap_obj::updateMap( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateMap",0x271f1fcf,"flixel.tile.FlxTilemap.updateMap","flixel/tile/FlxTilemap.hx",281,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(286)
		int numTiles = this->_tileObjects->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(numTiles,"numTiles");
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(288)
			while((true)){
				HX_STACK_LINE(288)
				if ((!(((_g < numTiles))))){
					HX_STACK_LINE(288)
					break;
				}
				HX_STACK_LINE(288)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(290)
				this->updateTile(i);
			}
		}
	}
return null();
}


Void FlxTilemap_obj::draw( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","draw",0x7d740dc8,"flixel.tile.FlxTilemap.draw","flixel/tile/FlxTilemap.hx",392,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(394)
		if (((this->graphic == null()))){
			HX_STACK_LINE(396)
			return null();
		}
		HX_STACK_LINE(399)
		::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(400)
		::flixel::tile::FlxTilemapBuffer buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(401)
		int l = this->get_cameras()->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(403)
		{
			HX_STACK_LINE(403)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(403)
			while((true)){
				HX_STACK_LINE(403)
				if ((!(((_g < l))))){
					HX_STACK_LINE(403)
					break;
				}
				HX_STACK_LINE(403)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(405)
				Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(405)
				::flixel::FlxCamera _g11 = _g1->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(405)
				camera = _g11;
				HX_STACK_LINE(407)
				if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
					HX_STACK_LINE(409)
					continue;
				}
				HX_STACK_LINE(412)
				if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() == null()))){
					HX_STACK_LINE(414)
					::flixel::tile::FlxTilemapBuffer buffer1 = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(414)
					buffer1->pixelPerfectRender = this->pixelPerfectRender;
					HX_STACK_LINE(414)
					this->_buffers[i] = buffer1;
				}
				HX_STACK_LINE(417)
				buffer = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();
				HX_STACK_LINE(431)
				this->drawTilemap(buffer,camera);
			}
		}
	}
return null();
}


Void FlxTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setDirty",0x6396ccd4,"flixel.tile.FlxTilemap.setDirty","flixel/tile/FlxTilemap.hx",453,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Dirty,"Dirty")
{
		HX_STACK_LINE(453)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(453)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(453)
		while((true)){
			HX_STACK_LINE(453)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(453)
				break;
			}
			HX_STACK_LINE(453)
			::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(453)
			++(_g);
			HX_STACK_LINE(455)
			buffer->dirty = true;
		}
	}
return null();
}


bool FlxTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::math::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsWithCallback",0xe7b56cdb,"flixel.tile.FlxTilemap.overlapsWithCallback","flixel/tile/FlxTilemap.hx",471,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams")
	HX_STACK_ARG(Position,"Position")
{
		HX_STACK_LINE(472)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(474)
		Float X = this->x;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(475)
		Float Y = this->y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(477)
		if (((Position != null()))){
			HX_STACK_LINE(479)
			X = Position->x;
			HX_STACK_LINE(480)
			Y = Position->y;
		}
		HX_STACK_LINE(484)
		int selectionX = ::Math_obj::floor((Float(((Object->x - X))) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(selectionX,"selectionX");
		HX_STACK_LINE(485)
		int selectionY = ::Math_obj::floor((Float(((Object->y - Y))) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(selectionY,"selectionY");
		HX_STACK_LINE(486)
		Float _g = Object->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(486)
		Float _g1 = (Float(_g) / Float(this->_scaledTileWidth));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(486)
		int _g2 = ::Math_obj::ceil(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(486)
		int _g3 = (selectionX + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(486)
		int selectionWidth = (_g3 + (int)1);		HX_STACK_VAR(selectionWidth,"selectionWidth");
		HX_STACK_LINE(487)
		Float _g4 = Object->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(487)
		Float _g5 = (Float(_g4) / Float(this->_scaledTileHeight));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(487)
		int _g6 = ::Math_obj::ceil(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(487)
		int _g7 = (selectionY + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(487)
		int selectionHeight = (_g7 + (int)1);		HX_STACK_VAR(selectionHeight,"selectionHeight");
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,int &selectionWidth){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",490,0x448feb74)
				{
					HX_STACK_LINE(490)
					Dynamic Max = __this->widthInTiles;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(490)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(490)
					if (((selectionWidth < (int)0))){
						HX_STACK_LINE(490)
						lowerBound = (int)0;
					}
					else{
						HX_STACK_LINE(490)
						lowerBound = selectionWidth;
					}
					HX_STACK_LINE(490)
					return (  (((bool((Max != null())) && bool((lowerBound > Max))))) ? Dynamic(Max) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(490)
		int _g8 = ::Std_obj::_int(_Function_1_1::Block(this,selectionWidth));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(490)
		selectionWidth = _g8;
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,int &selectionHeight){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",491,0x448feb74)
				{
					HX_STACK_LINE(491)
					Dynamic Max = __this->heightInTiles;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(491)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(491)
					if (((selectionHeight < (int)0))){
						HX_STACK_LINE(491)
						lowerBound = (int)0;
					}
					else{
						HX_STACK_LINE(491)
						lowerBound = selectionHeight;
					}
					HX_STACK_LINE(491)
					return (  (((bool((Max != null())) && bool((lowerBound > Max))))) ? Dynamic(Max) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(491)
		int _g9 = ::Std_obj::_int(_Function_1_2::Block(this,selectionHeight));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(491)
		selectionHeight = _g9;
		HX_STACK_LINE(494)
		int rowStart = (selectionY * this->widthInTiles);		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(495)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(496)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(497)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(498)
		Float deltaX = (X - this->last->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(499)
		Float deltaY = (Y - this->last->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(501)
		{
			HX_STACK_LINE(501)
			int _g10 = selectionY;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(501)
			while((true)){
				HX_STACK_LINE(501)
				if ((!(((_g10 < selectionHeight))))){
					HX_STACK_LINE(501)
					break;
				}
				HX_STACK_LINE(501)
				int row = (_g10)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(503)
				column = selectionX;
				HX_STACK_LINE(505)
				while((true)){
					HX_STACK_LINE(505)
					if ((!(((column < selectionWidth))))){
						HX_STACK_LINE(505)
						break;
					}
					HX_STACK_LINE(507)
					int index = (rowStart + column);		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(508)
					if (((bool((index < (int)0)) || bool((index > (this->_data->length - (int)1)))))){
						HX_STACK_LINE(510)
						(column)++;
						HX_STACK_LINE(511)
						continue;
					}
					HX_STACK_LINE(514)
					int dataIndex = this->_data->__get(index);		HX_STACK_VAR(dataIndex,"dataIndex");
					HX_STACK_LINE(515)
					if (((dataIndex < (int)0))){
						HX_STACK_LINE(517)
						(column)++;
						HX_STACK_LINE(518)
						continue;
					}
					HX_STACK_LINE(521)
					tile = this->_tileObjects->__GetItem(dataIndex);
					HX_STACK_LINE(522)
					tile->set_width(this->_scaledTileWidth);
					HX_STACK_LINE(523)
					tile->set_height(this->_scaledTileHeight);
					HX_STACK_LINE(524)
					Float _g101 = tile->get_width();		HX_STACK_VAR(_g101,"_g101");
					HX_STACK_LINE(524)
					Float _g11 = (column * _g101);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(524)
					Float _g12 = (X + _g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(524)
					tile->set_x(_g12);
					HX_STACK_LINE(525)
					Float _g13 = tile->get_height();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(525)
					Float _g14 = (row * _g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(525)
					Float _g15 = (Y + _g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(525)
					tile->set_y(_g15);
					HX_STACK_LINE(526)
					tile->last->set_x((tile->x - deltaX));
					HX_STACK_LINE(527)
					tile->last->set_y((tile->y - deltaY));
					HX_STACK_LINE(529)
					Float _g16 = Object->get_width();		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(529)
					Float _g17 = (Object->x + _g16);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(529)
					bool _g24;		HX_STACK_VAR(_g24,"_g24");
					struct _Function_4_1{
						inline static bool Block( ::flixel::tile::FlxTile &tile,::flixel::FlxObject &Object){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",529,0x448feb74)
							{
								HX_STACK_LINE(529)
								Float _g18 = tile->get_width();		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(529)
								Float _g19 = (tile->x + _g18);		HX_STACK_VAR(_g19,"_g19");
								HX_STACK_LINE(529)
								return (Object->x < _g19);
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static bool Block( ::flixel::tile::FlxTile &tile,::flixel::FlxObject &Object){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",530,0x448feb74)
							{
								HX_STACK_LINE(530)
								Float _g20 = Object->get_height();		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(530)
								Float _g21 = (Object->y + _g20);		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(530)
								return (_g21 > tile->y);
							}
							return null();
						}
					};
					HX_STACK_LINE(529)
					if (((  (((  (((_g17 > tile->x))) ? bool(_Function_4_1::Block(tile,Object)) : bool(false) ))) ? bool(_Function_4_2::Block(tile,Object)) : bool(false) ))){
						HX_STACK_LINE(530)
						Float _g22 = tile->get_height();		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(530)
						Float _g23 = (tile->y + _g22);		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(530)
						_g24 = (Object->y < _g23);
					}
					else{
						HX_STACK_LINE(529)
						_g24 = false;
					}
					HX_STACK_LINE(529)
					overlapFound = _g24;
					HX_STACK_LINE(532)
					if (((tile->allowCollisions != (int)0))){
						HX_STACK_LINE(534)
						if (((Callback != null()))){
							HX_STACK_LINE(536)
							if ((FlipCallbackParams)){
								HX_STACK_LINE(538)
								bool _g25 = Callback(Object,tile).Cast< bool >();		HX_STACK_VAR(_g25,"_g25");
								HX_STACK_LINE(538)
								overlapFound = _g25;
							}
							else{
								HX_STACK_LINE(542)
								bool _g26 = Callback(tile,Object).Cast< bool >();		HX_STACK_VAR(_g26,"_g26");
								HX_STACK_LINE(542)
								overlapFound = _g26;
							}
						}
					}
					HX_STACK_LINE(547)
					if ((overlapFound)){
						struct _Function_5_1{
							inline static bool Block( ::flixel::tile::FlxTile &tile,::flixel::FlxObject &Object){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",549,0x448feb74)
								{
									HX_STACK_LINE(549)
									return (  ((!(((tile->filter == null()))))) ? bool(::Std_obj::is(Object,tile->filter)) : bool(true) );
								}
								return null();
							}
						};
						HX_STACK_LINE(549)
						if (((  (((tile->callbackFunction != null()))) ? bool(_Function_5_1::Block(tile,Object)) : bool(false) ))){
							HX_STACK_LINE(551)
							tile->mapIndex = (rowStart + column);
							HX_STACK_LINE(552)
							tile->callbackFunction(tile,Object);
						}
						HX_STACK_LINE(555)
						if (((tile->allowCollisions != (int)0))){
							HX_STACK_LINE(557)
							results = true;
						}
					}
					HX_STACK_LINE(561)
					(column)++;
				}
				HX_STACK_LINE(564)
				hx::AddEq(rowStart,this->widthInTiles);
			}
		}
		HX_STACK_LINE(567)
		return results;
	}
}


int FlxTilemap_obj::getTileIndexByCoords( ::flixel::math::FlxPoint Coord){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileIndexByCoords",0xb5ce22c7,"flixel.tile.FlxTilemap.getTileIndexByCoords","flixel/tile/FlxTilemap.hx",571,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Coord,"Coord")
	HX_STACK_LINE(572)
	int _g = ::Std_obj::_int((Float(((Coord->y - this->y))) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(572)
	int _g1 = (_g * this->widthInTiles);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(572)
	int _g2 = ::Std_obj::_int((Float(((Coord->x - this->x))) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(572)
	int result = (_g1 + _g2);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(573)
	if ((Coord->_weak)){
		HX_STACK_LINE(573)
		Coord->put();
	}
	HX_STACK_LINE(574)
	return result;
}


::flixel::math::FlxPoint FlxTilemap_obj::getTileCoordsByIndex( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCoordsByIndex",0xe0680d7d,"flixel.tile.FlxTilemap.getTileCoordsByIndex","flixel/tile/FlxTilemap.hx",578,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(579)
		::flixel::math::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			int _g = ::Std_obj::_int((Float(Index) / Float(this->widthInTiles)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(579)
			Float _g1 = (_g * this->_scaledTileHeight);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(579)
			Float Y = (this->y + _g1);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(579)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set((this->x + (hx::Mod(Index,this->widthInTiles) * this->_scaledTileWidth)),Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(579)
			point1->_inPool = false;
			HX_STACK_LINE(579)
			point = point1;
		}
		HX_STACK_LINE(580)
		if ((Midpoint)){
			HX_STACK_LINE(582)
			{
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(582)
				_g->set_x((_g->x + (this->_scaledTileWidth * 0.5)));
			}
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(583)
				_g->set_y((_g->y + (this->_scaledTileHeight * 0.5)));
			}
		}
		HX_STACK_LINE(585)
		return point;
	}
}


Array< ::Dynamic > FlxTilemap_obj::getTileCoords( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCoords",0x02899bde,"flixel.tile.FlxTilemap.getTileCoords","flixel/tile/FlxTilemap.hx",596,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(597)
		Array< ::Dynamic > array = null();		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(599)
		::flixel::math::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(600)
		int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(602)
		{
			HX_STACK_LINE(602)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(602)
			while((true)){
				HX_STACK_LINE(602)
				if ((!(((_g < l))))){
					HX_STACK_LINE(602)
					break;
				}
				HX_STACK_LINE(602)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(604)
				if (((this->_data->__get(i) == Index))){
					HX_STACK_LINE(606)
					::flixel::math::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(606)
					{
						HX_STACK_LINE(606)
						int _g1 = ::Std_obj::_int((Float(i) / Float(this->widthInTiles)));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(606)
						Float _g11 = (_g1 * this->_scaledTileHeight);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(606)
						Float Y = (this->y + _g11);		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(606)
						::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set((this->x + (hx::Mod(i,this->widthInTiles) * this->_scaledTileWidth)),Y);		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(606)
						point1->_inPool = false;
						HX_STACK_LINE(606)
						_g2 = point1;
					}
					HX_STACK_LINE(606)
					point = _g2;
					HX_STACK_LINE(608)
					if ((Midpoint)){
						HX_STACK_LINE(610)
						{
							HX_STACK_LINE(610)
							::flixel::math::FlxPoint _g1 = point;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(610)
							_g1->set_x((_g1->x + (this->_scaledTileWidth * 0.5)));
						}
						HX_STACK_LINE(611)
						{
							HX_STACK_LINE(611)
							::flixel::math::FlxPoint _g1 = point;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(611)
							_g1->set_y((_g1->y + (this->_scaledTileHeight * 0.5)));
						}
					}
					HX_STACK_LINE(614)
					if (((array == null()))){
						HX_STACK_LINE(616)
						Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(616)
						array = _g3;
					}
					HX_STACK_LINE(618)
					array->push(point);
				}
			}
		}
		HX_STACK_LINE(622)
		return array;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

Void FlxTilemap_obj::follow( ::flixel::FlxCamera Camera,hx::Null< int >  __o_Border,hx::Null< bool >  __o_UpdateWorld){
int Border = __o_Border.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","follow",0xe6a96c35,"flixel.tile.FlxTilemap.follow","flixel/tile/FlxTilemap.hx",633,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Border,"Border")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(634)
		if (((Camera == null()))){
			HX_STACK_LINE(636)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(639)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(639)
		Float _g1 = (_g - ((Border * this->_scaledTileWidth) * (int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(639)
		Float _g2 = this->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(639)
		Float _g3 = (_g2 - ((Border * this->_scaledTileHeight) * (int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(639)
		Camera->setScrollBoundsRect((this->x + (Border * this->_scaledTileWidth)),(this->y + (Border * this->_scaledTileHeight)),_g1,_g3,UpdateWorld);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

bool FlxTilemap_obj::ray( ::flixel::math::FlxPoint Start,::flixel::math::FlxPoint End,::flixel::math::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","ray",0xbe0558a6,"flixel.tile.FlxTilemap.ray","flixel/tile/FlxTilemap.hx",653,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Result,"Result")
	HX_STACK_ARG(Resolution,"Resolution")
{
		HX_STACK_LINE(654)
		Float step = this->_scaledTileWidth;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(656)
		if (((this->_scaledTileHeight < this->_scaledTileWidth))){
			HX_STACK_LINE(658)
			step = this->_scaledTileHeight;
		}
		HX_STACK_LINE(661)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(662)
		Float deltaX = (End->x - Start->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(663)
		Float deltaY = (End->y - Start->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(664)
		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(665)
		int steps = ::Math_obj::ceil((Float(distance) / Float(step)));		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(666)
		Float stepX = (Float(deltaX) / Float(steps));		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(667)
		Float stepY = (Float(deltaY) / Float(steps));		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(668)
		Float curX = ((Start->x - stepX) - this->x);		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(669)
		Float curY = ((Start->y - stepY) - this->y);		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(670)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(671)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(672)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(674)
		if ((Start->_weak)){
			HX_STACK_LINE(674)
			Start->put();
		}
		HX_STACK_LINE(675)
		if ((End->_weak)){
			HX_STACK_LINE(675)
			End->put();
		}
		HX_STACK_LINE(677)
		while((true)){
			HX_STACK_LINE(677)
			if ((!(((i < steps))))){
				HX_STACK_LINE(677)
				break;
			}
			HX_STACK_LINE(679)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(680)
			hx::AddEq(curY,stepY);
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,Float &curX){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",682,0x448feb74)
					{
						HX_STACK_LINE(682)
						Float _g = __this->get_width();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(682)
						return (curX > _g);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,Float &curY){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",682,0x448feb74)
					{
						HX_STACK_LINE(682)
						Float _g1 = __this->get_height();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(682)
						return (curY > _g1);
					}
					return null();
				}
			};
			HX_STACK_LINE(682)
			if (((  ((!(((  ((!(((  ((!(((curX < (int)0))))) ? bool(_Function_2_1::Block(this,curX)) : bool(true) ))))) ? bool((curY < (int)0)) : bool(true) ))))) ? bool(_Function_2_2::Block(this,curY)) : bool(true) ))){
				HX_STACK_LINE(684)
				(i)++;
				HX_STACK_LINE(685)
				continue;
			}
			HX_STACK_LINE(688)
			int _g2 = ::Math_obj::floor((Float(curX) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(688)
			tileX = _g2;
			HX_STACK_LINE(689)
			int _g3 = ::Math_obj::floor((Float(curY) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(689)
			tileY = _g3;
			HX_STACK_LINE(691)
			if (((this->_tileObjects->__GetItem(this->_data->__get(((tileY * this->widthInTiles) + tileX)))->__Field(HX_CSTRING("allowCollisions"),true) != (int)0))){
				HX_STACK_LINE(694)
				int _g4 = ::Std_obj::_int(this->_scaledTileWidth);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(694)
				hx::MultEq(tileX,_g4);
				HX_STACK_LINE(695)
				int _g5 = ::Std_obj::_int(this->_scaledTileHeight);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(695)
				hx::MultEq(tileY,_g5);
				HX_STACK_LINE(696)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(697)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(698)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(699)
				Float lx = (curX - stepX);		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(700)
				Float ly = (curY - stepY);		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(703)
				q = tileX;
				HX_STACK_LINE(705)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(707)
					hx::AddEq(q,this->_scaledTileWidth);
				}
				HX_STACK_LINE(710)
				rx = q;
				HX_STACK_LINE(711)
				ry = (ly + (stepY * ((Float(((q - lx))) / Float(stepX)))));
				HX_STACK_LINE(713)
				if (((bool((ry > tileY)) && bool((ry < (tileY + this->_scaledTileHeight)))))){
					HX_STACK_LINE(715)
					if (((Result == null()))){
						HX_STACK_LINE(717)
						::flixel::math::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(717)
						{
							HX_STACK_LINE(717)
							Float X = (int)0;		HX_STACK_VAR(X,"X");
							HX_STACK_LINE(717)
							Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
							HX_STACK_LINE(717)
							::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(717)
							point->_inPool = false;
							HX_STACK_LINE(717)
							_g6 = point;
						}
						HX_STACK_LINE(717)
						Result = _g6;
					}
					HX_STACK_LINE(720)
					Result->set(rx,ry);
					HX_STACK_LINE(721)
					return false;
				}
				HX_STACK_LINE(725)
				q = tileY;
				HX_STACK_LINE(727)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(729)
					hx::AddEq(q,this->_scaledTileHeight);
				}
				HX_STACK_LINE(732)
				rx = (lx + (stepX * ((Float(((q - ly))) / Float(stepY)))));
				HX_STACK_LINE(733)
				ry = q;
				HX_STACK_LINE(735)
				if (((bool((rx > tileX)) && bool((rx < (tileX + this->_scaledTileWidth)))))){
					HX_STACK_LINE(737)
					if (((Result == null()))){
						HX_STACK_LINE(739)
						::flixel::math::FlxPoint _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(739)
						{
							HX_STACK_LINE(739)
							Float X = (int)0;		HX_STACK_VAR(X,"X");
							HX_STACK_LINE(739)
							Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
							HX_STACK_LINE(739)
							::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(739)
							point->_inPool = false;
							HX_STACK_LINE(739)
							_g7 = point;
						}
						HX_STACK_LINE(739)
						Result = _g7;
					}
					HX_STACK_LINE(742)
					Result->set(rx,ry);
					HX_STACK_LINE(743)
					return false;
				}
				HX_STACK_LINE(746)
				return true;
			}
			HX_STACK_LINE(748)
			(i)++;
		}
		HX_STACK_LINE(751)
		return true;
	}
}


::flixel::FlxSprite FlxTilemap_obj::tileToSprite( int X,int Y,hx::Null< int >  __o_NewTile,Dynamic SpriteFactory){
int NewTile = __o_NewTile.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tileToSprite",0xe7482ef2,"flixel.tile.FlxTilemap.tileToSprite","flixel/tile/FlxTilemap.hx",765,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(NewTile,"NewTile")
	HX_STACK_ARG(SpriteFactory,"SpriteFactory")
{
		HX_STACK_LINE(766)
		if (((SpriteFactory == null()))){
			HX_STACK_LINE(768)
			SpriteFactory = this->defaultTileToSprite_dyn();
		}
		HX_STACK_LINE(771)
		int rowIndex = (X + (Y * this->widthInTiles));		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(772)
		::flixel::tile::FlxTile tile = this->_tileObjects->__GetItem(this->_data->__get(rowIndex));		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(773)
		::flixel::graphics::frames::FlxImageFrame image = null();		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(775)
		if (((bool((tile != null())) && bool(tile->visible)))){
			HX_STACK_LINE(777)
			::flixel::graphics::frames::FlxImageFrame _g = ::flixel::graphics::frames::FlxImageFrame_obj::fromFrame(tile->frame);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(777)
			image = _g;
		}
		else{
			HX_STACK_LINE(781)
			::flixel::math::FlxRect _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(781)
			{
				HX_STACK_LINE(781)
				::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(781)
				{
					HX_STACK_LINE(781)
					::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(781)
					_this->x = (int)0;
					HX_STACK_LINE(781)
					_this->y = (int)0;
					HX_STACK_LINE(781)
					_this->width = this->_tileWidth;
					HX_STACK_LINE(781)
					_this->height = this->_tileHeight;
					HX_STACK_LINE(781)
					rect = _this;
				}
				HX_STACK_LINE(781)
				rect->_inPool = false;
				HX_STACK_LINE(781)
				_g1 = rect;
			}
			HX_STACK_LINE(781)
			::flixel::graphics::frames::FlxImageFrame _g2 = ::flixel::graphics::frames::FlxImageFrame_obj::fromEmptyFrame(this->graphic,_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(781)
			image = _g2;
		}
		HX_STACK_LINE(784)
		Float tileX = (((X * this->_tileWidth) * this->scale->x) + this->x);		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(785)
		Float tileY = (((Y * this->_tileHeight) * this->scale->y) + this->y);		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(786)
		::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(786)
		{
			HX_STACK_LINE(786)
			::flixel::math::FlxPoint _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(786)
			{
				HX_STACK_LINE(786)
				Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
				HX_STACK_LINE(786)
				Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
				HX_STACK_LINE(786)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(786)
				point->_inPool = false;
				HX_STACK_LINE(786)
				_this = point;
			}
			HX_STACK_LINE(786)
			::flixel::math::FlxPoint point = this->scale;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(786)
			_this->set_x(point->x);
			HX_STACK_LINE(786)
			_this->set_y(point->y);
			HX_STACK_LINE(786)
			_g3 = _this;
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::graphics::frames::FlxImageFrame &image,hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,Float &tileY,Float &tileX,::flixel::math::FlxPoint &_g3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",786,0x448feb74)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("graphic") , image,false);
					__result->Add(HX_CSTRING("x") , tileX,false);
					__result->Add(HX_CSTRING("y") , tileY,false);
					__result->Add(HX_CSTRING("scale") , _g3,false);
					__result->Add(HX_CSTRING("alpha") , __this->alpha,false);
					__result->Add(HX_CSTRING("blend") , __this->blend,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(786)
		Dynamic _g4 = _Function_1_1::Block(image,this,tileY,tileX,_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(786)
		::flixel::FlxSprite tileSprite = SpriteFactory(_g4).Cast< ::flixel::FlxSprite >();		HX_STACK_VAR(tileSprite,"tileSprite");
		HX_STACK_LINE(788)
		if (((NewTile >= (int)0))){
			HX_STACK_LINE(790)
			this->setTile(X,Y,NewTile,null());
		}
		HX_STACK_LINE(793)
		return tileSprite;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,tileToSprite,return )

Void FlxTilemap_obj::updateBuffers( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateBuffers",0xf5face26,"flixel.tile.FlxTilemap.updateBuffers","flixel/tile/FlxTilemap.hx",800,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(801)
		Array< ::Dynamic > _g = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_buffers);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(801)
		this->_buffers = _g;
		HX_STACK_LINE(802)
		this->_buffers = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateBuffers,(void))

Void FlxTilemap_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","drawTilemap",0x2b20d346,"flixel.tile.FlxTilemap.drawTilemap","flixel/tile/FlxTilemap.hx",812,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Buffer,"Buffer")
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(816)
		{
			HX_STACK_LINE(816)
			::flixel::math::FlxPoint _this = this->getScreenPosition(this->_point,Camera);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(816)
			::openfl::_v2::geom::Point FlashPoint = this->_helperPoint;		HX_STACK_VAR(FlashPoint,"FlashPoint");
			HX_STACK_LINE(816)
			if (((FlashPoint == null()))){
				HX_STACK_LINE(816)
				::openfl::_v2::geom::Point _g = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(816)
				FlashPoint = _g;
			}
			HX_STACK_LINE(816)
			FlashPoint->x = _this->x;
			HX_STACK_LINE(816)
			FlashPoint->y = _this->y;
			HX_STACK_LINE(816)
			FlashPoint;
		}
		HX_STACK_LINE(818)
		hx::MultEq(this->_helperPoint->x,Camera->totalScaleX);
		HX_STACK_LINE(819)
		hx::MultEq(this->_helperPoint->y,Camera->totalScaleY);
		HX_STACK_LINE(821)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(821)
		if ((this->isPixelPerfectRender(Camera))){
			HX_STACK_LINE(821)
			_g1 = ::Math_obj::floor(this->_helperPoint->x);
		}
		else{
			HX_STACK_LINE(821)
			_g1 = this->_helperPoint->x;
		}
		HX_STACK_LINE(821)
		this->_helperPoint->x = _g1;
		HX_STACK_LINE(822)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(822)
		if ((this->isPixelPerfectRender(Camera))){
			HX_STACK_LINE(822)
			_g2 = ::Math_obj::floor(this->_helperPoint->y);
		}
		else{
			HX_STACK_LINE(822)
			_g2 = this->_helperPoint->y;
		}
		HX_STACK_LINE(822)
		this->_helperPoint->y = _g2;
		HX_STACK_LINE(824)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(825)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(827)
		Float scaledWidth = (this->_scaledTileWidth * Camera->totalScaleX);		HX_STACK_VAR(scaledWidth,"scaledWidth");
		HX_STACK_LINE(828)
		Float scaledHeight = (this->_scaledTileHeight * Camera->totalScaleY);		HX_STACK_VAR(scaledHeight,"scaledHeight");
		HX_STACK_LINE(830)
		Float scaleX = (this->scale->x * Camera->totalScaleX);		HX_STACK_VAR(scaleX,"scaleX");
		HX_STACK_LINE(831)
		Float scaleY = (this->scale->y * Camera->totalScaleY);		HX_STACK_VAR(scaleY,"scaleY");
		HX_STACK_LINE(833)
		Float hackScaleX = (this->tileScaleHack * scaleX);		HX_STACK_VAR(hackScaleX,"hackScaleX");
		HX_STACK_LINE(834)
		Float hackScaleY = (this->tileScaleHack * scaleY);		HX_STACK_VAR(hackScaleY,"hackScaleY");
		HX_STACK_LINE(836)
		::flixel::graphics::tile::FlxDrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(839)
		bool isColored = (bool((this->alpha != (int)1)) || bool((this->color != (int)16777215)));		HX_STACK_VAR(isColored,"isColored");
		HX_STACK_LINE(842)
		this->_point->set_x(((Camera->scroll->x * this->scrollFactor->x) - this->x));
		HX_STACK_LINE(843)
		this->_point->set_y(((Camera->scroll->y * this->scrollFactor->y) - this->y));
		HX_STACK_LINE(845)
		int screenXInTiles = ::Math_obj::floor((Float(this->_point->x) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(846)
		int screenYInTiles = ::Math_obj::floor((Float(this->_point->y) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(847)
		int screenRows = Buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(848)
		int screenColumns = Buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(851)
		if (((screenXInTiles < (int)0))){
			HX_STACK_LINE(853)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(855)
		if (((screenXInTiles > (this->widthInTiles - screenColumns)))){
			HX_STACK_LINE(857)
			screenXInTiles = (this->widthInTiles - screenColumns);
		}
		HX_STACK_LINE(859)
		if (((screenYInTiles < (int)0))){
			HX_STACK_LINE(861)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(863)
		if (((screenYInTiles > (this->heightInTiles - screenRows)))){
			HX_STACK_LINE(865)
			screenYInTiles = (this->heightInTiles - screenRows);
		}
		HX_STACK_LINE(868)
		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(869)
		this->_flashPoint->y = (int)0;
		HX_STACK_LINE(870)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(871)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(872)
		::flixel::graphics::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(878)
		{
			HX_STACK_LINE(878)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(878)
			while((true)){
				HX_STACK_LINE(878)
				if ((!(((_g < screenRows))))){
					HX_STACK_LINE(878)
					break;
				}
				HX_STACK_LINE(878)
				int row = (_g)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(880)
				columnIndex = rowIndex;
				HX_STACK_LINE(881)
				this->_flashPoint->x = (int)0;
				HX_STACK_LINE(883)
				{
					HX_STACK_LINE(883)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(883)
					while((true)){
						HX_STACK_LINE(883)
						if ((!(((_g11 < screenColumns))))){
							HX_STACK_LINE(883)
							break;
						}
						HX_STACK_LINE(883)
						int column = (_g11)++;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(885)
						tile = this->_tileObjects->__GetItem(this->_data->__get(columnIndex));
						HX_STACK_LINE(887)
						if (((bool((bool((tile != null())) && bool(tile->visible))) && bool((tile->frame->type != (int)2))))){
							HX_STACK_LINE(889)
							frame = tile->frame;
							HX_STACK_LINE(917)
							drawX = ((this->_helperPoint->x + (hx::Mod(columnIndex,this->widthInTiles) * scaledWidth)) + (frame->center->x * scaleX));
							HX_STACK_LINE(918)
							int _g3 = ::Math_obj::floor((Float(columnIndex) / Float(this->widthInTiles)));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(918)
							Float _g4 = (_g3 * scaledHeight);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(918)
							Float _g5 = (this->_helperPoint->y + _g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(918)
							Float _g6 = (_g5 + (frame->center->y * scaleY));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(918)
							drawY = _g6;
							HX_STACK_LINE(920)
							this->_point->set(drawX,drawY);
							HX_STACK_LINE(922)
							this->_matrix->identity();
							HX_STACK_LINE(924)
							if (((frame->angle != (int)0))){
								HX_STACK_LINE(926)
								frame->prepareFrameMatrix(this->_matrix);
							}
							HX_STACK_LINE(929)
							this->_matrix->scale(hackScaleX,hackScaleY);
							HX_STACK_LINE(931)
							::flixel::graphics::tile::FlxDrawStackItem _g7 = Camera->getDrawStackItem(this->graphic,isColored,this->_blendInt,null());		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(931)
							drawItem = _g7;
							HX_STACK_LINE(932)
							{
								HX_STACK_LINE(932)
								::flixel::math::FlxPoint coordinate = this->_point;		HX_STACK_VAR(coordinate,"coordinate");
								HX_STACK_LINE(932)
								::openfl::_v2::geom::Matrix matrix = this->_matrix;		HX_STACK_VAR(matrix,"matrix");
								HX_STACK_LINE(932)
								int color = this->color;		HX_STACK_VAR(color,"color");
								HX_STACK_LINE(932)
								int _g8 = (drawItem->position)++;		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(932)
								drawItem->drawData[_g8] = coordinate->x;
								HX_STACK_LINE(932)
								int _g9 = (drawItem->position)++;		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(932)
								drawItem->drawData[_g9] = coordinate->y;
								HX_STACK_LINE(932)
								int _g10 = (drawItem->position)++;		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(932)
								drawItem->drawData[_g10] = frame->tileID;
								HX_STACK_LINE(932)
								int _g111 = (drawItem->position)++;		HX_STACK_VAR(_g111,"_g111");
								HX_STACK_LINE(932)
								drawItem->drawData[_g111] = matrix->a;
								HX_STACK_LINE(932)
								int _g12 = (drawItem->position)++;		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(932)
								drawItem->drawData[_g12] = matrix->b;
								HX_STACK_LINE(932)
								int _g13 = (drawItem->position)++;		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(932)
								drawItem->drawData[_g13] = matrix->c;
								HX_STACK_LINE(932)
								int _g14 = (drawItem->position)++;		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(932)
								drawItem->drawData[_g14] = matrix->d;
								HX_STACK_LINE(932)
								if ((isColored)){
									HX_STACK_LINE(932)
									int _g15 = (drawItem->position)++;		HX_STACK_VAR(_g15,"_g15");
									HX_STACK_LINE(932)
									drawItem->drawData[_g15] = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255));
									HX_STACK_LINE(932)
									int _g16 = (drawItem->position)++;		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(932)
									drawItem->drawData[_g16] = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255));
									HX_STACK_LINE(932)
									int _g17 = (drawItem->position)++;		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(932)
									drawItem->drawData[_g17] = (Float(((int(color) & int((int)255)))) / Float((int)255));
								}
								HX_STACK_LINE(932)
								int _g18 = (drawItem->position)++;		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(932)
								drawItem->drawData[_g18] = this->alpha;
								HX_STACK_LINE(932)
								if ((coordinate->_weak)){
									HX_STACK_LINE(932)
									coordinate->put();
								}
							}
						}
						HX_STACK_LINE(939)
						(columnIndex)++;
					}
				}
				HX_STACK_LINE(945)
				hx::AddEq(rowIndex,this->widthInTiles);
			}
		}
		HX_STACK_LINE(948)
		Buffer->x = (screenXInTiles * this->_scaledTileWidth);
		HX_STACK_LINE(949)
		Buffer->y = (screenYInTiles * this->_scaledTileHeight);
		HX_STACK_LINE(959)
		Buffer->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

Void FlxTilemap_obj::updateTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateTile",0x18c3429b,"flixel.tile.FlxTilemap.updateTile","flixel/tile/FlxTilemap.hx",993,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(994)
		::flixel::tile::FlxTile tile = this->_tileObjects->__GetItem(Index);		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(996)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
			HX_STACK_LINE(998)
			return null();
		}
		HX_STACK_LINE(1001)
		tile->frame = this->frames->frames->__get((Index - this->_startingIndex)).StaticCast< ::flixel::graphics::frames::FlxFrame >();
	}
return null();
}


::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::createBuffer( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","createBuffer",0x170b42e0,"flixel.tile.FlxTilemap.createBuffer","flixel/tile/FlxTilemap.hx",1005,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(1006)
	::flixel::tile::FlxTilemapBuffer buffer = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(1007)
	buffer->pixelPerfectRender = this->pixelPerfectRender;
	HX_STACK_LINE(1008)
	return buffer;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,createBuffer,return )

Void FlxTilemap_obj::onGameResize( int _,int _1){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","onGameResize",0x47562b49,"flixel.tile.FlxTilemap.onGameResize","flixel/tile/FlxTilemap.hx",1016,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		HX_STACK_LINE(1016)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1016)
		int _g = this->get_cameras()->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1016)
		while((true)){
			HX_STACK_LINE(1016)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(1016)
				break;
			}
			HX_STACK_LINE(1016)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1018)
			Array< ::Dynamic > _g2 = this->get_cameras();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1018)
			::flixel::FlxCamera camera = _g2->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(1019)
			::flixel::tile::FlxTilemapBuffer buffer = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1022)
			::flixel::tile::FlxTilemap_obj::_helperBuffer->updateColumns(this->_tileWidth,this->widthInTiles,this->scale->x,camera);
			HX_STACK_LINE(1023)
			::flixel::tile::FlxTilemap_obj::_helperBuffer->updateRows(this->_tileHeight,this->heightInTiles,this->scale->y,camera);
			HX_STACK_LINE(1026)
			if (((bool((bool((buffer == null())) || bool((::flixel::tile::FlxTilemap_obj::_helperBuffer->columns != buffer->columns)))) || bool((::flixel::tile::FlxTilemap_obj::_helperBuffer->rows != buffer->rows))))){
				HX_STACK_LINE(1028)
				if (((buffer != null()))){
					HX_STACK_LINE(1029)
					buffer->destroy();
				}
				HX_STACK_LINE(1031)
				{
					HX_STACK_LINE(1031)
					::flixel::tile::FlxTilemapBuffer buffer1 = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(1031)
					buffer1->pixelPerfectRender = this->pixelPerfectRender;
					HX_STACK_LINE(1031)
					this->_buffers[i] = buffer1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,onGameResize,(void))

::flixel::graphics::FlxGraphic FlxTilemap_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_graphic",0xa0b86087,"flixel.tile.FlxTilemap.set_graphic","flixel/tile/FlxTilemap.hx",1041,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1043)
	if (((this->graphic != Value))){
		HX_STACK_LINE(1046)
		if (((Value != null()))){
			HX_STACK_LINE(1048)
			::flixel::graphics::FlxGraphic _g = Value;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1048)
			int _g1 = _g->get_useCount();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1048)
			_g->set_useCount((_g1 + (int)1));
			HX_STACK_LINE(1048)
			_g1;
		}
		HX_STACK_LINE(1051)
		if (((this->graphic != null()))){
			HX_STACK_LINE(1053)
			::flixel::graphics::FlxGraphic _g = this->graphic;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1053)
			int _g1 = _g->get_useCount();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1053)
			_g->set_useCount((_g1 - (int)1));
			HX_STACK_LINE(1053)
			_g1;
		}
	}
	HX_STACK_LINE(1057)
	return this->graphic = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_graphic,return )

bool FlxTilemap_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_pixelPerfectRender",0x5122f25e,"flixel.tile.FlxTilemap.set_pixelPerfectRender","flixel/tile/FlxTilemap.hx",1061,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1062)
	if (((this->_buffers != null()))){
		HX_STACK_LINE(1064)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1064)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1064)
		while((true)){
			HX_STACK_LINE(1064)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1064)
				break;
			}
			HX_STACK_LINE(1064)
			::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1064)
			++(_g);
			HX_STACK_LINE(1066)
			buffer->pixelPerfectRender = Value;
		}
	}
	HX_STACK_LINE(1070)
	return this->pixelPerfectRender = Value;
}


Float FlxTilemap_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_alpha",0xecd0277d,"flixel.tile.FlxTilemap.set_alpha","flixel/tile/FlxTilemap.hx",1074,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1075)
	{
		HX_STACK_LINE(1075)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1075)
		if (((Alpha < (int)0))){
			HX_STACK_LINE(1075)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(1075)
			lowerBound = Alpha;
		}
		HX_STACK_LINE(1075)
		if (((lowerBound > (int)1))){
			HX_STACK_LINE(1075)
			this->alpha = (int)1;
		}
		else{
			HX_STACK_LINE(1075)
			this->alpha = lowerBound;
		}
	}
	HX_STACK_LINE(1076)
	this->updateColorTransform();
	HX_STACK_LINE(1077)
	return this->alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_alpha,return )

int FlxTilemap_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_color",0x1595f182,"flixel.tile.FlxTilemap.set_color","flixel/tile/FlxTilemap.hx",1081,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1082)
	if (((this->color == Color))){
		HX_STACK_LINE(1084)
		return Color;
	}
	HX_STACK_LINE(1086)
	this->color = Color;
	HX_STACK_LINE(1087)
	this->updateColorTransform();
	HX_STACK_LINE(1089)
	return this->color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_color,return )

Void FlxTilemap_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateColorTransform",0x6f14b936,"flixel.tile.FlxTilemap.updateColorTransform","flixel/tile/FlxTilemap.hx",1094,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1094)
		if (((bool((this->alpha != (int)1)) || bool((this->color != (int)16777215))))){
			HX_STACK_LINE(1096)
			this->colorTransform->redMultiplier = (Float(((int((int(this->color) >> int((int)16))) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(1097)
			this->colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(1098)
			this->colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(1099)
			this->colorTransform->alphaMultiplier = this->alpha;
		}
		else{
			HX_STACK_LINE(1103)
			this->colorTransform->redMultiplier = (int)1;
			HX_STACK_LINE(1104)
			this->colorTransform->greenMultiplier = (int)1;
			HX_STACK_LINE(1105)
			this->colorTransform->blueMultiplier = (int)1;
			HX_STACK_LINE(1106)
			this->colorTransform->alphaMultiplier = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateColorTransform,(void))

::openfl::_v2::display::BlendMode FlxTilemap_obj::set_blend( ::openfl::_v2::display::BlendMode Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_blend",0x802e6870,"flixel.tile.FlxTilemap.set_blend","flixel/tile/FlxTilemap.hx",1115,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1117)
	if (((Value != null()))){
		HX_STACK_LINE(1119)
		switch( (int)(Value->__Index())){
			case (int)7: {
				HX_STACK_LINE(1122)
				this->_blendInt = (int)65536;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1125)
				this->_blendInt = (int)131072;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(1127)
				this->_blendInt = (int)262144;
			}
			;break;
			default: {
				HX_STACK_LINE(1130)
				this->_blendInt = (int)0;
			}
		}
	}
	else{
		HX_STACK_LINE(1135)
		this->_blendInt = (int)0;
	}
	HX_STACK_LINE(1141)
	return this->blend = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_blend,return )

Void FlxTilemap_obj::setScaleXYCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXYCallback",0x2287ee32,"flixel.tile.FlxTilemap.setScaleXYCallback","flixel/tile/FlxTilemap.hx",1145,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(1146)
		this->setScaleXCallback(Scale);
		HX_STACK_LINE(1147)
		this->setScaleYCallback(Scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXYCallback,(void))

Void FlxTilemap_obj::setScaleXCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXCallback",0x45b95971,"flixel.tile.FlxTilemap.setScaleXCallback","flixel/tile/FlxTilemap.hx",1151,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(1152)
		this->_scaledTileWidth = (this->_tileWidth * this->scale->x);
		HX_STACK_LINE(1153)
		this->set_width((this->widthInTiles * this->_scaledTileWidth));
		HX_STACK_LINE(1155)
		Array< ::Dynamic > _g = this->get_cameras();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1155)
		if (((_g != null()))){
			HX_STACK_LINE(1157)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1157)
			int _g2 = this->get_cameras()->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1157)
			while((true)){
				HX_STACK_LINE(1157)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(1157)
					break;
				}
				HX_STACK_LINE(1157)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1159)
				if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() != null()))){
					HX_STACK_LINE(1161)
					Array< ::Dynamic > _g11 = this->get_cameras();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1161)
					::flixel::FlxCamera _g21 = _g11->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1161)
					this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->updateColumns(this->_tileWidth,this->widthInTiles,this->scale->x,_g21);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXCallback,(void))

Void FlxTilemap_obj::setScaleYCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleYCallback",0x18aac272,"flixel.tile.FlxTilemap.setScaleYCallback","flixel/tile/FlxTilemap.hx",1168,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(1169)
		this->_scaledTileHeight = (this->_tileHeight * this->scale->y);
		HX_STACK_LINE(1170)
		this->set_height((this->heightInTiles * this->_scaledTileHeight));
		HX_STACK_LINE(1172)
		Array< ::Dynamic > _g = this->get_cameras();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1172)
		if (((_g != null()))){
			HX_STACK_LINE(1174)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1174)
			int _g2 = this->get_cameras()->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1174)
			while((true)){
				HX_STACK_LINE(1174)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(1174)
					break;
				}
				HX_STACK_LINE(1174)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1176)
				if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() != null()))){
					HX_STACK_LINE(1178)
					Array< ::Dynamic > _g11 = this->get_cameras();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1178)
					::flixel::FlxCamera _g21 = _g11->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1178)
					this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->updateRows(this->_tileHeight,this->heightInTiles,this->scale->y,_g21);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleYCallback,(void))

::flixel::FlxSprite FlxTilemap_obj::defaultTileToSprite( Dynamic TileProperties){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","defaultTileToSprite",0xb4e0664b,"flixel.tile.FlxTilemap.defaultTileToSprite","flixel/tile/FlxTilemap.hx",1191,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileProperties,"TileProperties")
	HX_STACK_LINE(1192)
	::flixel::FlxSprite tileSprite = ::flixel::FlxSprite_obj::__new(TileProperties->__Field(HX_CSTRING("x"),true),TileProperties->__Field(HX_CSTRING("y"),true),null());		HX_STACK_VAR(tileSprite,"tileSprite");
	HX_STACK_LINE(1193)
	tileSprite->set_frames(TileProperties->__Field(HX_CSTRING("graphic"),true));
	HX_STACK_LINE(1194)
	{
		HX_STACK_LINE(1194)
		::flixel::math::FlxPoint _this = tileSprite->scale;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1194)
		::flixel::math::FlxPoint point = TileProperties->__Field(HX_CSTRING("scale"),true);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1194)
		_this->set_x(point->x);
		HX_STACK_LINE(1194)
		_this->set_y(point->y);
		HX_STACK_LINE(1194)
		_this;
	}
	HX_STACK_LINE(1195)
	::flixel::util::FlxDestroyUtil_obj::put(TileProperties->__Field(HX_CSTRING("scale"),true));
	HX_STACK_LINE(1196)
	tileSprite->set_alpha(TileProperties->__Field(HX_CSTRING("alpha"),true));
	HX_STACK_LINE(1197)
	tileSprite->set_blend(TileProperties->__Field(HX_CSTRING("blend"),true));
	HX_STACK_LINE(1198)
	return tileSprite;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,defaultTileToSprite,return )

::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::_helperBuffer;


FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_MARK_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_blendInt,"_blendInt");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	::flixel::tile::FlxBaseTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_VISIT_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_blendInt,"_blendInt");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	::flixel::tile::FlxBaseTilemap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return graphic; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_blendInt") ) { return _blendInt; }
		if (HX_FIELD_EQ(inName,"updateMap") ) { return updateMap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return set_frames_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return _tileHeight; }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return drawTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return _helperPoint; }
		if (HX_FIELD_EQ(inName,"tileToSprite") ) { return tileToSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameResize") ) { return onGameResize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { return _helperBuffer; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { return tileScaleHack; }
		if (HX_FIELD_EQ(inName,"cacheGraphics") ) { return cacheGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return getTileCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBuffers") ) { return updateBuffers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return initTileObjects_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { return _scaledTileWidth; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { return _scaledTileHeight; }
		if (HX_FIELD_EQ(inName,"computeDimensions") ) { return computeDimensions_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleXCallback") ) { return setScaleXCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleYCallback") ) { return setScaleYCallback_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setScaleXYCallback") ) { return setScaleXYCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultTileToSprite") ) { return defaultTileToSprite_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileIndexByCoords") ) { return getTileIndexByCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoordsByIndex") ) { return getTileCoordsByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp) return set_blend(inValue);blend=inValue.Cast< ::openfl::_v2::display::BlendMode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp) return set_frames(inValue);frames=inValue.Cast< ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp) return set_graphic(inValue);graphic=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_blendInt") ) { _blendInt=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { _helperBuffer=inValue.Cast< ::flixel::tile::FlxTilemapBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { tileScaleHack=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::openfl::_v2::geom::ColorTransform >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { _scaledTileWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { _scaledTileHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tileScaleHack"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("graphic"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("colorTransform"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_buffers"));
	outFields->push(HX_CSTRING("_tileWidth"));
	outFields->push(HX_CSTRING("_tileHeight"));
	outFields->push(HX_CSTRING("_scaledTileWidth"));
	outFields->push(HX_CSTRING("_scaledTileHeight"));
	outFields->push(HX_CSTRING("_helperPoint"));
	outFields->push(HX_CSTRING("_blendInt"));
	outFields->push(HX_CSTRING("_matrix"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_helperBuffer"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,tileScaleHack),HX_CSTRING("tileScaleHack")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTilemap_obj,scale),HX_CSTRING("scale")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFramesCollection*/ ,(int)offsetof(FlxTilemap_obj,frames),HX_CSTRING("frames")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxTilemap_obj,graphic),HX_CSTRING("graphic")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,color),HX_CSTRING("color")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsObject /*::openfl::_v2::geom::ColorTransform*/ ,(int)offsetof(FlxTilemap_obj,colorTransform),HX_CSTRING("colorTransform")},
	{hx::fsObject /*::openfl::_v2::display::BlendMode*/ ,(int)offsetof(FlxTilemap_obj,blend),HX_CSTRING("blend")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_flashPoint),HX_CSTRING("_flashPoint")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(FlxTilemap_obj,_flashRect),HX_CSTRING("_flashRect")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_buffers),HX_CSTRING("_buffers")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileWidth),HX_CSTRING("_tileWidth")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileHeight),HX_CSTRING("_tileHeight")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileWidth),HX_CSTRING("_scaledTileWidth")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileHeight),HX_CSTRING("_scaledTileHeight")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_helperPoint),HX_CSTRING("_helperPoint")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_blendInt),HX_CSTRING("_blendInt")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(int)offsetof(FlxTilemap_obj,_matrix),HX_CSTRING("_matrix")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tileScaleHack"),
	HX_CSTRING("scale"),
	HX_CSTRING("frames"),
	HX_CSTRING("graphic"),
	HX_CSTRING("color"),
	HX_CSTRING("alpha"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("blend"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_buffers"),
	HX_CSTRING("_tileWidth"),
	HX_CSTRING("_tileHeight"),
	HX_CSTRING("_scaledTileWidth"),
	HX_CSTRING("_scaledTileHeight"),
	HX_CSTRING("_helperPoint"),
	HX_CSTRING("_blendInt"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("destroy"),
	HX_CSTRING("set_frames"),
	HX_CSTRING("cacheGraphics"),
	HX_CSTRING("initTileObjects"),
	HX_CSTRING("computeDimensions"),
	HX_CSTRING("updateMap"),
	HX_CSTRING("draw"),
	HX_CSTRING("setDirty"),
	HX_CSTRING("overlapsWithCallback"),
	HX_CSTRING("getTileIndexByCoords"),
	HX_CSTRING("getTileCoordsByIndex"),
	HX_CSTRING("getTileCoords"),
	HX_CSTRING("follow"),
	HX_CSTRING("ray"),
	HX_CSTRING("tileToSprite"),
	HX_CSTRING("updateBuffers"),
	HX_CSTRING("drawTilemap"),
	HX_CSTRING("updateTile"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("onGameResize"),
	HX_CSTRING("set_graphic"),
	HX_CSTRING("set_pixelPerfectRender"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_color"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("set_blend"),
	HX_CSTRING("setScaleXYCallback"),
	HX_CSTRING("setScaleXCallback"),
	HX_CSTRING("setScaleYCallback"),
	HX_CSTRING("defaultTileToSprite"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#endif

Class FlxTilemap_obj::__mClass;

void FlxTilemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxTilemap"), hx::TCanCast< FlxTilemap_obj> ,sStaticFields,sMemberFields,
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

void FlxTilemap_obj::__boot()
{
	_helperBuffer= ::Type_obj::createEmptyInstance(hx::ClassOf< ::flixel::tile::FlxTilemapBuffer >());
}

} // end namespace flixel
} // end namespace tile
