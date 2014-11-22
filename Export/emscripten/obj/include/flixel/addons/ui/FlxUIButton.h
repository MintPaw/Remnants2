#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#define INCLUDED_flixel_addons_ui_FlxUIButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/ui/FlxUITypedButton.h>
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#include <flixel/addons/ui/interfaces/ILabeled.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,ButtonLabelStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,text,FlxTextBorderStyle)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIButton_obj : public ::flixel::addons::ui::FlxUITypedButton_obj{
	public:
		typedef ::flixel::addons::ui::FlxUITypedButton_obj super;
		typedef FlxUIButton_obj OBJ_;
		FlxUIButton_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUIButton_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::IFlxSprite_obj *()
			{ return new ::flixel::IFlxSprite_delegate_< FlxUIButton_obj >(this); }
		inline operator ::flixel::IFlxBasic_obj *()
			{ return new ::flixel::IFlxBasic_delegate_< FlxUIButton_obj >(this); }
		inline operator ::flixel::util::IFlxDestroyable_obj *()
			{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxUIButton_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUIButton_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::ILabeled_obj *()
			{ return new ::flixel::addons::ui::interfaces::ILabeled_delegate_< FlxUIButton_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIButton_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIButton_delegate_< FlxUIButton_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
			{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUIButton_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUIButton"); }

		::openfl::_v2::display::BitmapData _noIconGraphicsBkup;
		::flixel::addons::ui::ButtonLabelStyle up_style;
		::flixel::addons::ui::ButtonLabelStyle over_style;
		::flixel::addons::ui::ButtonLabelStyle down_style;
		::flixel::addons::ui::ButtonLabelStyle up_toggle_style;
		::flixel::addons::ui::ButtonLabelStyle over_toggle_style;
		::flixel::addons::ui::ButtonLabelStyle down_toggle_style;
		virtual ::flixel::text::FlxText setLabelFormat( ::String Font,hx::Null< Float >  Size,hx::Null< int >  Color,::String Alignment,::flixel::text::FlxTextBorderStyle BorderStyle,hx::Null< int >  BorderColor,hx::Null< bool >  Embedded);
		Dynamic setLabelFormat_dyn();

		virtual Void autoCenterLabel( );

		virtual ::flixel::FlxSprite clone( );

		virtual Void copyStyle( ::flixel::addons::ui::FlxUITypedButton other);

		virtual ::flixel::addons::ui::FlxUIText setLabel( ::flixel::addons::ui::FlxUIText t);
		Dynamic setLabel_dyn();

		virtual ::flixel::addons::ui::FlxUIText getLabel( );
		Dynamic getLabel_dyn();

		virtual Void resize( Float W,Float H);

		virtual Void addIcon( ::flixel::FlxSprite icon,hx::Null< int >  X,hx::Null< int >  Y,Dynamic center);
		Dynamic addIcon_dyn();

		virtual Void removeIcon( );
		Dynamic removeIcon_dyn();

		virtual Void changeIcon( ::flixel::FlxSprite newIcon);
		Dynamic changeIcon_dyn();

		virtual Void destroy( );

		virtual Void resetHelpers( );

		virtual Void onDownHandler( );

		virtual Void onOverHandler( );

		virtual Void onOutHandler( );

		virtual Void onUpHandler( );

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIButton */ 
