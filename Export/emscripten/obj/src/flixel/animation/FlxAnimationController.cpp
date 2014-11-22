#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxPrerotatedAnimation
#include <flixel/animation/FlxPrerotatedAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace animation{

Void FlxAnimationController_obj::__construct(::flixel::FlxSprite Sprite)
{
HX_STACK_FRAME("flixel.animation.FlxAnimationController","new",0x0b6477fc,"flixel.animation.FlxAnimationController.new","flixel/animation/FlxAnimationController.hx",10,0xa6f01372)
HX_STACK_THIS(this)
HX_STACK_ARG(Sprite,"Sprite")
{
	HX_STACK_LINE(20)
	this->frameIndex = (int)-1;
	HX_STACK_LINE(81)
	this->_sprite = Sprite;
	HX_STACK_LINE(82)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(82)
	this->_animations = _g;
}
;
	return null();
}

//FlxAnimationController_obj::~FlxAnimationController_obj() { }

Dynamic FlxAnimationController_obj::__CreateEmpty() { return  new FlxAnimationController_obj; }
hx::ObjectPtr< FlxAnimationController_obj > FlxAnimationController_obj::__new(::flixel::FlxSprite Sprite)
{  hx::ObjectPtr< FlxAnimationController_obj > result = new FlxAnimationController_obj();
	result->__construct(Sprite);
	return result;}

Dynamic FlxAnimationController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAnimationController_obj > result = new FlxAnimationController_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxAnimationController_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxAnimationController_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","update",0x8fb487ed,"flixel.animation.FlxAnimationController.update","flixel/animation/FlxAnimationController.hx",87,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(87)
		if (((this->_curAnim != null()))){
			HX_STACK_LINE(89)
			this->_curAnim->update(elapsed);
		}
		else{
			HX_STACK_LINE(91)
			if (((this->_prerotated != null()))){
				HX_STACK_LINE(93)
				this->_prerotated->set_angle(this->_sprite->angle);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,update,(void))

::flixel::animation::FlxAnimationController FlxAnimationController_obj::copyFrom( ::flixel::animation::FlxAnimationController controller){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","copyFrom",0x9c3f4ea3,"flixel.animation.FlxAnimationController.copyFrom","flixel/animation/FlxAnimationController.hx",98,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(controller,"controller")
	HX_STACK_LINE(99)
	this->destroyAnimations();
	HX_STACK_LINE(101)
	for(::cpp::FastIterator_obj< ::flixel::animation::FlxAnimation > *__it = ::cpp::CreateFastIterator< ::flixel::animation::FlxAnimation >(controller->_animations->iterator());  __it->hasNext(); ){
		::flixel::animation::FlxAnimation anim = __it->next();
		this->add(anim->name,anim->_frames,anim->frameRate,anim->looped);
	}
	HX_STACK_LINE(106)
	if (((controller->_prerotated != null()))){
		HX_STACK_LINE(108)
		this->createPrerotated(null());
	}
	HX_STACK_LINE(111)
	::String _g = controller->get_name();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(111)
	if (((_g != null()))){
		HX_STACK_LINE(113)
		::String _g1 = controller->get_name();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(113)
		this->set_name(_g1);
	}
	HX_STACK_LINE(116)
	this->set_frameIndex(controller->frameIndex);
	HX_STACK_LINE(118)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,copyFrom,return )

Void FlxAnimationController_obj::createPrerotated( ::flixel::animation::FlxAnimationController Controller){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","createPrerotated",0xc538c8e6,"flixel.animation.FlxAnimationController.createPrerotated","flixel/animation/FlxAnimationController.hx",122,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Controller,"Controller")
		HX_STACK_LINE(123)
		this->destroyAnimations();
		HX_STACK_LINE(124)
		if (((Controller != null()))){
			HX_STACK_LINE(124)
			Controller = Controller;
		}
		else{
			HX_STACK_LINE(124)
			Controller = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(125)
		::flixel::animation::FlxPrerotatedAnimation _g = ::flixel::animation::FlxPrerotatedAnimation_obj::__new(Controller,Controller->_sprite->bakedRotationAngle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		this->_prerotated = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,createPrerotated,(void))

Void FlxAnimationController_obj::destroyAnimations( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","destroyAnimations",0x0b136325,"flixel.animation.FlxAnimationController.destroyAnimations","flixel/animation/FlxAnimationController.hx",129,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		this->clearAnimations();
		HX_STACK_LINE(131)
		this->clearPrerotated();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroyAnimations,(void))

Void FlxAnimationController_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","destroy",0xb4f8d296,"flixel.animation.FlxAnimationController.destroy","flixel/animation/FlxAnimationController.hx",135,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		this->destroyAnimations();
		HX_STACK_LINE(137)
		this->_animations = null();
		HX_STACK_LINE(138)
		this->callback = null();
		HX_STACK_LINE(139)
		this->_sprite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroy,(void))

Void FlxAnimationController_obj::clearPrerotated( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","clearPrerotated",0x8ef9ed6f,"flixel.animation.FlxAnimationController.clearPrerotated","flixel/animation/FlxAnimationController.hx",143,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		if (((this->_prerotated != null()))){
			HX_STACK_LINE(146)
			this->_prerotated->destroy();
		}
		HX_STACK_LINE(148)
		this->_prerotated = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearPrerotated,(void))

Void FlxAnimationController_obj::clearAnimations( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","clearAnimations",0x7ffc9e78,"flixel.animation.FlxAnimationController.clearAnimations","flixel/animation/FlxAnimationController.hx",152,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		if (((this->_animations != null()))){
			HX_STACK_LINE(155)
			::flixel::animation::FlxAnimation anim;		HX_STACK_VAR(anim,"anim");
			HX_STACK_LINE(156)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_animations->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(158)
					::flixel::animation::FlxAnimation _g = this->_animations->get(key);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(158)
					anim = _g;
					HX_STACK_LINE(159)
					if (((anim != null()))){
						HX_STACK_LINE(161)
						anim->destroy();
					}
					HX_STACK_LINE(163)
					this->_animations->remove(key);
				}
;
			}
		}
		HX_STACK_LINE(166)
		this->_curAnim = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearAnimations,(void))

