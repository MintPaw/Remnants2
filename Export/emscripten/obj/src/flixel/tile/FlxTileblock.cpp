#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
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
namespace flixel{
namespace tile{

Void FlxTileblock_obj::__construct(int X,int Y,int Width,int Height)
{
HX_STACK_FRAME("flixel.tile.FlxTileblock","new",0x8f1d69cd,"flixel.tile.FlxTileblock.new","flixel/tile/FlxTileblock.hx",34,0xecdf1de3)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
{
	HX_STACK_LINE(35)
	super::__construct(X,Y,null());
	HX_STACK_LINE(36)
	this->makeGraphic(Width,Height,(int)0,true,null());
	HX_STACK_LINE(37)
	this->set_active(false);
	HX_STACK_LINE(38)
	this->set_immovable(true);
	HX_STACK_LINE(39)
	this->set_moves(false);
}
;
	return null();
}

//FlxTileblock_obj::~FlxTileblock_obj() { }

Dynamic FlxTileblock_obj::__CreateEmpty() { return  new FlxTileblock_obj; }
hx::ObjectPtr< FlxTileblock_obj > FlxTileblock_obj::__new(int X,int Y,int Width,int Height)
{  hx::ObjectPtr< FlxTileblock_obj > result = new FlxTileblock_obj();
	result->__construct(X,Y,Width,Height);
	return result;}

Dynamic FlxTileblock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTileblock_obj > result = new FlxTileblock_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxTileblock_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTileblock","destroy",0x5d3d80e7,"flixel.tile.FlxTileblock.destroy","flixel/tile/FlxTileblock.hx",43,0xecdf1de3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::flixel::FlxSprite _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->tileSprite);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		this->tileSprite = _g;
		HX_STACK_LINE(45)
		this->super::destroy();
	}
return null();
}


