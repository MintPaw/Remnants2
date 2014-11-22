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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui_GraphicButton
#include <flixel/ui/GraphicButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
namespace flixel{
namespace ui{

Void FlxTypedButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.ui.FlxTypedButton","new",0xc7e33f04,"flixel.ui.FlxTypedButton.new","flixel/ui/FlxButton.hx",113,0xc64cf442)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(149)
	this->maxInputMovement = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(142)
	this->mouseButtons = Array_obj< int >::__new().Add((int)-1);
	HX_STACK_LINE(137)
	this->allowSwiping = true;
	HX_STACK_LINE(132)
	this->statusAnimations = Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("highlight")).Add(HX_CSTRING("pressed"));
	HX_STACK_LINE(127)
	this->labelAlphas = Array_obj< Float >::__new().Add(0.8).Add(1.0).Add(0.5);
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxButton.hx",122,0xc64cf442)
			{
				HX_STACK_LINE(122)
				::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(122)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(122)
					point->_inPool = false;
					HX_STACK_LINE(122)
					_g = point;
				}
				HX_STACK_LINE(122)
				::flixel::math::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(122)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(122)
					point->_inPool = false;
					HX_STACK_LINE(122)
					_g1 = point;
				}
				HX_STACK_LINE(122)
				::flixel::math::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)1);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(122)
					point->_inPool = false;
					HX_STACK_LINE(122)
					_g2 = point;
				}
				HX_STACK_LINE(122)
				return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2);
			}
			return null();
		}
	};
	HX_STACK_LINE(122)
	this->labelOffsets = _Function_1_1::Block();
	HX_STACK_LINE(194)
	super::__construct(X,Y,null());
	HX_STACK_LINE(196)
	::flixel::graphics::FlxGraphic _g = ::flixel::graphics::FlxGraphic_obj::fromClass(hx::ClassOf< ::flixel::ui::GraphicButton >(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(196)
	this->loadGraphic(_g,true,(int)80,(int)20,null(),null());
	HX_STACK_LINE(198)
	::flixel::ui::_FlxButton::FlxButtonEvent _g1 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(OnClick,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(198)
	this->onUp = _g1;
	HX_STACK_LINE(199)
	::flixel::ui::_FlxButton::FlxButtonEvent _g2 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(199)
	this->onDown = _g2;
	HX_STACK_LINE(200)
	::flixel::ui::_FlxButton::FlxButtonEvent _g3 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(200)
	this->onOver = _g3;
	HX_STACK_LINE(201)
	::flixel::ui::_FlxButton::FlxButtonEvent _g4 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(201)
	this->onOut = _g4;
	HX_STACK_LINE(203)
	this->set_status((int)0);
	HX_STACK_LINE(206)
	this->scrollFactor->set(null(),null());
	HX_STACK_LINE(209)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->onUpEventListener_dyn(),null(),null(),null());
	HX_STACK_LINE(217)
	::flixel::input::FlxInput _g5 = ::flixel::input::FlxInput_obj::__new((int)0);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(217)
	this->input = _g5;
}
;
	return null();
}

//FlxTypedButton_obj::~FlxTypedButton_obj() { }

Dynamic FlxTypedButton_obj::__CreateEmpty() { return  new FlxTypedButton_obj; }
hx::ObjectPtr< FlxTypedButton_obj > FlxTypedButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{  hx::ObjectPtr< FlxTypedButton_obj > result = new FlxTypedButton_obj();
	result->__construct(__o_X,__o_Y,OnClick);
	return result;}

Dynamic FlxTypedButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedButton_obj > result = new FlxTypedButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxTypedButton_obj::graphicLoaded( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","graphicLoaded",0xa7022871,"flixel.ui.FlxTypedButton.graphicLoaded","flixel/ui/FlxButton.hx",221,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(222)
		this->super::graphicLoaded();
		HX_STACK_LINE(224)
		this->setupAnimation(HX_CSTRING("normal"),(int)0);
		HX_STACK_LINE(225)
		this->setupAnimation(HX_CSTRING("highlight"),(int)1);
		HX_STACK_LINE(226)
		this->setupAnimation(HX_CSTRING("pressed"),(int)2);
	}
