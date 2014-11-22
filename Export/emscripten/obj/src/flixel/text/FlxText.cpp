#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#include <flixel/text/_FlxText/FlxTextFormatRange.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetType
#include <openfl/_v2/AssetType.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
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
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormatAlign
#include <openfl/_v2/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextLineMetrics
#include <openfl/_v2/text/TextLineMetrics.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
namespace flixel{
namespace text{

Void FlxText_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< Float >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_FRAME("flixel.text.FlxText","new",0x8fca03a2,"flixel.text.FlxText.new","flixel/text/FlxText.hx",33,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_FieldWidth,"FieldWidth")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_EmbeddedFont,"EmbeddedFont")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float FieldWidth = __o_FieldWidth.Default(0);
Float Size = __o_Size.Default(8);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(144)
	this->_regen = true;
	HX_STACK_LINE(137)
	this->_formatRanges = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(102)
	this->borderQuality = (int)1;
	HX_STACK_LINE(95)
	this->borderSize = (int)1;
	HX_STACK_LINE(90)
	this->borderColor = (int)0;
	HX_STACK_LINE(85)
	this->borderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE;
	HX_STACK_LINE(159)
	super::__construct(X,Y,null());
	HX_STACK_LINE(161)
	bool setTextEmpty = false;		HX_STACK_VAR(setTextEmpty,"setTextEmpty");
	HX_STACK_LINE(162)
	if (((bool((Text == null())) || bool((Text == HX_CSTRING("")))))){
		HX_STACK_LINE(169)
		Text = HX_CSTRING("");
		HX_STACK_LINE(171)
		setTextEmpty = true;
	}
	HX_STACK_LINE(174)
	::openfl::_v2::text::TextField _g = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(174)
	this->textField = _g;
	HX_STACK_LINE(175)
	this->textField->set_selectable(false);
	HX_STACK_LINE(176)
	this->textField->set_multiline(true);
	HX_STACK_LINE(177)
	this->textField->set_wordWrap(true);
	HX_STACK_LINE(178)
	::openfl::_v2::text::TextFormat _g1 = ::openfl::_v2::text::TextFormat_obj::__new(null(),Size,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(178)
	this->_defaultFormat = _g1;
	HX_STACK_LINE(179)
	this->set_font(::flixel::system::FlxAssets_obj::FONT_DEFAULT);
	HX_STACK_LINE(180)
	::openfl::_v2::text::TextFormat _g2 = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(180)
	this->_formatAdjusted = _g2;
	HX_STACK_LINE(181)
	this->textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(182)
	this->textField->set_text(Text);
	HX_STACK_LINE(183)
	this->set_fieldWidth(FieldWidth);
	HX_STACK_LINE(184)
	this->textField->set_embedFonts(EmbeddedFont);
	HX_STACK_LINE(190)
	this->textField->set_height((  (((Text.length <= (int)0))) ? Float((int)1) : Float((int)10) ));
	HX_STACK_LINE(192)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(193)
	this->set_moves(false);
	HX_STACK_LINE(195)
	::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("text"));		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(196)
	int graphicWidth;		HX_STACK_VAR(graphicWidth,"graphicWidth");
	HX_STACK_LINE(196)
	if (((FieldWidth <= (int)0))){
		HX_STACK_LINE(196)
		graphicWidth = (int)1;
	}
	else{
		HX_STACK_LINE(196)
		graphicWidth = ::Std_obj::_int(FieldWidth);
	}
	HX_STACK_LINE(197)
	this->makeGraphic(graphicWidth,(int)1,(int)0,false,key);
	HX_STACK_LINE(206)
	if (((Text != HX_CSTRING("")))){
		HX_STACK_LINE(208)
		this->calcFrame(null());
	}
	HX_STACK_LINE(212)
	::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(212)
	{
		HX_STACK_LINE(212)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(212)
		point->_inPool = false;
		HX_STACK_LINE(212)
		_g3 = point;
	}
	HX_STACK_LINE(212)
	this->shadowOffset = _g3;
}
;
	return null();
}

//FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< Float >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return result;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void FlxText_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","destroy",0x1704293c,"flixel.text.FlxText.destroy","flixel/text/FlxText.hx",219,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		this->textField = null();
		HX_STACK_LINE(221)
		this->_font = null();
		HX_STACK_LINE(222)
		this->_defaultFormat = null();
		HX_STACK_LINE(223)
		this->_formatAdjusted = null();
		HX_STACK_LINE(224)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->shadowOffset);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(224)
		this->shadowOffset = _g;
		HX_STACK_LINE(225)
		this->super::destroy();
	}
return null();
}


Void FlxText_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","drawFrame",0xd9b5be4b,"flixel.text.FlxText.drawFrame","flixel/text/FlxText.hx",229,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(230)
		this->_regen = (bool(this->_regen) || bool(Force));
		HX_STACK_LINE(231)
		this->super::drawFrame(Force);
	}
return null();
}


