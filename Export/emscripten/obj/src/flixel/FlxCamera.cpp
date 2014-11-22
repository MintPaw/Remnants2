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
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraShakeDirection
#include <flixel/FlxCameraShakeDirection.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawStackItem
#include <flixel/graphics/tile/FlxDrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Transform
#include <openfl/_v2/geom/Transform.h>
#endif
namespace flixel{

Void FlxCamera_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_FRAME("flixel.FlxCamera","new",0x0e8a9f77,"flixel.FlxCamera.new","flixel/FlxCamera.hx",27,0xe7aeb95a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_Zoom,"Zoom")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(282)
	this->initialZoom = (int)1;
	HX_STACK_LINE(273)
	this->_fxShakeDirection = ::flixel::FlxCameraShakeDirection_obj::BOTH_AXES;
	HX_STACK_LINE(261)
	this->_fxShakeDuration = (int)0;
	HX_STACK_LINE(257)
	this->_fxShakeIntensity = (int)0;
	HX_STACK_LINE(253)
	this->_fxFadeAlpha = (int)0;
	HX_STACK_LINE(249)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(245)
	this->_fxFadeIn = false;
	HX_STACK_LINE(241)
	this->_fxFadeDuration = (int)0;
	HX_STACK_LINE(229)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(225)
	this->_fxFlashAlpha = (int)0;
	HX_STACK_LINE(221)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(217)
	this->_fxFlashDuration = (int)0;
	HX_STACK_LINE(213)
	this->_fxFlashColor = (int)0;
	HX_STACK_LINE(192)
	this->antialiasing = false;
	HX_STACK_LINE(187)
	this->color = (int)-1;
	HX_STACK_LINE(182)
	this->angle = (int)0;
	HX_STACK_LINE(177)
	this->alpha = (int)1;
	HX_STACK_LINE(168)
	this->height = (int)0;
	HX_STACK_LINE(164)
	this->width = (int)0;
	HX_STACK_LINE(159)
	this->pixelPerfectRender = true;
	HX_STACK_LINE(146)
	this->useBgAlphaBlending = false;
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",88,0xe7aeb95a)
			{
				HX_STACK_LINE(88)
				int _g = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(88)
				return (Float((int)60) / Float(_g));
			}
			return null();
		}
	};
	HX_STACK_LINE(88)
	this->followLerp = _Function_1_1::Block();
	HX_STACK_LINE(49)
	this->y = (int)0;
	HX_STACK_LINE(44)
	this->x = (int)0;
	HX_STACK_LINE(439)
	super::__construct();
	HX_STACK_LINE(441)
	::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(441)
	{
		HX_STACK_LINE(441)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(441)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(441)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(441)
		point->_inPool = false;
		HX_STACK_LINE(441)
		_g = point;
	}
	HX_STACK_LINE(441)
	this->_scrollTarget = _g;
	HX_STACK_LINE(442)
	::flixel::math::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(442)
	{
		HX_STACK_LINE(442)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(442)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(442)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(442)
		point->_inPool = false;
		HX_STACK_LINE(442)
		_g1 = point;
	}
	HX_STACK_LINE(442)
	this->scroll = _g1;
	HX_STACK_LINE(443)
	::flixel::math::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(443)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(443)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(443)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(443)
		point->_inPool = false;
		HX_STACK_LINE(443)
		_g2 = point;
	}
	HX_STACK_LINE(443)
	this->followLead = _g2;
	HX_STACK_LINE(444)
	::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(444)
	{
		HX_STACK_LINE(444)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(444)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(444)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(444)
		point->_inPool = false;
		HX_STACK_LINE(444)
		_g3 = point;
	}
	HX_STACK_LINE(444)
	this->targetOffset = _g3;
	HX_STACK_LINE(445)
	::flixel::math::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(445)
	{
		HX_STACK_LINE(445)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(445)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(445)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(445)
		point->_inPool = false;
		HX_STACK_LINE(445)
		_g4 = point;
	}
	HX_STACK_LINE(445)
	this->_point = _g4;
	HX_STACK_LINE(446)
	::flixel::math::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(446)
	{
		HX_STACK_LINE(446)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(446)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(446)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(446)
		point->_inPool = false;
		HX_STACK_LINE(446)
		_g5 = point;
	}
	HX_STACK_LINE(446)
	this->_flashOffset = _g5;
	HX_STACK_LINE(448)
	this->set_x(X);
	HX_STACK_LINE(449)
	this->set_y(Y);
	HX_STACK_LINE(452)
	this->set_width((  (((Width <= (int)0))) ? int(::flixel::FlxG_obj::width) : int(Width) ));
	HX_STACK_LINE(453)
	this->set_height((  (((Height <= (int)0))) ? int(::flixel::FlxG_obj::height) : int(Height) ));
	HX_STACK_LINE(465)
	::openfl::_v2::display::Sprite _g6 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(465)
	this->canvas = _g6;
	HX_STACK_LINE(468)
	this->set_color((int)-1);
	HX_STACK_LINE(470)
	::openfl::_v2::display::Sprite _g7 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(470)
	this->flashSprite = _g7;
	HX_STACK_LINE(472)
	::openfl::_v2::display::Sprite _g8 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(472)
	this->_scrollRect = _g8;
	HX_STACK_LINE(473)
	this->flashSprite->addChild(this->_scrollRect);
	HX_STACK_LINE(478)
	this->_scrollRect->addChild(this->canvas);
	HX_STACK_LINE(480)
	::openfl::_v2::geom::Rectangle _g9 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(480)
	this->_flashRect = _g9;
	HX_STACK_LINE(481)
	::openfl::_v2::geom::Point _g10 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(481)
	this->_flashPoint = _g10;
	HX_STACK_LINE(483)
	::flixel::math::FlxPoint _g11;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(483)
	{
		HX_STACK_LINE(483)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(483)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(483)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(483)
		point->_inPool = false;
		HX_STACK_LINE(483)
		_g11 = point;
	}
	HX_STACK_LINE(483)
	this->_fxShakeOffset = _g11;
	HX_STACK_LINE(494)
	::flixel::graphics::tile::FlxDrawStackItem _g12 = ::flixel::graphics::tile::FlxDrawStackItem_obj::__new();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(494)
	this->_currentStackItem = _g12;
	HX_STACK_LINE(495)
	this->_headOfDrawStack = this->_currentStackItem;
	HX_STACK_LINE(498)
	this->set_zoom(Zoom);
	HX_STACK_LINE(500)
	this->initialZoom = this->zoom;
	HX_STACK_LINE(502)
	::openfl::_v2::geom::Rectangle _g13 = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(502)
	this->_scrollRect->set_scrollRect(_g13);
	HX_STACK_LINE(504)
	this->updateScrollRect();
	HX_STACK_LINE(505)
	this->updateFlashOffset();
	HX_STACK_LINE(506)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(507)
	this->updateInternalSpritePositions();
	HX_STACK_LINE(509)
	int _g14 = ::flixel::FlxG_obj::cameras->get_bgColor();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(509)
	this->bgColor = _g14;
}
;
	return null();
}

//FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_Zoom);
	return result;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::flixel::graphics::tile::FlxDrawStackItem FlxCamera_obj::getDrawStackItem( ::flixel::graphics::FlxGraphic ObjGraphics,bool ObjColored,int ObjBlending,hx::Null< bool >  __o_ObjAntialiasing){
bool ObjAntialiasing = __o_ObjAntialiasing.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","getDrawStackItem",0x060ba7ea,"flixel.FlxCamera.getDrawStackItem","flixel/FlxCamera.hx",329,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjGraphics,"ObjGraphics")
	HX_STACK_ARG(ObjColored,"ObjColored")
	HX_STACK_ARG(ObjBlending,"ObjBlending")
	HX_STACK_ARG(ObjAntialiasing,"ObjAntialiasing")
{
		HX_STACK_LINE(330)
		::flixel::graphics::tile::FlxDrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(331)
		if (((this->_currentStackItem->initialized == false))){
			HX_STACK_LINE(333)
			this->_headOfDrawStack = this->_currentStackItem;
			HX_STACK_LINE(334)
			this->_currentStackItem->graphics = ObjGraphics;
			HX_STACK_LINE(335)
			this->_currentStackItem->antialiasing = ObjAntialiasing;
			HX_STACK_LINE(336)
			this->_currentStackItem->colored = ObjColored;
			HX_STACK_LINE(337)
			this->_currentStackItem->blending = ObjBlending;
			HX_STACK_LINE(338)
			itemToReturn = this->_currentStackItem;
		}
		else{
			HX_STACK_LINE(340)
			if (((bool((bool((bool((this->_currentStackItem->graphics == ObjGraphics)) && bool((this->_currentStackItem->colored == ObjColored)))) && bool((this->_currentStackItem->blending == ObjBlending)))) && bool((this->_currentStackItem->antialiasing == ObjAntialiasing))))){
				HX_STACK_LINE(345)
				itemToReturn = this->_currentStackItem;
			}
		}
		HX_STACK_LINE(348)
		if (((itemToReturn == null()))){
			HX_STACK_LINE(350)
			::flixel::graphics::tile::FlxDrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
			HX_STACK_LINE(351)
			if (((::flixel::FlxCamera_obj::_storageHead != null()))){
				HX_STACK_LINE(353)
				newItem = ::flixel::FlxCamera_obj::_storageHead;
				HX_STACK_LINE(354)
				::flixel::graphics::tile::FlxDrawStackItem newHead = ::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
				HX_STACK_LINE(355)
				newItem->next = null();
				HX_STACK_LINE(356)
				::flixel::FlxCamera_obj::_storageHead = newHead;
			}
			else{
				HX_STACK_LINE(360)
				::flixel::graphics::tile::FlxDrawStackItem _g = ::flixel::graphics::tile::FlxDrawStackItem_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(360)
				newItem = _g;
			}
			HX_STACK_LINE(363)
			newItem->graphics = ObjGraphics;
			HX_STACK_LINE(364)
			newItem->antialiasing = ObjAntialiasing;
			HX_STACK_LINE(365)
			newItem->colored = ObjColored;
			HX_STACK_LINE(366)
			newItem->blending = ObjBlending;
			HX_STACK_LINE(367)
			this->_currentStackItem->next = newItem;
			HX_STACK_LINE(368)
			this->_currentStackItem = newItem;
			HX_STACK_LINE(369)
			itemToReturn = this->_currentStackItem;
		}
		HX_STACK_LINE(372)
		itemToReturn->initialized = true;
		HX_STACK_LINE(373)
		return itemToReturn;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,getDrawStackItem,return )

Void FlxCamera_obj::clearDrawStack( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","clearDrawStack",0x8d7c5ba0,"flixel.FlxCamera.clearDrawStack","flixel/FlxCamera.hx",378,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(379)
		::flixel::graphics::tile::FlxDrawStackItem currItem = this->_headOfDrawStack->next;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(380)
		while((true)){
			HX_STACK_LINE(380)
			if ((!(((currItem != null()))))){
				HX_STACK_LINE(380)
				break;
			}
			HX_STACK_LINE(382)
			{
				HX_STACK_LINE(382)
				currItem->graphics = null();
				HX_STACK_LINE(382)
				currItem->initialized = false;
				HX_STACK_LINE(382)
				currItem->antialiasing = false;
				HX_STACK_LINE(382)
				currItem->position = (int)0;
			}
			HX_STACK_LINE(383)
			::flixel::graphics::tile::FlxDrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
			HX_STACK_LINE(384)
			currItem = currItem->next;
			HX_STACK_LINE(385)
			if (((::flixel::FlxCamera_obj::_storageHead == null()))){
				HX_STACK_LINE(387)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
				HX_STACK_LINE(388)
				newStorageHead->next = null();
			}
			else{
				HX_STACK_LINE(392)
				newStorageHead->next = ::flixel::FlxCamera_obj::_storageHead;
				HX_STACK_LINE(393)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
			}
		}
		HX_STACK_LINE(397)
		{
			HX_STACK_LINE(397)
			::flixel::graphics::tile::FlxDrawStackItem _this = this->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(397)
			_this->graphics = null();
			HX_STACK_LINE(397)
			_this->initialized = false;
			HX_STACK_LINE(397)
			_this->antialiasing = false;
			HX_STACK_LINE(397)
			_this->position = (int)0;
		}
		HX_STACK_LINE(398)
		this->_headOfDrawStack->next = null();
		HX_STACK_LINE(399)
		this->_currentStackItem = this->_headOfDrawStack;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

Void FlxCamera_obj::render( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","render",0x1f11e49f,"flixel.FlxCamera.render","flixel/FlxCamera.hx",404,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(405)
		::flixel::graphics::tile::FlxDrawStackItem currItem = this->_headOfDrawStack;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(406)
		while((true)){
			HX_STACK_LINE(406)
			if ((!(((currItem != null()))))){
				HX_STACK_LINE(406)
				break;
			}
			HX_STACK_LINE(408)
			Array< Float > data = currItem->drawData;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(409)
			int dataLen = data->length;		HX_STACK_VAR(dataLen,"dataLen");
			HX_STACK_LINE(410)
			int position = currItem->position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(411)
			if (((position > (int)0))){
				HX_STACK_LINE(413)
				int tempFlags = (int)16;		HX_STACK_VAR(tempFlags,"tempFlags");
				HX_STACK_LINE(414)
				hx::OrEq(tempFlags,(int)8);
				HX_STACK_LINE(415)
				if ((currItem->colored)){
					HX_STACK_LINE(417)
					hx::OrEq(tempFlags,(int)4);
				}
				HX_STACK_LINE(419)
				hx::OrEq(tempFlags,currItem->blending);
				HX_STACK_LINE(420)
				::openfl::_v2::display::Graphics _g = this->canvas->get_graphics();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(420)
				currItem->graphics->get_tilesheet()->drawTiles(_g,data,(bool(this->antialiasing) || bool(currItem->antialiasing)),tempFlags,position);
				HX_STACK_LINE(421)
				(::flixel::graphics::tile::FlxTilesheet_obj::_DRAWCALLS)++;
			}
			HX_STACK_LINE(423)
			currItem = currItem->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

Void FlxCamera_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","destroy",0xb607d391,"flixel.FlxCamera.destroy","flixel/FlxCamera.hx",516,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(517)
		::flixel::util::FlxDestroyUtil_obj::removeChild(this->flashSprite,this->_scrollRect);
		HX_STACK_LINE(531)
		::flixel::util::FlxDestroyUtil_obj::removeChild(this->_scrollRect,this->canvas);
		HX_STACK_LINE(532)
		if (((this->canvas != null()))){
			HX_STACK_LINE(534)
			{
				HX_STACK_LINE(534)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(534)
				int _g = this->canvas->get_numChildren();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(534)
				while((true)){
					HX_STACK_LINE(534)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(534)
						break;
					}
					HX_STACK_LINE(534)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(536)
					this->canvas->removeChildAt((int)0);
				}
			}
			HX_STACK_LINE(538)
			this->canvas = null();
		}
		HX_STACK_LINE(541)
		if (((this->_headOfDrawStack != null()))){
			HX_STACK_LINE(543)
			this->clearDrawStack();
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::graphics::tile::FlxDrawStackItem _this = this->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(544)
				_this->graphics = null();
				HX_STACK_LINE(544)
				_this->drawData = null();
				HX_STACK_LINE(544)
				_this->next = null();
			}
			HX_STACK_LINE(545)
			this->_headOfDrawStack = null();
		}
		HX_STACK_LINE(547)
		this->_currentStackItem = null();
		HX_STACK_LINE(550)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->scroll);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(550)
		this->scroll = _g;
		HX_STACK_LINE(551)
		::flixel::math::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->targetOffset);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(551)
		this->targetOffset = _g1;
		HX_STACK_LINE(552)
		::flixel::math::FlxRect _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->deadzone);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(552)
		this->deadzone = _g2;
		HX_STACK_LINE(554)
		this->target = null();
		HX_STACK_LINE(555)
		this->flashSprite = null();
		HX_STACK_LINE(556)
		this->_scrollRect = null();
		HX_STACK_LINE(557)
		this->_flashRect = null();
		HX_STACK_LINE(558)
		this->_flashPoint = null();
		HX_STACK_LINE(559)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(560)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(561)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(562)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(564)
		this->super::destroy();
	}
return null();
}


Void FlxCamera_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","update",0xa0edff52,"flixel.FlxCamera.update","flixel/FlxCamera.hx",571,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(573)
		if (((this->target != null()))){
			HX_STACK_LINE(575)
			this->updateFollow();
		}
		HX_STACK_LINE(578)
		this->updateScroll();
		HX_STACK_LINE(579)
		this->updateFlash(elapsed);
		HX_STACK_LINE(580)
		this->updateFade(elapsed);
		HX_STACK_LINE(581)
		this->updateShake(elapsed);
		HX_STACK_LINE(583)
		this->updateFlashSpritePosition();
	}
return null();
}


