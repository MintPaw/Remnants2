#ifndef INCLUDED_flixel_addons_ui_FlxUIRadioGroup
#define INCLUDED_flixel_addons_ui_FlxUIRadioGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/ui/FlxUIGroup.h>
#include <flixel/addons/ui/interfaces/IHasParams.h>
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,ButtonLabelStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,CheckStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIList)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIRadioGroup)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIRadioGroup_obj : public ::flixel::addons::ui::FlxUIGroup_obj{
	public:
		typedef ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUIRadioGroup_obj OBJ_;
		FlxUIRadioGroup_obj();
		Void __construct(Float X,Float Y,Array< ::String > ids_,Array< ::String > labels_,Dynamic callback_,hx::Null< Float >  __o_y_space_,hx::Null< int >  __o_width_,hx::Null< int >  __o_height_,hx::Null< int >  __o_label_width_,::String __o_MoreString,::flixel::math::FlxPoint PrevButtonOffset,::flixel::math::FlxPoint NextButtonOffset,::flixel::addons::ui::interfaces::IFlxUIButton PrevButton,::flixel::addons::ui::interfaces::IFlxUIButton NextButton);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUIRadioGroup_obj > __new(Float X,Float Y,Array< ::String > ids_,Array< ::String > labels_,Dynamic callback_,hx::Null< Float >  __o_y_space_,hx::Null< int >  __o_width_,hx::Null< int >  __o_height_,hx::Null< int >  __o_label_width_,::String __o_MoreString,::flixel::math::FlxPoint PrevButtonOffset,::flixel::math::FlxPoint NextButtonOffset,::flixel::addons::ui::interfaces::IFlxUIButton PrevButton,::flixel::addons::ui::interfaces::IFlxUIButton NextButton);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIRadioGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIClickable_delegate_< FlxUIRadioGroup_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
			{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUIRadioGroup_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUIRadioGroup"); }

		::flixel::addons::ui::CheckStyle activeStyle;
		virtual ::flixel::addons::ui::CheckStyle set_activeStyle( ::flixel::addons::ui::CheckStyle b);
		Dynamic set_activeStyle_dyn();

		::flixel::addons::ui::CheckStyle inactiveStyle;
		virtual ::flixel::addons::ui::CheckStyle set_inactiveStyle( ::flixel::addons::ui::CheckStyle b);
		Dynamic set_inactiveStyle_dyn();

		int numRadios;
		virtual int get_numRadios( );
		Dynamic get_numRadios_dyn();

		bool skipButtonUpdate;
		virtual bool set_skipButtonUpdate( bool b);
		Dynamic set_skipButtonUpdate_dyn();

		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		Dynamic params;
		virtual Dynamic set_params( Dynamic p);
		Dynamic set_params_dyn();

		bool fixedSize;
		virtual Float set_width( Float Value);

		virtual Float set_height( Float Value);

		virtual Void loadGraphics( Dynamic Box,Dynamic Dot);
		Dynamic loadGraphics_dyn();

		virtual Void destroy( );

		virtual bool updateLabel( int i,::String label_);
		Dynamic updateLabel_dyn();

		virtual bool updateId( int i,::String id_);
		Dynamic updateId_dyn();

		virtual Void show( bool b);
		Dynamic show_dyn();

		virtual Void updateRadios( Array< ::String > ids_,Array< ::String > labels_);
		Dynamic updateRadios_dyn();

		virtual Array< ::Dynamic > getRadios( );
		Dynamic getRadios_dyn();

		virtual ::String getLabel( int i);
		Dynamic getLabel_dyn();

		virtual ::String getId( int i);
		Dynamic getId_dyn();

		virtual bool getIsVisible( int i);
		Dynamic getIsVisible_dyn();

		virtual bool get_clickable( );
		Dynamic get_clickable_dyn();

		virtual bool set_clickable( bool b);
		Dynamic set_clickable_dyn();

		virtual int get_selectedIndex( );
		Dynamic get_selectedIndex_dyn();

		virtual int set_selectedIndex( int i);
		Dynamic set_selectedIndex_dyn();

		virtual ::String get_selectedLabel( );
		Dynamic get_selectedLabel_dyn();

		virtual ::String set_selectedLabel( ::String str);
		Dynamic set_selectedLabel_dyn();

		virtual ::String get_selectedId( );
		Dynamic get_selectedId_dyn();

		virtual ::String set_selectedId( ::String str);
		Dynamic set_selectedId_dyn();

		virtual ::flixel::math::FlxPoint setLineScroll( int scroll,Dynamic max_items);
		Dynamic setLineScroll_dyn();

		virtual Void setRadioActive( int i,bool b);
		Dynamic setRadioActive_dyn();

		Array< bool > _list_active;
		::flixel::addons::ui::FlxUIList _list;
		Dynamic _box_asset;
		Dynamic _dot_asset;
		Array< ::String > _labels;
		Array< ::String > _ids;
		int _label_width;
		int _width;
		int _height;
		Float _y_space;
		int _selected;
		bool _clickable;
		Array< ::Dynamic > _list_radios;
		virtual Void _refreshRadios( );
		Dynamic _refreshRadios_dyn();

		virtual Void updateActives( );
		Dynamic updateActives_dyn();

		virtual ::flixel::addons::ui::CheckStyle makeActiveStyle( );
		Dynamic makeActiveStyle_dyn();

		virtual Void _onCheckBoxEvent( ::flixel::addons::ui::FlxUICheckBox checkBox);
		Dynamic _onCheckBoxEvent_dyn();

		virtual bool _onClick( ::flixel::addons::ui::FlxUICheckBox checkBox,bool doCallback);
		Dynamic _onClick_dyn();

		static ::String CLICK_EVENT;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIRadioGroup */ 
