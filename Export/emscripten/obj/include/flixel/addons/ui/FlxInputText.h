#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#define INCLUDED_flixel_addons_ui_FlxInputText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/text/FlxText.h>
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxInputText_obj : public ::flixel::text::FlxText_obj{
	public:
		typedef ::flixel::text::FlxText_obj super;
		typedef FlxInputText_obj OBJ_;
		FlxInputText_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Width,::String Text,hx::Null< int >  __o_size,hx::Null< int >  __o_TextColor,hx::Null< int >  __o_BackgroundColor,hx::Null< bool >  __o_EmbeddedFont);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxInputText_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Width,::String Text,hx::Null< int >  __o_size,hx::Null< int >  __o_TextColor,hx::Null< int >  __o_BackgroundColor,hx::Null< bool >  __o_EmbeddedFont);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxInputText_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxInputText"); }

		::EReg customFilterPattern;
		virtual ::EReg set_customFilterPattern( ::EReg cfp);
		Dynamic set_customFilterPattern_dyn();

		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		bool background;
		int caretColor;
		virtual int set_caretColor( int i);
		Dynamic set_caretColor_dyn();

		int caretWidth;
		virtual int set_caretWidth( int i);
		Dynamic set_caretWidth_dyn();

		Dynamic params;
		bool hasFocus;
		int caretIndex;
		int forceCase;
		int maxLength;
		int lines;
		int filterMode;
		int fieldBorderColor;
		int fieldBorderThickness;
		int backgroundColor;
		::flixel::FlxSprite backgroundSprite;
		::flixel::util::FlxTimer _caretTimer;
		::flixel::FlxSprite caret;
		::flixel::FlxSprite fieldBorderSprite;
		Dynamic _scrollBoundIndeces;
		Array< ::Dynamic > _charBoundaries;
		int lastScroll;
		virtual Void destroy( );

		virtual Void draw( );

		virtual Void drawSprite( ::flixel::FlxSprite Sprite);
		Dynamic drawSprite_dyn();

		virtual Void update( Float elapsed);

		virtual Void onKeyDown( ::openfl::_v2::events::KeyboardEvent e);
		Dynamic onKeyDown_dyn();

		virtual Void onChange( ::String action);
		Dynamic onChange_dyn();

		virtual ::String insertSubstring( ::String Original,::String Insert,int Index);
		Dynamic insertSubstring_dyn();

		virtual int getCaretIndexFromPoint( ::flixel::math::FlxPoint Landing);
		Dynamic getCaretIndexFromPoint_dyn();

		virtual ::openfl::_v2::geom::Rectangle getCharBoundaries( int charIndex);
		Dynamic getCharBoundaries_dyn();

		virtual ::String set_text( ::String Text);

		virtual int getCharIndexAtPoint( Float X,Float Y);
		Dynamic getCharIndexAtPoint_dyn();

		virtual Void prepareCharBoundaries( int numChars);
		Dynamic prepareCharBoundaries_dyn();

		virtual Void onSetTextCheck( );
		Dynamic onSetTextCheck_dyn();

		virtual Void calcFrame( hx::Null< bool >  RunOnCpp);

		virtual Void toggleCaret( ::flixel::util::FlxTimer timer);
		Dynamic toggleCaret_dyn();

		virtual ::String filter( ::String text);
		Dynamic filter_dyn();

		virtual Dynamic set_params( Dynamic p);
		Dynamic set_params_dyn();

		virtual Float set_x( Float X);

		virtual Float set_y( Float Y);

		virtual bool set_hasFocus( bool newFocus);
		Dynamic set_hasFocus_dyn();

		virtual ::String getAlignStr( );
		Dynamic getAlignStr_dyn();

		virtual int set_caretIndex( int newCaretIndex);
		Dynamic set_caretIndex_dyn();

		virtual int set_forceCase( int Value);
		Dynamic set_forceCase_dyn();

		virtual Float set_size( Float Value);

		virtual int set_maxLength( int Value);
		Dynamic set_maxLength_dyn();

		virtual int set_lines( int Value);
		Dynamic set_lines_dyn();

		virtual bool get_passwordMode( );
		Dynamic get_passwordMode_dyn();

		virtual bool set_passwordMode( bool value);
		Dynamic set_passwordMode_dyn();

		virtual int set_filterMode( int Value);
		Dynamic set_filterMode_dyn();

		virtual int set_fieldBorderColor( int Value);
		Dynamic set_fieldBorderColor_dyn();

		virtual int set_fieldBorderThickness( int Value);
		Dynamic set_fieldBorderThickness_dyn();

		virtual int set_backgroundColor( int Value);
		Dynamic set_backgroundColor_dyn();

		static int NO_FILTER;
		static int ONLY_ALPHA;
		static int ONLY_NUMERIC;
		static int ONLY_ALPHANUMERIC;
		static int CUSTOM_FILTER;
		static int ALL_CASES;
		static int UPPER_CASE;
		static int LOWER_CASE;
		static ::String BACKSPACE_ACTION;
		static ::String DELETE_ACTION;
		static ::String ENTER_ACTION;
		static ::String INPUT_ACTION;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxInputText */ 
