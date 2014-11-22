#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#define INCLUDED_flixel_addons_ui_interfaces_IEventGetter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IEventGetter_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IEventGetter_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void getEvent( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params)=0;
		Dynamic getEvent_dyn();
virtual Dynamic getRequest( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params)=0;
		Dynamic getRequest_dyn();
};

#define DELEGATE_flixel_addons_ui_interfaces_IEventGetter \
virtual Void getEvent( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params) { return mDelegate->getEvent(name,sender,data,params);}  \
virtual Dynamic getEvent_dyn() { return mDelegate->getEvent_dyn();}  \
virtual Dynamic getRequest( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params) { return mDelegate->getRequest(name,sender,data,params);}  \
virtual Dynamic getRequest_dyn() { return mDelegate->getRequest_dyn();}  \


template<typename IMPL>
class IEventGetter_delegate_ : public IEventGetter_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IEventGetter_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IEventGetter
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IEventGetter */ 
