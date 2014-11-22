#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetType
#include <openfl/_v2/AssetType.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FontDef_obj::__construct(::String Name,::String __o_Extension,::String __o_File,::openfl::_v2::text::TextFormat Format,::flixel::addons::ui::BorderDef Border)
{
HX_STACK_FRAME("flixel.addons.ui.FontDef","new",0x626f8177,"flixel.addons.ui.FontDef.new","flixel/addons/ui/FontDef.hx",24,0x96f2befa)
HX_STACK_THIS(this)
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(__o_Extension,"Extension")
HX_STACK_ARG(__o_File,"File")
HX_STACK_ARG(Format,"Format")
HX_STACK_ARG(Border,"Border")
::String Extension = __o_Extension.Default(HX_CSTRING(".ttf"));
::String File = __o_File.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(25)
	this->name = Name;
	HX_STACK_LINE(26)
	this->extension = Extension;
	HX_STACK_LINE(27)
	this->file = File;
	HX_STACK_LINE(28)
	this->format = Format;
	HX_STACK_LINE(29)
	if (((this->format == null()))){
		HX_STACK_LINE(30)
		::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		this->format = _g;
	}
	HX_STACK_LINE(32)
	this->border = Border;
	HX_STACK_LINE(33)
	if (((this->border == null()))){
		HX_STACK_LINE(34)
		::flixel::addons::ui::BorderDef _g1 = ::flixel::addons::ui::BorderDef_obj::__new(::flixel::text::FlxTextBorderStyle_obj::NONE,(int)0,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(34)
		this->border = _g1;
	}
}
;
	return null();
}

//FontDef_obj::~FontDef_obj() { }

Dynamic FontDef_obj::__CreateEmpty() { return  new FontDef_obj; }
hx::ObjectPtr< FontDef_obj > FontDef_obj::__new(::String Name,::String __o_Extension,::String __o_File,::openfl::_v2::text::TextFormat Format,::flixel::addons::ui::BorderDef Border)
{  hx::ObjectPtr< FontDef_obj > result = new FontDef_obj();
	result->__construct(Name,__o_Extension,__o_File,Format,Border);
	return result;}

