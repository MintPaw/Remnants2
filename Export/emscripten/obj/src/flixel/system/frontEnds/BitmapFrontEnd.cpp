#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_openfl__v2_AssetCache
#include <openfl/_v2/AssetCache.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void BitmapFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","new",0x0f2331ed,"flixel.system.frontEnds.BitmapFrontEnd.new","flixel/system/frontEnds/BitmapFrontEnd.hx",28,0x91a05ae2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	this->clearCache();
}
;
	return null();
}

//BitmapFrontEnd_obj::~BitmapFrontEnd_obj() { }

Dynamic BitmapFrontEnd_obj::__CreateEmpty() { return  new BitmapFrontEnd_obj; }
hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__new()
{  hx::ObjectPtr< BitmapFrontEnd_obj > result = new BitmapFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic BitmapFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFrontEnd_obj > result = new BitmapFrontEnd_obj();
	result->__construct();
	return result;}

Void BitmapFrontEnd_obj::onAssetsReload( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","onAssetsReload",0x7811d38e,"flixel.system.frontEnds.BitmapFrontEnd.onAssetsReload","flixel/system/frontEnds/BitmapFrontEnd.hx",32,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(33)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(34)
		if (((this->_cache != null()))){
			HX_STACK_LINE(36)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(38)
					::flixel::graphics::FlxGraphic _g = this->_cache->get(key);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(38)
					obj = _g;
					HX_STACK_LINE(39)
					if (((bool((obj != null())) && bool(((bool((obj->assetsClass != null())) || bool((obj->assetsKey != null())))))))){
						HX_STACK_LINE(41)
						obj->onAssetsReload();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,onAssetsReload,(void))

::flixel::graphics::frames::FlxFrame BitmapFrontEnd_obj::get_whitePixel( ){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get_whitePixel",0xa476cef9,"flixel.system.frontEnds.BitmapFrontEnd.get_whitePixel","flixel/system/frontEnds/BitmapFrontEnd.hx",57,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	if (((this->_whitePixel == null()))){
		HX_STACK_LINE(60)
		::openfl::_v2::display::BitmapData bd = ::openfl::_v2::display::BitmapData_obj::__new((int)10,(int)10,true,(int)-1,null());		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(61)
		::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(bd,true,HX_CSTRING("whitePixels"));		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(62)
		graphic->persist = true;
		HX_STACK_LINE(63)
		this->_whitePixel = graphic->get_imageFrame()->frame;
	}
	HX_STACK_LINE(66)
	return this->_whitePixel;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_whitePixel,return )

Void BitmapFrontEnd_obj::onContext( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","onContext",0x0e82d7dd,"flixel.system.frontEnds.BitmapFrontEnd.onContext","flixel/system/frontEnds/BitmapFrontEnd.hx",74,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(77)
		if (((this->_cache != null()))){
			HX_STACK_LINE(79)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(81)
					::flixel::graphics::FlxGraphic _g = this->_cache->get(key);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(81)
					obj = _g;
					HX_STACK_LINE(82)
					if (((bool((obj != null())) && bool(obj->isDumped)))){
						HX_STACK_LINE(84)
						obj->onContext();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,onContext,(void))

Void BitmapFrontEnd_obj::dumpCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","dumpCache",0xf899b9bb,"flixel.system.frontEnds.BitmapFrontEnd.dumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",96,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(100)
		if (((this->_cache != null()))){
			HX_STACK_LINE(102)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(104)
					::flixel::graphics::FlxGraphic _g = this->_cache->get(key);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(104)
					obj = _g;
					HX_STACK_LINE(105)
					if (((bool((obj != null())) && bool(((bool((obj->assetsClass != null())) || bool((obj->assetsKey != null())))))))){
						HX_STACK_LINE(107)
						obj->dump();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,dumpCache,(void))

Void BitmapFrontEnd_obj::undumpCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","undumpCache",0xfe6eed82,"flixel.system.frontEnds.BitmapFrontEnd.undumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",118,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(122)
		if (((this->_cache != null()))){
			HX_STACK_LINE(124)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(126)
					::flixel::graphics::FlxGraphic _g = this->_cache->get(key);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(126)
					obj = _g;
					HX_STACK_LINE(127)
					if (((bool((obj != null())) && bool(obj->isDumped)))){
						HX_STACK_LINE(129)
						obj->undump();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,undumpCache,(void))

bool BitmapFrontEnd_obj::checkCache( ::String Key){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","checkCache",0xe81c366d,"flixel.system.frontEnds.BitmapFrontEnd.checkCache","flixel/system/frontEnds/BitmapFrontEnd.hx",144,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(144)
	if ((this->_cache->exists(Key))){
		HX_STACK_LINE(144)
		::flixel::graphics::FlxGraphic _g = this->_cache->get(Key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		return (_g != null());
	}
	else{
		HX_STACK_LINE(144)
		return false;
	}
	HX_STACK_LINE(144)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,checkCache,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::create( int Width,int Height,int Color,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","create",0xd385bb8f,"flixel.system.frontEnds.BitmapFrontEnd.create","flixel/system/frontEnds/BitmapFrontEnd.hx",159,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(159)
		return ::flixel::graphics::FlxGraphic_obj::fromRectangle(Width,Height,Color,Unique,Key);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,create,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::add( Dynamic Graphic,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","add",0x0f1953ae,"flixel.system.frontEnds.BitmapFrontEnd.add","flixel/system/frontEnds/BitmapFrontEnd.hx",174,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(175)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::flixel::graphics::FlxGraphic >()))){
			HX_STACK_LINE(177)
			::flixel::graphics::FlxGraphic graphic;		HX_STACK_VAR(graphic,"graphic");
			HX_STACK_LINE(177)
			graphic = hx::TCast< flixel::graphics::FlxGraphic >::cast(Graphic);
			HX_STACK_LINE(178)
			return ::flixel::graphics::FlxGraphic_obj::fromGraphic(graphic,Unique,Key);
		}
		else{
			HX_STACK_LINE(180)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::openfl::_v2::display::BitmapData >()))){
				HX_STACK_LINE(182)
				::openfl::_v2::display::BitmapData bitmap;		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(182)
				bitmap = hx::TCast< openfl::_v2::display::BitmapData >::cast(Graphic);
				HX_STACK_LINE(183)
				return ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmap,Unique,Key,null());
			}
		}
		HX_STACK_LINE(187)
		::String assetKey = ::Std_obj::string(Graphic);		HX_STACK_VAR(assetKey,"assetKey");
		HX_STACK_LINE(188)
		return ::flixel::graphics::FlxGraphic_obj::fromAssetKey(assetKey,Unique,Key,null());
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,add,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::addGraphic( ::flixel::graphics::FlxGraphic graphic){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","addGraphic",0x72a9209a,"flixel.system.frontEnds.BitmapFrontEnd.addGraphic","flixel/system/frontEnds/BitmapFrontEnd.hx",198,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_LINE(199)
	if ((!(this->_cache->exists(graphic->key)))){
		HX_STACK_LINE(201)
		this->_cache->set(graphic->key,graphic);
	}
	HX_STACK_LINE(203)
	return graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,addGraphic,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::get( ::String key){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get",0x0f1de223,"flixel.system.frontEnds.BitmapFrontEnd.get","flixel/system/frontEnds/BitmapFrontEnd.hx",213,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(213)
	return this->_cache->get(key);
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,get,return )

::String BitmapFrontEnd_obj::findKeyForBitmap( ::openfl::_v2::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","findKeyForBitmap",0x03085a65,"flixel.system.frontEnds.BitmapFrontEnd.findKeyForBitmap","flixel/system/frontEnds/BitmapFrontEnd.hx",223,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(224)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(226)
			::openfl::_v2::display::BitmapData data = this->_cache->get(key)->__Field(HX_CSTRING("bitmap"),true);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(227)
			if (((data == bmd))){
				HX_STACK_LINE(229)
				return key;
			}
		}
;
	}
	HX_STACK_LINE(232)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,findKeyForBitmap,return )

::String BitmapFrontEnd_obj::getKeyForClass( ::Class source){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getKeyForClass",0x26696fcb,"flixel.system.frontEnds.BitmapFrontEnd.getKeyForClass","flixel/system/frontEnds/BitmapFrontEnd.hx",243,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(243)
	return ::Type_obj::getClassName(source);
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getKeyForClass,return )

::String BitmapFrontEnd_obj::generateKey( ::String systemKey,::String userKey,hx::Null< bool >  __o_unique){
bool unique = __o_unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","generateKey",0xe3b3c7f7,"flixel.system.frontEnds.BitmapFrontEnd.generateKey","flixel/system/frontEnds/BitmapFrontEnd.hx",255,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(systemKey,"systemKey")
	HX_STACK_ARG(userKey,"userKey")
	HX_STACK_ARG(unique,"unique")
{
		HX_STACK_LINE(256)
		::String key = userKey;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(257)
		if (((key == null()))){
			HX_STACK_LINE(259)
			key = systemKey;
		}
		HX_STACK_LINE(262)
		if (((bool(unique) || bool((key == null()))))){
			HX_STACK_LINE(264)
			::String _g = this->getUniqueKey(key);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(264)
			key = _g;
		}
		HX_STACK_LINE(267)
		return key;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,generateKey,return )

::String BitmapFrontEnd_obj::getUniqueKey( ::String baseKey){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getUniqueKey",0x2898506b,"flixel.system.frontEnds.BitmapFrontEnd.getUniqueKey","flixel/system/frontEnds/BitmapFrontEnd.hx",277,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseKey,"baseKey")
	HX_STACK_LINE(278)
	if (((baseKey == null()))){
		HX_STACK_LINE(278)
		baseKey = HX_CSTRING("pixels");
	}
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::system::frontEnds::BitmapFrontEnd_obj > __this,::String &baseKey){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/BitmapFrontEnd.hx",280,0x91a05ae2)
			{
				HX_STACK_LINE(280)
				::flixel::graphics::FlxGraphic _g = __this->_cache->get(baseKey);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(280)
				return (_g != null());
			}
			return null();
		}
	};
	HX_STACK_LINE(280)
	if (((  ((this->_cache->exists(baseKey))) ? bool(_Function_1_1::Block(this,baseKey)) : bool(false) ))){
		HX_STACK_LINE(282)
		int inc = (int)0;		HX_STACK_VAR(inc,"inc");
		HX_STACK_LINE(283)
		::String ukey;		HX_STACK_VAR(ukey,"ukey");
		HX_STACK_LINE(284)
		while((true)){
			HX_STACK_LINE(286)
			int _g1 = (inc)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(286)
			::String _g2 = (baseKey + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(286)
			ukey = _g2;
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::system::frontEnds::BitmapFrontEnd_obj > __this,::String &ukey){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/BitmapFrontEnd.hx",287,0x91a05ae2)
					{
						HX_STACK_LINE(287)
						::flixel::graphics::FlxGraphic _g3 = __this->_cache->get(ukey);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(287)
						return (_g3 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(284)
			if ((!(((  ((this->_cache->exists(ukey))) ? bool(_Function_3_1::Block(this,ukey)) : bool(false) ))))){
				HX_STACK_LINE(284)
				break;
			}
		}
		HX_STACK_LINE(288)
		baseKey = ukey;
	}
	HX_STACK_LINE(290)
	return baseKey;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getUniqueKey,return )

::String BitmapFrontEnd_obj::getKeyWithSpacings( ::String baseKey,::flixel::math::FlxPoint frameSize,::flixel::math::FlxPoint frameSpacing,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getKeyWithSpacings",0x7857d512,"flixel.system.frontEnds.BitmapFrontEnd.getKeyWithSpacings","flixel/system/frontEnds/BitmapFrontEnd.hx",304,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseKey,"baseKey")
	HX_STACK_ARG(frameSize,"frameSize")
	HX_STACK_ARG(frameSpacing,"frameSpacing")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(305)
	::String result = baseKey;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(307)
	if (((region != null()))){
		HX_STACK_LINE(309)
		hx::AddEq(result,(((((((HX_CSTRING("_Region:") + region->x) + HX_CSTRING("_")) + region->y) + HX_CSTRING("_")) + region->width) + HX_CSTRING("_")) + region->height));
	}
	HX_STACK_LINE(312)
	hx::AddEq(result,(((((((HX_CSTRING("_FrameSize:") + frameSize->x) + HX_CSTRING("_")) + frameSize->y) + HX_CSTRING("_Spacing:")) + frameSpacing->x) + HX_CSTRING("_")) + frameSpacing->y));
	HX_STACK_LINE(314)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapFrontEnd_obj,getKeyWithSpacings,return )

Void BitmapFrontEnd_obj::remove( ::flixel::graphics::FlxGraphic graphic){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","remove",0x5bfef0d7,"flixel.system.frontEnds.BitmapFrontEnd.remove","flixel/system/frontEnds/BitmapFrontEnd.hx",323,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphic,"graphic")
		HX_STACK_LINE(323)
		if (((graphic != null()))){
			HX_STACK_LINE(324)
			this->removeByKey(graphic->key);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,remove,(void))

Void BitmapFrontEnd_obj::removeByKey( ::String key){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","removeByKey",0x593bffb1,"flixel.system.frontEnds.BitmapFrontEnd.removeByKey","flixel/system/frontEnds/BitmapFrontEnd.hx",333,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(333)
		if (((  (((key != null()))) ? bool(this->_cache->exists(key)) : bool(false) ))){
			HX_STACK_LINE(335)
			::flixel::graphics::FlxGraphic obj = this->_cache->get(key);		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(337)
			::openfl::_v2::Assets_obj::cache->bitmapData->remove(key);
			HX_STACK_LINE(339)
			this->_cache->remove(key);
			HX_STACK_LINE(340)
			obj->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeByKey,(void))

Void BitmapFrontEnd_obj::removeIfNoUse( ::flixel::graphics::FlxGraphic graphic){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","removeIfNoUse",0x6b036552,"flixel.system.frontEnds.BitmapFrontEnd.removeIfNoUse","flixel/system/frontEnds/BitmapFrontEnd.hx",346,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphic,"graphic")
		struct _Function_1_1{
			inline static bool Block( ::flixel::graphics::FlxGraphic &graphic){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/BitmapFrontEnd.hx",346,0x91a05ae2)
				{
					HX_STACK_LINE(346)
					int _g = graphic->get_useCount();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(346)
					return (_g == (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(346)
		if (((  (((graphic != null()))) ? bool(_Function_1_1::Block(graphic)) : bool(false) ))){
			HX_STACK_LINE(348)
			this->remove(graphic);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeIfNoUse,(void))

Void BitmapFrontEnd_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","clearCache",0xad367388,"flixel.system.frontEnds.BitmapFrontEnd.clearCache","flixel/system/frontEnds/BitmapFrontEnd.hx",357,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(358)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(360)
		if (((this->_cache == null()))){
			HX_STACK_LINE(362)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(362)
			this->_cache = _g;
		}
		HX_STACK_LINE(365)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(367)
				::flixel::graphics::FlxGraphic _g1 = this->_cache->get(key);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(367)
				obj = _g1;
				HX_STACK_LINE(368)
				if (((bool((obj != null())) && bool(!(obj->persist))))){
					HX_STACK_LINE(370)
					this->removeByKey(obj->key);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearCache,(void))

Void BitmapFrontEnd_obj::clearUnused( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","clearUnused",0x9cfedd10,"flixel.system.frontEnds.BitmapFrontEnd.clearUnused","flixel/system/frontEnds/BitmapFrontEnd.hx",380,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(381)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(383)
		if (((this->_cache != null()))){
			HX_STACK_LINE(385)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(387)
					::flixel::graphics::FlxGraphic _g = this->_cache->get(key);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(387)
					obj = _g;
					struct _Function_3_1{
						inline static bool Block( ::flixel::graphics::FlxGraphic &obj){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/BitmapFrontEnd.hx",388,0x91a05ae2)
							{
								HX_STACK_LINE(388)
								int _g1 = obj->get_useCount();		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(388)
								return (_g1 <= (int)0);
							}
							return null();
						}
					};
					HX_STACK_LINE(388)
					if (((  (((  (((  (((obj != null()))) ? bool(_Function_3_1::Block(obj)) : bool(false) ))) ? bool(!(obj->persist)) : bool(false) ))) ? bool(obj->get_destroyOnNoUse()) : bool(false) ))){
						HX_STACK_LINE(390)
						this->removeByKey(obj->key);
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearUnused,(void))


BitmapFrontEnd_obj::BitmapFrontEnd_obj()
{
}

void BitmapFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFrontEnd);
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(whitePixel,"whitePixel");
	HX_MARK_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_MARK_END_CLASS();
}

void BitmapFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(whitePixel,"whitePixel");
	HX_VISIT_MEMBER_NAME(_whitePixel,"_whitePixel");
}

Dynamic BitmapFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { return _cache; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		if (HX_FIELD_EQ(inName,"dumpCache") ) { return dumpCache_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { return inCallProp ? get_whitePixel() : whitePixel; }
		if (HX_FIELD_EQ(inName,"checkCache") ) { return checkCache_dyn(); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { return _whitePixel; }
		if (HX_FIELD_EQ(inName,"undumpCache") ) { return undumpCache_dyn(); }
		if (HX_FIELD_EQ(inName,"generateKey") ) { return generateKey_dyn(); }
		if (HX_FIELD_EQ(inName,"removeByKey") ) { return removeByKey_dyn(); }
		if (HX_FIELD_EQ(inName,"clearUnused") ) { return clearUnused_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getUniqueKey") ) { return getUniqueKey_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeIfNoUse") ) { return removeIfNoUse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAssetsReload") ) { return onAssetsReload_dyn(); }
		if (HX_FIELD_EQ(inName,"get_whitePixel") ) { return get_whitePixel_dyn(); }
		if (HX_FIELD_EQ(inName,"getKeyForClass") ) { return getKeyForClass_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findKeyForBitmap") ) { return findKeyForBitmap_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getKeyWithSpacings") ) { return getKeyWithSpacings_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { whitePixel=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { _whitePixel=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_cache"));
	outFields->push(HX_CSTRING("whitePixel"));
	outFields->push(HX_CSTRING("_whitePixel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(BitmapFrontEnd_obj,_cache),HX_CSTRING("_cache")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(BitmapFrontEnd_obj,whitePixel),HX_CSTRING("whitePixel")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(BitmapFrontEnd_obj,_whitePixel),HX_CSTRING("_whitePixel")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_cache"),
	HX_CSTRING("onAssetsReload"),
	HX_CSTRING("whitePixel"),
	HX_CSTRING("_whitePixel"),
	HX_CSTRING("get_whitePixel"),
	HX_CSTRING("onContext"),
	HX_CSTRING("dumpCache"),
	HX_CSTRING("undumpCache"),
	HX_CSTRING("checkCache"),
	HX_CSTRING("create"),
	HX_CSTRING("add"),
	HX_CSTRING("addGraphic"),
	HX_CSTRING("get"),
	HX_CSTRING("findKeyForBitmap"),
	HX_CSTRING("getKeyForClass"),
	HX_CSTRING("generateKey"),
	HX_CSTRING("getUniqueKey"),
	HX_CSTRING("getKeyWithSpacings"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeByKey"),
	HX_CSTRING("removeIfNoUse"),
	HX_CSTRING("clearCache"),
	HX_CSTRING("clearUnused"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class BitmapFrontEnd_obj::__mClass;

void BitmapFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.BitmapFrontEnd"), hx::TCanCast< BitmapFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void BitmapFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
