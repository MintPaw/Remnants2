#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITileTest
#include <flixel/addons/ui/FlxUITileTest.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUITileTest_obj::__construct(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2,hx::Null< bool >  __o_FloorToEven)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUITileTest","new",0xc2e05f87,"flixel.addons.ui.FlxUITileTest.new","flixel/addons/ui/FlxUITileTest.hx",15,0xbeb161aa)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(TileWidth,"TileWidth")
HX_STACK_ARG(TileHeight,"TileHeight")
HX_STACK_ARG(tilesWide,"tilesWide")
HX_STACK_ARG(tilesTall,"tilesTall")
HX_STACK_ARG(__o_color1,"color1")
HX_STACK_ARG(__o_color2,"color2")
HX_STACK_ARG(__o_FloorToEven,"FloorToEven")
int color1 = __o_color1.Default(8421504);
int color2 = __o_color2.Default(12895428);
bool FloorToEven = __o_FloorToEven.Default(false);
{
	HX_STACK_LINE(31)
	this->baseTileSize = (int)-1;
	HX_STACK_LINE(30)
	this->floorToEven = false;
	HX_STACK_LINE(28)
	this->_color2 = (int)0;
	HX_STACK_LINE(27)
	this->_color1 = (int)0;
	HX_STACK_LINE(26)
	this->_tilesTall = (int)2;
	HX_STACK_LINE(25)
	this->_tilesWide = (int)2;
	HX_STACK_LINE(35)
	super::__construct(X,Y,null());
	HX_STACK_LINE(37)
	this->tileWidth = TileWidth;
	HX_STACK_LINE(38)
	this->tileHeight = TileHeight;
	HX_STACK_LINE(40)
	this->_tilesWide = tilesWide;
	HX_STACK_LINE(41)
	this->_tilesTall = tilesTall;
	HX_STACK_LINE(42)
	this->_color1 = color1;
	HX_STACK_LINE(43)
	this->_color2 = color2;
	HX_STACK_LINE(45)
	this->floorToEven = FloorToEven;
	HX_STACK_LINE(47)
	this->makeTiles(this->tileWidth,this->tileHeight,this->_tilesWide,this->_tilesTall,this->_color1,this->_color2);
}
;
	return null();
}

//FlxUITileTest_obj::~FlxUITileTest_obj() { }

Dynamic FlxUITileTest_obj::__CreateEmpty() { return  new FlxUITileTest_obj; }
hx::ObjectPtr< FlxUITileTest_obj > FlxUITileTest_obj::__new(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2,hx::Null< bool >  __o_FloorToEven)
{  hx::ObjectPtr< FlxUITileTest_obj > result = new FlxUITileTest_obj();
	result->__construct(X,Y,TileWidth,TileHeight,tilesWide,tilesTall,__o_color1,__o_color2,__o_FloorToEven);
	return result;}

Dynamic FlxUITileTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUITileTest_obj > result = new FlxUITileTest_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}

hx::Object *FlxUITileTest_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