bool FlxText_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
	HX_STACK_FRAME("flixel.text.FlxText","stampOnAtlas",0x66244e67,"flixel.text.FlxText.stampOnAtlas","flixel/text/FlxText.hx",243,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(atlas,"atlas")
	HX_STACK_LINE(244)
	if ((this->_regen)){
		HX_STACK_LINE(246)
		this->regenGraphics();
	}
	HX_STACK_LINE(249)
	::flixel::graphics::atlas::FlxNode node = atlas->addNode(this->graphic->bitmap,this->graphic->key);		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(250)
	bool result = (node != null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(252)
	if (((node != null()))){
		HX_STACK_LINE(254)
		::flixel::graphics::frames::FlxImageFrame _g = node->getImageFrame();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		this->set_frames(_g);
	}
	HX_STACK_LINE(257)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,stampOnAtlas,return )

Void FlxText_obj::applyMarkup( ::String input,Array< ::Dynamic > rules){
{
		HX_STACK_FRAME("flixel.text.FlxText","applyMarkup",0x660988f8,"flixel.text.FlxText.applyMarkup","flixel/text/FlxText.hx",278,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(input,"input")
		HX_STACK_ARG(rules,"rules")
		HX_STACK_LINE(279)
		if (((bool((rules == null())) || bool((rules->length == (int)0))))){
			HX_STACK_LINE(281)
			return null();
		}
		HX_STACK_LINE(284)
		this->clearFormats();
		HX_STACK_LINE(286)
		Array< int > rangeStarts = Array_obj< int >::__new();		HX_STACK_VAR(rangeStarts,"rangeStarts");
		HX_STACK_LINE(287)
		Array< int > rangeEnds = Array_obj< int >::__new();		HX_STACK_VAR(rangeEnds,"rangeEnds");
		HX_STACK_LINE(288)
		Array< ::Dynamic > rulesToApply = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(rulesToApply,"rulesToApply");
		HX_STACK_LINE(290)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(291)
			while((true)){
				HX_STACK_LINE(291)
				if ((!(((_g < rules->length))))){
					HX_STACK_LINE(291)
					break;
				}
				HX_STACK_LINE(291)
				::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(rule,"rule");
				HX_STACK_LINE(291)
				++(_g);
				HX_STACK_LINE(293)
				if (((bool((rule->marker != null())) && bool((rule->format != null()))))){
					HX_STACK_LINE(295)
					bool start = false;		HX_STACK_VAR(start,"start");
					HX_STACK_LINE(296)
					int _g1 = input.indexOf(rule->marker,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(296)
					if (((_g1 != (int)-1))){
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(298)
							int _g11 = input.length;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(298)
							while((true)){
								HX_STACK_LINE(298)
								if ((!(((_g2 < _g11))))){
									HX_STACK_LINE(298)
									break;
								}
								HX_STACK_LINE(298)
								int charIndex = (_g2)++;		HX_STACK_VAR(charIndex,"charIndex");
								HX_STACK_LINE(300)
								::String _char = input.charAt(charIndex);		HX_STACK_VAR(_char,"char");
								HX_STACK_LINE(301)
								if (((_char == rule->marker))){
									HX_STACK_LINE(303)
									if ((!(start))){
										HX_STACK_LINE(305)
										start = true;
										HX_STACK_LINE(306)
										rangeStarts->push(charIndex);
										HX_STACK_LINE(307)
										rulesToApply->push(rule);
									}
									else{
										HX_STACK_LINE(311)
										start = false;
										HX_STACK_LINE(312)
										rangeEnds->push(charIndex);
									}
								}
							}
						}
						HX_STACK_LINE(316)
						if ((start)){
							HX_STACK_LINE(319)
							rangeEnds->push((int)-1);
						}
					}
					HX_STACK_LINE(322)
					(i)++;
				}
			}
		}
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(327)
			while((true)){
				HX_STACK_LINE(327)
				if ((!(((_g < rules->length))))){
					HX_STACK_LINE(327)
					break;
				}
				HX_STACK_LINE(327)
				::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(rule,"rule");
				HX_STACK_LINE(327)
				++(_g);
				HX_STACK_LINE(329)
				while((true)){
					HX_STACK_LINE(329)
					int _g1 = input.indexOf(rule->marker,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(329)
					if ((!(((_g1 != (int)-1))))){
						HX_STACK_LINE(329)
						break;
					}
					HX_STACK_LINE(331)
					::String _g2 = ::StringTools_obj::replace(input,rule->marker,HX_CSTRING(""));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(331)
					input = _g2;
				}
			}
		}
		HX_STACK_LINE(336)
		{
			HX_STACK_LINE(336)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(336)
			int _g = rangeStarts->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(336)
			while((true)){
				HX_STACK_LINE(336)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(336)
					break;
				}
				HX_STACK_LINE(336)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(339)
				int delIndex = rangeStarts->__get(i1);		HX_STACK_VAR(delIndex,"delIndex");
				HX_STACK_LINE(341)
				int markerLength = rulesToApply->__get(i1).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >()->marker.length;		HX_STACK_VAR(markerLength,"markerLength");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(344)
					int _g2 = rangeStarts->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(344)
					while((true)){
						HX_STACK_LINE(344)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(344)
							break;
						}
						HX_STACK_LINE(344)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(346)
						if (((rangeStarts->__get(j) > delIndex))){
							HX_STACK_LINE(348)
							hx::SubEq(rangeStarts[j],markerLength);
						}
						HX_STACK_LINE(350)
						if (((rangeEnds->__get(j) > delIndex))){
							HX_STACK_LINE(352)
							hx::SubEq(rangeEnds[j],markerLength);
						}
					}
				}
				HX_STACK_LINE(357)
				delIndex = rangeEnds->__get(i1);
				HX_STACK_LINE(360)
				{
					HX_STACK_LINE(360)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(360)
					int _g2 = rangeStarts->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(360)
					while((true)){
						HX_STACK_LINE(360)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(360)
							break;
						}
						HX_STACK_LINE(360)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(362)
						if (((rangeStarts->__get(j) > delIndex))){
							HX_STACK_LINE(364)
							hx::SubEq(rangeStarts[j],markerLength);
						}
						HX_STACK_LINE(366)
						if (((rangeEnds->__get(j) > delIndex))){
							HX_STACK_LINE(368)
							hx::SubEq(rangeEnds[j],markerLength);
						}
					}
				}
			}
		}
		HX_STACK_LINE(374)
		this->set_text(input);
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(377)
			int _g = rangeStarts->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(377)
					break;
				}
				HX_STACK_LINE(377)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(379)
				this->addFormat(rulesToApply->__get(i1).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >()->format,rangeStarts->__get(i1),rangeEnds->__get(i1));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyMarkup,(void))

