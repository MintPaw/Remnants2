#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#define INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/IFlxSprite.h>
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxUIWidget_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFlxUIWidget_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_flixel_addons_ui_interfaces_IFlxUIWidget \


template<typename IMPL>
class IFlxUIWidget_delegate_ : public IFlxUIWidget_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxUIWidget_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IFlxUIWidget
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget */ 