int FlxUITileTest_obj::get_widthInTiles( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITileTest","get_widthInTiles",0xe8fe62fc,"flixel.addons.ui.FlxUITileTest.get_widthInTiles","flixel/addons/ui/FlxUITileTest.hx",22,0xbeb161aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return this->_tilesWide;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITileTest_obj,get_widthInTiles,return )

int FlxUITileTest_obj::get_heightInTiles( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITileTest","get_heightInTiles",0x7da8fef7,"flixel.addons.ui.FlxUITileTest.get_heightInTiles","flixel/addons/ui/FlxUITileTest.hx",23,0xbeb161aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	return this->_tilesTall;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITileTest_obj,get_heightInTiles,return )

Void FlxUITileTest_obj::makeTiles( int tileWidth,int tileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2){
int color1 = __o_color1.Default(-8355712);
int color2 = __o_color2.Default(-3881788);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITileTest","makeTiles",0xea745b1e,"flixel.addons.ui.FlxUITileTest.makeTiles","flixel/addons/ui/FlxUITileTest.hx",50,0xbeb161aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileWidth,"tileWidth")
	HX_STACK_ARG(tileHeight,"tileHeight")
	HX_STACK_ARG(tilesWide,"tilesWide")
	HX_STACK_ARG(tilesTall,"tilesTall")
	HX_STACK_ARG(color1,"color1")
	HX_STACK_ARG(color2,"color2")
{
		HX_STACK_LINE(51)
		::flixel::math::FlxPoint size = this->constrain((tileWidth * this->_tilesWide),(tileHeight * this->_tilesTall));		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(53)
		int _g = ::Std_obj::_int(size->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		tileWidth = _g;
		HX_STACK_LINE(54)
		int _g1 = ::Std_obj::_int(size->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(54)
		tileHeight = _g1;
		HX_STACK_LINE(56)
		this->makeGraphic((tileWidth * tilesWide),(tileHeight * tilesTall),color1,null(),null());
		HX_STACK_LINE(58)
		::openfl::_v2::display::BitmapData brush = ::openfl::_v2::display::BitmapData_obj::__new(tileWidth,tileHeight,true,color2,null());		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(59)
		::openfl::_v2::display::BitmapData canvas = this->get_pixels();		HX_STACK_VAR(canvas,"canvas");
		HX_STACK_LINE(61)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(62)
		::openfl::_v2::geom::Point pt = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(63)
			while((true)){
				HX_STACK_LINE(63)
				if ((!(((_g2 < tilesWide))))){
					HX_STACK_LINE(63)
					break;
				}
				HX_STACK_LINE(63)
				int ix = (_g2)++;		HX_STACK_VAR(ix,"ix");
				HX_STACK_LINE(64)
				{
					HX_STACK_LINE(64)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(64)
					while((true)){
						HX_STACK_LINE(64)
						if ((!(((_g11 < tilesTall))))){
							HX_STACK_LINE(64)
							break;
						}
						HX_STACK_LINE(64)
						int iy = (_g11)++;		HX_STACK_VAR(iy,"iy");
						HX_STACK_LINE(65)
						if (((hx::Mod(j,(int)2) == (int)0))){
							HX_STACK_LINE(66)
							pt->x = (ix * tileWidth);
							HX_STACK_LINE(67)
							pt->y = (iy * tileHeight);
							HX_STACK_LINE(68)
							::openfl::_v2::geom::Rectangle _g21 = brush->get_rect();		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(68)
							canvas->copyPixels(brush,_g21,pt,null(),null(),null());
						}
						HX_STACK_LINE(70)
						(j)++;
					}
				}
				HX_STACK_LINE(72)
				if (((hx::Mod(tilesWide,(int)2) != (int)0))){
					HX_STACK_LINE(73)
					(j)++;
				}
			}
		}
		HX_STACK_LINE(77)
		pt = null();
		HX_STACK_LINE(78)
		this->set_pixels(canvas);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxUITileTest_obj,makeTiles,(void))

::flixel::math::FlxPoint FlxUITileTest_obj::constrain( Float w,Float h){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITileTest","constrain",0x5645169e,"flixel.addons.ui.FlxUITileTest.constrain","flixel/addons/ui/FlxUITileTest.hx",82,0xbeb161aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(w,"w")
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(83)
	int tileWidth = ::Std_obj::_int((Float(w) / Float(this->_tilesWide)));		HX_STACK_VAR(tileWidth,"tileWidth");
	HX_STACK_LINE(84)
	int tileHeight = ::Std_obj::_int((Float(h) / Float(this->_tilesTall)));		HX_STACK_VAR(tileHeight,"tileHeight");
	HX_STACK_LINE(86)
	if (((tileWidth < tileHeight))){
		HX_STACK_LINE(86)
		tileHeight = tileWidth;
	}
	else{
		HX_STACK_LINE(87)
		if (((tileHeight < tileWidth))){
			HX_STACK_LINE(87)
			tileWidth = tileHeight;
		}
	}
	HX_STACK_LINE(89)
	if ((this->floorToEven)){
		HX_STACK_LINE(91)
		if (((hx::Mod(tileWidth,(int)2) == (int)1))){
			HX_STACK_LINE(92)
			hx::SubEq(tileWidth,(int)1);
			HX_STACK_LINE(93)
			tileHeight = tileWidth;
		}
	}
	HX_STACK_LINE(98)
	if (((this->baseTileSize > (int)0))){
		HX_STACK_LINE(100)
		int _g = ::Std_obj::_int((Float(tileWidth) / Float(this->baseTileSize)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		int _g1 = (_g * this->baseTileSize);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		tileWidth = _g1;
		HX_STACK_LINE(101)
		tileHeight = tileWidth;
	}
	HX_STACK_LINE(104)
	return ::flixel::math::FlxPoint_obj::__new(tileWidth,tileHeight);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITileTest_obj,constrain,return )

Void FlxUITileTest_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITileTest","resize",0x04b97d2d,"flixel.addons.ui.FlxUITileTest.resize","flixel/addons/ui/FlxUITileTest.hx",108,0xbeb161aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(108)
		this->makeTiles(this->tileWidth,this->tileHeight,this->_tilesWide,this->_tilesTall,this->_color1,this->_color2);
	}
return null();
}



FlxUITileTest_obj::FlxUITileTest_obj()
{
}

Dynamic FlxUITileTest_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_color1") ) { return _color1; }
		if (HX_FIELD_EQ(inName,"_color2") ) { return _color2; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"makeTiles") ) { return makeTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"constrain") ) { return constrain_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"_tilesWide") ) { return _tilesWide; }
		if (HX_FIELD_EQ(inName,"_tilesTall") ) { return _tilesTall; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floorToEven") ) { return floorToEven; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return inCallProp ? get_widthInTiles() : widthInTiles; }
		if (HX_FIELD_EQ(inName,"baseTileSize") ) { return baseTileSize; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return inCallProp ? get_heightInTiles() : heightInTiles; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_widthInTiles") ) { return get_widthInTiles_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_heightInTiles") ) { return get_heightInTiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUITileTest_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_color1") ) { _color1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color2") ) { _color2=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesWide") ) { _tilesWide=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesTall") ) { _tilesTall=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floorToEven") ) { floorToEven=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"baseTileSize") ) { baseTileSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUITileTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("widthInTiles"));
	outFields->push(HX_CSTRING("heightInTiles"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("_tilesWide"));
	outFields->push(HX_CSTRING("_tilesTall"));
	outFields->push(HX_CSTRING("_color1"));
	outFields->push(HX_CSTRING("_color2"));
	outFields->push(HX_CSTRING("floorToEven"));
	outFields->push(HX_CSTRING("baseTileSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,widthInTiles),HX_CSTRING("widthInTiles")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,heightInTiles),HX_CSTRING("heightInTiles")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,tileWidth),HX_CSTRING("tileWidth")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,tileHeight),HX_CSTRING("tileHeight")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_tilesWide),HX_CSTRING("_tilesWide")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_tilesTall),HX_CSTRING("_tilesTall")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_color1),HX_CSTRING("_color1")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_color2),HX_CSTRING("_color2")},
	{hx::fsBool,(int)offsetof(FlxUITileTest_obj,floorToEven),HX_CSTRING("floorToEven")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,baseTileSize),HX_CSTRING("baseTileSize")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("widthInTiles"),
	HX_CSTRING("heightInTiles"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("get_widthInTiles"),
	HX_CSTRING("get_heightInTiles"),
	HX_CSTRING("_tilesWide"),
	HX_CSTRING("_tilesTall"),
	HX_CSTRING("_color1"),
	HX_CSTRING("_color2"),
	HX_CSTRING("floorToEven"),
	HX_CSTRING("baseTileSize"),
	HX_CSTRING("makeTiles"),
	HX_CSTRING("constrain"),
	HX_CSTRING("resize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUITileTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUITileTest_obj::__mClass,"__mClass");
};

#endif

Class FlxUITileTest_obj::__mClass;

void FlxUITileTest_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUITileTest"), hx::TCanCast< FlxUITileTest_obj> ,sStaticFields,sMemberFields,
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

void FlxUITileTest_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