return null();
}


Void FlxTypedButton_obj::setupAnimation( ::String animationName,int frameIndex){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","setupAnimation",0xeb5c74a3,"flixel.ui.FlxTypedButton.setupAnimation","flixel/ui/FlxButton.hx",230,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animationName,"animationName")
		HX_STACK_ARG(frameIndex,"frameIndex")
		HX_STACK_LINE(232)
		Float _g = ::Math_obj::min(frameIndex,(this->animation->_sprite->numFrames - (int)1));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		frameIndex = _g1;
		HX_STACK_LINE(233)
		this->animation->add(animationName,Array_obj< int >::__new().Add(frameIndex),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedButton_obj,setupAnimation,(void))

Void FlxTypedButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","destroy",0xe11bbd9e,"flixel.ui.FlxTypedButton.destroy","flixel/ui/FlxButton.hx",240,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		Dynamic _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->label);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(241)
		this->set_label(_g);
		HX_STACK_LINE(243)
		::flixel::ui::_FlxButton::FlxButtonEvent _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->onUp);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(243)
		this->onUp = _g1;
		HX_STACK_LINE(244)
		::flixel::ui::_FlxButton::FlxButtonEvent _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->onDown);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(244)
		this->onDown = _g2;
		HX_STACK_LINE(245)
		::flixel::ui::_FlxButton::FlxButtonEvent _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->onOver);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(245)
		this->onOver = _g3;
		HX_STACK_LINE(246)
		::flixel::ui::_FlxButton::FlxButtonEvent _g4 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->onOut);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(246)
		this->onOut = _g4;
		HX_STACK_LINE(248)
		Array< ::Dynamic > _g5 = ::flixel::util::FlxDestroyUtil_obj::putArray(this->labelOffsets);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(248)
		this->labelOffsets = _g5;
		HX_STACK_LINE(250)
		this->labelAlphas = null();
		HX_STACK_LINE(251)
		this->currentInput = null();
		HX_STACK_LINE(252)
		this->input = null();
		HX_STACK_LINE(255)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->onUpEventListener_dyn(),null());
		HX_STACK_LINE(258)
		this->super::destroy();
	}
return null();
}


Void FlxTypedButton_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","update",0xc4b5d5e5,"flixel.ui.FlxTypedButton.update","flixel/ui/FlxButton.hx",265,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(266)
		this->super::update(elapsed);
		HX_STACK_LINE(268)
		this->input->update();
		HX_STACK_LINE(270)
		if ((this->visible)){
			HX_STACK_LINE(274)
			this->updateButton();
			HX_STACK_LINE(277)
			this->updateStatusAnimation();
		}
	}
return null();
}


Void FlxTypedButton_obj::updateStatusAnimation( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateStatusAnimation",0x00250d0d,"flixel.ui.FlxTypedButton.updateStatusAnimation","flixel/ui/FlxButton.hx",283,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		this->animation->play(this->statusAnimations->__get(this->status),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateStatusAnimation,(void))

Void FlxTypedButton_obj::draw( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","draw",0x18618ce0,"flixel.ui.FlxTypedButton.draw","flixel/ui/FlxButton.hx",290,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(291)
		this->super::draw();
		HX_STACK_LINE(293)
		if (((bool((this->label != null())) && bool(this->label->__Field(HX_CSTRING("visible"),true))))){
			HX_STACK_LINE(295)
			Array< ::Dynamic > _g = this->get_cameras();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(295)
			this->label->__Field(HX_CSTRING("set_cameras"),true)(_g);
			HX_STACK_LINE(296)
			this->label->__Field(HX_CSTRING("draw"),true)();
		}
	}
return null();
}


