#ifndef INCLUDED_mintDungeon_DrawableObject
#define INCLUDED_mintDungeon_DrawableObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(mintDungeon,DrawableObject)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
namespace mintDungeon{


class HXCPP_CLASS_ATTRIBUTES  DrawableObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawableObject_obj OBJ_;
		DrawableObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DrawableObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawableObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DrawableObject"); }

		Array< ::Dynamic > tiles;
		Array< ::Dynamic > outline;
		virtual Void generateOutline( );
		Dynamic generateOutline_dyn();

};

} // end namespace mintDungeon

#endif /* INCLUDED_mintDungeon_DrawableObject */ 
