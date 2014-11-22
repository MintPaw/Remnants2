#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#define INCLUDED_flixel_addons_ui_FlxUIGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxTypedSpriteGroup.h>
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIGroup_obj : public ::flixel::group::FlxTypedSpriteGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef FlxUIGroup_obj OBJ_;
		FlxUIGroup_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUIGroup_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::IFlxSprite_obj *()
			{ return new ::flixel::IFlxSprite_delegate_< FlxUIGroup_obj >(this); }
		inline operator ::flixel::IFlxBasic_obj *()
			{ return new ::flixel::IFlxBasic_delegate_< FlxUIGroup_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUIGroup_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUIGroup"); }

		::String id;
		bool broadcastToFlxUI;
		bool autoBounds;
		virtual Void destroy( );

		virtual Dynamic add( Dynamic _tmp_Object);

		virtual Dynamic remove( Dynamic _tmp_Object,hx::Null< bool >  Splice);

		virtual bool hasThis( ::flixel::FlxSprite Object);
		Dynamic hasThis_dyn();

		virtual Void calcBounds( );
		Dynamic calcBounds_dyn();

		virtual Void floorAll( );
		Dynamic floorAll_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIGroup */ 