Void FlxAnimationController_obj::add( ::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","add",0x0b5a99bd,"flixel.animation.FlxAnimationController.add","flixel/animation/FlxAnimationController.hx",177,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(179)
		Array< int > framesToAdd = Frames;		HX_STACK_VAR(framesToAdd,"framesToAdd");
		HX_STACK_LINE(180)
		int numFrames = (framesToAdd->length - (int)1);		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(181)
		int i = numFrames;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(182)
		while((true)){
			HX_STACK_LINE(182)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(182)
				break;
			}
			HX_STACK_LINE(184)
			if (((framesToAdd->__get(i) >= this->_sprite->numFrames))){
				HX_STACK_LINE(188)
				if (((framesToAdd == Frames))){
					HX_STACK_LINE(190)
					Array< int > _g = Frames->copy();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(190)
					framesToAdd = _g;
				}
				HX_STACK_LINE(193)
				framesToAdd->splice(i,(int)1);
			}
			HX_STACK_LINE(195)
			(i)--;
		}
		HX_STACK_LINE(198)
		if (((framesToAdd->length > (int)0))){
			HX_STACK_LINE(200)
			::flixel::animation::FlxAnimation anim = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,framesToAdd,FrameRate,Looped);		HX_STACK_VAR(anim,"anim");
			HX_STACK_LINE(201)
			this->_animations->set(Name,anim);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,add,(void))

Void FlxAnimationController_obj::append( ::String Name,Array< int > Frames){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","append",0x9882e3be,"flixel.animation.FlxAnimationController.append","flixel/animation/FlxAnimationController.hx",213,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Frames,"Frames")
		HX_STACK_LINE(214)
		::flixel::animation::FlxAnimation anim = this->_animations->get(Name);		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(216)
		if (((anim == null()))){
			HX_STACK_LINE(220)
			return null();
		}
		HX_STACK_LINE(224)
		int numFrames = (Frames->length - (int)1);		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(225)
		int i = numFrames;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(228)
			if (((Frames->__get((numFrames - i)) < this->_sprite->numFrames))){
				HX_STACK_LINE(231)
				anim->_frames->push(Frames->__get((numFrames - i)));
			}
			HX_STACK_LINE(233)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,append,(void))