Dynamic FontDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FontDef_obj > result = new FontDef_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FontDef_obj::apply( ::openfl::_v2::text::TextField textField,::flixel::text::FlxText flxText){
{
		HX_STACK_FRAME("flixel.addons.ui.FontDef","apply",0x0976ea45,"flixel.addons.ui.FontDef.apply","flixel/addons/ui/FontDef.hx",64,0x96f2befa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(flxText,"flxText")
		HX_STACK_LINE(65)
		if (((textField != null()))){
			HX_STACK_LINE(66)
			textField->setTextFormat(this->format,null(),null());
		}
		HX_STACK_LINE(68)
		if (((flxText != null()))){
			HX_STACK_LINE(69)
			if (((bool((this->file == HX_CSTRING(""))) || bool((this->file == null()))))){
				HX_STACK_LINE(70)
				flxText->setFormat(null(),this->format->size,this->format->color,this->format->align,this->border->style,this->border->color,null());
			}
			else{
				HX_STACK_LINE(72)
				flxText->setFormat(this->file,this->format->size,this->format->color,this->format->align,this->border->style,this->border->color,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FontDef_obj,apply,(void))

Void FontDef_obj::fromStr( ::String str,hx::Null< int >  __o_recursion){
int recursion = __o_recursion.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FontDef","fromStr",0x8e8201fe,"flixel.addons.ui.FontDef.fromStr","flixel/addons/ui/FontDef.hx",83,0x96f2befa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(recursion,"recursion")
{
		HX_STACK_LINE(84)
		if (((recursion > (int)3))){
			HX_STACK_LINE(85)
			return null();
		}
		HX_STACK_LINE(88)
		::String style = this->getFontStyle(str);		HX_STACK_VAR(style,"style");
		HX_STACK_LINE(89)
		this->setFontStyle(style);
		HX_STACK_LINE(91)
		::String extension = HX_CSTRING("");		HX_STACK_VAR(extension,"extension");
		HX_STACK_LINE(92)
		bool exists = false;		HX_STACK_VAR(exists,"exists");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			Array< ::String > _g1 = ::flixel::addons::ui::FontDef_obj::EXTENSIONS;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(94)
			while((true)){
				HX_STACK_LINE(94)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(94)
					break;
				}
				HX_STACK_LINE(94)
				::String ext = _g1->__get(_g);		HX_STACK_VAR(ext,"ext");
				HX_STACK_LINE(94)
				++(_g);
				HX_STACK_LINE(95)
				int _g2 = str.indexOf(ext,null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(95)
				if (((_g2 != (int)-1))){
					HX_STACK_LINE(96)
					if ((::openfl::_v2::Assets_obj::exists((str + extension),::openfl::_v2::AssetType_obj::FONT))){
						HX_STACK_LINE(97)
						::String _g11 = ::StringTools_obj::replace(str,extension,HX_CSTRING(""));		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(97)
						this->name = _g11;
						HX_STACK_LINE(98)
						this->file = str;
						HX_STACK_LINE(99)
						extension = ext;
						HX_STACK_LINE(100)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(106)
		if (((extension == HX_CSTRING("")))){
			HX_STACK_LINE(107)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			Array< ::String > _g1 = ::flixel::addons::ui::FontDef_obj::EXTENSIONS;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(107)
			while((true)){
				HX_STACK_LINE(107)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(107)
					break;
				}
				HX_STACK_LINE(107)
				::String ext = _g1->__get(_g);		HX_STACK_VAR(ext,"ext");
				HX_STACK_LINE(107)
				++(_g);
				HX_STACK_LINE(108)
				if ((::openfl::_v2::Assets_obj::exists((str + ext),::openfl::_v2::AssetType_obj::FONT))){
					HX_STACK_LINE(109)
					extension = ext;
					HX_STACK_LINE(110)
					this->name = str;
					HX_STACK_LINE(111)
					this->file = (str + extension);
					HX_STACK_LINE(112)
					extension = ext;
					HX_STACK_LINE(113)
					break;
				}
			}
		}
		else{
			HX_STACK_LINE(119)
			::String _g2 = this->stripFontExtensions(str);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(119)
			str = _g2;
			HX_STACK_LINE(120)
			::String fontStyle = this->getFontStyle(str);		HX_STACK_VAR(fontStyle,"fontStyle");
			HX_STACK_LINE(121)
			if (((fontStyle != HX_CSTRING("")))){
				HX_STACK_LINE(122)
				::String _g3 = str.substr((str.length - (int)1),(int)1);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(122)
				str = _g3;
				HX_STACK_LINE(123)
				this->fromStr(str,(recursion + (int)1));
			}
			else{
				HX_STACK_LINE(126)
				this->fromStr(str,(recursion + (int)1));
			}
		}
		HX_STACK_LINE(130)
		this->setFontStyle(style);
		HX_STACK_LINE(133)
		return null(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FontDef_obj,fromStr,(void))

::String FontDef_obj::stripFontExtensions( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FontDef","stripFontExtensions",0x4ace96d2,"flixel.addons.ui.FontDef.stripFontExtensions","flixel/addons/ui/FontDef.hx",142,0x96f2befa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		Array< ::String > _g1 = ::flixel::addons::ui::FontDef_obj::EXTENSIONS;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			::String ext = _g1->__get(_g);		HX_STACK_VAR(ext,"ext");
			HX_STACK_LINE(143)
			++(_g);
			HX_STACK_LINE(144)
			int _g2 = str.indexOf(ext,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(144)
			if (((_g2 != (int)-1))){
				HX_STACK_LINE(145)
				::String _g11 = ::StringTools_obj::replace(str,ext,HX_CSTRING(""));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(145)
				str = _g11;
			}
		}
	}
	HX_STACK_LINE(148)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,stripFontExtensions,return )

::String FontDef_obj::getFontStyle( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FontDef","getFontStyle",0x0566d975,"flixel.addons.ui.FontDef.getFontStyle","flixel/addons/ui/FontDef.hx",157,0x96f2befa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(158)
	::String _g = this->stripFontExtensions(str);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(158)
	str = _g;
	HX_STACK_LINE(159)
	::String lastChar = str.substr((str.length - (int)1),(int)1);		HX_STACK_VAR(lastChar,"lastChar");
	HX_STACK_LINE(160)
	if (((bool((lastChar != HX_CSTRING(""))) && bool((lastChar != null()))))){
		HX_STACK_LINE(161)
		::String _g1 = lastChar.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(161)
		lastChar = _g1;
		HX_STACK_LINE(162)
		::String _switch_1 = (lastChar);
		if (  ( _switch_1==HX_CSTRING("b"))){
			HX_STACK_LINE(163)
			return HX_CSTRING("b");
		}
		else if (  ( _switch_1==HX_CSTRING("i"))){
			HX_STACK_LINE(164)
			return HX_CSTRING("i");
		}
		else if (  ( _switch_1==HX_CSTRING("z"))){
			HX_STACK_LINE(165)
			return HX_CSTRING("z");
		}
		else  {
			HX_STACK_LINE(166)
			return HX_CSTRING("");
		}
;
;
	}
	HX_STACK_LINE(169)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,getFontStyle,return )

Void FontDef_obj::setFontStyle( ::String str){
{
		HX_STACK_FRAME("flixel.addons.ui.FontDef","setFontStyle",0x1a5ffce9,"flixel.addons.ui.FontDef.setFontStyle","flixel/addons/ui/FontDef.hx",172,0x96f2befa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(173)
		::String _g = str.toLowerCase();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(173)
		str = _g;
		HX_STACK_LINE(174)
		::String _switch_2 = (str);
		if (  ( _switch_2==HX_CSTRING("b")) ||  ( _switch_2==HX_CSTRING("bold"))){
			HX_STACK_LINE(176)
			this->format->bold = true;
			HX_STACK_LINE(177)
			this->format->italic = false;
		}
		else if (  ( _switch_2==HX_CSTRING("i")) ||  ( _switch_2==HX_CSTRING("italic"))){
			HX_STACK_LINE(179)
			this->format->bold = false;
			HX_STACK_LINE(180)
			this->format->italic = true;
		}
		else if (  ( _switch_2==HX_CSTRING("z")) ||  ( _switch_2==HX_CSTRING("bi")) ||  ( _switch_2==HX_CSTRING("ib")) ||  ( _switch_2==HX_CSTRING("bold-italic")) ||  ( _switch_2==HX_CSTRING("bolditalic")) ||  ( _switch_2==HX_CSTRING("italicbold")) ||  ( _switch_2==HX_CSTRING("all")) ||  ( _switch_2==HX_CSTRING("both"))){
			HX_STACK_LINE(182)
			this->format->bold = true;
			HX_STACK_LINE(183)
			this->format->italic = true;
		}
		else  {
			HX_STACK_LINE(185)
			this->format->bold = false;
			HX_STACK_LINE(186)
			this->format->italic = false;
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,setFontStyle,(void))

Array< ::String > FontDef_obj::EXTENSIONS;

::flixel::addons::ui::FontDef FontDef_obj::copyFromTextField( ::openfl::_v2::text::TextField t){
	HX_STACK_FRAME("flixel.addons.ui.FontDef","copyFromTextField",0xa0f3d465,"flixel.addons.ui.FontDef.copyFromTextField","flixel/addons/ui/FontDef.hx",38,0x96f2befa)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(39)
	::openfl::_v2::text::TextFormat dtf = t->get_defaultTextFormat();		HX_STACK_VAR(dtf,"dtf");
	HX_STACK_LINE(40)
	::flixel::addons::ui::FontDef fd = ::flixel::addons::ui::FontDef_obj::__new(HX_CSTRING(""),null(),null(),null(),null());		HX_STACK_VAR(fd,"fd");
	HX_STACK_LINE(41)
	fd->fromStr(dtf->font,null());
	HX_STACK_LINE(42)
	fd->format->font = dtf->font;
	HX_STACK_LINE(43)
	fd->format->size = dtf->size;
	HX_STACK_LINE(44)
	fd->format->color = dtf->color;
	HX_STACK_LINE(45)
	fd->format->bold = dtf->bold;
	HX_STACK_LINE(46)
	fd->format->italic = dtf->italic;
	HX_STACK_LINE(47)
	fd->format->underline = dtf->underline;
	HX_STACK_LINE(48)
	fd->format->url = dtf->url;
	HX_STACK_LINE(49)
	fd->format->target = dtf->target;
	HX_STACK_LINE(50)
	fd->format->align = dtf->align;
	HX_STACK_LINE(51)
	return fd;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,copyFromTextField,return )

::flixel::addons::ui::FontDef FontDef_obj::copyFromFlxText( ::flixel::text::FlxText t){
	HX_STACK_FRAME("flixel.addons.ui.FontDef","copyFromFlxText",0x2447f7d7,"flixel.addons.ui.FontDef.copyFromFlxText","flixel/addons/ui/FontDef.hx",54,0x96f2befa)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(55)
	::flixel::addons::ui::FontDef fd = ::flixel::addons::ui::FontDef_obj::copyFromTextField(t->textField);		HX_STACK_VAR(fd,"fd");
	HX_STACK_LINE(56)
	fd->fromStr(t->_font,null());
	HX_STACK_LINE(57)
	fd->border->style = t->borderStyle;
	HX_STACK_LINE(58)
	fd->border->color = t->borderColor;
	HX_STACK_LINE(59)
	fd->border->quality = t->borderQuality;
	HX_STACK_LINE(60)
	fd->border->size = t->borderSize;
	HX_STACK_LINE(61)
	return fd;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,copyFromFlxText,return )


FontDef_obj::FontDef_obj()
{
}

void FontDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FontDef);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(extension,"extension");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_END_CLASS();
}

void FontDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(extension,"extension");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(border,"border");
}

Dynamic FontDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromStr") ) { return fromStr_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extension") ) { return extension; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { return EXTENSIONS; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFontStyle") ) { return getFontStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"setFontStyle") ) { return setFontStyle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"copyFromFlxText") ) { return copyFromFlxText_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"copyFromTextField") ) { return copyFromTextField_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"stripFontExtensions") ) { return stripFontExtensions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FontDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< ::flixel::addons::ui::BorderDef >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extension") ) { extension=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FontDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("extension"));
	outFields->push(HX_CSTRING("file"));
	outFields->push(HX_CSTRING("format"));
	outFields->push(HX_CSTRING("border"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("EXTENSIONS"),
	HX_CSTRING("copyFromTextField"),
	HX_CSTRING("copyFromFlxText"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FontDef_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(FontDef_obj,size),HX_CSTRING("size")},
	{hx::fsString,(int)offsetof(FontDef_obj,extension),HX_CSTRING("extension")},
	{hx::fsString,(int)offsetof(FontDef_obj,file),HX_CSTRING("file")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(FontDef_obj,format),HX_CSTRING("format")},
	{hx::fsObject /*::flixel::addons::ui::BorderDef*/ ,(int)offsetof(FontDef_obj,border),HX_CSTRING("border")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("size"),
	HX_CSTRING("extension"),
	HX_CSTRING("file"),
	HX_CSTRING("format"),
	HX_CSTRING("border"),
	HX_CSTRING("apply"),
	HX_CSTRING("fromStr"),
	HX_CSTRING("stripFontExtensions"),
	HX_CSTRING("getFontStyle"),
	HX_CSTRING("setFontStyle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontDef_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FontDef_obj::EXTENSIONS,"EXTENSIONS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontDef_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontDef_obj::EXTENSIONS,"EXTENSIONS");
};

#endif

Class FontDef_obj::__mClass;

void FontDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FontDef"), hx::TCanCast< FontDef_obj> ,sStaticFields,sMemberFields,
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

void FontDef_obj::__boot()
{
	EXTENSIONS= Array_obj< ::String >::__new().Add(HX_CSTRING(".ttf")).Add(HX_CSTRING(".otf"));
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