Void FlxCamera_obj::updateScroll( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateScroll",0x3fd094ff,"flixel.FlxCamera.updateScroll","flixel/FlxCamera.hx",590,0xe7aeb95a)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::flixel::FlxCamera_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",592,0xe7aeb95a)
				{
					HX_STACK_LINE(592)
					Float Value = __this->scroll->x;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(592)
					Dynamic Min = __this->minScrollX;		HX_STACK_VAR(Min,"Min");
					HX_STACK_LINE(592)
					Dynamic Max;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(592)
					if (((__this->maxScrollX != null()))){
						HX_STACK_LINE(592)
						Max = (__this->maxScrollX - __this->width);
					}
					else{
						HX_STACK_LINE(592)
						Max = null();
					}
					HX_STACK_LINE(592)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(592)
					if (((bool((Min != null())) && bool((Value < Min))))){
						HX_STACK_LINE(592)
						lowerBound = Min;
					}
					else{
						HX_STACK_LINE(592)
						lowerBound = Value;
					}
					HX_STACK_LINE(592)
					return (  (((bool((Max != null())) && bool((lowerBound > Max))))) ? Dynamic(Max) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(592)
		this->scroll->set_x(_Function_1_1::Block(this));
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::flixel::FlxCamera_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",593,0xe7aeb95a)
				{
					HX_STACK_LINE(593)
					Float Value = __this->scroll->y;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(593)
					Dynamic Min = __this->minScrollY;		HX_STACK_VAR(Min,"Min");
					HX_STACK_LINE(593)
					Dynamic Max;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(593)
					if (((__this->maxScrollY != null()))){
						HX_STACK_LINE(593)
						Max = (__this->maxScrollY - __this->height);
					}
					else{
						HX_STACK_LINE(593)
						Max = null();
					}
					HX_STACK_LINE(593)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(593)
					if (((bool((Min != null())) && bool((Value < Min))))){
						HX_STACK_LINE(593)
						lowerBound = Min;
					}
					else{
						HX_STACK_LINE(593)
						lowerBound = Value;
					}
					HX_STACK_LINE(593)
					return (  (((bool((Max != null())) && bool((lowerBound > Max))))) ? Dynamic(Max) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(593)
		this->scroll->set_y(_Function_1_2::Block(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateScroll,(void))

Void FlxCamera_obj::updateFollow( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFollow",0xf2024e63,"flixel.FlxCamera.updateFollow","flixel/FlxCamera.hx",600,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(600)
		if (((this->deadzone == null()))){
			HX_STACK_LINE(602)
			this->target->getMidpoint(this->_point);
			HX_STACK_LINE(603)
			this->_point->addPoint(this->targetOffset);
			HX_STACK_LINE(604)
			{
				HX_STACK_LINE(604)
				::flixel::math::FlxPoint point = this->_point;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(604)
				this->scroll->set((point->x - (this->width * 0.5)),(point->y - (this->height * 0.5)));
				HX_STACK_LINE(604)
				if ((point->_weak)){
					HX_STACK_LINE(604)
					point->put();
				}
			}
		}
		else{
			HX_STACK_LINE(608)
			Float edge;		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(609)
			Float targetX = (this->target->x + this->targetOffset->x);		HX_STACK_VAR(targetX,"targetX");
			HX_STACK_LINE(610)
			Float targetY = (this->target->y + this->targetOffset->y);		HX_STACK_VAR(targetY,"targetY");
			HX_STACK_LINE(612)
			if (((this->style == ::flixel::FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN))){
				HX_STACK_LINE(614)
				if (((targetX >= (this->scroll->x + this->width)))){
					HX_STACK_LINE(616)
					::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(616)
					_g->set_x((_g->x + this->width));
				}
				else{
					HX_STACK_LINE(618)
					if (((targetX < this->scroll->x))){
						HX_STACK_LINE(620)
						::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(620)
						_g->set_x((_g->x - this->width));
					}
				}
				HX_STACK_LINE(623)
				if (((targetY >= (this->scroll->y + this->height)))){
					HX_STACK_LINE(625)
					::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(625)
					_g->set_y((_g->y + this->height));
				}
				else{
					HX_STACK_LINE(627)
					if (((targetY < this->scroll->y))){
						HX_STACK_LINE(629)
						::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(629)
						_g->set_y((_g->y - this->height));
					}
				}
			}
			else{
				HX_STACK_LINE(634)
				edge = (targetX - this->deadzone->x);
				HX_STACK_LINE(635)
				if (((this->_scrollTarget->x > edge))){
					HX_STACK_LINE(637)
					this->_scrollTarget->set_x(edge);
				}
				HX_STACK_LINE(639)
				Float _g = this->target->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(639)
				Float _g1 = (targetX + _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(639)
				Float _g2 = (_g1 - this->deadzone->x);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(639)
				Float _g3 = (_g2 - this->deadzone->width);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(639)
				edge = _g3;
				HX_STACK_LINE(640)
				if (((this->_scrollTarget->x < edge))){
					HX_STACK_LINE(642)
					this->_scrollTarget->set_x(edge);
				}
				HX_STACK_LINE(645)
				edge = (targetY - this->deadzone->y);
				HX_STACK_LINE(646)
				if (((this->_scrollTarget->y > edge))){
					HX_STACK_LINE(648)
					this->_scrollTarget->set_y(edge);
				}
				HX_STACK_LINE(650)
				Float _g4 = this->target->get_height();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(650)
				Float _g5 = (targetY + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(650)
				Float _g6 = (_g5 - this->deadzone->y);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(650)
				Float _g7 = (_g6 - this->deadzone->height);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(650)
				edge = _g7;
				HX_STACK_LINE(651)
				if (((this->_scrollTarget->y < edge))){
					HX_STACK_LINE(653)
					this->_scrollTarget->set_y(edge);
				}
			}
			HX_STACK_LINE(657)
			if ((::Std_obj::is(this->target,hx::ClassOf< ::flixel::FlxSprite >()))){
				HX_STACK_LINE(659)
				if (((this->_lastTargetPosition == null()))){
					HX_STACK_LINE(661)
					::flixel::math::FlxPoint _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(661)
					{
						HX_STACK_LINE(661)
						::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(this->target->x,this->target->y);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(661)
						point->_inPool = false;
						HX_STACK_LINE(661)
						_g8 = point;
					}
					HX_STACK_LINE(661)
					this->_lastTargetPosition = _g8;
				}
				HX_STACK_LINE(663)
				{
					HX_STACK_LINE(663)
					::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(663)
					_g->set_x((_g->x + (((this->target->x - this->_lastTargetPosition->x)) * this->followLead->x)));
				}
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(664)
					_g->set_y((_g->y + (((this->target->y - this->_lastTargetPosition->y)) * this->followLead->y)));
				}
				HX_STACK_LINE(666)
				this->_lastTargetPosition->set_x(this->target->x);
				HX_STACK_LINE(667)
				this->_lastTargetPosition->set_y(this->target->y);
			}
			HX_STACK_LINE(670)
			int _g9 = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(670)
			Float _g10 = (Float((int)60) / Float(_g9));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(670)
			if (((this->followLerp >= _g10))){
				HX_STACK_LINE(672)
				::flixel::math::FlxPoint _this = this->scroll;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(672)
				::flixel::math::FlxPoint point = this->_scrollTarget;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(672)
				_this->set_x(point->x);
				HX_STACK_LINE(672)
				_this->set_y(point->y);
				HX_STACK_LINE(672)
				_this;
			}
			else{
				HX_STACK_LINE(676)
				{
					HX_STACK_LINE(676)
					::flixel::math::FlxPoint _g = this->scroll;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(676)
					int _g11 = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(676)
					Float _g12 = ((((this->_scrollTarget->x - this->scroll->x)) * this->followLerp) * _g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(676)
					Float _g13 = (Float(_g12) / Float((int)60));		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(676)
					Float _g14 = (_g->x + _g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(676)
					_g->set_x(_g14);
				}
				HX_STACK_LINE(677)
				{
					HX_STACK_LINE(677)
					::flixel::math::FlxPoint _g = this->scroll;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(677)
					int _g15 = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(677)
					Float _g16 = ((((this->_scrollTarget->y - this->scroll->y)) * this->followLerp) * _g15);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(677)
					Float _g17 = (Float(_g16) / Float((int)60));		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(677)
					Float _g18 = (_g->y + _g17);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(677)
					_g->set_y(_g18);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFollow,(void))

Void FlxCamera_obj::updateFlash( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlash",0x43f2dcfe,"flixel.FlxCamera.updateFlash","flixel/FlxCamera.hx",685,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(685)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(687)
			hx::SubEq(this->_fxFlashAlpha,(Float(elapsed) / Float(this->_fxFlashDuration)));
			HX_STACK_LINE(688)
			if (((bool((this->_fxFlashAlpha <= (int)0)) && bool((this->_fxFlashComplete_dyn() != null()))))){
				HX_STACK_LINE(690)
				this->_fxFlashComplete();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateFlash,(void))

Void FlxCamera_obj::updateFade( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFade",0xaec3f1ee,"flixel.FlxCamera.updateFade","flixel/FlxCamera.hx",697,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(697)
		if (((bool((this->_fxFadeAlpha > 0.0)) && bool((this->_fxFadeAlpha < 1.0))))){
			HX_STACK_LINE(699)
			if ((this->_fxFadeIn)){
				HX_STACK_LINE(701)
				hx::SubEq(this->_fxFadeAlpha,(Float(elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(702)
				if (((this->_fxFadeAlpha <= 0.0))){
					HX_STACK_LINE(704)
					this->_fxFadeAlpha = 0.0;
					HX_STACK_LINE(705)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(707)
						this->_fxFadeComplete();
					}
				}
			}
			else{
				HX_STACK_LINE(713)
				hx::AddEq(this->_fxFadeAlpha,(Float(elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(714)
				if (((this->_fxFadeAlpha >= 1.0))){
					HX_STACK_LINE(716)
					this->_fxFadeAlpha = 1.0;
					HX_STACK_LINE(717)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(719)
						this->_fxFadeComplete();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateFade,(void))

Void FlxCamera_obj::updateShake( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateShake",0xbd838614,"flixel.FlxCamera.updateShake","flixel/FlxCamera.hx",728,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(728)
		if (((this->_fxShakeDuration > (int)0))){
			HX_STACK_LINE(730)
			hx::SubEq(this->_fxShakeDuration,elapsed);
			HX_STACK_LINE(731)
			if (((this->_fxShakeDuration <= (int)0))){
				HX_STACK_LINE(733)
				this->_fxShakeOffset->set(null(),null());
				HX_STACK_LINE(734)
				if (((this->_fxShakeComplete_dyn() != null()))){
					HX_STACK_LINE(736)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(741)
				if (((bool((this->_fxShakeDirection == ::flixel::FlxCameraShakeDirection_obj::BOTH_AXES)) || bool((this->_fxShakeDirection == ::flixel::FlxCameraShakeDirection_obj::X_AXIS))))){
					HX_STACK_LINE(743)
					Float _g = ::flixel::FlxG_obj::random->_float((-(this->_fxShakeIntensity) * this->width),(this->_fxShakeIntensity * this->width),null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(743)
					Float _g1 = (_g * this->zoom);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(743)
					this->_fxShakeOffset->set_x(_g1);
				}
				HX_STACK_LINE(745)
				if (((bool((this->_fxShakeDirection == ::flixel::FlxCameraShakeDirection_obj::BOTH_AXES)) || bool((this->_fxShakeDirection == ::flixel::FlxCameraShakeDirection_obj::Y_AXIS))))){
					HX_STACK_LINE(747)
					Float _g2 = ::flixel::FlxG_obj::random->_float((-(this->_fxShakeIntensity) * this->height),(this->_fxShakeIntensity * this->height),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(747)
					Float _g3 = (_g2 * this->zoom);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(747)
					this->_fxShakeOffset->set_y(_g3);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateShake,(void))

Void FlxCamera_obj::updateFlashSpritePosition( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlashSpritePosition",0x5aef376c,"flixel.FlxCamera.updateFlashSpritePosition","flixel/FlxCamera.hx",755,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(755)
		if (((this->flashSprite != null()))){
			HX_STACK_LINE(757)
			this->flashSprite->set_x(((this->x * ::flixel::FlxG_obj::scaleMode->scale->x) + this->_flashOffset->x));
			HX_STACK_LINE(758)
			this->flashSprite->set_y(((this->y * ::flixel::FlxG_obj::scaleMode->scale->y) + this->_flashOffset->y));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlashSpritePosition,(void))

Void FlxCamera_obj::updateFlashOffset( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlashOffset",0x0e9fbb31,"flixel.FlxCamera.updateFlashOffset","flixel/FlxCamera.hx",763,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(764)
		this->_flashOffset->set_x((((this->width * 0.5) * ::flixel::FlxG_obj::scaleMode->scale->x) * this->initialZoom));
		HX_STACK_LINE(765)
		this->_flashOffset->set_y((((this->height * 0.5) * ::flixel::FlxG_obj::scaleMode->scale->y) * this->initialZoom));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlashOffset,(void))

Void FlxCamera_obj::updateScrollRect( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateScrollRect",0xbf58f9c3,"flixel.FlxCamera.updateScrollRect","flixel/FlxCamera.hx",769,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(770)
		::openfl::_v2::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(770)
		if (((this->_scrollRect != null()))){
			HX_STACK_LINE(770)
			rect = this->_scrollRect->get_scrollRect();
		}
		else{
			HX_STACK_LINE(770)
			rect = null();
		}
		HX_STACK_LINE(772)
		if (((rect != null()))){
			HX_STACK_LINE(774)
			Float _g = rect->y = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(774)
			rect->x = _g;
			HX_STACK_LINE(775)
			rect->width = ((this->width * this->initialZoom) * ::flixel::FlxG_obj::scaleMode->scale->x);
			HX_STACK_LINE(776)
			rect->height = ((this->height * this->initialZoom) * ::flixel::FlxG_obj::scaleMode->scale->y);
			HX_STACK_LINE(777)
			this->_scrollRect->set_scrollRect(rect);
			HX_STACK_LINE(778)
			this->_scrollRect->set_x((-0.5 * rect->width));
			HX_STACK_LINE(779)
			this->_scrollRect->set_y((-0.5 * rect->height));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateScrollRect,(void))

Void FlxCamera_obj::updateInternalSpritePositions( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateInternalSpritePositions",0x7d5baef6,"flixel.FlxCamera.updateInternalSpritePositions","flixel/FlxCamera.hx",794,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(794)
		if (((this->canvas != null()))){
			HX_STACK_LINE(796)
			this->canvas->set_x((((-0.5 * this->width) * ((this->scaleX - this->initialZoom))) * ::flixel::FlxG_obj::scaleMode->scale->x));
			HX_STACK_LINE(797)
			this->canvas->set_y((((-0.5 * this->height) * ((this->scaleY - this->initialZoom))) * ::flixel::FlxG_obj::scaleMode->scale->y));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateInternalSpritePositions,(void))

Void FlxCamera_obj::follow( ::flixel::FlxObject Target,::flixel::FlxCameraFollowStyle Style,::flixel::math::FlxPoint Offset,hx::Null< Float >  __o_Lerp){
Float Lerp = __o_Lerp.Default(1);
	HX_STACK_FRAME("flixel.FlxCamera","follow",0x137f0aba,"flixel.FlxCamera.follow","flixel/FlxCamera.hx",820,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Offset,"Offset")
	HX_STACK_ARG(Lerp,"Lerp")
{
		HX_STACK_LINE(821)
		if (((Style == null()))){
			HX_STACK_LINE(823)
			Style = ::flixel::FlxCameraFollowStyle_obj::LOCKON;
		}
		HX_STACK_LINE(826)
		this->style = Style;
		HX_STACK_LINE(827)
		this->target = Target;
		HX_STACK_LINE(828)
		this->set_followLerp(Lerp);
		HX_STACK_LINE(829)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(830)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(831)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(832)
		this->_lastTargetPosition = null();
		HX_STACK_LINE(834)
		switch( (int)(Style->__Index())){
			case (int)1: {
				HX_STACK_LINE(837)
				Float w1;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(837)
				w1 = ((Float(this->width) / Float((int)8)) + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));
				HX_STACK_LINE(838)
				Float h1;		HX_STACK_VAR(h1,"h1");
				HX_STACK_LINE(838)
				h1 = ((Float(this->height) / Float((int)3)) + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));
				HX_STACK_LINE(839)
				::flixel::math::FlxRect _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(839)
				{
					HX_STACK_LINE(839)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(839)
					{
						HX_STACK_LINE(839)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(839)
						_this->x = (Float(((this->width - w1))) / Float((int)2));
						HX_STACK_LINE(839)
						_this->y = ((Float(((this->height - h1))) / Float((int)2)) - (h1 * 0.25));
						HX_STACK_LINE(839)
						_this->width = w1;
						HX_STACK_LINE(839)
						_this->height = h1;
						HX_STACK_LINE(839)
						rect = _this;
					}
					HX_STACK_LINE(839)
					rect->_inPool = false;
					HX_STACK_LINE(839)
					_g = rect;
				}
				HX_STACK_LINE(839)
				this->deadzone = _g;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(842)
				Float _g1 = ::Math_obj::max(this->width,this->height);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(842)
				Float _g2 = (Float(_g1) / Float((int)4));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(842)
				helper = _g2;
				HX_STACK_LINE(843)
				::flixel::math::FlxRect _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(843)
				{
					HX_STACK_LINE(843)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(843)
					{
						HX_STACK_LINE(843)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(843)
						_this->x = (Float(((this->width - helper))) / Float((int)2));
						HX_STACK_LINE(843)
						_this->y = (Float(((this->height - helper))) / Float((int)2));
						HX_STACK_LINE(843)
						_this->width = helper;
						HX_STACK_LINE(843)
						_this->height = helper;
						HX_STACK_LINE(843)
						rect = _this;
					}
					HX_STACK_LINE(843)
					rect->_inPool = false;
					HX_STACK_LINE(843)
					_g3 = rect;
				}
				HX_STACK_LINE(843)
				this->deadzone = _g3;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(846)
				Float _g4 = ::Math_obj::max(this->width,this->height);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(846)
				Float _g5 = (Float(_g4) / Float((int)8));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(846)
				helper = _g5;
				HX_STACK_LINE(847)
				::flixel::math::FlxRect _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(847)
				{
					HX_STACK_LINE(847)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(847)
					{
						HX_STACK_LINE(847)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(847)
						_this->x = (Float(((this->width - helper))) / Float((int)2));
						HX_STACK_LINE(847)
						_this->y = (Float(((this->height - helper))) / Float((int)2));
						HX_STACK_LINE(847)
						_this->width = helper;
						HX_STACK_LINE(847)
						_this->height = helper;
						HX_STACK_LINE(847)
						rect = _this;
					}
					HX_STACK_LINE(847)
					rect->_inPool = false;
					HX_STACK_LINE(847)
					_g6 = rect;
				}
				HX_STACK_LINE(847)
				this->deadzone = _g6;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(850)
				if (((this->target != null()))){
					HX_STACK_LINE(852)
					Float _g7 = this->target->get_width();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(852)
					Float _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(852)
					_g8 = (_g7 + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));
					HX_STACK_LINE(852)
					w = _g8;
					HX_STACK_LINE(853)
					Float _g9 = this->target->get_height();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(853)
					Float _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(853)
					_g10 = (_g9 + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));
					HX_STACK_LINE(853)
					h = _g10;
				}
				HX_STACK_LINE(855)
				::flixel::math::FlxRect _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(855)
				{
					HX_STACK_LINE(855)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(855)
					{
						HX_STACK_LINE(855)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(855)
						_this->x = (Float(((this->width - w))) / Float((int)2));
						HX_STACK_LINE(855)
						_this->y = ((Float(((this->height - h))) / Float((int)2)) - (h * 0.25));
						HX_STACK_LINE(855)
						_this->width = w;
						HX_STACK_LINE(855)
						_this->height = h;
						HX_STACK_LINE(855)
						rect = _this;
					}
					HX_STACK_LINE(855)
					rect->_inPool = false;
					HX_STACK_LINE(855)
					_g11 = rect;
				}
				HX_STACK_LINE(855)
				this->deadzone = _g11;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(858)
				::flixel::math::FlxRect _g12;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(858)
				{
					HX_STACK_LINE(858)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(858)
					{
						HX_STACK_LINE(858)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(858)
						_this->x = (int)0;
						HX_STACK_LINE(858)
						_this->y = (int)0;
						HX_STACK_LINE(858)
						_this->width = this->width;
						HX_STACK_LINE(858)
						_this->height = this->height;
						HX_STACK_LINE(858)
						rect = _this;
					}
					HX_STACK_LINE(858)
					rect->_inPool = false;
					HX_STACK_LINE(858)
					_g12 = rect;
				}
				HX_STACK_LINE(858)
				this->deadzone = _g12;
			}
			;break;
			default: {
				HX_STACK_LINE(861)
				this->deadzone = null();
			}
		}
		HX_STACK_LINE(864)
		if (((Offset != null()))){
			HX_STACK_LINE(866)
			if ((Offset->_weak)){
				HX_STACK_LINE(866)
				Offset->put();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::focusOn( ::flixel::math::FlxPoint point){
{
		HX_STACK_FRAME("flixel.FlxCamera","focusOn",0xd304f1ae,"flixel.FlxCamera.focusOn","flixel/FlxCamera.hx",876,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(877)
		this->scroll->set((point->x - (this->width * 0.5)),(point->y - (this->height * 0.5)));
		HX_STACK_LINE(878)
		if ((point->_weak)){
			HX_STACK_LINE(878)
			point->put();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","flash",0x27663887,"flixel.FlxCamera.flash","flixel/FlxCamera.hx",890,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(891)
		if (((bool(!(Force)) && bool((this->_fxFlashAlpha > 0.0))))){
			HX_STACK_LINE(893)
			return null();
		}
		HX_STACK_LINE(895)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(896)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(898)
			Duration = 5e-324;
		}
		HX_STACK_LINE(900)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(901)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(902)
		this->_fxFlashAlpha = 1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","fade",0xa5741a85,"flixel.FlxCamera.fade","flixel/FlxCamera.hx",915,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeIn,"FadeIn")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(916)
		if (((bool(!(Force)) && bool((this->_fxFadeAlpha > 0.0))))){
			HX_STACK_LINE(918)
			return null();
		}
		HX_STACK_LINE(920)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(921)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(923)
			Duration = 5e-324;
		}
		HX_STACK_LINE(926)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(927)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(928)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(930)
		if ((this->_fxFadeIn)){
			HX_STACK_LINE(932)
			this->_fxFadeAlpha = 0.999999;
		}
		else{
			HX_STACK_LINE(936)
			this->_fxFadeAlpha = 5e-324;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,::flixel::FlxCameraShakeDirection Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
	HX_STACK_FRAME("flixel.FlxCamera","shake",0xa0f6e19d,"flixel.FlxCamera.shake","flixel/FlxCamera.hx",950,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Intensity,"Intensity")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Direction,"Direction")
{
		HX_STACK_LINE(951)
		if (((Direction == null()))){
			HX_STACK_LINE(953)
			Direction = ::flixel::FlxCameraShakeDirection_obj::BOTH_AXES;
		}
		HX_STACK_LINE(956)
		if (((bool(!(Force)) && bool(((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0)))))))){
			HX_STACK_LINE(958)
			return null();
		}
		HX_STACK_LINE(960)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(961)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(962)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(963)
		this->_fxShakeDirection = Direction;
		HX_STACK_LINE(964)
		this->_fxShakeOffset->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","stopFX",0x29222b1d,"flixel.FlxCamera.stopFX","flixel/FlxCamera.hx",971,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(972)
		this->_fxFlashAlpha = 0.0;
		HX_STACK_LINE(973)
		this->_fxFadeAlpha = 0.0;
		HX_STACK_LINE(974)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(975)
		this->updateFlashSpritePosition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

::flixel::FlxCamera FlxCamera_obj::copyFrom( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxCamera","copyFrom",0x88512948,"flixel.FlxCamera.copyFrom","flixel/FlxCamera.hx",985,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(986)
	this->setScrollBounds(Camera->minScrollX,Camera->maxScrollX,Camera->minScrollY,Camera->maxScrollY);
	HX_STACK_LINE(988)
	this->target = Camera->target;
	HX_STACK_LINE(990)
	if (((this->target != null()))){
		HX_STACK_LINE(992)
		if (((Camera->deadzone == null()))){
			HX_STACK_LINE(994)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(998)
			if (((this->deadzone == null()))){
				HX_STACK_LINE(1000)
				::flixel::math::FlxRect _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1000)
				{
					HX_STACK_LINE(1000)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1000)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1000)
					Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(1000)
					Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(1000)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(1000)
					{
						HX_STACK_LINE(1000)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1000)
						_this->x = X;
						HX_STACK_LINE(1000)
						_this->y = Y;
						HX_STACK_LINE(1000)
						_this->width = Width;
						HX_STACK_LINE(1000)
						_this->height = Height;
						HX_STACK_LINE(1000)
						rect = _this;
					}
					HX_STACK_LINE(1000)
					rect->_inPool = false;
					HX_STACK_LINE(1000)
					_g = rect;
				}
				HX_STACK_LINE(1000)
				this->deadzone = _g;
			}
			HX_STACK_LINE(1002)
			{
				HX_STACK_LINE(1002)
				::flixel::math::FlxRect _this = this->deadzone;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1002)
				::flixel::math::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(1002)
				_this->x = Rect->x;
				HX_STACK_LINE(1002)
				_this->y = Rect->y;
				HX_STACK_LINE(1002)
				_this->width = Rect->width;
				HX_STACK_LINE(1002)
				_this->height = Rect->height;
				HX_STACK_LINE(1002)
				_this;
			}
		}
	}
	HX_STACK_LINE(1005)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::openfl::_v2::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(1.0);
	HX_STACK_FRAME("flixel.FlxCamera","fill",0xa57a338c,"flixel.FlxCamera.fill","flixel/FlxCamera.hx",1015,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(BlendAlpha,"BlendAlpha")
	HX_STACK_ARG(FxAlpha,"FxAlpha")
	HX_STACK_ARG(graphics,"graphics")
{
		HX_STACK_LINE(1028)
		if (((FxAlpha == (int)0))){
			HX_STACK_LINE(1030)
			return null();
		}
		HX_STACK_LINE(1033)
		::openfl::_v2::display::Graphics targetGraphics;		HX_STACK_VAR(targetGraphics,"targetGraphics");
		HX_STACK_LINE(1033)
		if (((graphics == null()))){
			HX_STACK_LINE(1033)
			targetGraphics = this->canvas->get_graphics();
		}
		else{
			HX_STACK_LINE(1033)
			targetGraphics = graphics;
		}
		HX_STACK_LINE(1034)
		Color = (int(Color) & int((int)16777215));
		HX_STACK_LINE(1037)
		targetGraphics->beginFill(Color,FxAlpha);
		HX_STACK_LINE(1040)
		targetGraphics->drawRect((int)-1,(int)-1,((this->width * this->totalScaleX) + (int)2),((this->height * this->totalScaleY) + (int)2));
		HX_STACK_LINE(1041)
		targetGraphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","drawFX",0xf9beeb9f,"flixel.FlxCamera.drawFX","flixel/FlxCamera.hx",1050,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1051)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(1054)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(1056)
			alphaComponent = (int((int(this->_fxFlashColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1061)
			::openfl::_v2::display::Graphics _g = this->canvas->get_graphics();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1061)
			this->fill((int(this->_fxFlashColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFlashAlpha)) / Float((int)255)),_g);
		}
		HX_STACK_LINE(1066)
		if (((this->_fxFadeAlpha > 0.0))){
			HX_STACK_LINE(1068)
			alphaComponent = (int((int(this->_fxFadeColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1073)
			::openfl::_v2::display::Graphics _g1 = this->canvas->get_graphics();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1073)
			this->fill((int(this->_fxFadeColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFadeAlpha)) / Float((int)255)),_g1);
		}
		HX_STACK_LINE(1077)
		if (((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0))))){
			HX_STACK_LINE(1079)
			{
				HX_STACK_LINE(1079)
				::openfl::_v2::display::Sprite _g = this->flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1079)
				Float _g2 = _g->get_x();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1079)
				Float _g3 = (_g2 + (this->_fxShakeOffset->x * ::flixel::FlxG_obj::scaleMode->scale->x));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1079)
				_g->set_x(_g3);
			}
			HX_STACK_LINE(1080)
			{
				HX_STACK_LINE(1080)
				::openfl::_v2::display::Sprite _g = this->flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1080)
				Float _g4 = _g->get_y();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1080)
				Float _g5 = (_g4 + (this->_fxShakeOffset->y * ::flixel::FlxG_obj::scaleMode->scale->y));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1080)
				_g->set_y(_g5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::setSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxCamera","setSize",0xa359881a,"flixel.FlxCamera.setSize","flixel/FlxCamera.hx",1115,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(1116)
		this->set_width(Width);
		HX_STACK_LINE(1117)
		this->set_height(Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setSize,(void))

Void FlxCamera_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","setPosition",0x5729a882,"flixel.FlxCamera.setPosition","flixel/FlxCamera.hx",1128,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(1129)
		this->set_x(X);
		HX_STACK_LINE(1130)
		this->set_y(Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setPosition,(void))

Void FlxCamera_obj::setScrollBoundsRect( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","setScrollBoundsRect",0xd34a357f,"flixel.FlxCamera.setScrollBoundsRect","flixel/FlxCamera.hx",1143,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(1144)
		if ((UpdateWorld)){
			HX_STACK_LINE(1146)
			::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1146)
			_this->x = X;
			HX_STACK_LINE(1146)
			_this->y = Y;
			HX_STACK_LINE(1146)
			_this->width = Width;
			HX_STACK_LINE(1146)
			_this->height = Height;
			HX_STACK_LINE(1146)
			_this;
		}
		HX_STACK_LINE(1149)
		this->setScrollBounds(X,(X + Width),Y,(Y + Height));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setScrollBoundsRect,(void))

Void FlxCamera_obj::setScrollBounds( Dynamic MinX,Dynamic MaxX,Dynamic MinY,Dynamic MaxY){
{
		HX_STACK_FRAME("flixel.FlxCamera","setScrollBounds",0x4d9242bb,"flixel.FlxCamera.setScrollBounds","flixel/FlxCamera.hx",1162,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(MinX,"MinX")
		HX_STACK_ARG(MaxX,"MaxX")
		HX_STACK_ARG(MinY,"MinY")
		HX_STACK_ARG(MaxY,"MaxY")
		HX_STACK_LINE(1163)
		this->minScrollX = MinX;
		HX_STACK_LINE(1164)
		this->maxScrollX = MaxX;
		HX_STACK_LINE(1165)
		this->minScrollY = MinY;
		HX_STACK_LINE(1166)
		this->maxScrollY = MaxY;
		HX_STACK_LINE(1167)
		this->updateScroll();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,setScrollBounds,(void))

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxCamera","setScale",0x46f35511,"flixel.FlxCamera.setScale","flixel/FlxCamera.hx",1171,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(1172)
		this->scaleX = X;
		HX_STACK_LINE(1173)
		this->scaleY = Y;
		HX_STACK_LINE(1175)
		this->totalScaleX = (this->scaleX * ::flixel::FlxG_obj::scaleMode->scale->x);
		HX_STACK_LINE(1176)
		this->totalScaleY = (this->scaleY * ::flixel::FlxG_obj::scaleMode->scale->y);
		HX_STACK_LINE(1183)
		this->updateFlashSpritePosition();
		HX_STACK_LINE(1184)
		this->updateScrollRect();
		HX_STACK_LINE(1185)
		this->updateInternalSpritePositions();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

Void FlxCamera_obj::onResize( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","onResize",0xa8186dfc,"flixel.FlxCamera.onResize","flixel/FlxCamera.hx",1189,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1190)
		this->updateFlashOffset();
		HX_STACK_LINE(1191)
		this->setScale(this->scaleX,this->scaleY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,onResize,(void))

Float FlxCamera_obj::set_followLerp( Float Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_followLerp",0xf2f9b78e,"flixel.FlxCamera.set_followLerp","flixel/FlxCamera.hx",1195,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1196)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1196)
	{
		HX_STACK_LINE(1196)
		int _g = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1196)
		Dynamic Max = (Float((int)60) / Float(_g));		HX_STACK_VAR(Max,"Max");
		HX_STACK_LINE(1196)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1196)
		if (((Value < (int)0))){
			HX_STACK_LINE(1196)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(1196)
			lowerBound = Value;
		}
		HX_STACK_LINE(1196)
		if (((bool((Max != null())) && bool((lowerBound > Max))))){
			HX_STACK_LINE(1196)
			_g1 = Max;
		}
		else{
			HX_STACK_LINE(1196)
			_g1 = lowerBound;
		}
	}
	HX_STACK_LINE(1196)
	return this->followLerp = _g1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_followLerp,return )

int FlxCamera_obj::set_width( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_width",0x2386b8c0,"flixel.FlxCamera.set_width","flixel/FlxCamera.hx",1200,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1201)
	if (((Value > (int)0))){
		HX_STACK_LINE(1203)
		this->width = Value;
		HX_STACK_LINE(1205)
		this->updateFlashOffset();
		HX_STACK_LINE(1206)
		this->updateScrollRect();
		HX_STACK_LINE(1207)
		this->updateInternalSpritePositions();
	}
	HX_STACK_LINE(1209)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_width,return )

int FlxCamera_obj::set_height( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_height",0xa8aa67ed,"flixel.FlxCamera.set_height","flixel/FlxCamera.hx",1213,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1214)
	if (((Value > (int)0))){
		HX_STACK_LINE(1216)
		this->height = Value;
		HX_STACK_LINE(1218)
		this->updateFlashOffset();
		HX_STACK_LINE(1219)
		this->updateScrollRect();
		HX_STACK_LINE(1220)
		this->updateInternalSpritePositions();
	}
	HX_STACK_LINE(1222)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_height,return )

Float FlxCamera_obj::set_zoom( Float Zoom){
	HX_STACK_FRAME("flixel.FlxCamera","set_zoom",0x3f00d599,"flixel.FlxCamera.set_zoom","flixel/FlxCamera.hx",1226,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Zoom,"Zoom")
	HX_STACK_LINE(1227)
	if (((Zoom == (int)0))){
		HX_STACK_LINE(1227)
		this->zoom = ::flixel::FlxCamera_obj::defaultZoom;
	}
	else{
		HX_STACK_LINE(1227)
		this->zoom = Zoom;
	}
	HX_STACK_LINE(1228)
	this->setScale(this->zoom,this->zoom);
	HX_STACK_LINE(1229)
	return this->zoom;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_zoom,return )

Float FlxCamera_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxCamera","set_alpha",0x7abaaa18,"flixel.FlxCamera.set_alpha","flixel/FlxCamera.hx",1233,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1234)
	{
		HX_STACK_LINE(1234)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1234)
		if (((Alpha < (int)0))){
			HX_STACK_LINE(1234)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(1234)
			lowerBound = Alpha;
		}
		HX_STACK_LINE(1234)
		if (((lowerBound > (int)1))){
			HX_STACK_LINE(1234)
			this->alpha = (int)1;
		}
		else{
			HX_STACK_LINE(1234)
			this->alpha = lowerBound;
		}
	}
	HX_STACK_LINE(1238)
	this->canvas->set_alpha(Alpha);
	HX_STACK_LINE(1240)
	return Alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_alpha,return )

Float FlxCamera_obj::set_angle( Float Angle){
	HX_STACK_FRAME("flixel.FlxCamera","set_angle",0x7c06468d,"flixel.FlxCamera.set_angle","flixel/FlxCamera.hx",1244,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(1245)
	this->angle = Angle;
	HX_STACK_LINE(1246)
	this->flashSprite->set_rotation(Angle);
	HX_STACK_LINE(1247)
	return Angle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_angle,return )

int FlxCamera_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxCamera","set_color",0xa380741d,"flixel.FlxCamera.set_color","flixel/FlxCamera.hx",1251,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1252)
	this->color = Color;
	HX_STACK_LINE(1253)
	::openfl::_v2::geom::ColorTransform colorTransform;		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(1262)
	::openfl::_v2::geom::ColorTransform _g = this->canvas->get_transform()->get_colorTransform();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1262)
	colorTransform = _g;
	HX_STACK_LINE(1265)
	colorTransform->redMultiplier = (Float(((int((int(this->color) >> int((int)16))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1266)
	colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1267)
	colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1272)
	this->canvas->get_transform()->set_colorTransform(colorTransform);
	HX_STACK_LINE(1275)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_color,return )

bool FlxCamera_obj::set_antialiasing( bool Antialiasing){
	HX_STACK_FRAME("flixel.FlxCamera","set_antialiasing",0x0f9a3f7a,"flixel.FlxCamera.set_antialiasing","flixel/FlxCamera.hx",1279,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Antialiasing,"Antialiasing")
	HX_STACK_LINE(1280)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(1284)
	return Antialiasing;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_antialiasing,return )

Float FlxCamera_obj::set_x( Float x){
	HX_STACK_FRAME("flixel.FlxCamera","set_x",0x9f099e32,"flixel.FlxCamera.set_x","flixel/FlxCamera.hx",1288,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(1289)
	this->x = x;
	HX_STACK_LINE(1290)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(1291)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_x,return )

Float FlxCamera_obj::set_y( Float y){
	HX_STACK_FRAME("flixel.FlxCamera","set_y",0x9f099e33,"flixel.FlxCamera.set_y","flixel/FlxCamera.hx",1295,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1296)
	this->y = y;
	HX_STACK_LINE(1297)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(1298)
	return y;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_y,return )

bool FlxCamera_obj::set_visible( bool visible){
	HX_STACK_FRAME("flixel.FlxCamera","set_visible",0x8f5a1dac,"flixel.FlxCamera.set_visible","flixel/FlxCamera.hx",1302,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(visible,"visible")
	HX_STACK_LINE(1303)
	if (((this->flashSprite != null()))){
		HX_STACK_LINE(1305)
		this->flashSprite->set_visible(visible);
	}
	HX_STACK_LINE(1307)
	return this->visible = visible;
}


Float FlxCamera_obj::defaultZoom;

Array< ::Dynamic > FlxCamera_obj::defaultCameras;

::flixel::graphics::tile::FlxDrawStackItem FlxCamera_obj::_storageHead;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(totalScaleX,"totalScaleX");
	HX_MARK_MEMBER_NAME(totalScaleY,"totalScaleY");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(targetOffset,"targetOffset");
	HX_MARK_MEMBER_NAME(followLerp,"followLerp");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(minScrollX,"minScrollX");
	HX_MARK_MEMBER_NAME(maxScrollX,"maxScrollX");
	HX_MARK_MEMBER_NAME(minScrollY,"minScrollY");
	HX_MARK_MEMBER_NAME(maxScrollY,"maxScrollY");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_MARK_MEMBER_NAME(flashSprite,"flashSprite");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(followLead,"followLead");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_MARK_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(initialZoom,"initialZoom");
	HX_MARK_MEMBER_NAME(_scrollRect,"_scrollRect");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(totalScaleX,"totalScaleX");
	HX_VISIT_MEMBER_NAME(totalScaleY,"totalScaleY");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(targetOffset,"targetOffset");
	HX_VISIT_MEMBER_NAME(followLerp,"followLerp");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(minScrollX,"minScrollX");
	HX_VISIT_MEMBER_NAME(maxScrollX,"maxScrollX");
	HX_VISIT_MEMBER_NAME(minScrollY,"minScrollY");
	HX_VISIT_MEMBER_NAME(maxScrollY,"maxScrollY");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_VISIT_MEMBER_NAME(flashSprite,"flashSprite");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(followLead,"followLead");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_VISIT_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(initialZoom,"initialZoom");
	HX_VISIT_MEMBER_NAME(_scrollRect,"_scrollRect");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { return followLerp; }
		if (HX_FIELD_EQ(inName,"minScrollX") ) { return minScrollX; }
		if (HX_FIELD_EQ(inName,"maxScrollX") ) { return maxScrollX; }
		if (HX_FIELD_EQ(inName,"minScrollY") ) { return minScrollY; }
		if (HX_FIELD_EQ(inName,"maxScrollY") ) { return maxScrollY; }
		if (HX_FIELD_EQ(inName,"followLead") ) { return followLead; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"updateFade") ) { return updateFade_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { return defaultZoom; }
		if (HX_FIELD_EQ(inName,"totalScaleX") ) { return totalScaleX; }
		if (HX_FIELD_EQ(inName,"totalScaleY") ) { return totalScaleY; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { return flashSprite; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { return initialZoom; }
		if (HX_FIELD_EQ(inName,"_scrollRect") ) { return _scrollRect; }
		if (HX_FIELD_EQ(inName,"updateFlash") ) { return updateFlash_dyn(); }
		if (HX_FIELD_EQ(inName,"updateShake") ) { return updateShake_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { return _storageHead; }
		if (HX_FIELD_EQ(inName,"targetOffset") ) { return targetOffset; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { return _flashOffset; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"updateScroll") ) { return updateScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFollow") ) { return updateFollow_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { return _scrollTarget; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { return defaultCameras; }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return clearDrawStack_dyn(); }
		if (HX_FIELD_EQ(inName,"set_followLerp") ) { return set_followLerp_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		if (HX_FIELD_EQ(inName,"setScrollBounds") ) { return setScrollBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return _headOfDrawStack; }
		if (HX_FIELD_EQ(inName,"getDrawStackItem") ) { return getDrawStackItem_dyn(); }
		if (HX_FIELD_EQ(inName,"updateScrollRect") ) { return updateScrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { return _fxShakeDirection; }
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { return _currentStackItem; }
		if (HX_FIELD_EQ(inName,"updateFlashOffset") ) { return updateFlashOffset_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { return useBgAlphaBlending; }
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { return _lastTargetPosition; }
		if (HX_FIELD_EQ(inName,"setScrollBoundsRect") ) { return setScrollBoundsRect_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"updateFlashSpritePosition") ) { return updateFlashSpritePosition_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"updateInternalSpritePositions") ) { return updateInternalSpritePositions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< ::flixel::FlxCameraFollowStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { if (inCallProp) return set_followLerp(inValue);followLerp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minScrollX") ) { minScrollX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollX") ) { maxScrollX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minScrollY") ) { minScrollY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollY") ) { maxScrollY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLead") ) { followLead=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalScaleX") ) { totalScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalScaleY") ) { totalScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { flashSprite=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { initialZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollRect") ) { _scrollRect=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { _storageHead=inValue.Cast< ::flixel::graphics::tile::FlxDrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetOffset") ) { targetOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { _flashOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { _scrollTarget=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { defaultCameras=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast< ::flixel::graphics::tile::FlxDrawStackItem >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { _fxShakeDirection=inValue.Cast< ::flixel::FlxCameraShakeDirection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { _currentStackItem=inValue.Cast< ::flixel::graphics::tile::FlxDrawStackItem >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { useBgAlphaBlending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { _lastTargetPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("totalScaleX"));
	outFields->push(HX_CSTRING("totalScaleY"));
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("targetOffset"));
	outFields->push(HX_CSTRING("followLerp"));
	outFields->push(HX_CSTRING("deadzone"));
	outFields->push(HX_CSTRING("minScrollX"));
	outFields->push(HX_CSTRING("maxScrollX"));
	outFields->push(HX_CSTRING("minScrollY"));
	outFields->push(HX_CSTRING("maxScrollY"));
	outFields->push(HX_CSTRING("scroll"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("useBgAlphaBlending"));
	outFields->push(HX_CSTRING("flashSprite"));
	outFields->push(HX_CSTRING("pixelPerfectRender"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("followLead"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashOffset"));
	outFields->push(HX_CSTRING("_fxFlashColor"));
	outFields->push(HX_CSTRING("_fxFlashDuration"));
	outFields->push(HX_CSTRING("_fxFlashAlpha"));
	outFields->push(HX_CSTRING("_fxFadeColor"));
	outFields->push(HX_CSTRING("_lastTargetPosition"));
	outFields->push(HX_CSTRING("_scrollTarget"));
	outFields->push(HX_CSTRING("_fxFadeDuration"));
	outFields->push(HX_CSTRING("_fxFadeIn"));
	outFields->push(HX_CSTRING("_fxFadeAlpha"));
	outFields->push(HX_CSTRING("_fxShakeIntensity"));
	outFields->push(HX_CSTRING("_fxShakeDuration"));
	outFields->push(HX_CSTRING("_fxShakeOffset"));
	outFields->push(HX_CSTRING("_fxShakeDirection"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("initialZoom"));
	outFields->push(HX_CSTRING("_scrollRect"));
	outFields->push(HX_CSTRING("canvas"));
	outFields->push(HX_CSTRING("_currentStackItem"));
	outFields->push(HX_CSTRING("_headOfDrawStack"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("defaultZoom"),
	HX_CSTRING("defaultCameras"),
	HX_CSTRING("_storageHead"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,scaleX),HX_CSTRING("scaleX")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,scaleY),HX_CSTRING("scaleY")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,totalScaleX),HX_CSTRING("totalScaleX")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,totalScaleY),HX_CSTRING("totalScaleY")},
	{hx::fsObject /*::flixel::FlxCameraFollowStyle*/ ,(int)offsetof(FlxCamera_obj,style),HX_CSTRING("style")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxCamera_obj,target),HX_CSTRING("target")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,targetOffset),HX_CSTRING("targetOffset")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,followLerp),HX_CSTRING("followLerp")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxCamera_obj,deadzone),HX_CSTRING("deadzone")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,minScrollX),HX_CSTRING("minScrollX")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,maxScrollX),HX_CSTRING("maxScrollX")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,minScrollY),HX_CSTRING("minScrollY")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,maxScrollY),HX_CSTRING("maxScrollY")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,scroll),HX_CSTRING("scroll")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,bgColor),HX_CSTRING("bgColor")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,useBgAlphaBlending),HX_CSTRING("useBgAlphaBlending")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,flashSprite),HX_CSTRING("flashSprite")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,pixelPerfectRender),HX_CSTRING("pixelPerfectRender")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,zoom),HX_CSTRING("zoom")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,angle),HX_CSTRING("angle")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,color),HX_CSTRING("color")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,antialiasing),HX_CSTRING("antialiasing")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,followLead),HX_CSTRING("followLead")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(FlxCamera_obj,_flashRect),HX_CSTRING("_flashRect")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(FlxCamera_obj,_flashPoint),HX_CSTRING("_flashPoint")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_flashOffset),HX_CSTRING("_flashOffset")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFlashColor),HX_CSTRING("_fxFlashColor")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashDuration),HX_CSTRING("_fxFlashDuration")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFlashComplete),HX_CSTRING("_fxFlashComplete")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashAlpha),HX_CSTRING("_fxFlashAlpha")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFadeColor),HX_CSTRING("_fxFadeColor")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_lastTargetPosition),HX_CSTRING("_lastTargetPosition")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_scrollTarget),HX_CSTRING("_scrollTarget")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeDuration),HX_CSTRING("_fxFadeDuration")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,_fxFadeIn),HX_CSTRING("_fxFadeIn")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFadeComplete),HX_CSTRING("_fxFadeComplete")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeAlpha),HX_CSTRING("_fxFadeAlpha")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeIntensity),HX_CSTRING("_fxShakeIntensity")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeDuration),HX_CSTRING("_fxShakeDuration")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxShakeComplete),HX_CSTRING("_fxShakeComplete")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_fxShakeOffset),HX_CSTRING("_fxShakeOffset")},
	{hx::fsObject /*::flixel::FlxCameraShakeDirection*/ ,(int)offsetof(FlxCamera_obj,_fxShakeDirection),HX_CSTRING("_fxShakeDirection")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_point),HX_CSTRING("_point")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,initialZoom),HX_CSTRING("initialZoom")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,_scrollRect),HX_CSTRING("_scrollRect")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,canvas),HX_CSTRING("canvas")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawStackItem*/ ,(int)offsetof(FlxCamera_obj,_currentStackItem),HX_CSTRING("_currentStackItem")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawStackItem*/ ,(int)offsetof(FlxCamera_obj,_headOfDrawStack),HX_CSTRING("_headOfDrawStack")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("totalScaleX"),
	HX_CSTRING("totalScaleY"),
	HX_CSTRING("style"),
	HX_CSTRING("target"),
	HX_CSTRING("targetOffset"),
	HX_CSTRING("followLerp"),
	HX_CSTRING("deadzone"),
	HX_CSTRING("minScrollX"),
	HX_CSTRING("maxScrollX"),
	HX_CSTRING("minScrollY"),
	HX_CSTRING("maxScrollY"),
	HX_CSTRING("scroll"),
	HX_CSTRING("bgColor"),
	HX_CSTRING("useBgAlphaBlending"),
	HX_CSTRING("flashSprite"),
	HX_CSTRING("pixelPerfectRender"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("zoom"),
	HX_CSTRING("alpha"),
	HX_CSTRING("angle"),
	HX_CSTRING("color"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("followLead"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashOffset"),
	HX_CSTRING("_fxFlashColor"),
	HX_CSTRING("_fxFlashDuration"),
	HX_CSTRING("_fxFlashComplete"),
	HX_CSTRING("_fxFlashAlpha"),
	HX_CSTRING("_fxFadeColor"),
	HX_CSTRING("_lastTargetPosition"),
	HX_CSTRING("_scrollTarget"),
	HX_CSTRING("_fxFadeDuration"),
	HX_CSTRING("_fxFadeIn"),
	HX_CSTRING("_fxFadeComplete"),
	HX_CSTRING("_fxFadeAlpha"),
	HX_CSTRING("_fxShakeIntensity"),
	HX_CSTRING("_fxShakeDuration"),
	HX_CSTRING("_fxShakeComplete"),
	HX_CSTRING("_fxShakeOffset"),
	HX_CSTRING("_fxShakeDirection"),
	HX_CSTRING("_point"),
	HX_CSTRING("initialZoom"),
	HX_CSTRING("_scrollRect"),
	HX_CSTRING("canvas"),
	HX_CSTRING("_currentStackItem"),
	HX_CSTRING("_headOfDrawStack"),
	HX_CSTRING("getDrawStackItem"),
	HX_CSTRING("clearDrawStack"),
	HX_CSTRING("render"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("updateScroll"),
	HX_CSTRING("updateFollow"),
	HX_CSTRING("updateFlash"),
	HX_CSTRING("updateFade"),
	HX_CSTRING("updateShake"),
	HX_CSTRING("updateFlashSpritePosition"),
	HX_CSTRING("updateFlashOffset"),
	HX_CSTRING("updateScrollRect"),
	HX_CSTRING("updateInternalSpritePositions"),
	HX_CSTRING("follow"),
	HX_CSTRING("focusOn"),
	HX_CSTRING("flash"),
	HX_CSTRING("fade"),
	HX_CSTRING("shake"),
	HX_CSTRING("stopFX"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("fill"),
	HX_CSTRING("drawFX"),
	HX_CSTRING("setSize"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("setScrollBoundsRect"),
	HX_CSTRING("setScrollBounds"),
	HX_CSTRING("setScale"),
	HX_CSTRING("onResize"),
	HX_CSTRING("set_followLerp"),
	HX_CSTRING("set_width"),
	HX_CSTRING("set_height"),
	HX_CSTRING("set_zoom"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_antialiasing"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_visible"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

#endif

Class FlxCamera_obj::__mClass;

void FlxCamera_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxCamera"), hx::TCanCast< FlxCamera_obj> ,sStaticFields,sMemberFields,
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

void FlxCamera_obj::__boot()
{
}

} // end namespace flixel
