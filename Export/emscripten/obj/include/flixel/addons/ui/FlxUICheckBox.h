#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#define INCLUDED_flixel_addons_ui_FlxUICheckBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/ui/FlxUIGroup.h>
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#include <flixel/addons/ui/interfaces/IHasParams.h>
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#include <flixel/addons/ui/interfaces/ILabeled.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUICheckBox_obj : public ::flixel::addons::ui::FlxUIGroup_obj{
	public:
		typedef ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUICheckBox_obj OBJ_;
		FlxUICheckBox_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic Box,Dynamic Check,::String Label,Dynamic __o_LabelW,Dynamic Params,Dynamic Callback);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUICheckBox_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic Box,Dynamic Check,::String Label,Dynamic __o_LabelW,Dynamic Params,Dynamic Callback);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUICheckBox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIClickable_delegate_< FlxUICheckBox_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::ILabeled_obj *()
			{ return new ::flixel::addons::ui::interfaces::ILabeled_delegate_< FlxUICheckBox_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
			{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUICheckBox_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::ICursorPointable_obj *()
			{ return new ::flixel::addons::ui::interfaces::ICursorPointable_delegate_< FlxUICheckBox_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUICheckBox"); }

		::flixel::FlxSprite box;
		::flixel::FlxSprite mark;
		::flixel::addons::ui::FlxUIButton button;
		Float max_width;
		bool checked;
		Dynamic params;
		bool textIsClickable;
		bool checkbox_dirty;
		Float textX;
		Float textY;
		Float box_space;
		bool skipButtonUpdate;
		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		virtual bool set_skipButtonUpdate( bool b);
		Dynamic set_skipButtonUpdate_dyn();

		virtual Dynamic set_params( Dynamic p);
		Dynamic set_params_dyn();

		virtual int set_color( int _tmp_Value);

		virtual ::flixel::addons::ui::FlxUIText setLabel( ::flixel::addons::ui::FlxUIText t);
		Dynamic setLabel_dyn();

		virtual ::flixel::addons::ui::FlxUIText getLabel( );
		Dynamic getLabel_dyn();

		virtual bool set_visible( bool Value);

		virtual Void anchorTime( ::flixel::util::FlxTimer f);
		Dynamic anchorTime_dyn();

		virtual Float set_textX( Float n);
		Dynamic set_textX_dyn();

		virtual Float set_textY( Float n);
		Dynamic set_textY_dyn();

		virtual Void anchorLabelX( );
		Dynamic anchorLabelX_dyn();

		virtual Void anchorLabelY( );
		Dynamic anchorLabelY_dyn();

		virtual Void destroy( );

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual Void update( Float elapsed);

		virtual bool set_checked( bool b);
		Dynamic set_checked_dyn();

		virtual Void _clickCheck( );
		Dynamic _clickCheck_dyn();

		static ::String CLICK_EVENT;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUICheckBox */ 