Void FlxAnimationController_obj::addByNames( ::String Name,Array< ::String > FrameNames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByNames",0x17c20e34,"flixel.animation.FlxAnimationController.addByNames","flixel/animation/FlxAnimationController.hx",246,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(FrameNames,"FrameNames")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(246)
		if (((this->_sprite->frames != null()))){
			HX_STACK_LINE(248)
			Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(249)
			this->byNamesHelper(indices,FrameNames);
			HX_STACK_LINE(251)
			if (((indices->length > (int)0))){
				HX_STACK_LINE(253)
				::flixel::animation::FlxAnimation anim = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,indices,FrameRate,Looped);		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(254)
				this->_animations->set(Name,anim);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,addByNames,(void))

Void FlxAnimationController_obj::appendByNames( ::String Name,Array< ::String > FrameNames){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByNames",0xcdc97653,"flixel.animation.FlxAnimationController.appendByNames","flixel/animation/FlxAnimationController.hx",267,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(FrameNames,"FrameNames")
		HX_STACK_LINE(268)
		::flixel::animation::FlxAnimation anim = this->_animations->get(Name);		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(270)
		if (((anim == null()))){
			HX_STACK_LINE(273)
			return null();
		}
		HX_STACK_LINE(276)
		if (((this->_sprite->frames != null()))){
			HX_STACK_LINE(278)
			this->byNamesHelper(anim->_frames,FrameNames);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByNames,(void))

Void FlxAnimationController_obj::addByStringIndices( ::String Name,::String Prefix,Array< ::String > Indices,::String Postfix,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByStringIndices",0x0f3d3cc2,"flixel.animation.FlxAnimationController.addByStringIndices","flixel/animation/FlxAnimationController.hx",293,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(Indices,"Indices")
	HX_STACK_ARG(Postfix,"Postfix")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(293)
		if (((this->_sprite->frames != null()))){
			HX_STACK_LINE(295)
			Array< int > frameIndices = Array_obj< int >::__new();		HX_STACK_VAR(frameIndices,"frameIndices");
			HX_STACK_LINE(296)
			this->byStringIndicesHelper(frameIndices,Prefix,Indices,Postfix);
			HX_STACK_LINE(298)
			if (((frameIndices->length > (int)0))){
				HX_STACK_LINE(300)
				::flixel::animation::FlxAnimation anim = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped);		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(301)
				this->_animations->set(Name,anim);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByStringIndices,(void))

Void FlxAnimationController_obj::appendByStringIndices( ::String Name,::String Prefix,Array< ::String > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByStringIndices",0x42285be1,"flixel.animation.FlxAnimationController.appendByStringIndices","flixel/animation/FlxAnimationController.hx",316,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(317)
		::flixel::animation::FlxAnimation anim = this->_animations->get(Name);		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(319)
		if (((anim == null()))){
			HX_STACK_LINE(322)
			return null();
		}
		HX_STACK_LINE(325)
		if (((this->_sprite->frames != null()))){
			HX_STACK_LINE(327)
			this->byStringIndicesHelper(anim->_frames,Prefix,Indices,Postfix);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByStringIndices,(void))

Void FlxAnimationController_obj::addByIndices( ::String Name,::String Prefix,Array< int > Indices,::String Postfix,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByIndices",0x4dbf3893,"flixel.animation.FlxAnimationController.addByIndices","flixel/animation/FlxAnimationController.hx",342,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(Indices,"Indices")
	HX_STACK_ARG(Postfix,"Postfix")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(342)
		if (((this->_sprite->frames != null()))){
			HX_STACK_LINE(344)
			Array< int > frameIndices = Array_obj< int >::__new();		HX_STACK_VAR(frameIndices,"frameIndices");
			HX_STACK_LINE(345)
			this->byIndicesHelper(frameIndices,Prefix,Indices,Postfix);
			HX_STACK_LINE(347)
			if (((frameIndices->length > (int)0))){
				HX_STACK_LINE(349)
				::flixel::animation::FlxAnimation anim = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped);		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(350)
				this->_animations->set(Name,anim);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByIndices,(void))

Void FlxAnimationController_obj::appendByIndices( ::String Name,::String Prefix,Array< int > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByIndices",0x22882672,"flixel.animation.FlxAnimationController.appendByIndices","flixel/animation/FlxAnimationController.hx",365,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(366)
		::flixel::animation::FlxAnimation anim = this->_animations->get(Name);		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(368)
		if (((anim == null()))){
			HX_STACK_LINE(371)
			return null();
		}
		HX_STACK_LINE(374)
		if (((this->_sprite->frames != null()))){
			HX_STACK_LINE(376)
			this->byIndicesHelper(anim->_frames,Prefix,Indices,Postfix);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByIndices,(void))

int FlxAnimationController_obj::findSpriteFrame( ::String Prefix,int Index,::String Postfix){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","findSpriteFrame",0x746a2bcb,"flixel.animation.FlxAnimationController.findSpriteFrame","flixel/animation/FlxAnimationController.hx",387,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Postfix,"Postfix")
	HX_STACK_LINE(388)
	int numFrames = this->_sprite->numFrames;		HX_STACK_VAR(numFrames,"numFrames");
	HX_STACK_LINE(389)
	Array< ::Dynamic > flxFrames = this->_sprite->frames->frames;		HX_STACK_VAR(flxFrames,"flxFrames");
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(390)
		while((true)){
			HX_STACK_LINE(390)
			if ((!(((_g < numFrames))))){
				HX_STACK_LINE(390)
				break;
			}
			HX_STACK_LINE(390)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(392)
			::String name = flxFrames->__get(i).StaticCast< ::flixel::graphics::frames::FlxFrame >()->name;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(393)
			if (((  ((::StringTools_obj::startsWith(name,Prefix))) ? bool(::StringTools_obj::endsWith(name,Postfix)) : bool(false) ))){
				HX_STACK_LINE(395)
				::String _g1 = name.substring(Prefix.length,(name.length - Postfix.length));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(395)
				Dynamic index = ::Std_obj::parseInt(_g1);		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(396)
				if (((bool((index != null())) && bool((index == Index))))){
					HX_STACK_LINE(398)
					return i;
				}
			}
		}
	}
	HX_STACK_LINE(403)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,findSpriteFrame,return )

Void FlxAnimationController_obj::addByPrefix( ::String Name,::String Prefix,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByPrefix",0x4347f9a6,"flixel.animation.FlxAnimationController.addByPrefix","flixel/animation/FlxAnimationController.hx",415,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(415)
		if (((this->_sprite->frames != null()))){
			HX_STACK_LINE(417)
			Array< ::Dynamic > animFrames = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(animFrames,"animFrames");
			HX_STACK_LINE(418)
			this->findByPrefix(animFrames,Prefix);
			HX_STACK_LINE(420)
			if (((animFrames->length > (int)0))){
				HX_STACK_LINE(422)
				Array< int > frameIndices = Array_obj< int >::__new();		HX_STACK_VAR(frameIndices,"frameIndices");
				HX_STACK_LINE(423)
				this->byPrefixHelper(frameIndices,animFrames,Prefix);
				HX_STACK_LINE(425)
				if (((frameIndices->length > (int)0))){
					HX_STACK_LINE(427)
					::flixel::animation::FlxAnimation anim = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped);		HX_STACK_VAR(anim,"anim");
					HX_STACK_LINE(428)
					this->_animations->set(Name,anim);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,addByPrefix,(void))

Void FlxAnimationController_obj::appendByPrefix( ::String Name,::String Prefix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByPrefix",0xd3bbaca7,"flixel.animation.FlxAnimationController.appendByPrefix","flixel/animation/FlxAnimationController.hx",442,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_LINE(443)
		::flixel::animation::FlxAnimation anim = this->_animations->get(Name);		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(445)
		if (((anim == null()))){
			HX_STACK_LINE(448)
			return null();
		}
		HX_STACK_LINE(451)
		if (((this->_sprite->frames != null()))){
			HX_STACK_LINE(453)
			Array< ::Dynamic > animFrames = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(animFrames,"animFrames");
			HX_STACK_LINE(454)
			this->findByPrefix(animFrames,Prefix);
			HX_STACK_LINE(456)
			if (((animFrames->length > (int)0))){
				HX_STACK_LINE(458)
				this->byPrefixHelper(anim->_frames,animFrames,Prefix);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByPrefix,(void))

Void FlxAnimationController_obj::play( ::String AnimName,hx::Null< bool >  __o_Force,hx::Null< bool >  __o_Reversed,hx::Null< int >  __o_Frame){
bool Force = __o_Force.Default(false);
bool Reversed = __o_Reversed.Default(false);
int Frame = __o_Frame.Default(0);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","play",0xeddc2ed8,"flixel.animation.FlxAnimationController.play","flixel/animation/FlxAnimationController.hx",474,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AnimName,"AnimName")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Reversed,"Reversed")
	HX_STACK_ARG(Frame,"Frame")
{
		HX_STACK_LINE(475)
		if (((AnimName == null()))){
			HX_STACK_LINE(477)
			if (((this->_curAnim != null()))){
				HX_STACK_LINE(479)
				this->_curAnim->stop();
			}
			HX_STACK_LINE(481)
			this->_curAnim = null();
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::animation::FlxAnimationController_obj > __this,::String &AnimName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/animation/FlxAnimationController.hx",484,0xa6f01372)
				{
					HX_STACK_LINE(484)
					::flixel::animation::FlxAnimation _g = __this->_animations->get(AnimName);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(484)
					return (_g == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(484)
		if (((  ((!(((AnimName == null()))))) ? bool(_Function_1_1::Block(this,AnimName)) : bool(true) ))){
			HX_STACK_LINE(487)
			return null();
		}
		HX_STACK_LINE(490)
		if (((bool((this->_curAnim != null())) && bool((AnimName != this->_curAnim->name))))){
			HX_STACK_LINE(492)
			this->_curAnim->stop();
		}
		HX_STACK_LINE(494)
		::flixel::animation::FlxAnimation _g1 = this->_animations->get(AnimName);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(494)
		this->_curAnim = _g1;
		HX_STACK_LINE(495)
		this->_curAnim->play(Force,Reversed,Frame);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,play,(void))

Void FlxAnimationController_obj::pause( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","pause",0x2b969d92,"flixel.animation.FlxAnimationController.pause","flixel/animation/FlxAnimationController.hx",503,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(503)
		if (((this->_curAnim != null()))){
			HX_STACK_LINE(505)
			this->_curAnim->paused = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,pause,(void))

Void FlxAnimationController_obj::resume( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","resume",0x11336b91,"flixel.animation.FlxAnimationController.resume","flixel/animation/FlxAnimationController.hx",514,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(514)
		if (((this->_curAnim != null()))){
			HX_STACK_LINE(516)
			this->_curAnim->paused = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,resume,(void))

::flixel::animation::FlxAnimation FlxAnimationController_obj::getByName( ::String Name){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","getByName",0x1940f994,"flixel.animation.FlxAnimationController.getByName","flixel/animation/FlxAnimationController.hx",525,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(525)
	return this->_animations->get(Name);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getByName,return )

Void FlxAnimationController_obj::randomFrame( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","randomFrame",0x12c43ec6,"flixel.animation.FlxAnimationController.randomFrame","flixel/animation/FlxAnimationController.hx",533,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(534)
		if (((this->_curAnim != null()))){
			HX_STACK_LINE(536)
			this->_curAnim->stop();
			HX_STACK_LINE(537)
			this->_curAnim = null();
		}
		HX_STACK_LINE(539)
		int _g = ::flixel::FlxG_obj::random->_int((int)0,(this->_sprite->numFrames - (int)1),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(539)
		this->set_frameIndex(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,randomFrame,(void))

Void FlxAnimationController_obj::fireCallback( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","fireCallback",0x1523547f,"flixel.animation.FlxAnimationController.fireCallback","flixel/animation/FlxAnimationController.hx",544,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(544)
		if (((this->callback_dyn() != null()))){
			HX_STACK_LINE(546)
			::String name;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(546)
			if (((this->_curAnim != null()))){
				HX_STACK_LINE(546)
				name = this->_curAnim->name;
			}
			else{
				HX_STACK_LINE(546)
				name = null();
			}
			HX_STACK_LINE(547)
			int number;		HX_STACK_VAR(number,"number");
			HX_STACK_LINE(547)
			if (((this->_curAnim != null()))){
				HX_STACK_LINE(547)
				number = this->_curAnim->curFrame;
			}
			else{
				HX_STACK_LINE(547)
				number = this->frameIndex;
			}
			HX_STACK_LINE(548)
			this->callback(name,number,this->frameIndex);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,fireCallback,(void))

Void FlxAnimationController_obj::byNamesHelper( Array< int > AddTo,Array< ::String > FrameNames){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byNamesHelper",0x4e6fbd5b,"flixel.animation.FlxAnimationController.byNamesHelper","flixel/animation/FlxAnimationController.hx",556,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(FrameNames,"FrameNames")
		HX_STACK_LINE(557)
		int l = FrameNames->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(558)
			while((true)){
				HX_STACK_LINE(558)
				if ((!(((_g < l))))){
					HX_STACK_LINE(558)
					break;
				}
				HX_STACK_LINE(558)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(560)
				::String name = FrameNames->__get(i);		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(561)
				if ((this->_sprite->frames->framesHash->exists(name))){
					HX_STACK_LINE(563)
					::flixel::graphics::frames::FlxFrame frameToAdd = this->_sprite->frames->framesHash->get(name);		HX_STACK_VAR(frameToAdd,"frameToAdd");
					HX_STACK_LINE(564)
					int _g1 = this->_sprite->frames->frames->indexOf(frameToAdd,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(564)
					AddTo->push(_g1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,byNamesHelper,(void))

Void FlxAnimationController_obj::byStringIndicesHelper( Array< int > AddTo,::String Prefix,Array< ::String > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byStringIndicesHelper",0xccff0b69,"flixel.animation.FlxAnimationController.byStringIndicesHelper","flixel/animation/FlxAnimationController.hx",573,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(574)
		int l = Indices->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(575)
		{
			HX_STACK_LINE(575)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(575)
			while((true)){
				HX_STACK_LINE(575)
				if ((!(((_g < l))))){
					HX_STACK_LINE(575)
					break;
				}
				HX_STACK_LINE(575)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(577)
				::String name = ((Prefix + Indices->__get(i)) + Postfix);		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(578)
				if ((this->_sprite->frames->framesHash->exists(name))){
					HX_STACK_LINE(580)
					::flixel::graphics::frames::FlxFrame frameToAdd = this->_sprite->frames->framesHash->get(name);		HX_STACK_VAR(frameToAdd,"frameToAdd");
					HX_STACK_LINE(581)
					int _g1 = this->_sprite->frames->frames->indexOf(frameToAdd,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(581)
					AddTo->push(_g1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byStringIndicesHelper,(void))

Void FlxAnimationController_obj::byIndicesHelper( Array< int > AddTo,::String Prefix,Array< int > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byIndicesHelper",0xe757113a,"flixel.animation.FlxAnimationController.byIndicesHelper","flixel/animation/FlxAnimationController.hx",590,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(591)
		int l = Indices->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(592)
		{
			HX_STACK_LINE(592)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(592)
			while((true)){
				HX_STACK_LINE(592)
				if ((!(((_g < l))))){
					HX_STACK_LINE(592)
					break;
				}
				HX_STACK_LINE(592)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(594)
				int indexToAdd = this->findSpriteFrame(Prefix,Indices->__get(i),Postfix);		HX_STACK_VAR(indexToAdd,"indexToAdd");
				HX_STACK_LINE(595)
				if (((indexToAdd != (int)-1))){
					HX_STACK_LINE(597)
					AddTo->push(indexToAdd);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byIndicesHelper,(void))

Void FlxAnimationController_obj::byPrefixHelper( Array< int > AddTo,Array< ::Dynamic > AnimFrames,::String Prefix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byPrefixHelper",0x238152fb,"flixel.animation.FlxAnimationController.byPrefixHelper","flixel/animation/FlxAnimationController.hx",606,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(AnimFrames,"AnimFrames")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_LINE(607)
		::String name = AnimFrames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >()->name;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(608)
		int postIndex = name.indexOf(HX_CSTRING("."),Prefix.length);		HX_STACK_VAR(postIndex,"postIndex");
		HX_STACK_LINE(609)
		::String postFix = name.substring((  (((postIndex == (int)-1))) ? int(name.length) : int(postIndex) ),name.length);		HX_STACK_VAR(postFix,"postFix");
		HX_STACK_LINE(610)
		::flixel::animation::FlxAnimationController_obj::prefixLength = Prefix.length;
		HX_STACK_LINE(611)
		::flixel::animation::FlxAnimationController_obj::postfixLength = postFix.length;
		HX_STACK_LINE(612)
		AnimFrames->sort(::flixel::animation::FlxAnimationController_obj::frameSortFunction_dyn());
		HX_STACK_LINE(614)
		int l = AnimFrames->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(615)
		{
			HX_STACK_LINE(615)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(615)
			while((true)){
				HX_STACK_LINE(615)
				if ((!(((_g < l))))){
					HX_STACK_LINE(615)
					break;
				}
				HX_STACK_LINE(615)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(617)
				int _g1 = this->_sprite->frames->frames->indexOf(AnimFrames->__get(i).StaticCast< ::flixel::graphics::frames::FlxFrame >(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(617)
				AddTo->push(_g1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,byPrefixHelper,(void))

Void FlxAnimationController_obj::findByPrefix( Array< ::Dynamic > AnimFrames,::String Prefix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","findByPrefix",0x32419106,"flixel.animation.FlxAnimationController.findByPrefix","flixel/animation/FlxAnimationController.hx",625,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AnimFrames,"AnimFrames")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_LINE(626)
		int l = this->_sprite->frames->frames->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(627)
		{
			HX_STACK_LINE(627)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(627)
			while((true)){
				HX_STACK_LINE(627)
				if ((!(((_g < l))))){
					HX_STACK_LINE(627)
					break;
				}
				HX_STACK_LINE(627)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(629)
				if ((::StringTools_obj::startsWith(this->_sprite->frames->frames->__get(i).StaticCast< ::flixel::graphics::frames::FlxFrame >()->name,Prefix))){
					HX_STACK_LINE(631)
					AnimFrames->push(this->_sprite->frames->frames->__get(i).StaticCast< ::flixel::graphics::frames::FlxFrame >());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,findByPrefix,(void))

int FlxAnimationController_obj::set_frameIndex( int Frame){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_frameIndex",0xd769c646,"flixel.animation.FlxAnimationController.set_frameIndex","flixel/animation/FlxAnimationController.hx",637,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(638)
	if (((this->_sprite->frames != null()))){
		HX_STACK_LINE(640)
		Frame = hx::Mod(Frame,this->_sprite->numFrames);
		HX_STACK_LINE(642)
		if (((Frame != this->frameIndex))){
			HX_STACK_LINE(644)
			this->_sprite->set_frame(this->_sprite->frames->frames->__get(Frame).StaticCast< ::flixel::graphics::frames::FlxFrame >());
			HX_STACK_LINE(645)
			this->frameIndex = Frame;
			HX_STACK_LINE(646)
			if (((this->callback_dyn() != null()))){
				HX_STACK_LINE(646)
				::String name;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(646)
				if (((this->_curAnim != null()))){
					HX_STACK_LINE(646)
					name = this->_curAnim->name;
				}
				else{
					HX_STACK_LINE(646)
					name = null();
				}
				HX_STACK_LINE(646)
				int number;		HX_STACK_VAR(number,"number");
				HX_STACK_LINE(646)
				if (((this->_curAnim != null()))){
					HX_STACK_LINE(646)
					number = this->_curAnim->curFrame;
				}
				else{
					HX_STACK_LINE(646)
					number = this->frameIndex;
				}
				HX_STACK_LINE(646)
				this->callback(name,number,this->frameIndex);
			}
		}
	}
	HX_STACK_LINE(650)
	return this->frameIndex;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameIndex,return )

::String FlxAnimationController_obj::get_frameName( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_frameName",0x1674c78b,"flixel.animation.FlxAnimationController.get_frameName","flixel/animation/FlxAnimationController.hx",655,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(655)
	return this->_sprite->frame->name;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frameName,return )

::String FlxAnimationController_obj::set_frameName( ::String Value){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_frameName",0x5b7aa997,"flixel.animation.FlxAnimationController.set_frameName","flixel/animation/FlxAnimationController.hx",659,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(660)
	if (((  (((this->_sprite->frames != null()))) ? bool(this->_sprite->frames->framesHash->exists(Value)) : bool(false) ))){
		HX_STACK_LINE(662)
		if (((this->_curAnim != null()))){
			HX_STACK_LINE(664)
			this->_curAnim->stop();
			HX_STACK_LINE(665)
			this->_curAnim = null();
		}
		HX_STACK_LINE(668)
		::flixel::graphics::frames::FlxFrame frame = this->_sprite->frames->framesHash->get(Value);		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(669)
		if (((frame != null()))){
			HX_STACK_LINE(671)
			int _g = this->_sprite->frames->frames->indexOf(frame,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(671)
			this->set_frameIndex(_g);
		}
	}
	HX_STACK_LINE(675)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameName,return )

::String FlxAnimationController_obj::get_name( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_name",0x9c9870b8,"flixel.animation.FlxAnimationController.get_name","flixel/animation/FlxAnimationController.hx",682,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(683)
	::String animName = null();		HX_STACK_VAR(animName,"animName");
	HX_STACK_LINE(684)
	if (((this->_curAnim != null()))){
		HX_STACK_LINE(686)
		animName = this->_curAnim->name;
	}
	HX_STACK_LINE(688)
	return animName;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_name,return )

::String FlxAnimationController_obj::set_name( ::String AnimName){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_name",0x4af5ca2c,"flixel.animation.FlxAnimationController.set_name","flixel/animation/FlxAnimationController.hx",696,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AnimName,"AnimName")
	HX_STACK_LINE(697)
	this->play(AnimName,null(),null(),null());
	HX_STACK_LINE(698)
	return AnimName;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_name,return )

::flixel::animation::FlxAnimation FlxAnimationController_obj::get_curAnim( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_curAnim",0xd32cfb64,"flixel.animation.FlxAnimationController.get_curAnim","flixel/animation/FlxAnimationController.hx",706,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(706)
	return this->_curAnim;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_curAnim,return )

::flixel::animation::FlxAnimation FlxAnimationController_obj::set_curAnim( ::flixel::animation::FlxAnimation Anim){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_curAnim",0xdd9a0270,"flixel.animation.FlxAnimationController.set_curAnim","flixel/animation/FlxAnimationController.hx",714,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Anim,"Anim")
	HX_STACK_LINE(715)
	if (((Anim != this->_curAnim))){
		HX_STACK_LINE(717)
		if (((this->_curAnim != null()))){
			HX_STACK_LINE(719)
			this->_curAnim->stop();
		}
		HX_STACK_LINE(722)
		if (((Anim != null()))){
			HX_STACK_LINE(724)
			Anim->play(null(),null(),null());
		}
	}
	HX_STACK_LINE(727)
	return this->_curAnim = Anim;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_curAnim,return )

bool FlxAnimationController_obj::get_paused( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_paused",0x1a2b745b,"flixel.animation.FlxAnimationController.get_paused","flixel/animation/FlxAnimationController.hx",731,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(732)
	bool paused = false;		HX_STACK_VAR(paused,"paused");
	HX_STACK_LINE(733)
	if (((this->_curAnim != null()))){
		HX_STACK_LINE(735)
		paused = this->_curAnim->paused;
	}
	HX_STACK_LINE(737)
	return paused;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_paused,return )

bool FlxAnimationController_obj::set_paused( bool Value){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_paused",0x1da912cf,"flixel.animation.FlxAnimationController.set_paused","flixel/animation/FlxAnimationController.hx",741,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(742)
	if (((this->_curAnim != null()))){
		HX_STACK_LINE(744)
		this->_curAnim->paused = Value;
	}
	HX_STACK_LINE(746)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_paused,return )

bool FlxAnimationController_obj::get_finished( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_finished",0x1eabcc5f,"flixel.animation.FlxAnimationController.get_finished","flixel/animation/FlxAnimationController.hx",750,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(751)
	bool finished = true;		HX_STACK_VAR(finished,"finished");
	HX_STACK_LINE(752)
	if (((this->_curAnim != null()))){
		HX_STACK_LINE(754)
		finished = this->_curAnim->finished;
	}
	HX_STACK_LINE(756)
	return finished;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_finished,return )

bool FlxAnimationController_obj::set_finished( bool Value){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_finished",0x33a4efd3,"flixel.animation.FlxAnimationController.set_finished","flixel/animation/FlxAnimationController.hx",760,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(761)
	if (((bool((Value == true)) && bool((this->_curAnim != null()))))){
		HX_STACK_LINE(763)
		this->_curAnim->finished = true;
		HX_STACK_LINE(764)
		this->set_frameIndex((this->_curAnim->_frames->length - (int)1));
	}
	HX_STACK_LINE(766)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_finished,return )

int FlxAnimationController_obj::get_frames( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_frames",0xd72ce353,"flixel.animation.FlxAnimationController.get_frames","flixel/animation/FlxAnimationController.hx",771,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(771)
	return this->_sprite->numFrames;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frames,return )

int FlxAnimationController_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame Frame){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","getFrameIndex",0x1c3dee77,"flixel.animation.FlxAnimationController.getFrameIndex","flixel/animation/FlxAnimationController.hx",781,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(781)
	return this->_sprite->frames->frames->indexOf(Frame,null());
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getFrameIndex,return )

int FlxAnimationController_obj::prefixLength;

int FlxAnimationController_obj::postfixLength;

int FlxAnimationController_obj::frameSortFunction( ::flixel::graphics::frames::FlxFrame frame1,::flixel::graphics::frames::FlxFrame frame2){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","frameSortFunction",0x485c30ff,"flixel.animation.FlxAnimationController.frameSortFunction","flixel/animation/FlxAnimationController.hx",789,0xa6f01372)
	HX_STACK_ARG(frame1,"frame1")
	HX_STACK_ARG(frame2,"frame2")
	HX_STACK_LINE(790)
	::String name1 = frame1->name;		HX_STACK_VAR(name1,"name1");
	HX_STACK_LINE(791)
	::String name2 = frame2->name;		HX_STACK_VAR(name2,"name2");
	HX_STACK_LINE(793)
	::String _g = name1.substring(::flixel::animation::FlxAnimationController_obj::prefixLength,(name1.length - ::flixel::animation::FlxAnimationController_obj::postfixLength));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(793)
	int num1 = ::Std_obj::parseInt(_g);		HX_STACK_VAR(num1,"num1");
	HX_STACK_LINE(794)
	::String _g1 = name2.substring(::flixel::animation::FlxAnimationController_obj::prefixLength,(name2.length - ::flixel::animation::FlxAnimationController_obj::postfixLength));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(794)
	int num2 = ::Std_obj::parseInt(_g1);		HX_STACK_VAR(num2,"num2");
	HX_STACK_LINE(796)
	if (((num1 > num2))){
		HX_STACK_LINE(798)
		return (int)1;
	}
	else{
		HX_STACK_LINE(800)
		if (((num2 > num1))){
			HX_STACK_LINE(802)
			return (int)-1;
		}
	}
	HX_STACK_LINE(805)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,frameSortFunction,return )


FlxAnimationController_obj::FlxAnimationController_obj()
{
}

void FlxAnimationController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimationController);
	HX_MARK_MEMBER_NAME(frameIndex,"frameIndex");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_curAnim,"_curAnim");
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_MEMBER_NAME(_prerotated,"_prerotated");
	HX_MARK_END_CLASS();
}

void FlxAnimationController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameIndex,"frameIndex");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_curAnim,"_curAnim");
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
	HX_VISIT_MEMBER_NAME(_prerotated,"_prerotated");
}

Dynamic FlxAnimationController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return get_name(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return get_paused(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return inCallProp ? get_frames() : frames; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { return get_curAnim(); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return get_finished(); }
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { return _curAnim; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { return get_frameName(); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return getByName_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { return frameIndex; }
		if (HX_FIELD_EQ(inName,"addByNames") ) { return addByNames_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paused") ) { return get_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return set_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frames") ) { return get_frames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { return _animations; }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { return _prerotated; }
		if (HX_FIELD_EQ(inName,"addByPrefix") ) { return addByPrefix_dyn(); }
		if (HX_FIELD_EQ(inName,"randomFrame") ) { return randomFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_curAnim") ) { return get_curAnim_dyn(); }
		if (HX_FIELD_EQ(inName,"set_curAnim") ) { return set_curAnim_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"prefixLength") ) { return prefixLength; }
		if (HX_FIELD_EQ(inName,"addByIndices") ) { return addByIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"fireCallback") ) { return fireCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"findByPrefix") ) { return findByPrefix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_finished") ) { return get_finished_dyn(); }
		if (HX_FIELD_EQ(inName,"set_finished") ) { return set_finished_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"postfixLength") ) { return postfixLength; }
		if (HX_FIELD_EQ(inName,"appendByNames") ) { return appendByNames_dyn(); }
		if (HX_FIELD_EQ(inName,"byNamesHelper") ) { return byNamesHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameName") ) { return get_frameName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameName") ) { return set_frameName_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return getFrameIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendByPrefix") ) { return appendByPrefix_dyn(); }
		if (HX_FIELD_EQ(inName,"byPrefixHelper") ) { return byPrefixHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameIndex") ) { return set_frameIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clearPrerotated") ) { return clearPrerotated_dyn(); }
		if (HX_FIELD_EQ(inName,"clearAnimations") ) { return clearAnimations_dyn(); }
		if (HX_FIELD_EQ(inName,"appendByIndices") ) { return appendByIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"findSpriteFrame") ) { return findSpriteFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"byIndicesHelper") ) { return byIndicesHelper_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createPrerotated") ) { return createPrerotated_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"frameSortFunction") ) { return frameSortFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyAnimations") ) { return destroyAnimations_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addByStringIndices") ) { return addByStringIndices_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"appendByStringIndices") ) { return appendByStringIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"byStringIndicesHelper") ) { return byStringIndicesHelper_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAnimationController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return set_name(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return set_paused(inValue); }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { return set_curAnim(inValue); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return set_finished(inValue); }
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { _curAnim=inValue.Cast< ::flixel::animation::FlxAnimation >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { return set_frameName(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { if (inCallProp) return set_frameIndex(inValue);frameIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { _prerotated=inValue.Cast< ::flixel::animation::FlxPrerotatedAnimation >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"prefixLength") ) { prefixLength=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"postfixLength") ) { postfixLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAnimationController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("curAnim"));
	outFields->push(HX_CSTRING("frameIndex"));
	outFields->push(HX_CSTRING("frameName"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("_curAnim"));
	outFields->push(HX_CSTRING("_animations"));
	outFields->push(HX_CSTRING("_prerotated"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("prefixLength"),
	HX_CSTRING("postfixLength"),
	HX_CSTRING("frameSortFunction"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxAnimationController_obj,frameIndex),HX_CSTRING("frameIndex")},
	{hx::fsInt,(int)offsetof(FlxAnimationController_obj,frames),HX_CSTRING("frames")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAnimationController_obj,callback),HX_CSTRING("callback")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxAnimationController_obj,_sprite),HX_CSTRING("_sprite")},
	{hx::fsObject /*::flixel::animation::FlxAnimation*/ ,(int)offsetof(FlxAnimationController_obj,_curAnim),HX_CSTRING("_curAnim")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxAnimationController_obj,_animations),HX_CSTRING("_animations")},
	{hx::fsObject /*::flixel::animation::FlxPrerotatedAnimation*/ ,(int)offsetof(FlxAnimationController_obj,_prerotated),HX_CSTRING("_prerotated")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("frameIndex"),
	HX_CSTRING("frames"),
	HX_CSTRING("callback"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("_curAnim"),
	HX_CSTRING("_animations"),
	HX_CSTRING("_prerotated"),
	HX_CSTRING("update"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("createPrerotated"),
	HX_CSTRING("destroyAnimations"),
	HX_CSTRING("destroy"),
	HX_CSTRING("clearPrerotated"),
	HX_CSTRING("clearAnimations"),
	HX_CSTRING("add"),
	HX_CSTRING("append"),
	HX_CSTRING("addByNames"),
	HX_CSTRING("appendByNames"),
	HX_CSTRING("addByStringIndices"),
	HX_CSTRING("appendByStringIndices"),
	HX_CSTRING("addByIndices"),
	HX_CSTRING("appendByIndices"),
	HX_CSTRING("findSpriteFrame"),
	HX_CSTRING("addByPrefix"),
	HX_CSTRING("appendByPrefix"),
	HX_CSTRING("play"),
	HX_CSTRING("pause"),
	HX_CSTRING("resume"),
	HX_CSTRING("getByName"),
	HX_CSTRING("randomFrame"),
	HX_CSTRING("fireCallback"),
	HX_CSTRING("byNamesHelper"),
	HX_CSTRING("byStringIndicesHelper"),
	HX_CSTRING("byIndicesHelper"),
	HX_CSTRING("byPrefixHelper"),
	HX_CSTRING("findByPrefix"),
	HX_CSTRING("set_frameIndex"),
	HX_CSTRING("get_frameName"),
	HX_CSTRING("set_frameName"),
	HX_CSTRING("get_name"),
	HX_CSTRING("set_name"),
	HX_CSTRING("get_curAnim"),
	HX_CSTRING("set_curAnim"),
	HX_CSTRING("get_paused"),
	HX_CSTRING("set_paused"),
	HX_CSTRING("get_finished"),
	HX_CSTRING("set_finished"),
	HX_CSTRING("get_frames"),
	HX_CSTRING("getFrameIndex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnimationController_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAnimationController_obj::prefixLength,"prefixLength");
	HX_MARK_MEMBER_NAME(FlxAnimationController_obj::postfixLength,"postfixLength");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnimationController_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAnimationController_obj::prefixLength,"prefixLength");
	HX_VISIT_MEMBER_NAME(FlxAnimationController_obj::postfixLength,"postfixLength");
};

#endif

Class FlxAnimationController_obj::__mClass;

void FlxAnimationController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.animation.FlxAnimationController"), hx::TCanCast< FlxAnimationController_obj> ,sStaticFields,sMemberFields,
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

void FlxAnimationController_obj::__boot()
{
	prefixLength= (int)0;
	postfixLength= (int)0;
}

} // end namespace flixel
} // end namespace animation
