#ifndef INCLUDED_mintDungeon_Room
#define INCLUDED_mintDungeon_Room

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <mintDungeon/DrawableObject.h>
HX_DECLARE_CLASS1(mintDungeon,DrawableObject)
HX_DECLARE_CLASS1(mintDungeon,Room)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)
namespace mintDungeon{


class HXCPP_CLASS_ATTRIBUTES  Room_obj : public ::mintDungeon::DrawableObject_obj{
	public:
		typedef ::mintDungeon::DrawableObject_obj super;
		typedef Room_obj OBJ_;
		Room_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Room_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Room_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Room"); }

		::openfl::_v2::geom::Rectangle location;
};

} // end namespace mintDungeon

#endif /* INCLUDED_mintDungeon_Room */ 
