#ifndef INCLUDED_flixel_addons_ui_FlxUIList
#define INCLUDED_flixel_addons_ui_FlxUIList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/ui/FlxUIGroup.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIList)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIList_obj : public ::flixel::addons::ui::FlxUIGroup_obj{
	public:
		typedef ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUIList_obj OBJ_;
		FlxUIList_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::flixel::addons::ui::interfaces::IFlxUIWidget > Widgets,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H,::String __o_MoreString,Dynamic __o_Stacking,Dynamic __o_Spacing,::flixel::math::FlxPoint PrevButtonOffset,::flixel::math::FlxPoint NextButtonOffset,::flixel::addons::ui::interfaces::IFlxUIButton PrevButton,::flixel::addons::ui::interfaces::IFlxUIButton NextButton);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUIList_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::flixel::addons::ui::interfaces::IFlxUIWidget > Widgets,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H,::String __o_MoreString,Dynamic __o_Stacking,Dynamic __o_Spacing,::flixel::math::FlxPoint PrevButtonOffset,::flixel::math::FlxPoint NextButtonOffset,::flixel::addons::ui::interfaces::IFlxUIButton PrevButton,::flixel::addons::ui::interfaces::IFlxUIButton NextButton);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxUIList"); }

		int scrollIndex;
		virtual int set_scrollIndex( int i);
		Dynamic set_scrollIndex_dyn();

		int stacking;
		virtual int set_stacking( int Stacking);
		Dynamic set_stacking_dyn();

		Float spacing;
		virtual Float set_spacing( Float Spacing);
		Dynamic set_spacing_dyn();

		::flixel::math::FlxPoint prevButtonOffset;
		::flixel::math::FlxPoint nextButtonOffset;
		::flixel::addons::ui::interfaces::IFlxUIButton prevButton;
		::flixel::addons::ui::interfaces::IFlxUIButton nextButton;
		::String moreString;
		virtual ::String set_moreString( ::String str);
		Dynamic set_moreString_dyn();

		int amountPrevious;
		int amountNext;
		virtual Void destroy( );

		virtual Void setSize( Float W,Float H);

		virtual Dynamic add( Dynamic _tmp_Object);

		virtual ::flixel::FlxSprite safeAdd( ::flixel::FlxSprite Object);
		Dynamic safeAdd_dyn();

		bool _skipRefresh;
		virtual ::String getMoreString( int i);
		Dynamic getMoreString_dyn();

		virtual bool set_visible( bool Value);

		virtual Void onClick( int i);
		Dynamic onClick_dyn();

		virtual Void refreshList( );
		Dynamic refreshList_dyn();

		virtual Float get_width( );

		virtual Float get_height( );

		virtual Float set_width( Float W);

		virtual Float set_height( Float H);

		static int STACK_HORIZONTAL;
		static int STACK_VERTICAL;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIList */ 
