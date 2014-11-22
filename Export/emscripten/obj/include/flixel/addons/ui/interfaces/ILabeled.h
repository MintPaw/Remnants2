#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#define INCLUDED_flixel_addons_ui_interfaces_ILabeled

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  ILabeled_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ILabeled_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::flixel::addons::ui::FlxUIText getLabel( )=0;
		Dynamic getLabel_dyn();
virtual ::flixel::addons::ui::FlxUIText setLabel( ::flixel::addons::ui::FlxUIText t)=0;
		Dynamic setLabel_dyn();
};

#define DELEGATE_flixel_addons_ui_interfaces_ILabeled \
virtual ::flixel::addons::ui::FlxUIText getLabel( ) { return mDelegate->getLabel();}  \
virtual Dynamic getLabel_dyn() { return mDelegate->getLabel_dyn();}  \
virtual ::flixel::addons::ui::FlxUIText setLabel( ::flixel::addons::ui::FlxUIText t) { return mDelegate->setLabel(t);}  \
virtual Dynamic setLabel_dyn() { return mDelegate->setLabel_dyn();}  \


template<typename IMPL>
class ILabeled_delegate_ : public ILabeled_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ILabeled_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_ILabeled
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_ILabeled */ 
