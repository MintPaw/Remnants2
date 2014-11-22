#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#define INCLUDED_flixel_addons_ui_FlxUITabMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/ui/FlxUIGroup.h>
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#include <flixel/addons/ui/interfaces/IResizable.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUITabMenu_obj : public ::flixel::addons::ui::FlxUIGroup_obj{
	public:
		typedef ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUITabMenu_obj OBJ_;
		FlxUITabMenu_obj();
		Void __construct(::flixel::FlxSprite back_,Array< ::flixel::addons::ui::interfaces::IFlxUIButton > tabs_,Dynamic tab_ids_and_labels_,::flixel::math::FlxPoint tab_offset,Dynamic __o_stretch_tabs,Dynamic tab_spacing,Array< ::String > tab_stacking);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUITabMenu_obj > __new(::flixel::FlxSprite back_,Array< ::flixel::addons::ui::interfaces::IFlxUIButton > tabs_,Dynamic tab_ids_and_labels_,::flixel::math::FlxPoint tab_offset,Dynamic __o_stretch_tabs,Dynamic tab_spacing,Array< ::String > tab_stacking);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUITabMenu_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::addons::ui::interfaces::IEventGetter_obj *()
			{ return new ::flixel::addons::ui::interfaces::IEventGetter_delegate_< FlxUITabMenu_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIClickable_delegate_< FlxUITabMenu_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IResizable_obj *()
			{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUITabMenu_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUITabMenu"); }

		int numTabs;
		virtual int get_numTabs( );
		Dynamic get_numTabs_dyn();

		virtual Void getEvent( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params);
		Dynamic getEvent_dyn();

		virtual Dynamic getRequest( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params);
		Dynamic getRequest_dyn();

		bool skipButtonUpdate;
		virtual bool set_skipButtonUpdate( bool b);
		Dynamic set_skipButtonUpdate_dyn();

		virtual Float get_width( );

		virtual Float get_height( );

		virtual Void resize( Float W,Float H);
		Dynamic resize_dyn();

		virtual int get_selected_tab( );
		Dynamic get_selected_tab_dyn();

		virtual int set_selected_tab( int i);
		Dynamic set_selected_tab_dyn();

		virtual ::String get_selected_tab_id( );
		Dynamic get_selected_tab_id_dyn();

		virtual ::String set_selected_tab_id( ::String str);
		Dynamic set_selected_tab_id_dyn();

		virtual Void destroy( );

		virtual ::flixel::addons::ui::interfaces::IFlxUIButton getTab( ::String id,Dynamic index);
		Dynamic getTab_dyn();

		virtual ::flixel::addons::ui::FlxUIGroup getTabGroup( ::String id,Dynamic index);
		Dynamic getTabGroup_dyn();

		virtual Void addGroup( ::flixel::addons::ui::FlxUIGroup g);
		Dynamic addGroup_dyn();

		virtual Void _onTabEvent( ::String id);
		Dynamic _onTabEvent_dyn();

		virtual Void stackTabs( );
		Dynamic stackTabs_dyn();

		virtual Void showTabId( ::String id);
		Dynamic showTabId_dyn();

		::flixel::FlxSprite _back;
		Array< ::flixel::addons::ui::interfaces::IFlxUIButton > _tabs;
		Array< ::Dynamic > _tab_groups;
		bool _stretch_tabs;
		Dynamic _tab_spacing;
		Array< ::String > _tab_stacking;
		::flixel::math::FlxPoint _tab_offset;
		::String _selected_tab_id;
		int _selected_tab;
		virtual int sortTabs( ::flixel::addons::ui::interfaces::IFlxUIButton a,::flixel::addons::ui::interfaces::IFlxUIButton b);
		Dynamic sortTabs_dyn();

		virtual Void showTabInt( int i);
		Dynamic showTabInt_dyn();

		virtual Void _showOnlyGroup( ::String id);
		Dynamic _showOnlyGroup_dyn();

		virtual ::flixel::addons::ui::interfaces::IFlxUIButton getFirstTab( );
		Dynamic getFirstTab_dyn();

		virtual Void distributeTabs( hx::Null< Float >  W);
		Dynamic distributeTabs_dyn();

		static ::String CLICK_EVENT;
		static ::String STACK_FRONT;
		static ::String STACK_BACK;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUITabMenu */ 
