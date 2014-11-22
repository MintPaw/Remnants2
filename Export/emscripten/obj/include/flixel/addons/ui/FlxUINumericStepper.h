#ifndef INCLUDED_flixel_addons_ui_FlxUINumericStepper
#define INCLUDED_flixel_addons_ui_FlxUINumericStepper

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
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUINumericStepper)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUINumericStepper_obj : public ::flixel::addons::ui::FlxUIGroup_obj{
	public:
		typedef ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUINumericStepper_obj OBJ_;
		FlxUINumericStepper_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_StepSize,hx::Null< Float >  __o_DefaultValue,hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max,hx::Null< int >  __o_Decimals,hx::Null< int >  __o_Stack,::flixel::text::FlxText TextField,::flixel::addons::ui::FlxUITypedButton ButtonPlus,::flixel::addons::ui::FlxUITypedButton ButtonMinus,hx::Null< bool >  __o_IsPercent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUINumericStepper_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_StepSize,hx::Null< Float >  __o_DefaultValue,hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max,hx::Null< int >  __o_Decimals,hx::Null< int >  __o_Stack,::flixel::text::FlxText TextField,::flixel::addons::ui::FlxUITypedButton ButtonPlus,::flixel::addons::ui::FlxUITypedButton ButtonMinus,hx::Null< bool >  __o_IsPercent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUINumericStepper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::IFlxSprite_obj *()
			{ return new ::flixel::IFlxSprite_delegate_< FlxUINumericStepper_obj >(this); }
		inline operator ::flixel::IFlxBasic_obj *()
			{ return new ::flixel::IFlxBasic_delegate_< FlxUINumericStepper_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIClickable_delegate_< FlxUINumericStepper_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUINumericStepper_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
			{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUINumericStepper_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUINumericStepper"); }

		::flixel::addons::ui::FlxUITypedButton button_plus;
		::flixel::addons::ui::FlxUITypedButton button_minus;
		::flixel::text::FlxText text_field;
		Float stepSize;
		int decimals;
		Float min;
		Float max;
		Float value;
		int stack;
		bool isPercent;
		Dynamic params;
		virtual Dynamic set_params( Dynamic p);
		Dynamic set_params_dyn();

		bool skipButtonUpdate;
		virtual bool set_skipButtonUpdate( bool b);
		Dynamic set_skipButtonUpdate_dyn();

		virtual int set_color( int _tmp_Value);

		virtual Float set_min( Float f);
		Dynamic set_min_dyn();

		virtual Float set_max( Float f);
		Dynamic set_max_dyn();

		virtual Float set_value( Float f);
		Dynamic set_value_dyn();

		virtual int set_decimals( int i);
		Dynamic set_decimals_dyn();

		virtual bool set_isPercent( bool b);
		Dynamic set_isPercent_dyn();

		virtual int set_stack( int s);
		Dynamic set_stack_dyn();

		virtual ::String decimalize( Float f,int digits);
		Dynamic decimalize_dyn();

		virtual Void _onInputTextEvent( ::String text,::String action);
		Dynamic _onInputTextEvent_dyn();

		virtual Void _onPlus( );
		Dynamic _onPlus_dyn();

		virtual Void _onMinus( );
		Dynamic _onMinus_dyn();

		virtual Void _doCallback( ::String event_name);
		Dynamic _doCallback_dyn();

		static int STACK_VERTICAL;
		static int STACK_HORIZONTAL;
		static ::String CLICK_EVENT;
		static ::String EDIT_EVENT;
		static ::String CHANGE_EVENT;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUINumericStepper */ 