::flixel::tile::FlxTileblock FlxTileblock_obj::loadFrames( ::flixel::graphics::frames::FlxTileFrames tileFrames,hx::Null< int >  __o_empties){
int empties = __o_empties.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTileblock","loadFrames",0xaeb6fc9f,"flixel.tile.FlxTileblock.loadFrames","flixel/tile/FlxTileblock.hx",56,0xecdf1de3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileFrames,"tileFrames")
	HX_STACK_ARG(empties,"empties")
{
		HX_STACK_LINE(57)
		if (((tileFrames == null()))){
			HX_STACK_LINE(59)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(63)
		::flixel::FlxSprite _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		if (((this->tileSprite == null()))){
			HX_STACK_LINE(63)
			_g = ::flixel::FlxSprite_obj::__new(null(),null(),null());
		}
		else{
			HX_STACK_LINE(63)
			_g = this->tileSprite;
		}
		HX_STACK_LINE(63)
		this->tileSprite = _g;
		HX_STACK_LINE(64)
		this->tileSprite->set_frames(tileFrames);
		HX_STACK_LINE(65)
		Float _g1 = this->tileSprite->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(65)
		int spriteWidth = ::Std_obj::_int(_g1);		HX_STACK_VAR(spriteWidth,"spriteWidth");
		HX_STACK_LINE(66)
		Float _g2 = this->tileSprite->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(66)
		int spriteHeight = ::Std_obj::_int(_g2);		HX_STACK_VAR(spriteHeight,"spriteHeight");
		HX_STACK_LINE(67)
		int total = (this->tileSprite->numFrames + empties);		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(70)
		bool regen = false;		HX_STACK_VAR(regen,"regen");
		HX_STACK_LINE(72)
		Float _g3 = this->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(72)
		Float _g4 = this->tileSprite->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(72)
		Float _g5 = hx::Mod(_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(72)
		if (((_g5 != (int)0))){
			HX_STACK_LINE(74)
			Float _g6 = this->get_width();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(74)
			Float _g7 = (Float(_g6) / Float(spriteWidth));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(74)
			Float _g8 = (_g7 + (int)1);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(74)
			int _g9 = ::Std_obj::_int(_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(74)
			int _g10 = (_g9 * spriteWidth);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(74)
			this->set_width(_g10);
			HX_STACK_LINE(75)
			regen = true;
		}
		HX_STACK_LINE(78)
		Float _g11 = this->get_height();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(78)
		Float _g12 = this->tileSprite->get_height();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(78)
		Float _g13 = hx::Mod(_g11,_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(78)
		if (((_g13 != (int)0))){
			HX_STACK_LINE(80)
			Float _g14 = this->get_height();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(80)
			Float _g15 = (Float(_g14) / Float(spriteHeight));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(80)
			Float _g16 = (_g15 + (int)1);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(80)
			int _g17 = ::Std_obj::_int(_g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(80)
			int _g18 = (_g17 * spriteHeight);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(80)
			this->set_height(_g18);
			HX_STACK_LINE(81)
			regen = true;
		}
		HX_STACK_LINE(84)
		if ((regen)){
			HX_STACK_LINE(86)
			Float _g19 = this->get_width();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(86)
			int _g20 = ::Std_obj::_int(_g19);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(86)
			Float _g21 = this->get_height();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(86)
			int _g22 = ::Std_obj::_int(_g21);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(86)
			this->makeGraphic(_g20,_g22,(int)0,true,null());
		}
		else{
			HX_STACK_LINE(90)
			::flixel::util::FlxSpriteUtil_obj::fill(hx::ObjectPtr<OBJ_>(this),(int)0);
		}
		HX_STACK_LINE(94)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(95)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(96)
		int destinationX;		HX_STACK_VAR(destinationX,"destinationX");
		HX_STACK_LINE(97)
		int destinationY = (int)0;		HX_STACK_VAR(destinationY,"destinationY");
		HX_STACK_LINE(98)
		Float _g23 = this->get_width();		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(98)
		Float _g24 = (Float(_g23) / Float(spriteWidth));		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(98)
		int widthInTiles = ::Std_obj::_int(_g24);		HX_STACK_VAR(widthInTiles,"widthInTiles");
		HX_STACK_LINE(99)
		Float _g25 = this->get_height();		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(99)
		Float _g26 = (Float(_g25) / Float(spriteHeight));		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(99)
		int heightInTiles = ::Std_obj::_int(_g26);		HX_STACK_VAR(heightInTiles,"heightInTiles");
		HX_STACK_LINE(101)
		while((true)){
			HX_STACK_LINE(101)
			if ((!(((row < heightInTiles))))){
				HX_STACK_LINE(101)
				break;
			}
			HX_STACK_LINE(103)
			destinationX = (int)0;
			HX_STACK_LINE(104)
			column = (int)0;
			HX_STACK_LINE(106)
			while((true)){
				HX_STACK_LINE(106)
				if ((!(((column < widthInTiles))))){
					HX_STACK_LINE(106)
					break;
				}
				HX_STACK_LINE(108)
				Float _g27 = ::flixel::FlxG_obj::random->_float(null(),null(),null());		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(108)
				Float _g28 = (_g27 * total);		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(108)
				if (((_g28 > empties))){
					HX_STACK_LINE(110)
					this->tileSprite->animation->randomFrame();
					HX_STACK_LINE(111)
					this->tileSprite->drawFrame(null());
					HX_STACK_LINE(112)
					this->stamp(this->tileSprite,destinationX,destinationY);
				}
				HX_STACK_LINE(115)
				hx::AddEq(destinationX,spriteWidth);
				HX_STACK_LINE(116)
				(column)++;
			}
			HX_STACK_LINE(119)
			hx::AddEq(destinationY,spriteHeight);
			HX_STACK_LINE(120)
			(row)++;
		}
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			::flixel::graphics::frames::FlxFrame _this = this->frame;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(123)
			::openfl::_v2::display::BitmapData _g29 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_bitmapData);		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(123)
			_this->_bitmapData = _g29;
			HX_STACK_LINE(123)
			::openfl::_v2::display::BitmapData _g30 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_hReversedBitmapData);		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(123)
			_this->_hReversedBitmapData = _g30;
			HX_STACK_LINE(123)
			::openfl::_v2::display::BitmapData _g31 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_vReversedBitmapData);		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(123)
			_this->_vReversedBitmapData = _g31;
			HX_STACK_LINE(123)
			::openfl::_v2::display::BitmapData _g32 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_hvReversedBitmapData);		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(123)
			_this->_hvReversedBitmapData = _g32;
		}
		HX_STACK_LINE(124)
		this->dirty = true;
		HX_STACK_LINE(125)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTileblock_obj,loadFrames,return )

::flixel::tile::FlxTileblock FlxTileblock_obj::loadTiles( Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_Empties){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int Empties = __o_Empties.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTileblock","loadTiles",0x7f9232ac,"flixel.tile.FlxTileblock.loadTiles","flixel/tile/FlxTileblock.hx",138,0xecdf1de3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(Empties,"Empties")
{
		HX_STACK_LINE(139)
		if (((TileGraphic == null()))){
			HX_STACK_LINE(141)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(144)
		::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->add(TileGraphic,null(),null());		HX_STACK_VAR(graph,"graph");
		HX_STACK_LINE(146)
		if (((TileWidth == (int)0))){
			HX_STACK_LINE(148)
			TileWidth = graph->height;
			HX_STACK_LINE(149)
			if (((TileWidth > graph->width))){
				HX_STACK_LINE(149)
				TileWidth = graph->width;
			}
			else{
				HX_STACK_LINE(149)
				TileWidth = TileWidth;
			}
		}
		HX_STACK_LINE(152)
		if (((TileHeight == (int)0))){
			HX_STACK_LINE(154)
			TileHeight = TileWidth;
			HX_STACK_LINE(155)
			if (((TileHeight > graph->height))){
				HX_STACK_LINE(155)
				TileHeight = graph->height;
			}
			else{
				HX_STACK_LINE(155)
				TileHeight = TileHeight;
			}
		}
		HX_STACK_LINE(158)
		::flixel::math::FlxPoint _g = ::flixel::math::FlxPoint_obj::__new(TileWidth,TileHeight);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(158)
		::flixel::graphics::frames::FlxTileFrames tileFrames = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graph,_g,null(),null());		HX_STACK_VAR(tileFrames,"tileFrames");
		HX_STACK_LINE(159)
		return this->loadFrames(tileFrames,Empties);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTileblock_obj,loadTiles,return )

Void FlxTileblock_obj::setTile( int x,int y,int index){
{
		HX_STACK_FRAME("flixel.tile.FlxTileblock","setTile",0x4b385fdd,"flixel.tile.FlxTileblock.setTile","flixel/tile/FlxTileblock.hx",163,0xecdf1de3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(164)
		this->tileSprite->animation->set_frameIndex(index);
		HX_STACK_LINE(165)
		Float _g = this->tileSprite->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(165)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(165)
		int _g2 = (x * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(165)
		Float _g3 = this->tileSprite->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(165)
		int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(165)
		int _g5 = (y * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(165)
		this->stamp(this->tileSprite,_g2,_g5);
		HX_STACK_LINE(166)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTileblock_obj,setTile,(void))


FlxTileblock_obj::FlxTileblock_obj()
{
}

void FlxTileblock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileblock);
	HX_MARK_MEMBER_NAME(tileSprite,"tileSprite");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTileblock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileSprite,"tileSprite");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTileblock_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadTiles") ) { return loadTiles_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileSprite") ) { return tileSprite; }
		if (HX_FIELD_EQ(inName,"loadFrames") ) { return loadFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTileblock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"tileSprite") ) { tileSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileblock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tileSprite"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxTileblock_obj,tileSprite),HX_CSTRING("tileSprite")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tileSprite"),
	HX_CSTRING("destroy"),
	HX_CSTRING("loadFrames"),
	HX_CSTRING("loadTiles"),
	HX_CSTRING("setTile"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTileblock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTileblock_obj::__mClass,"__mClass");
};

#endif

Class FlxTileblock_obj::__mClass;

void FlxTileblock_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxTileblock"), hx::TCanCast< FlxTileblock_obj> ,sStaticFields,sMemberFields,
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

void FlxTileblock_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tile