bool FlxTypedButton_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","stampOnAtlas",0xa90d96c5,"flixel.ui.FlxTypedButton.stampOnAtlas","flixel/ui/FlxButton.hx",324,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(atlas,"atlas")
	HX_STACK_LINE(325)
	::flixel::graphics::atlas::FlxNode buttonNode = atlas->addNode(this->graphic->bitmap,this->graphic->key);		HX_STACK_VAR(buttonNode,"buttonNode");
	HX_STACK_LINE(326)
	bool result = (buttonNode != null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(328)
	if (((buttonNode != null()))){
		HX_STACK_LINE(330)
		::flixel::graphics::frames::FlxTileFrames buttonFrames = this->frames;		HX_STACK_VAR(buttonFrames,"buttonFrames");
		HX_STACK_LINE(331)
		::flixel::math::FlxPoint tileSize = ::flixel::math::FlxPoint_obj::__new(buttonFrames->tileSize->x,buttonFrames->tileSize->y);		HX_STACK_VAR(tileSize,"tileSize");
		HX_STACK_LINE(332)
		::flixel::graphics::frames::FlxTileFrames tileFrames = buttonNode->getTileFrames(tileSize,null());		HX_STACK_VAR(tileFrames,"tileFrames");
		HX_STACK_LINE(333)
		this->set_frames(tileFrames);
	}
	HX_STACK_LINE(336)
	if (((bool(result) && bool((this->label != null()))))){
		HX_STACK_LINE(338)
		::flixel::graphics::atlas::FlxNode labelNode = atlas->addNode(this->label->__Field(HX_CSTRING("graphic"),true)->__Field(HX_CSTRING("bitmap"),true),this->label->__Field(HX_CSTRING("graphic"),true)->__Field(HX_CSTRING("key"),true));		HX_STACK_VAR(labelNode,"labelNode");
		HX_STACK_LINE(339)
		result = (bool(result) && bool((labelNode != null())));
		HX_STACK_LINE(341)
		if (((labelNode != null()))){
			HX_STACK_LINE(343)
			::flixel::graphics::frames::FlxImageFrame _g = labelNode->getImageFrame();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(343)
			this->label->__Field(HX_CSTRING("set_frames"),true)(_g);
		}
	}
	HX_STACK_LINE(347)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,stampOnAtlas,return )