Void FlxText_obj::addFormat( ::flixel::text::FlxTextFormat Format,hx::Null< int >  __o_Start,hx::Null< int >  __o_End){
int Start = __o_Start.Default(-1);
int End = __o_End.Default(-1);
	HX_STACK_FRAME("flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",391,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Format,"Format")
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
{
		HX_STACK_LINE(392)
		::flixel::text::_FlxText::FlxTextFormatRange _g = ::flixel::text::_FlxText::FlxTextFormatRange_obj::__new(Format,Start,End);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(392)
		this->_formatRanges->push(_g);

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(::flixel::text::_FlxText::FlxTextFormatRange left,::flixel::text::_FlxText::FlxTextFormatRange right){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/text/FlxText.hx",396,0xdf165a6e)
			HX_STACK_ARG(left,"left")
			HX_STACK_ARG(right,"right")
			{
				HX_STACK_LINE(396)
				if (((left->range->start < right->range->start))){
					HX_STACK_LINE(396)
					return (int)-1;
				}
				else{
					HX_STACK_LINE(396)
					return (int)1;
				}
				HX_STACK_LINE(396)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(394)
		this->_formatRanges->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(398)
		this->_regen = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFormat,(void))

Void FlxText_obj::removeFormat( ::flixel::text::FlxTextFormat Format,Dynamic Start,Dynamic End){
{
		HX_STACK_FRAME("flixel.text.FlxText","removeFormat",0xa79a7f19,"flixel.text.FlxText.removeFormat","flixel/text/FlxText.hx",406,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Format,"Format")
		HX_STACK_ARG(Start,"Start")
		HX_STACK_ARG(End,"End")
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(407)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(407)
			Array< ::Dynamic > _g1 = this->_formatRanges;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(407)
			while((true)){
				HX_STACK_LINE(407)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(407)
					break;
				}
				HX_STACK_LINE(407)
				::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g1->__get(_g).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
				HX_STACK_LINE(407)
				++(_g);
				HX_STACK_LINE(409)
				if (((formatRange->format == Format))){
					HX_STACK_LINE(411)
					if (((bool((bool((Start != null())) && bool((End != null())))) && bool(((bool((Start > formatRange->range->end)) || bool((End < formatRange->range->start)))))))){
						HX_STACK_LINE(414)
						continue;
					}
					HX_STACK_LINE(417)
					this->_formatRanges->remove(formatRange);
				}
			}
		}
		HX_STACK_LINE(420)
		this->_regen = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,removeFormat,(void))

Void FlxText_obj::clearFormats( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","clearFormats",0xf58bc7cd,"flixel.text.FlxText.clearFormats","flixel/text/FlxText.hx",427,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(428)
		this->_formatRanges = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(429)
		{
			HX_STACK_LINE(429)
			this->textField->set_defaultTextFormat(this->_defaultFormat);
			HX_STACK_LINE(429)
			this->textField->setTextFormat(this->_defaultFormat,null(),null());
			HX_STACK_LINE(429)
			this->_regen = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFormats,(void))

::flixel::text::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< Float >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,::flixel::text::FlxTextBorderStyle BorderStyle,hx::Null< int >  __o_BorderColor,hx::Null< bool >  __o_Embedded){
Float Size = __o_Size.Default(8);
int Color = __o_Color.Default(-1);
int BorderColor = __o_BorderColor.Default(0);
bool Embedded = __o_Embedded.Default(true);
	HX_STACK_FRAME("flixel.text.FlxText","setFormat",0x685d153b,"flixel.text.FlxText.setFormat","flixel/text/FlxText.hx",447,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_ARG(BorderStyle,"BorderStyle")
	HX_STACK_ARG(BorderColor,"BorderColor")
	HX_STACK_ARG(Embedded,"Embedded")
{
		HX_STACK_LINE(448)
		if (((BorderStyle == null()))){
			HX_STACK_LINE(448)
			BorderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE;
		}
		else{
			HX_STACK_LINE(448)
			BorderStyle = BorderStyle;
		}
		HX_STACK_LINE(450)
		if ((Embedded)){
			HX_STACK_LINE(452)
			this->set_font(Font);
		}
		else{
			HX_STACK_LINE(454)
			if (((Font != null()))){
				HX_STACK_LINE(456)
				this->set_systemFont(Font);
			}
		}
		HX_STACK_LINE(459)
		this->set_size(Size);
		HX_STACK_LINE(460)
		this->set_color(Color);
		HX_STACK_LINE(461)
		this->set_alignment(Alignment);
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			Float Size1 = (int)1;		HX_STACK_VAR(Size1,"Size1");
			HX_STACK_LINE(462)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(462)
			this->set_borderStyle(BorderStyle);
			HX_STACK_LINE(462)
			this->set_borderColor(BorderColor);
			HX_STACK_LINE(462)
			this->set_borderSize(Size1);
			HX_STACK_LINE(462)
			this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(464)
		{
			HX_STACK_LINE(464)
			this->textField->set_defaultTextFormat(this->_defaultFormat);
			HX_STACK_LINE(464)
			this->textField->setTextFormat(this->_defaultFormat,null(),null());
			HX_STACK_LINE(464)
			this->_regen = true;
		}
		HX_STACK_LINE(466)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

Void FlxText_obj::setBorderStyle( ::flixel::text::FlxTextBorderStyle Style,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality){
int Color = __o_Color.Default(0);
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
	HX_STACK_FRAME("flixel.text.FlxText","setBorderStyle",0x26cf9c21,"flixel.text.FlxText.setBorderStyle","flixel/text/FlxText.hx",478,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Quality,"Quality")
{
		HX_STACK_LINE(479)
		this->set_borderStyle(Style);
		HX_STACK_LINE(480)
		this->set_borderColor(Color);
		HX_STACK_LINE(481)
		this->set_borderSize(Size);
		HX_STACK_LINE(482)
		this->set_borderQuality(Quality);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,(void))

Float FlxText_obj::set_fieldWidth( Float value){
	HX_STACK_FRAME("flixel.text.FlxText","set_fieldWidth",0x9c758fa7,"flixel.text.FlxText.set_fieldWidth","flixel/text/FlxText.hx",486,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(487)
	if (((this->textField != null()))){
		HX_STACK_LINE(489)
		if (((value <= (int)0))){
			HX_STACK_LINE(491)
			this->set_wordWrap(false);
			HX_STACK_LINE(492)
			this->set_autoSize(true);
		}
		else{
			HX_STACK_LINE(496)
			this->set_autoSize(false);
			HX_STACK_LINE(497)
			this->set_wordWrap(true);
			HX_STACK_LINE(498)
			this->textField->set_width(value);
		}
		HX_STACK_LINE(501)
		this->_regen = true;
	}
	HX_STACK_LINE(504)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldWidth,return )

Float FlxText_obj::get_fieldWidth( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_fieldWidth",0x7c55a733,"flixel.text.FlxText.get_fieldWidth","flixel/text/FlxText.hx",509,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(509)
	if (((this->textField != null()))){
		HX_STACK_LINE(509)
		return this->textField->get_width();
	}
	else{
		HX_STACK_LINE(509)
		return (int)0;
	}
	HX_STACK_LINE(509)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldWidth,return )

bool FlxText_obj::set_autoSize( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_autoSize",0x346abbcb,"flixel.text.FlxText.set_autoSize","flixel/text/FlxText.hx",513,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(514)
	if (((this->textField != null()))){
		HX_STACK_LINE(516)
		this->textField->set_autoSize((  ((value)) ? ::openfl::text::TextFieldAutoSize(::openfl::text::TextFieldAutoSize_obj::LEFT) : ::openfl::text::TextFieldAutoSize(::openfl::text::TextFieldAutoSize_obj::NONE) ));
		HX_STACK_LINE(517)
		this->_regen = true;
	}
	HX_STACK_LINE(520)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_autoSize,return )

bool FlxText_obj::get_autoSize( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_autoSize",0x1f719857,"flixel.text.FlxText.get_autoSize","flixel/text/FlxText.hx",525,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(525)
	if (((this->textField != null()))){
		HX_STACK_LINE(525)
		::openfl::text::TextFieldAutoSize _g = this->textField->get_autoSize();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(525)
		return (_g != ::openfl::text::TextFieldAutoSize_obj::NONE);
	}
	else{
		HX_STACK_LINE(525)
		return false;
	}
	HX_STACK_LINE(525)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_autoSize,return )

::String FlxText_obj::get_text( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_text",0x087345b4,"flixel.text.FlxText.get_text","flixel/text/FlxText.hx",530,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(530)
	return this->textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_text,return )

::String FlxText_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.text.FlxText","set_text",0xb6d09f28,"flixel.text.FlxText.set_text","flixel/text/FlxText.hx",534,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(535)
	::String ot = this->textField->get_text();		HX_STACK_VAR(ot,"ot");
	HX_STACK_LINE(536)
	this->textField->set_text(Text);
	HX_STACK_LINE(538)
	::String _g = this->textField->get_text();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(538)
	bool _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(538)
	if ((!(((_g != ot))))){
		HX_STACK_LINE(538)
		_g1 = this->_regen;
	}
	else{
		HX_STACK_LINE(538)
		_g1 = true;
	}
	HX_STACK_LINE(538)
	this->_regen = _g1;
	HX_STACK_LINE(540)
	return this->textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

Float FlxText_obj::get_size( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_size",0x07cd19c8,"flixel.text.FlxText.get_size","flixel/text/FlxText.hx",545,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(545)
	return this->_defaultFormat->size;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

Float FlxText_obj::set_size( Float Size){
	HX_STACK_FRAME("flixel.text.FlxText","set_size",0xb62a733c,"flixel.text.FlxText.set_size","flixel/text/FlxText.hx",549,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(550)
	this->_defaultFormat->size = Size;
	HX_STACK_LINE(551)
	{
		HX_STACK_LINE(551)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(551)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(551)
		this->_regen = true;
	}
	HX_STACK_LINE(552)
	return Size;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

int FlxText_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_color",0x7c7dca88,"flixel.text.FlxText.set_color","flixel/text/FlxText.hx",556,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(557)
	if (((((int(Color) & int((int)16777215))) == this->_defaultFormat->color))){
		HX_STACK_LINE(559)
		return Color;
	}
	HX_STACK_LINE(561)
	this->_defaultFormat->color = (int(Color) & int((int)16777215));
	HX_STACK_LINE(562)
	this->color = Color;
	HX_STACK_LINE(563)
	{
		HX_STACK_LINE(563)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(563)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(563)
		this->_regen = true;
	}
	HX_STACK_LINE(564)
	return Color;
}


::String FlxText_obj::get_font( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_font",0xff39d6d6,"flixel.text.FlxText.get_font","flixel/text/FlxText.hx",569,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(569)
	return this->_font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

::String FlxText_obj::set_font( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_font",0xad97304a,"flixel.text.FlxText.set_font","flixel/text/FlxText.hx",573,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(574)
	this->textField->set_embedFonts(true);
	HX_STACK_LINE(576)
	if (((Font != null()))){
		HX_STACK_LINE(578)
		::String newFontName = Font;		HX_STACK_VAR(newFontName,"newFontName");
		HX_STACK_LINE(579)
		if ((::openfl::_v2::Assets_obj::exists(Font,::openfl::_v2::AssetType_obj::FONT))){
			HX_STACK_LINE(581)
			newFontName = ::openfl::_v2::Assets_obj::getFont(Font,null())->fontName;
		}
		HX_STACK_LINE(584)
		this->_defaultFormat->font = newFontName;
	}
	else{
		HX_STACK_LINE(588)
		this->_defaultFormat->font = ::flixel::system::FlxAssets_obj::FONT_DEFAULT;
	}
	HX_STACK_LINE(591)
	{
		HX_STACK_LINE(591)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(591)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(591)
		this->_regen = true;
	}
	HX_STACK_LINE(592)
	return this->_font = this->_defaultFormat->font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

bool FlxText_obj::get_embedded( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_embedded",0xce5a2211,"flixel.text.FlxText.get_embedded","flixel/text/FlxText.hx",597,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(597)
	return this->textField->set_embedFonts(true);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::get_systemFont( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_systemFont",0xd6b43ca5,"flixel.text.FlxText.get_systemFont","flixel/text/FlxText.hx",602,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(602)
	return this->_defaultFormat->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

::String FlxText_obj::set_systemFont( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_systemFont",0xf6d42519,"flixel.text.FlxText.set_systemFont","flixel/text/FlxText.hx",606,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(607)
	this->textField->set_embedFonts(false);
	HX_STACK_LINE(608)
	this->_defaultFormat->font = Font;
	HX_STACK_LINE(609)
	{
		HX_STACK_LINE(609)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(609)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(609)
		this->_regen = true;
	}
	HX_STACK_LINE(610)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

bool FlxText_obj::get_bold( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_bold",0xfc94fa8c,"flixel.text.FlxText.get_bold","flixel/text/FlxText.hx",615,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(615)
	return this->_defaultFormat->bold;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

bool FlxText_obj::set_bold( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_bold",0xaaf25400,"flixel.text.FlxText.set_bold","flixel/text/FlxText.hx",619,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(620)
	if (((this->_defaultFormat->bold != value))){
		HX_STACK_LINE(622)
		this->_defaultFormat->bold = value;
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(623)
			this->textField->set_defaultTextFormat(this->_defaultFormat);
			HX_STACK_LINE(623)
			this->textField->setTextFormat(this->_defaultFormat,null(),null());
			HX_STACK_LINE(623)
			this->_regen = true;
		}
	}
	HX_STACK_LINE(625)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_italic( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_italic",0xadf337b7,"flixel.text.FlxText.get_italic","flixel/text/FlxText.hx",630,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(630)
	return this->_defaultFormat->italic;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_italic,return )

bool FlxText_obj::set_italic( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_italic",0xb170d62b,"flixel.text.FlxText.set_italic","flixel/text/FlxText.hx",634,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(635)
	if (((this->_defaultFormat->italic != value))){
		HX_STACK_LINE(637)
		this->_defaultFormat->italic = value;
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			this->textField->set_defaultTextFormat(this->_defaultFormat);
			HX_STACK_LINE(638)
			this->textField->setTextFormat(this->_defaultFormat,null(),null());
			HX_STACK_LINE(638)
			this->_regen = true;
		}
	}
	HX_STACK_LINE(640)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_italic,return )

bool FlxText_obj::get_wordWrap( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_wordWrap",0xf0d31d3b,"flixel.text.FlxText.get_wordWrap","flixel/text/FlxText.hx",645,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(645)
	return this->textField->get_wordWrap();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_wordWrap",0x05cc40af,"flixel.text.FlxText.set_wordWrap","flixel/text/FlxText.hx",649,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(650)
	bool _g = this->textField->get_wordWrap();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(650)
	if (((_g != value))){
		HX_STACK_LINE(652)
		this->textField->set_wordWrap(value);
		HX_STACK_LINE(653)
		this->_regen = true;
	}
	HX_STACK_LINE(655)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

::String FlxText_obj::get_alignment( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_alignment",0xf34d507c,"flixel.text.FlxText.get_alignment","flixel/text/FlxText.hx",660,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(660)
	return hx::TCast< String >::cast(this->_defaultFormat->align);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

::String FlxText_obj::set_alignment( ::String Alignment){
	HX_STACK_FRAME("flixel.text.FlxText","set_alignment",0x38533288,"flixel.text.FlxText.set_alignment","flixel/text/FlxText.hx",664,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_LINE(665)
	::String _g = this->convertTextAlignmentFromString(Alignment);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(665)
	this->_defaultFormat->align = _g;
	HX_STACK_LINE(666)
	{
		HX_STACK_LINE(666)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(666)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(666)
		this->_regen = true;
	}
	HX_STACK_LINE(667)
	return Alignment;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

::flixel::text::FlxTextBorderStyle FlxText_obj::set_borderStyle( ::flixel::text::FlxTextBorderStyle style){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderStyle",0x0a5ab38a,"flixel.text.FlxText.set_borderStyle","flixel/text/FlxText.hx",671,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(672)
	if (((style != this->borderStyle))){
		HX_STACK_LINE(674)
		this->borderStyle = style;
		HX_STACK_LINE(675)
		this->_regen = true;
	}
	HX_STACK_LINE(678)
	return this->borderStyle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

int FlxText_obj::set_borderColor( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderColor",0xd0997fbc,"flixel.text.FlxText.set_borderColor","flixel/text/FlxText.hx",682,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(683)
	if (((bool((((int(this->borderColor) & int((int)16777215))) != ((int(Color) & int((int)16777215))))) && bool((this->borderStyle != ::flixel::text::FlxTextBorderStyle_obj::NONE))))){
		HX_STACK_LINE(685)
		this->_regen = true;
	}
	HX_STACK_LINE(687)
	this->borderColor = Color;
	HX_STACK_LINE(688)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

Float FlxText_obj::set_borderSize( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderSize",0x0b7e6088,"flixel.text.FlxText.set_borderSize","flixel/text/FlxText.hx",692,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(693)
	if (((bool((Value != this->borderSize)) && bool((this->borderStyle != ::flixel::text::FlxTextBorderStyle_obj::NONE))))){
		HX_STACK_LINE(695)
		this->_regen = true;
	}
	HX_STACK_LINE(697)
	this->borderSize = Value;
	HX_STACK_LINE(699)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

Float FlxText_obj::set_borderQuality( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderQuality",0x9eac1b58,"flixel.text.FlxText.set_borderQuality","flixel/text/FlxText.hx",703,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(704)
	{
		HX_STACK_LINE(704)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(704)
		if (((Value < (int)0))){
			HX_STACK_LINE(704)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(704)
			lowerBound = Value;
		}
		HX_STACK_LINE(704)
		if (((lowerBound > (int)1))){
			HX_STACK_LINE(704)
			Value = (int)1;
		}
		else{
			HX_STACK_LINE(704)
			Value = lowerBound;
		}
	}
	HX_STACK_LINE(706)
	if (((bool((Value != this->borderQuality)) && bool((this->borderStyle != ::flixel::text::FlxTextBorderStyle_obj::NONE))))){
		HX_STACK_LINE(708)
		this->_regen = true;
	}
	HX_STACK_LINE(711)
	this->borderQuality = Value;
	HX_STACK_LINE(713)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

::flixel::graphics::FlxGraphic FlxText_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_graphic",0x740d070d,"flixel.text.FlxText.set_graphic","flixel/text/FlxText.hx",717,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(718)
	::flixel::graphics::FlxGraphic oldGraphic = this->graphic;		HX_STACK_VAR(oldGraphic,"oldGraphic");
	HX_STACK_LINE(719)
	::flixel::graphics::FlxGraphic graph = this->super::set_graphic(Value);		HX_STACK_VAR(graph,"graph");
	HX_STACK_LINE(720)
	::flixel::FlxG_obj::bitmap->removeIfNoUse(oldGraphic);
	HX_STACK_LINE(721)
	return graph;
}


Float FlxText_obj::get_width( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_width",0x1933231f,"flixel.text.FlxText.get_width","flixel/text/FlxText.hx",725,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(726)
	if ((this->_regen)){
		HX_STACK_LINE(727)
		this->regenGraphics();
	}
	HX_STACK_LINE(729)
	return this->super::get_width();
}


Float FlxText_obj::get_height( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_height",0xa9db10ae,"flixel.text.FlxText.get_height","flixel/text/FlxText.hx",733,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(734)
	if ((this->_regen)){
		HX_STACK_LINE(735)
		this->regenGraphics();
	}
	HX_STACK_LINE(737)
	return this->super::get_height();
}


Void FlxText_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateColorTransform",0x81f611f0,"flixel.text.FlxText.updateColorTransform","flixel/text/FlxText.hx",741,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(742)
		if (((this->alpha != (int)1))){
			HX_STACK_LINE(744)
			this->colorTransform->alphaMultiplier = this->alpha;
			HX_STACK_LINE(745)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(749)
			this->colorTransform->alphaMultiplier = (int)1;
			HX_STACK_LINE(750)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(753)
		this->dirty = true;
	}
return null();
}


Void FlxText_obj::regenGraphics( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","regenGraphics",0x8e9d026a,"flixel.text.FlxText.regenGraphics","flixel/text/FlxText.hx",757,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(758)
		if (((bool((this->textField == null())) || bool((this->_regen == false))))){
			HX_STACK_LINE(759)
			return null();
		}
		HX_STACK_LINE(761)
		int oldWidth = this->graphic->width;		HX_STACK_VAR(oldWidth,"oldWidth");
		HX_STACK_LINE(762)
		int oldHeight = this->graphic->height;		HX_STACK_VAR(oldHeight,"oldHeight");
		HX_STACK_LINE(764)
		Float newWidth = this->textField->get_width();		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(766)
		Float _g = this->textField->get_textHeight();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(766)
		Float newHeight = (_g + (int)4);		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(769)
		Float _g1 = this->textField->get_textHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(769)
		if (((_g1 == (int)0))){
			HX_STACK_LINE(771)
			newHeight = oldHeight;
		}
		HX_STACK_LINE(774)
		if (((bool((oldWidth != newWidth)) || bool((oldHeight != newHeight))))){
			HX_STACK_LINE(777)
			this->set_height(newHeight);
			HX_STACK_LINE(778)
			::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("text"));		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(780)
			int _g2 = ::Std_obj::_int(newWidth);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(780)
			int _g3 = ::Std_obj::_int(newHeight);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(780)
			this->makeGraphic(_g2,_g3,(int)0,false,key);
			HX_STACK_LINE(781)
			Float _g4 = this->get_height();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(781)
			int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(781)
			this->frameHeight = _g5;
			HX_STACK_LINE(782)
			Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(782)
			Float _g7 = (_g6 * 1.2);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(782)
			this->textField->set_height(_g7);
			HX_STACK_LINE(783)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(784)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(785)
			this->_flashRect->width = newWidth;
			HX_STACK_LINE(786)
			this->_flashRect->height = newHeight;
		}
		else{
			HX_STACK_LINE(790)
			this->graphic->bitmap->fillRect(this->_flashRect,(int)0);
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::text::FlxText_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/text/FlxText.hx",793,0xdf165a6e)
				{
					HX_STACK_LINE(793)
					::String _g8 = __this->textField->get_text();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(793)
					return (_g8 != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(793)
		if (((  (((  (((this->textField != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool((this->textField->get_text().length > (int)0)) : bool(false) ))){
			HX_STACK_LINE(796)
			this->copyTextFormat(this->_defaultFormat,this->_formatAdjusted,null());
			HX_STACK_LINE(798)
			this->_matrix->identity();
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::text::FlxText_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/text/FlxText.hx",801,0xdf165a6e)
					{
						HX_STACK_LINE(801)
						int _g9 = __this->textField->get_numLines();		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(801)
						return (_g9 == (int)1);
					}
					return null();
				}
			};
			HX_STACK_LINE(801)
			if (((  (((this->_defaultFormat->align == ::openfl::_v2::text::TextFormatAlign_obj::CENTER))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(803)
				this->_formatAdjusted->align = ::openfl::_v2::text::TextFormatAlign_obj::LEFT;
				HX_STACK_LINE(804)
				this->textField->setTextFormat(this->_formatAdjusted,null(),null());
				HX_STACK_LINE(809)
				Float textWidth = this->textField->getLineMetrics((int)0)->width;		HX_STACK_VAR(textWidth,"textWidth");
				HX_STACK_LINE(811)
				Float _g10 = this->textField->get_textWidth();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(811)
				Float _g11 = this->textField->get_width();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(811)
				if (((_g10 <= _g11))){
					HX_STACK_LINE(812)
					Float _g12 = this->get_width();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(812)
					Float _g13 = (_g12 - textWidth);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(812)
					Float _g14 = (Float(_g13) / Float((int)2));		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(812)
					int _g15 = ::Math_obj::floor(_g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(812)
					this->_matrix->translate(_g15,(int)0);
				}
			}
			HX_STACK_LINE(815)
			this->applyBorderStyle();
			HX_STACK_LINE(816)
			{
				HX_STACK_LINE(816)
				::openfl::_v2::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
				HX_STACK_LINE(816)
				this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
				HX_STACK_LINE(816)
				FormatAdjusted->color = this->_defaultFormat->color;
				HX_STACK_LINE(816)
				this->textField->setTextFormat(FormatAdjusted,null(),null());
				HX_STACK_LINE(816)
				{
					HX_STACK_LINE(816)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(816)
					Array< ::Dynamic > _g11 = this->_formatRanges;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(816)
					while((true)){
						HX_STACK_LINE(816)
						if ((!(((_g2 < _g11->length))))){
							HX_STACK_LINE(816)
							break;
						}
						HX_STACK_LINE(816)
						::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g11->__get(_g2).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
						HX_STACK_LINE(816)
						++(_g2);
						HX_STACK_LINE(816)
						if ((((this->textField->get_text().length - (int)1) < formatRange->range->start))){
							HX_STACK_LINE(816)
							break;
						}
						else{
							HX_STACK_LINE(816)
							::openfl::_v2::text::TextFormat textFormat = formatRange->format->format;		HX_STACK_VAR(textFormat,"textFormat");
							HX_STACK_LINE(816)
							this->copyTextFormat(textFormat,FormatAdjusted,false);
							HX_STACK_LINE(816)
							FormatAdjusted->color = textFormat->color;
						}
						HX_STACK_LINE(816)
						Float _g16 = ::Math_obj::min(formatRange->range->end,this->textField->get_text().length);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(816)
						int _g17 = ::Std_obj::_int(_g16);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(816)
						this->textField->setTextFormat(FormatAdjusted,formatRange->range->start,_g17);
					}
				}
			}
			HX_STACK_LINE(818)
			this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
		}
		HX_STACK_LINE(821)
		{
			HX_STACK_LINE(821)
			::flixel::graphics::frames::FlxFrame _this = this->frame;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(821)
			::openfl::_v2::display::BitmapData _g18 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_bitmapData);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(821)
			_this->_bitmapData = _g18;
			HX_STACK_LINE(821)
			::openfl::_v2::display::BitmapData _g19 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_hReversedBitmapData);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(821)
			_this->_hReversedBitmapData = _g19;
			HX_STACK_LINE(821)
			::openfl::_v2::display::BitmapData _g20 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_vReversedBitmapData);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(821)
			_this->_vReversedBitmapData = _g20;
			HX_STACK_LINE(821)
			::openfl::_v2::display::BitmapData _g21 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_hvReversedBitmapData);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(821)
			_this->_hvReversedBitmapData = _g21;
		}
		HX_STACK_LINE(822)
		this->_regen = false;
		HX_STACK_LINE(823)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphics,(void))

Void FlxText_obj::draw( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","draw",0x3a66d282,"flixel.text.FlxText.draw","flixel/text/FlxText.hx",827,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(828)
		if ((this->_regen)){
			HX_STACK_LINE(829)
			this->regenGraphics();
		}
		HX_STACK_LINE(831)
		this->super::draw();
	}
return null();
}


Void FlxText_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","calcFrame",0x04b3a41a,"flixel.text.FlxText.calcFrame","flixel/text/FlxText.hx",840,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(841)
		if (((this->textField == null()))){
			HX_STACK_LINE(842)
			return null();
		}
		HX_STACK_LINE(844)
		if ((this->_regen)){
			HX_STACK_LINE(845)
			this->regenGraphics();
		}
		HX_STACK_LINE(847)
		this->super::calcFrame(null());
	}
return null();
}


Void FlxText_obj::applyBorderStyle( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","applyBorderStyle",0x7fb82955,"flixel.text.FlxText.applyBorderStyle","flixel/text/FlxText.hx",851,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(852)
		int iterations = ::Std_obj::_int((this->borderSize * this->borderQuality));		HX_STACK_VAR(iterations,"iterations");
		HX_STACK_LINE(853)
		if (((iterations <= (int)0))){
			HX_STACK_LINE(855)
			iterations = (int)1;
		}
		HX_STACK_LINE(857)
		Float delta = (Float(this->borderSize) / Float(iterations));		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(859)
		{
			HX_STACK_LINE(859)
			::flixel::text::FlxTextBorderStyle _g = this->borderStyle;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(859)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(864)
					{
						HX_STACK_LINE(864)
						::openfl::_v2::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(864)
						this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
						HX_STACK_LINE(864)
						FormatAdjusted->color = (int(this->borderColor) & int((int)16777215));
						HX_STACK_LINE(864)
						this->textField->setTextFormat(FormatAdjusted,null(),null());
						HX_STACK_LINE(864)
						{
							HX_STACK_LINE(864)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(864)
							Array< ::Dynamic > _g11 = this->_formatRanges;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(864)
							while((true)){
								HX_STACK_LINE(864)
								if ((!(((_g1 < _g11->length))))){
									HX_STACK_LINE(864)
									break;
								}
								HX_STACK_LINE(864)
								::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g11->__get(_g1).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
								HX_STACK_LINE(864)
								++(_g1);
								HX_STACK_LINE(864)
								if ((((this->textField->get_text().length - (int)1) < formatRange->range->start))){
									HX_STACK_LINE(864)
									break;
								}
								else{
									HX_STACK_LINE(864)
									::openfl::_v2::text::TextFormat textFormat = formatRange->format->format;		HX_STACK_VAR(textFormat,"textFormat");
									HX_STACK_LINE(864)
									this->copyTextFormat(textFormat,FormatAdjusted,false);
									HX_STACK_LINE(864)
									FormatAdjusted->color = (int(formatRange->format->borderColor) & int((int)16777215));
								}
								HX_STACK_LINE(864)
								Float _g2 = ::Math_obj::min(formatRange->range->end,this->textField->get_text().length);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(864)
								int _g12 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(864)
								this->textField->setTextFormat(FormatAdjusted,formatRange->range->start,_g12);
							}
						}
					}
					HX_STACK_LINE(866)
					{
						HX_STACK_LINE(866)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(866)
						while((true)){
							HX_STACK_LINE(866)
							if ((!(((_g1 < iterations))))){
								HX_STACK_LINE(866)
								break;
							}
							HX_STACK_LINE(866)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(868)
							{
								HX_STACK_LINE(868)
								this->_matrix->translate(delta,delta);
								HX_STACK_LINE(868)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
						}
					}
					HX_STACK_LINE(871)
					this->_matrix->translate((-(this->shadowOffset->x) * this->borderSize),(-(this->shadowOffset->y) * this->borderSize));
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(876)
					{
						HX_STACK_LINE(876)
						::openfl::_v2::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(876)
						this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
						HX_STACK_LINE(876)
						FormatAdjusted->color = (int(this->borderColor) & int((int)16777215));
						HX_STACK_LINE(876)
						this->textField->setTextFormat(FormatAdjusted,null(),null());
						HX_STACK_LINE(876)
						{
							HX_STACK_LINE(876)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(876)
							Array< ::Dynamic > _g11 = this->_formatRanges;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(876)
							while((true)){
								HX_STACK_LINE(876)
								if ((!(((_g1 < _g11->length))))){
									HX_STACK_LINE(876)
									break;
								}
								HX_STACK_LINE(876)
								::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g11->__get(_g1).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
								HX_STACK_LINE(876)
								++(_g1);
								HX_STACK_LINE(876)
								if ((((this->textField->get_text().length - (int)1) < formatRange->range->start))){
									HX_STACK_LINE(876)
									break;
								}
								else{
									HX_STACK_LINE(876)
									::openfl::_v2::text::TextFormat textFormat = formatRange->format->format;		HX_STACK_VAR(textFormat,"textFormat");
									HX_STACK_LINE(876)
									this->copyTextFormat(textFormat,FormatAdjusted,false);
									HX_STACK_LINE(876)
									FormatAdjusted->color = (int(formatRange->format->borderColor) & int((int)16777215));
								}
								HX_STACK_LINE(876)
								Float _g2 = ::Math_obj::min(formatRange->range->end,this->textField->get_text().length);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(876)
								int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(876)
								this->textField->setTextFormat(FormatAdjusted,formatRange->range->start,_g3);
							}
						}
					}
					HX_STACK_LINE(878)
					Float curDelta = delta;		HX_STACK_VAR(curDelta,"curDelta");
					HX_STACK_LINE(879)
					{
						HX_STACK_LINE(879)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(879)
						while((true)){
							HX_STACK_LINE(879)
							if ((!(((_g1 < iterations))))){
								HX_STACK_LINE(879)
								break;
							}
							HX_STACK_LINE(879)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(881)
							{
								HX_STACK_LINE(881)
								this->_matrix->translate(-(curDelta),-(curDelta));
								HX_STACK_LINE(881)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(882)
							{
								HX_STACK_LINE(882)
								this->_matrix->translate(curDelta,(int)0);
								HX_STACK_LINE(882)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(883)
							{
								HX_STACK_LINE(883)
								this->_matrix->translate(curDelta,(int)0);
								HX_STACK_LINE(883)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(884)
							{
								HX_STACK_LINE(884)
								this->_matrix->translate((int)0,curDelta);
								HX_STACK_LINE(884)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(885)
							{
								HX_STACK_LINE(885)
								this->_matrix->translate((int)0,curDelta);
								HX_STACK_LINE(885)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(886)
							{
								HX_STACK_LINE(886)
								this->_matrix->translate(-(curDelta),(int)0);
								HX_STACK_LINE(886)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(887)
							{
								HX_STACK_LINE(887)
								this->_matrix->translate(-(curDelta),(int)0);
								HX_STACK_LINE(887)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(888)
							{
								HX_STACK_LINE(888)
								this->_matrix->translate((int)0,-(curDelta));
								HX_STACK_LINE(888)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(890)
							this->_matrix->translate(curDelta,(int)0);
							HX_STACK_LINE(891)
							hx::AddEq(curDelta,delta);
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(898)
					{
						HX_STACK_LINE(898)
						::openfl::_v2::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(898)
						this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
						HX_STACK_LINE(898)
						FormatAdjusted->color = (int(this->borderColor) & int((int)16777215));
						HX_STACK_LINE(898)
						this->textField->setTextFormat(FormatAdjusted,null(),null());
						HX_STACK_LINE(898)
						{
							HX_STACK_LINE(898)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(898)
							Array< ::Dynamic > _g11 = this->_formatRanges;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(898)
							while((true)){
								HX_STACK_LINE(898)
								if ((!(((_g1 < _g11->length))))){
									HX_STACK_LINE(898)
									break;
								}
								HX_STACK_LINE(898)
								::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g11->__get(_g1).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
								HX_STACK_LINE(898)
								++(_g1);
								HX_STACK_LINE(898)
								if ((((this->textField->get_text().length - (int)1) < formatRange->range->start))){
									HX_STACK_LINE(898)
									break;
								}
								else{
									HX_STACK_LINE(898)
									::openfl::_v2::text::TextFormat textFormat = formatRange->format->format;		HX_STACK_VAR(textFormat,"textFormat");
									HX_STACK_LINE(898)
									this->copyTextFormat(textFormat,FormatAdjusted,false);
									HX_STACK_LINE(898)
									FormatAdjusted->color = (int(formatRange->format->borderColor) & int((int)16777215));
								}
								HX_STACK_LINE(898)
								Float _g4 = ::Math_obj::min(formatRange->range->end,this->textField->get_text().length);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(898)
								int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(898)
								this->textField->setTextFormat(FormatAdjusted,formatRange->range->start,_g5);
							}
						}
					}
					HX_STACK_LINE(900)
					Float curDelta = delta;		HX_STACK_VAR(curDelta,"curDelta");
					HX_STACK_LINE(901)
					{
						HX_STACK_LINE(901)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(901)
						while((true)){
							HX_STACK_LINE(901)
							if ((!(((_g1 < iterations))))){
								HX_STACK_LINE(901)
								break;
							}
							HX_STACK_LINE(901)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(903)
							{
								HX_STACK_LINE(903)
								this->_matrix->translate(-(curDelta),-(curDelta));
								HX_STACK_LINE(903)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(904)
							{
								HX_STACK_LINE(904)
								this->_matrix->translate((curDelta * (int)2),(int)0);
								HX_STACK_LINE(904)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(905)
							{
								HX_STACK_LINE(905)
								this->_matrix->translate((int)0,(curDelta * (int)2));
								HX_STACK_LINE(905)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(906)
							{
								HX_STACK_LINE(906)
								this->_matrix->translate((-(curDelta) * (int)2),(int)0);
								HX_STACK_LINE(906)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(908)
							this->_matrix->translate(curDelta,-(curDelta));
							HX_STACK_LINE(909)
							hx::AddEq(curDelta,delta);
						}
					}
				}
				;break;
				case (int)0: {
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderStyle,(void))

Void FlxText_obj::copyTextWithOffset( Float x,Float y){
{
		HX_STACK_FRAME("flixel.text.FlxText","copyTextWithOffset",0x8b535ed9,"flixel.text.FlxText.copyTextWithOffset","flixel/text/FlxText.hx",920,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(921)
		this->_matrix->translate(x,y);
		HX_STACK_LINE(922)
		this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,copyTextWithOffset,(void))

Void FlxText_obj::applyFormats( ::openfl::_v2::text::TextFormat FormatAdjusted,hx::Null< bool >  __o_UseBorderColor){
bool UseBorderColor = __o_UseBorderColor.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","applyFormats",0x597a620c,"flixel.text.FlxText.applyFormats","flixel/text/FlxText.hx",926,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FormatAdjusted,"FormatAdjusted")
	HX_STACK_ARG(UseBorderColor,"UseBorderColor")
{
		HX_STACK_LINE(928)
		this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
		HX_STACK_LINE(929)
		if ((UseBorderColor)){
			HX_STACK_LINE(929)
			FormatAdjusted->color = (int(this->borderColor) & int((int)16777215));
		}
		else{
			HX_STACK_LINE(929)
			FormatAdjusted->color = this->_defaultFormat->color;
		}
		HX_STACK_LINE(930)
		this->textField->setTextFormat(FormatAdjusted,null(),null());
		HX_STACK_LINE(933)
		{
			HX_STACK_LINE(933)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(933)
			Array< ::Dynamic > _g1 = this->_formatRanges;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(933)
			while((true)){
				HX_STACK_LINE(933)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(933)
					break;
				}
				HX_STACK_LINE(933)
				::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g1->__get(_g).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
				HX_STACK_LINE(933)
				++(_g);
				HX_STACK_LINE(935)
				if ((((this->textField->get_text().length - (int)1) < formatRange->range->start))){
					HX_STACK_LINE(938)
					break;
				}
				else{
					HX_STACK_LINE(942)
					::openfl::_v2::text::TextFormat textFormat = formatRange->format->format;		HX_STACK_VAR(textFormat,"textFormat");
					HX_STACK_LINE(943)
					this->copyTextFormat(textFormat,FormatAdjusted,false);
					HX_STACK_LINE(944)
					if ((UseBorderColor)){
						HX_STACK_LINE(944)
						FormatAdjusted->color = (int(formatRange->format->borderColor) & int((int)16777215));
					}
					else{
						HX_STACK_LINE(944)
						FormatAdjusted->color = textFormat->color;
					}
				}
				HX_STACK_LINE(948)
				Float _g2 = ::Math_obj::min(formatRange->range->end,this->textField->get_text().length);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(948)
				int _g11 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(947)
				this->textField->setTextFormat(FormatAdjusted,formatRange->range->start,_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyFormats,(void))

Void FlxText_obj::copyTextFormat( ::openfl::_v2::text::TextFormat from,::openfl::_v2::text::TextFormat to,hx::Null< bool >  __o_withAlign){
bool withAlign = __o_withAlign.Default(true);
	HX_STACK_FRAME("flixel.text.FlxText","copyTextFormat",0xce0953d7,"flixel.text.FlxText.copyTextFormat","flixel/text/FlxText.hx",953,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(withAlign,"withAlign")
{
		HX_STACK_LINE(954)
		to->font = from->font;
		HX_STACK_LINE(955)
		to->bold = from->bold;
		HX_STACK_LINE(956)
		to->italic = from->italic;
		HX_STACK_LINE(957)
		to->size = from->size;
		HX_STACK_LINE(958)
		to->color = from->color;
		HX_STACK_LINE(959)
		if ((withAlign)){
			HX_STACK_LINE(959)
			to->align = from->align;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,copyTextFormat,(void))

::openfl::_v2::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_FRAME("flixel.text.FlxText","dtfCopy",0x79c34ded,"flixel.text.FlxText.dtfCopy","flixel/text/FlxText.hx",968,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(969)
	::openfl::_v2::text::TextFormat dtf = this->textField->get_defaultTextFormat();		HX_STACK_VAR(dtf,"dtf");
	HX_STACK_LINE(970)
	return ::openfl::_v2::text::TextFormat_obj::__new(dtf->font,dtf->size,dtf->color,dtf->bold,dtf->italic,dtf->underline,dtf->url,dtf->target,dtf->align,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

::String FlxText_obj::convertTextAlignmentFromString( ::String StrAlign){
	HX_STACK_FRAME("flixel.text.FlxText","convertTextAlignmentFromString",0xca79ae3c,"flixel.text.FlxText.convertTextAlignmentFromString","flixel/text/FlxText.hx",978,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StrAlign,"StrAlign")
	HX_STACK_LINE(978)
	::String _switch_1 = (StrAlign);
	if (  ( _switch_1==HX_CSTRING("left"))){
		HX_STACK_LINE(981)
		return ::openfl::_v2::text::TextFormatAlign_obj::LEFT;
	}
	else if (  ( _switch_1==HX_CSTRING("center"))){
		HX_STACK_LINE(983)
		return ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
	}
	else if (  ( _switch_1==HX_CSTRING("right"))){
		HX_STACK_LINE(985)
		return ::openfl::_v2::text::TextFormatAlign_obj::RIGHT;
	}
	else if (  ( _switch_1==HX_CSTRING("justify"))){
		HX_STACK_LINE(987)
		return ::openfl::_v2::text::TextFormatAlign_obj::JUSTIFY;
	}
	HX_STACK_LINE(978)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,convertTextAlignmentFromString,return )

Void FlxText_obj::updateDefaultFormat( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateDefaultFormat",0x3cb6b251,"flixel.text.FlxText.updateDefaultFormat","flixel/text/FlxText.hx",992,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(993)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(994)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(995)
		this->_regen = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,updateDefaultFormat,(void))

::flixel::graphics::frames::FlxFramesCollection FlxText_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
	HX_STACK_FRAME("flixel.text.FlxText","set_frames",0x579256e1,"flixel.text.FlxText.set_frames","flixel/text/FlxText.hx",999,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_LINE(1000)
	this->super::set_frames(Frames);
	HX_STACK_LINE(1001)
	this->_regen = false;
	HX_STACK_LINE(1002)
	return Frames;
}



FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		if (HX_FIELD_EQ(inName,"font") ) { return get_font(); }
		if (HX_FIELD_EQ(inName,"bold") ) { return get_bold(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { return _font; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return get_italic(); }
		if (HX_FIELD_EQ(inName,"_regen") ) { return _regen; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"embedded") ) { return get_embedded(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return get_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return set_bold_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return get_alignment(); }
		if (HX_FIELD_EQ(inName,"textField") ) { return textField; }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"addFormat") ) { return addFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { return get_systemFont(); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return borderSize; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { return get_fieldWidth(); }
		if (HX_FIELD_EQ(inName,"get_italic") ) { return get_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_italic") ) { return set_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return set_frames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return borderStyle; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"applyMarkup") ) { return applyMarkup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return shadowOffset; }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return stampOnAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"removeFormat") ) { return removeFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFormats") ) { return clearFormats_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return get_embedded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"applyFormats") ) { return applyFormats_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return borderQuality; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { return _formatRanges; }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"regenGraphics") ) { return regenGraphics_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return _defaultFormat; }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return setBorderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fieldWidth") ) { return set_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fieldWidth") ) { return get_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return get_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return set_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTextFormat") ) { return copyTextFormat_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return _formatAdjusted; }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return set_borderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"applyBorderStyle") ) { return applyBorderStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return set_borderQuality_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copyTextWithOffset") ) { return copyTextWithOffset_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateDefaultFormat") ) { return updateDefaultFormat_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"convertTextAlignmentFromString") ) { return convertTextAlignmentFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"bold") ) { return set_bold(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return set_italic(inValue); }
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return set_autoSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return set_alignment(inValue); }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { return set_systemFont(inValue); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp) return set_borderSize(inValue);borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { return set_fieldWidth(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp) return set_borderStyle(inValue);borderStyle=inValue.Cast< ::flixel::text::FlxTextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp) return set_borderQuality(inValue);borderQuality=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { _formatRanges=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("embedded"));
	outFields->push(HX_CSTRING("systemFont"));
	outFields->push(HX_CSTRING("bold"));
	outFields->push(HX_CSTRING("italic"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("alignment"));
	outFields->push(HX_CSTRING("borderStyle"));
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("borderSize"));
	outFields->push(HX_CSTRING("borderQuality"));
	outFields->push(HX_CSTRING("textField"));
	outFields->push(HX_CSTRING("fieldWidth"));
	outFields->push(HX_CSTRING("autoSize"));
	outFields->push(HX_CSTRING("shadowOffset"));
	outFields->push(HX_CSTRING("_defaultFormat"));
	outFields->push(HX_CSTRING("_formatAdjusted"));
	outFields->push(HX_CSTRING("_formatRanges"));
	outFields->push(HX_CSTRING("_font"));
	outFields->push(HX_CSTRING("_regen"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxTextBorderStyle*/ ,(int)offsetof(FlxText_obj,borderStyle),HX_CSTRING("borderStyle")},
	{hx::fsInt,(int)offsetof(FlxText_obj,borderColor),HX_CSTRING("borderColor")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderSize),HX_CSTRING("borderSize")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderQuality),HX_CSTRING("borderQuality")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(FlxText_obj,textField),HX_CSTRING("textField")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxText_obj,shadowOffset),HX_CSTRING("shadowOffset")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_defaultFormat),HX_CSTRING("_defaultFormat")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_formatAdjusted),HX_CSTRING("_formatAdjusted")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxText_obj,_formatRanges),HX_CSTRING("_formatRanges")},
	{hx::fsString,(int)offsetof(FlxText_obj,_font),HX_CSTRING("_font")},
	{hx::fsBool,(int)offsetof(FlxText_obj,_regen),HX_CSTRING("_regen")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("borderStyle"),
	HX_CSTRING("borderColor"),
	HX_CSTRING("borderSize"),
	HX_CSTRING("borderQuality"),
	HX_CSTRING("textField"),
	HX_CSTRING("shadowOffset"),
	HX_CSTRING("_defaultFormat"),
	HX_CSTRING("_formatAdjusted"),
	HX_CSTRING("_formatRanges"),
	HX_CSTRING("_font"),
	HX_CSTRING("_regen"),
	HX_CSTRING("destroy"),
	HX_CSTRING("drawFrame"),
	HX_CSTRING("stampOnAtlas"),
	HX_CSTRING("applyMarkup"),
	HX_CSTRING("addFormat"),
	HX_CSTRING("removeFormat"),
	HX_CSTRING("clearFormats"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("setBorderStyle"),
	HX_CSTRING("set_fieldWidth"),
	HX_CSTRING("get_fieldWidth"),
	HX_CSTRING("set_autoSize"),
	HX_CSTRING("get_autoSize"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_size"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_font"),
	HX_CSTRING("set_font"),
	HX_CSTRING("get_embedded"),
	HX_CSTRING("get_systemFont"),
	HX_CSTRING("set_systemFont"),
	HX_CSTRING("get_bold"),
	HX_CSTRING("set_bold"),
	HX_CSTRING("get_italic"),
	HX_CSTRING("set_italic"),
	HX_CSTRING("get_wordWrap"),
	HX_CSTRING("set_wordWrap"),
	HX_CSTRING("get_alignment"),
	HX_CSTRING("set_alignment"),
	HX_CSTRING("set_borderStyle"),
	HX_CSTRING("set_borderColor"),
	HX_CSTRING("set_borderSize"),
	HX_CSTRING("set_borderQuality"),
	HX_CSTRING("set_graphic"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("regenGraphics"),
	HX_CSTRING("draw"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("applyBorderStyle"),
	HX_CSTRING("copyTextWithOffset"),
	HX_CSTRING("applyFormats"),
	HX_CSTRING("copyTextFormat"),
	HX_CSTRING("dtfCopy"),
	HX_CSTRING("convertTextAlignmentFromString"),
	HX_CSTRING("updateDefaultFormat"),
	HX_CSTRING("set_frames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

#endif

Class FlxText_obj::__mClass;

void FlxText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.FlxText"), hx::TCanCast< FlxText_obj> ,sStaticFields,sMemberFields,
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

void FlxText_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
