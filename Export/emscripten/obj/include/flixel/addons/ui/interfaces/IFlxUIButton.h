#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#define INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/util/IFlxDestroyable.h>
#include <flixel/addons/ui/interfaces/IHasParams.h>
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxUIButton_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFlxUIButton_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void autoCenterLabel( )=0;
		Dynamic autoCenterLabel_dyn();
virtual Void loadGraphicSlice9( Array< ::String > assets,hx::Null< int >  W,hx::Null< int >  H,Array< ::Dynamic > slice9,hx::Null< int >  Tile,hx::Null< Float >  Resize_Ratio,hx::Null< bool >  isToggle,hx::Null< int >  src_w,hx::Null< int >  src_h,Array< int > frame_indeces)=0;
		Dynamic loadGraphicSlice9_dyn();
virtual Void loadGraphicsMultiple( Array< ::String > assets,::String Key)=0;
		Dynamic loadGraphicsMultiple_dyn();
virtual Void loadGraphicsUpOverDown( Dynamic asset,hx::Null< bool >  for_toggle,::String key)=0;
		Dynamic loadGraphicsUpOverDown_dyn();
virtual Void forceStateHandler( ::String event)=0;
		Dynamic forceStateHandler_dyn();
};

#define DELEGATE_flixel_addons_ui_interfaces_IFlxUIButton \
virtual Void autoCenterLabel( ) { return mDelegate->autoCenterLabel();}  \
virtual Dynamic autoCenterLabel_dyn() { return mDelegate->autoCenterLabel_dyn();}  \
virtual Void loadGraphicSlice9( Array< ::String > assets,hx::Null< int >  W,hx::Null< int >  H,Array< ::Dynamic > slice9,hx::Null< int >  Tile,hx::Null< Float >  Resize_Ratio,hx::Null< bool >  isToggle,hx::Null< int >  src_w,hx::Null< int >  src_h,Array< int > frame_indeces) { return mDelegate->loadGraphicSlice9(assets,W,H,slice9,Tile,Resize_Ratio,isToggle,src_w,src_h,frame_indeces);}  \
virtual Dynamic loadGraphicSlice9_dyn() { return mDelegate->loadGraphicSlice9_dyn();}  \
virtual Void loadGraphicsMultiple( Array< ::String > assets,::String Key) { return mDelegate->loadGraphicsMultiple(assets,Key);}  \
virtual Dynamic loadGraphicsMultiple_dyn() { return mDelegate->loadGraphicsMultiple_dyn();}  \
virtual Void loadGraphicsUpOverDown( Dynamic asset,hx::Null< bool >  for_toggle,::String key) { return mDelegate->loadGraphicsUpOverDown(asset,for_toggle,key);}  \
virtual Dynamic loadGraphicsUpOverDown_dyn() { return mDelegate->loadGraphicsUpOverDown_dyn();}  \
virtual Void forceStateHandler( ::String event) { return mDelegate->forceStateHandler(event);}  \
virtual Dynamic forceStateHandler_dyn() { return mDelegate->forceStateHandler_dyn();}  \


template<typename IMPL>
class IFlxUIButton_delegate_ : public IFlxUIButton_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxUIButton_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IFlxUIButton
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton */ 
