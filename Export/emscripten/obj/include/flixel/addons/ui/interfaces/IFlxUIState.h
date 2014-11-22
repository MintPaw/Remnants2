#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#define INCLUDED_flixel_addons_ui_interfaces_IFlxUIState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/ui/interfaces/IEventGetter.h>
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxUIState_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFlxUIState_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void forceFocus( bool b,::flixel::addons::ui::interfaces::IFlxUIWidget thing)=0;
		Dynamic forceFocus_dyn();
};

#define DELEGATE_flixel_addons_ui_interfaces_IFlxUIState \
virtual Void forceFocus( bool b,::flixel::addons::ui::interfaces::IFlxUIWidget thing) { return mDelegate->forceFocus(b,thing);}  \
virtual Dynamic forceFocus_dyn() { return mDelegate->forceFocus_dyn();}  \


template<typename IMPL>
class IFlxUIState_delegate_ : public IFlxUIState_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxUIState_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IFlxUIState
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFlxUIState */ 
