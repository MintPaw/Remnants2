#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void ColorTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.misc.ColorTween","new",0x82c0df68,"flixel.tweens.misc.ColorTween.new","flixel/tweens/misc/ColorTween.hx",11,0xe14ed287)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(11)
	super::__construct(Options);
}
;
	return null();
}

//ColorTween_obj::~ColorTween_obj() { }

Dynamic ColorTween_obj::__CreateEmpty() { return  new ColorTween_obj; }
hx::ObjectPtr< ColorTween_obj > ColorTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< ColorTween_obj > result = new ColorTween_obj();
	result->__construct(Options);
	return result;}

Dynamic ColorTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTween_obj > result = new ColorTween_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ColorTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.ColorTween","destroy",0x7f5b6002,"flixel.tweens.misc.ColorTween.destroy","flixel/tweens/misc/ColorTween.hx",26,0xe14ed287)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->super::destroy();
		HX_STACK_LINE(28)
		this->sprite = null();
	}
return null();
}


::flixel::tweens::misc::ColorTween ColorTween_obj::tween( Float Duration,int FromColor,int ToColor,::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.tweens.misc.ColorTween","tween",0xdc858b73,"flixel.tweens.misc.ColorTween.tween","flixel/tweens/misc/ColorTween.hx",41,0xe14ed287)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FromColor,"FromColor")
	HX_STACK_ARG(ToColor,"ToColor")
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(42)
	int _g = this->startColor = FromColor;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	this->color = _g;
	HX_STACK_LINE(43)
	this->endColor = ToColor;
	HX_STACK_LINE(44)
	this->duration = Duration;
	HX_STACK_LINE(45)
	this->sprite = Sprite;
	HX_STACK_LINE(46)
	this->start();
	HX_STACK_LINE(47)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(ColorTween_obj,tween,return )

Void ColorTween_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.misc.ColorTween","update",0x76358c01,"flixel.tweens.misc.ColorTween.update","flixel/tweens/misc/ColorTween.hx",51,0xe14ed287)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(52)
		this->super::update(elapsed);
		HX_STACK_LINE(53)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int Color1 = this->startColor;		HX_STACK_VAR(Color1,"Color1");
			HX_STACK_LINE(53)
			int Color2 = this->endColor;		HX_STACK_VAR(Color2,"Color2");
			HX_STACK_LINE(53)
			Float Factor = this->scale;		HX_STACK_VAR(Factor,"Factor");
			HX_STACK_LINE(53)
			int r = ::Std_obj::_int(((((((int((int(Color2) >> int((int)16))) & int((int)255))) - ((int((int(Color1) >> int((int)16))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)16))) & int((int)255)))));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(53)
			int g = ::Std_obj::_int(((((((int((int(Color2) >> int((int)8))) & int((int)255))) - ((int((int(Color1) >> int((int)8))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)8))) & int((int)255)))));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(53)
			int b = ::Std_obj::_int(((((((int(Color2) & int((int)255))) - ((int(Color1) & int((int)255))))) * Factor) + ((int(Color1) & int((int)255)))));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(53)
			int a = ::Std_obj::_int(((((((int((int(Color2) >> int((int)24))) & int((int)255))) - ((int((int(Color1) >> int((int)24))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)24))) & int((int)255)))));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
				struct _Function_3_1{
					inline static int Block( int &g,int &r,int &b,int &color,int &a){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tweens/misc/ColorTween.hx",53,0xe14ed287)
						{
							HX_STACK_LINE(53)
							{
								HX_STACK_LINE(53)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(53)
								hx::OrEq(color,(int(((  (((r > (int)255))) ? int((int)255) : int((  (((r < (int)0))) ? int((int)0) : int(r) )) ))) << int((int)16)));
								HX_STACK_LINE(53)
								r;
							}
							HX_STACK_LINE(53)
							{
								HX_STACK_LINE(53)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(53)
								hx::OrEq(color,(int(((  (((g > (int)255))) ? int((int)255) : int((  (((g < (int)0))) ? int((int)0) : int(g) )) ))) << int((int)8)));
								HX_STACK_LINE(53)
								g;
							}
							HX_STACK_LINE(53)
							{
								HX_STACK_LINE(53)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(53)
								if (((b > (int)255))){
									HX_STACK_LINE(53)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(53)
									if (((b < (int)0))){
										HX_STACK_LINE(53)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(53)
										hx::OrEq(color,b);
									}
								}
								HX_STACK_LINE(53)
								b;
							}
							HX_STACK_LINE(53)
							{
								HX_STACK_LINE(53)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(53)
								hx::OrEq(color,(int(((  (((a > (int)255))) ? int((int)255) : int((  (((a < (int)0))) ? int((int)0) : int(a) )) ))) << int((int)24)));
								HX_STACK_LINE(53)
								a;
							}
							HX_STACK_LINE(53)
							return color;
						}
						return null();
					}
				};
				HX_STACK_LINE(53)
				_g = _Function_3_1::Block(g,r,b,color,a);
			}
		}
		HX_STACK_LINE(53)
		this->color = _g;
		HX_STACK_LINE(55)
		if (((this->sprite != null()))){
			HX_STACK_LINE(57)
			this->sprite->set_color(this->color);
			HX_STACK_LINE(58)
			this->sprite->set_alpha((Float(((int((int(this->color) >> int((int)24))) & int((int)255)))) / Float((int)255)));
		}
	}
return null();
}



ColorTween_obj::ColorTween_obj()
{
}

void ColorTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTween);
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(startColor,"startColor");
	HX_MARK_MEMBER_NAME(endColor,"endColor");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(startColor,"startColor");
	HX_VISIT_MEMBER_NAME(endColor,"endColor");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ColorTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { return endColor; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { return startColor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { endColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { startColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("startColor"));
	outFields->push(HX_CSTRING("endColor"));
	outFields->push(HX_CSTRING("sprite"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ColorTween_obj,color),HX_CSTRING("color")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,startColor),HX_CSTRING("startColor")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,endColor),HX_CSTRING("endColor")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ColorTween_obj,sprite),HX_CSTRING("sprite")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("color"),
	HX_CSTRING("startColor"),
	HX_CSTRING("endColor"),
	HX_CSTRING("sprite"),
	HX_CSTRING("destroy"),
	HX_CSTRING("tween"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

#endif

Class ColorTween_obj::__mClass;

void ColorTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.misc.ColorTween"), hx::TCanCast< ColorTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ColorTween_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
