#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#define INCLUDED_flixel_addons_ui_FlxUISpriteButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/ui/FlxUITypedButton.h>
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISpriteButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUISpriteButton_obj : public ::flixel::addons::ui::FlxUITypedButton_obj{
	public:
		typedef ::flixel::addons::ui::FlxUITypedButton_obj super;
		typedef FlxUISpriteButton_obj OBJ_;
		FlxUISpriteButton_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::flixel::FlxSprite Asset,Dynamic OnClick);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUISpriteButton_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::flixel::FlxSprite Asset,Dynamic OnClick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUISpriteButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::flixel::IFlxSprite_obj *()
			{ return new ::flixel::IFlxSprite_delegate_< FlxUISpriteButton_obj >(this); }
		inline operator ::flixel::IFlxBasic_obj *()
			{ return new ::flixel::IFlxBasic_delegate_< FlxUISpriteButton_obj >(this); }
		inline operator ::flixel::util::IFlxDestroyable_obj *()
			{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxUISpriteButton_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUISpriteButton_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIButton_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIButton_delegate_< FlxUISpriteButton_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
			{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUISpriteButton_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUISpriteButton"); }

		virtual Void resize( Float W,Float H);

		virtual Void autoCenterLabel( );

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUISpriteButton */ 