Void FlxTypedButton_obj::updateButton( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateButton",0x576ba5b7,"flixel.ui.FlxTypedButton.updateButton","flixel/ui/FlxButton.hx",355,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(357)
		bool overlapFound = false;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(359)
		{
			HX_STACK_LINE(359)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(359)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(359)
			while((true)){
				HX_STACK_LINE(359)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(359)
					break;
				}
				HX_STACK_LINE(359)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(359)
				++(_g);
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(362)
					Array< int > _g3 = this->mouseButtons;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(362)
					while((true)){
						HX_STACK_LINE(362)
						if ((!(((_g2 < _g3->length))))){
							HX_STACK_LINE(362)
							break;
						}
						HX_STACK_LINE(362)
						int buttonID = _g3->__get(_g2);		HX_STACK_VAR(buttonID,"buttonID");
						HX_STACK_LINE(362)
						++(_g2);
						HX_STACK_LINE(364)
						::flixel::input::mouse::FlxMouseButton button = ::flixel::input::mouse::FlxMouseButton_obj::getFromID(buttonID);		HX_STACK_VAR(button,"button");
						HX_STACK_LINE(366)
						if (((  (((button != null()))) ? bool(this->checkInput(::flixel::FlxG_obj::mouse,button,button->justPressedPosition,camera)) : bool(false) ))){
							HX_STACK_LINE(368)
							overlapFound = true;
						}
					}
				}
				HX_STACK_LINE(374)
				{
					HX_STACK_LINE(374)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(374)
					Array< ::Dynamic > _g3 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(374)
					while((true)){
						HX_STACK_LINE(374)
						if ((!(((_g2 < _g3->length))))){
							HX_STACK_LINE(374)
							break;
						}
						HX_STACK_LINE(374)
						::flixel::input::touch::FlxTouch touch = _g3->__get(_g2).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(374)
						++(_g2);
						HX_STACK_LINE(376)
						if ((this->checkInput(touch,touch,touch->justPressedPosition,camera))){
							HX_STACK_LINE(378)
							overlapFound = true;
							HX_STACK_LINE(379)
							break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(386)
		if (((  (((  (((this->currentInput != null()))) ? bool(this->currentInput->__Field(HX_CSTRING("get_justReleased"),true)()) : bool(false) ))) ? bool(::Std_obj::is(this->currentInput,hx::ClassOf< ::flixel::input::touch::FlxTouch >())) : bool(false) ))){
			HX_STACK_LINE(388)
			this->onUpHandler();
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::ui::FlxTypedButton_obj > __this,bool &overlapFound){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxButton.hx",393,0xc64cf442)
				{
					struct _Function_2_1{
						inline static bool Block( hx::ObjectPtr< ::flixel::ui::FlxTypedButton_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxButton.hx",393,0xc64cf442)
							{
								HX_STACK_LINE(393)
								return (  (((__this->currentInput != null()))) ? bool(__this->currentInput->__Field(HX_CSTRING("get_justReleased"),true)()) : bool(false) );
							}
							return null();
						}
					};
					HX_STACK_LINE(393)
					return (  ((!((!(overlapFound))))) ? bool(_Function_2_1::Block(__this)) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(392)
		if (((  (((this->status != (int)0))) ? bool(_Function_1_1::Block(this,overlapFound)) : bool(false) ))){
			HX_STACK_LINE(395)
			this->onOutHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateButton,(void))

bool FlxTypedButton_obj::checkInput( ::flixel::input::FlxPointer pointer,::flixel::input::IFlxInput input,::flixel::math::FlxPoint justPressedPosition,::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","checkInput",0xf7b933fe,"flixel.ui.FlxTypedButton.checkInput","flixel/ui/FlxButton.hx",400,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_ARG(input,"input")
	HX_STACK_ARG(justPressedPosition,"justPressedPosition")
	HX_STACK_ARG(camera,"camera")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::ui::FlxTypedButton_obj > __this,::flixel::input::FlxPointer &pointer,::flixel::math::FlxPoint &justPressedPosition){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxButton.hx",402,0xc64cf442)
			{
				HX_STACK_LINE(402)
				Float _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(402)
				{
					HX_STACK_LINE(402)
					::flixel::math::FlxPoint Point2 = pointer->getScreenPosition(null(),null());		HX_STACK_VAR(Point2,"Point2");
					HX_STACK_LINE(402)
					Float dx = (justPressedPosition->x - Point2->x);		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(402)
					Float dy = (justPressedPosition->y - Point2->y);		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(402)
					if ((justPressedPosition->_weak)){
						HX_STACK_LINE(402)
						justPressedPosition->put();
					}
					HX_STACK_LINE(402)
					if ((Point2->_weak)){
						HX_STACK_LINE(402)
						Point2->put();
					}
					HX_STACK_LINE(402)
					_g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
				}
				HX_STACK_LINE(402)
				return (_g > __this->maxInputMovement);
			}
			return null();
		}
	};
	HX_STACK_LINE(401)
	if (((  (((  (((this->maxInputMovement != ::Math_obj::POSITIVE_INFINITY))) ? bool(_Function_1_1::Block(this,pointer,justPressedPosition)) : bool(false) ))) ? bool((input == this->currentInput)) : bool(false) ))){
		HX_STACK_LINE(405)
		(this->currentInput == null());
	}
	else{
		HX_STACK_LINE(407)
		::flixel::math::FlxPoint _g1 = pointer->getWorldPosition(camera,this->_point);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(407)
		if ((this->overlapsPoint(_g1,true,camera))){
			HX_STACK_LINE(409)
			this->updateStatus(input);
			HX_STACK_LINE(410)
			return true;
		}
	}
	HX_STACK_LINE(413)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedButton_obj,checkInput,return )

Void FlxTypedButton_obj::updateStatus( ::flixel::input::IFlxInput input){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateStatus",0x83872af7,"flixel.ui.FlxTypedButton.updateStatus","flixel/ui/FlxButton.hx",421,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(input,"input")
		HX_STACK_LINE(421)
		if ((input->__Field(HX_CSTRING("get_justPressed"),true)())){
			HX_STACK_LINE(423)
			this->currentInput = input;
			HX_STACK_LINE(424)
			this->onDownHandler();
		}
		else{
			HX_STACK_LINE(426)
			if (((this->status == (int)0))){
				HX_STACK_LINE(429)
				if (((  ((this->allowSwiping)) ? bool(input->__Field(HX_CSTRING("get_pressed"),true)()) : bool(false) ))){
					HX_STACK_LINE(431)
					this->onDownHandler();
				}
				else{
					HX_STACK_LINE(435)
					this->onOverHandler();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,updateStatus,(void))

Void FlxTypedButton_obj::updateLabelPosition( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateLabelPosition",0x7d4d6d98,"flixel.ui.FlxTypedButton.updateLabelPosition","flixel/ui/FlxButton.hx",442,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(442)
		if (((this->label != null()))){
			HX_STACK_LINE(444)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(444)
			if ((this->pixelPerfectPosition)){
				HX_STACK_LINE(444)
				_g = ::Math_obj::floor(this->x);
			}
			else{
				HX_STACK_LINE(444)
				_g = this->x;
			}
			HX_STACK_LINE(444)
			Float _g1 = (_g + this->labelOffsets->__get(this->status).StaticCast< ::flixel::math::FlxPoint >()->x);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(444)
			this->label->__Field(HX_CSTRING("set_x"),true)(_g1);
			HX_STACK_LINE(445)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(445)
			if ((this->pixelPerfectPosition)){
				HX_STACK_LINE(445)
				_g2 = ::Math_obj::floor(this->y);
			}
			else{
				HX_STACK_LINE(445)
				_g2 = this->y;
			}
			HX_STACK_LINE(445)
			Float _g3 = (_g2 + this->labelOffsets->__get(this->status).StaticCast< ::flixel::math::FlxPoint >()->y);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(445)
			this->label->__Field(HX_CSTRING("set_y"),true)(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateLabelPosition,(void))

Void FlxTypedButton_obj::updateLabelAlpha( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateLabelAlpha",0x2352ff0f,"flixel.ui.FlxTypedButton.updateLabelAlpha","flixel/ui/FlxButton.hx",451,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(451)
		if (((bool((this->label != null())) && bool((this->labelAlphas->length > this->status))))){
			HX_STACK_LINE(453)
			this->label->__Field(HX_CSTRING("set_alpha"),true)((this->alpha * this->labelAlphas->__get(this->status)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateLabelAlpha,(void))

Void FlxTypedButton_obj::onUpEventListener( Dynamic _){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onUpEventListener",0x0f960298,"flixel.ui.FlxTypedButton.onUpEventListener","flixel/ui/FlxButton.hx",464,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(464)
		if (((bool((bool((bool(this->visible) && bool(this->exists))) && bool(this->active))) && bool((this->status == (int)2))))){
			HX_STACK_LINE(466)
			this->onUpHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,onUpEventListener,(void))

Void FlxTypedButton_obj::onUpHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onUpHandler",0xf0255834,"flixel.ui.FlxTypedButton.onUpHandler","flixel/ui/FlxButton.hx",475,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(476)
		this->set_status((int)0);
		HX_STACK_LINE(477)
		this->input->release();
		HX_STACK_LINE(478)
		this->currentInput = null();
		HX_STACK_LINE(480)
		{
			HX_STACK_LINE(480)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = this->onUp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(480)
			if (((_this->callback != null()))){
				HX_STACK_LINE(480)
				_this->callback();
			}
			HX_STACK_LINE(480)
			if (((_this->sound != null()))){
				HX_STACK_LINE(480)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onUpHandler,(void))

Void FlxTypedButton_obj::onDownHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onDownHandler",0x6003504d,"flixel.ui.FlxTypedButton.onDownHandler","flixel/ui/FlxButton.hx",487,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(488)
		this->set_status((int)2);
		HX_STACK_LINE(489)
		this->input->press();
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = this->onDown;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(491)
			if (((_this->callback != null()))){
				HX_STACK_LINE(491)
				_this->callback();
			}
			HX_STACK_LINE(491)
			if (((_this->sound != null()))){
				HX_STACK_LINE(491)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onDownHandler,(void))

Void FlxTypedButton_obj::onOverHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onOverHandler",0x3b6b999b,"flixel.ui.FlxTypedButton.onOverHandler","flixel/ui/FlxButton.hx",498,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(499)
		this->set_status((int)1);
		HX_STACK_LINE(501)
		{
			HX_STACK_LINE(501)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = this->onOver;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(501)
			if (((_this->callback != null()))){
				HX_STACK_LINE(501)
				_this->callback();
			}
			HX_STACK_LINE(501)
			if (((_this->sound != null()))){
				HX_STACK_LINE(501)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOverHandler,(void))

Void FlxTypedButton_obj::onOutHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onOutHandler",0x1cacc3b7,"flixel.ui.FlxTypedButton.onOutHandler","flixel/ui/FlxButton.hx",508,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(509)
		this->set_status((int)0);
		HX_STACK_LINE(510)
		this->input->release();
		HX_STACK_LINE(512)
		{
			HX_STACK_LINE(512)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = this->onOut;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(512)
			if (((_this->callback != null()))){
				HX_STACK_LINE(512)
				_this->callback();
			}
			HX_STACK_LINE(512)
			if (((_this->sound != null()))){
				HX_STACK_LINE(512)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOutHandler,(void))

Dynamic FlxTypedButton_obj::set_label( Dynamic Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_label",0xd03f57fb,"flixel.ui.FlxTypedButton.set_label","flixel/ui/FlxButton.hx",516,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(517)
	if (((Value != null()))){
		HX_STACK_LINE(520)
		Value->__Field(HX_CSTRING("scrollFactor"),true)->__Field(HX_CSTRING("put"),true)();
		HX_STACK_LINE(521)
		Value->__FieldRef(HX_CSTRING("scrollFactor")) = this->scrollFactor;
	}
	HX_STACK_LINE(524)
	this->label = Value;
	HX_STACK_LINE(525)
	this->updateLabelPosition();
	HX_STACK_LINE(527)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,set_label,return )

int FlxTypedButton_obj::set_status( int Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_status",0x23ac634b,"flixel.ui.FlxTypedButton.set_status","flixel/ui/FlxButton.hx",531,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(532)
	this->status = Value;
	HX_STACK_LINE(533)
	this->updateLabelAlpha();
	HX_STACK_LINE(534)
	return this->status;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,set_status,return )

Float FlxTypedButton_obj::set_alpha( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_alpha",0x8226f165,"flixel.ui.FlxTypedButton.set_alpha","flixel/ui/FlxButton.hx",538,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(539)
	this->super::set_alpha(Value);
	HX_STACK_LINE(540)
	this->updateLabelAlpha();
	HX_STACK_LINE(541)
	return this->alpha;
}


Float FlxTypedButton_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_x",0xd772faff,"flixel.ui.FlxTypedButton.set_x","flixel/ui/FlxButton.hx",545,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(546)
	this->super::set_x(Value);
	HX_STACK_LINE(547)
	this->updateLabelPosition();
	HX_STACK_LINE(548)
	return this->x;
}


Float FlxTypedButton_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_y",0xd772fb00,"flixel.ui.FlxTypedButton.set_y","flixel/ui/FlxButton.hx",552,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(553)
	this->super::set_y(Value);
	HX_STACK_LINE(554)
	this->updateLabelPosition();
	HX_STACK_LINE(555)
	return this->y;
}


bool FlxTypedButton_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","get_justReleased",0x06e7426e,"flixel.ui.FlxTypedButton.get_justReleased","flixel/ui/FlxButton.hx",560,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(560)
	return (this->input->current == (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_justReleased,return )

bool FlxTypedButton_obj::get_released( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","get_released",0xa9c8d9a2,"flixel.ui.FlxTypedButton.get_released","flixel/ui/FlxButton.hx",565,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(565)
	::flixel::input::FlxInput _this = this->input;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(565)
	return (bool((_this->current == (int)0)) || bool((_this->current == (int)-1)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_released,return )

bool FlxTypedButton_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","get_pressed",0x0c35e55d,"flixel.ui.FlxTypedButton.get_pressed","flixel/ui/FlxButton.hx",570,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(570)
	::flixel::input::FlxInput _this = this->input;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(570)
	return (bool((_this->current == (int)1)) || bool((_this->current == (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_pressed,return )

bool FlxTypedButton_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","get_justPressed",0x7ad59a11,"flixel.ui.FlxTypedButton.get_justPressed","flixel/ui/FlxButton.hx",575,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(575)
	return (this->input->current == (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_justPressed,return )


FlxTypedButton_obj::FlxTypedButton_obj()
{
}

void FlxTypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedButton);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_MARK_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_MARK_MEMBER_NAME(statusAnimations,"statusAnimations");
	HX_MARK_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_MARK_MEMBER_NAME(mouseButtons,"mouseButtons");
	HX_MARK_MEMBER_NAME(maxInputMovement,"maxInputMovement");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(onUp,"onUp");
	HX_MARK_MEMBER_NAME(onDown,"onDown");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(onOut,"onOut");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(currentInput,"currentInput");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_VISIT_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_VISIT_MEMBER_NAME(statusAnimations,"statusAnimations");
	HX_VISIT_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_VISIT_MEMBER_NAME(mouseButtons,"mouseButtons");
	HX_VISIT_MEMBER_NAME(maxInputMovement,"maxInputMovement");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(onUp,"onUp");
	HX_VISIT_MEMBER_NAME(onDown,"onDown");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(onOut,"onOut");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(currentInput,"currentInput");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"onOut") ) { return onOut; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown; }
		if (HX_FIELD_EQ(inName,"onOver") ) { return onOver; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return get_pressed(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return get_released(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_label") ) { return set_label_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkInput") ) { return checkInput_dyn(); }
		if (HX_FIELD_EQ(inName,"set_status") ) { return set_status_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { return labelAlphas; }
		if (HX_FIELD_EQ(inName,"justPressed") ) { return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { return labelOffsets; }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { return allowSwiping; }
		if (HX_FIELD_EQ(inName,"mouseButtons") ) { return mouseButtons; }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"currentInput") ) { return currentInput; }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return stampOnAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"updateStatus") ) { return updateStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return get_released_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return graphicLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setupAnimation") ) { return setupAnimation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"statusAnimations") ) { return statusAnimations; }
		if (HX_FIELD_EQ(inName,"maxInputMovement") ) { return maxInputMovement; }
		if (HX_FIELD_EQ(inName,"updateLabelAlpha") ) { return updateLabelAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onUpEventListener") ) { return onUpEventListener_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateLabelPosition") ) { return updateLabelPosition_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateStatusAnimation") ) { return updateStatusAnimation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { onUp=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp) return set_label(inValue);label=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::flixel::input::FlxInput >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { if (inCallProp) return set_status(inValue);status=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDown") ) { onDown=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { labelAlphas=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { labelOffsets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { allowSwiping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseButtons") ) { mouseButtons=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentInput") ) { currentInput=inValue.Cast< ::flixel::input::IFlxInput >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"statusAnimations") ) { statusAnimations=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxInputMovement") ) { maxInputMovement=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("labelOffsets"));
	outFields->push(HX_CSTRING("labelAlphas"));
	outFields->push(HX_CSTRING("statusAnimations"));
	outFields->push(HX_CSTRING("allowSwiping"));
	outFields->push(HX_CSTRING("mouseButtons"));
	outFields->push(HX_CSTRING("maxInputMovement"));
	outFields->push(HX_CSTRING("status"));
	outFields->push(HX_CSTRING("onUp"));
	outFields->push(HX_CSTRING("onDown"));
	outFields->push(HX_CSTRING("onOver"));
	outFields->push(HX_CSTRING("onOut"));
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("released"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("input"));
	outFields->push(HX_CSTRING("currentInput"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedButton_obj,label),HX_CSTRING("label")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTypedButton_obj,labelOffsets),HX_CSTRING("labelOffsets")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxTypedButton_obj,labelAlphas),HX_CSTRING("labelAlphas")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxTypedButton_obj,statusAnimations),HX_CSTRING("statusAnimations")},
	{hx::fsBool,(int)offsetof(FlxTypedButton_obj,allowSwiping),HX_CSTRING("allowSwiping")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTypedButton_obj,mouseButtons),HX_CSTRING("mouseButtons")},
	{hx::fsFloat,(int)offsetof(FlxTypedButton_obj,maxInputMovement),HX_CSTRING("maxInputMovement")},
	{hx::fsInt,(int)offsetof(FlxTypedButton_obj,status),HX_CSTRING("status")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onUp),HX_CSTRING("onUp")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onDown),HX_CSTRING("onDown")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onOver),HX_CSTRING("onOver")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onOut),HX_CSTRING("onOut")},
	{hx::fsObject /*::flixel::input::FlxInput*/ ,(int)offsetof(FlxTypedButton_obj,input),HX_CSTRING("input")},
	{hx::fsObject /*::flixel::input::IFlxInput*/ ,(int)offsetof(FlxTypedButton_obj,currentInput),HX_CSTRING("currentInput")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("label"),
	HX_CSTRING("labelOffsets"),
	HX_CSTRING("labelAlphas"),
	HX_CSTRING("statusAnimations"),
	HX_CSTRING("allowSwiping"),
	HX_CSTRING("mouseButtons"),
	HX_CSTRING("maxInputMovement"),
	HX_CSTRING("status"),
	HX_CSTRING("onUp"),
	HX_CSTRING("onDown"),
	HX_CSTRING("onOver"),
	HX_CSTRING("onOut"),
	HX_CSTRING("input"),
	HX_CSTRING("currentInput"),
	HX_CSTRING("graphicLoaded"),
	HX_CSTRING("setupAnimation"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("updateStatusAnimation"),
	HX_CSTRING("draw"),
	HX_CSTRING("stampOnAtlas"),
	HX_CSTRING("updateButton"),
	HX_CSTRING("checkInput"),
	HX_CSTRING("updateStatus"),
	HX_CSTRING("updateLabelPosition"),
	HX_CSTRING("updateLabelAlpha"),
	HX_CSTRING("onUpEventListener"),
	HX_CSTRING("onUpHandler"),
	HX_CSTRING("onDownHandler"),
	HX_CSTRING("onOverHandler"),
	HX_CSTRING("onOutHandler"),
	HX_CSTRING("set_label"),
	HX_CSTRING("set_status"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_justReleased"),
	HX_CSTRING("get_released"),
	HX_CSTRING("get_pressed"),
	HX_CSTRING("get_justPressed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

#endif

Class FlxTypedButton_obj::__mClass;

void FlxTypedButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.FlxTypedButton"), hx::TCanCast< FlxTypedButton_obj> ,sStaticFields,sMemberFields,
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

void FlxTypedButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace ui
