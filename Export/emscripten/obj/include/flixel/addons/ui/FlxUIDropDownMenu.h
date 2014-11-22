#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownMenu
#define INCLUDED_flixel_addons_ui_FlxUIDropDownMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/ui/FlxUIGroup.h>
#include <flixel/addons/ui/interfaces/IHasParams.h>
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI9SliceSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownHeader)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownMenu)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS3(flixel,addons,ui,StrIdLabel)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIDropDownMenu_obj : public ::flixel::addons::ui::FlxUIGroup_obj{
	public:
		typedef ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUIDropDownMenu_obj OBJ_;
		FlxUIDropDownMenu_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::Dynamic > DataList,Dynamic Callback,::flixel::addons::ui::FlxUIDropDownHeader Header,::flixel::addons::ui::FlxUI9SliceSprite DropPanel,Array< ::Dynamic > ButtonList,Dynamic UIControlCallback);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUIDropDownMenu_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::Dynamic > DataList,Dynamic Callback,::flixel::addons::ui::FlxUIDropDownHeader Header,::flixel::addons::ui::FlxUI9SliceSprite DropPanel,Array< ::Dynamic > ButtonList,Dynamic UIControlCallback);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIDropDownMenu_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::IFlxSprite_obj *()
			{ return new ::flixel::IFlxSprite_delegate_< FlxUIDropDownMenu_obj >(this); }
		inline operator ::flixel::IFlxBasic_obj *()
			{ return new ::flixel::IFlxBasic_delegate_< FlxUIDropDownMenu_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIClickable_delegate_< FlxUIDropDownMenu_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUIDropDownMenu_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
			{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUIDropDownMenu_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUIDropDownMenu"); }

		bool skipButtonUpdate;
		virtual bool set_skipButtonUpdate( bool b);
		Dynamic set_skipButtonUpdate_dyn();

		::String _selectedId;
		::String _selectedLabel;
		virtual ::String get_selectedId( );
		Dynamic get_selectedId_dyn();

		virtual ::String set_selectedId( ::String str);
		Dynamic set_selectedId_dyn();

		virtual ::String get_selectedLabel( );
		Dynamic get_selectedLabel_dyn();

		virtual ::String set_selectedLabel( ::String str);
		Dynamic set_selectedLabel_dyn();

		::flixel::addons::ui::FlxUIDropDownHeader header;
		Array< ::Dynamic > list;
		::flixel::addons::ui::FlxUI9SliceSprite dropPanel;
		Dynamic params;
		virtual Dynamic set_params( Dynamic p);
		Dynamic set_params_dyn();

		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		virtual Void setData( Array< ::Dynamic > DataList);
		Dynamic setData_dyn();

		virtual Void selectSomething( ::String id,::String label);
		Dynamic selectSomething_dyn();

		virtual ::flixel::addons::ui::FlxUIButton makeListButton( int i,::String Label,::String Name);
		Dynamic makeListButton_dyn();

		virtual Void changeLabelByIndex( int i,::String NewLabel);
		Dynamic changeLabelByIndex_dyn();

		virtual Void changeLabelById( ::String id,::String NewLabel);
		Dynamic changeLabelById_dyn();

		virtual ::flixel::addons::ui::FlxUIButton getBtnByIndex( int i);
		Dynamic getBtnByIndex_dyn();

		virtual ::flixel::addons::ui::FlxUIButton getBtnById( ::String id);
		Dynamic getBtnById_dyn();

		virtual Void update( Float elapsed);

		virtual Void destroy( );

		virtual Void showList( bool b);
		Dynamic showList_dyn();

		virtual Void onDropdown( );
		Dynamic onDropdown_dyn();

		virtual Void onClickItem( int i);
		Dynamic onClickItem_dyn();

		static ::String CLICK_EVENT;
		static Array< ::Dynamic > makeStrIdLabelArray( Array< ::String > StringArray,hx::Null< bool >  UseIndexID);
		static Dynamic makeStrIdLabelArray_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIDropDownMenu */ 
