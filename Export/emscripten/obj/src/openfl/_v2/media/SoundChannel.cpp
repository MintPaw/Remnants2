#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_media_Sound
#include <openfl/_v2/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__v2_media_SoundChannel
#include <openfl/_v2/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_events_SampleDataEvent
#include <openfl/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace openfl{
namespace _v2{
namespace media{

Void SoundChannel_obj::__construct(Dynamic handle,Float startTime,int loops,::openfl::media::SoundTransform soundTransform)
{
HX_STACK_FRAME("openfl._v2.media.SoundChannel","new",0x2471a2a1,"openfl._v2.media.SoundChannel.new","openfl/_v2/media/SoundChannel.hx",55,0xb300254c)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
HX_STACK_ARG(startTime,"startTime")
HX_STACK_ARG(loops,"loops")
HX_STACK_ARG(soundTransform,"soundTransform")
{
	HX_STACK_LINE(57)
	super::__construct(null());
	HX_STACK_LINE(59)
	if (((soundTransform != null()))){
		HX_STACK_LINE(61)
		::openfl::media::SoundTransform _g = soundTransform->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		this->__transform = _g;
	}
	HX_STACK_LINE(65)
	if (((handle != null()))){
		HX_STACK_LINE(67)
		Dynamic _g1 = ::openfl::_v2::media::SoundChannel_obj::lime_sound_channel_create(handle,startTime,loops,this->__transform);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		this->__handle = _g1;
	}
	HX_STACK_LINE(71)
	if (((this->__handle != null()))){
		HX_STACK_LINE(73)
		::openfl::_v2::media::SoundChannel_obj::__incompleteList->push(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

//SoundChannel_obj::~SoundChannel_obj() { }

Dynamic SoundChannel_obj::__CreateEmpty() { return  new SoundChannel_obj; }
hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new(Dynamic handle,Float startTime,int loops,::openfl::media::SoundTransform soundTransform)
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct(handle,startTime,loops,soundTransform);
	return result;}

Dynamic SoundChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void SoundChannel_obj::stop( ){
{
		HX_STACK_FRAME("openfl._v2.media.SoundChannel","stop",0xc25616a1,"openfl._v2.media.SoundChannel.stop","openfl/_v2/media/SoundChannel.hx",95,0xb300254c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		::openfl::_v2::media::SoundChannel_obj::lime_sound_channel_stop(this->__handle);
		HX_STACK_LINE(110)
		this->__handle = null();
		HX_STACK_LINE(111)
		this->__soundInstance = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stop,(void))

bool SoundChannel_obj::__checkComplete( ){
	HX_STACK_FRAME("openfl._v2.media.SoundChannel","__checkComplete",0xe8454642,"openfl._v2.media.SoundChannel.__checkComplete","openfl/_v2/media/SoundChannel.hx",117,0xb300254c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	if (((this->__handle != null()))){
		HX_STACK_LINE(119)
		if (((  (((this->__dataProvider != null()))) ? bool(::openfl::_v2::media::SoundChannel_obj::lime_sound_channel_needs_data(this->__handle)) : bool(false) ))){
			HX_STACK_LINE(121)
			::openfl::events::SampleDataEvent request = ::openfl::events::SampleDataEvent_obj::__new(::openfl::events::SampleDataEvent_obj::SAMPLE_DATA,null(),null());		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(122)
			Float _g = ::openfl::_v2::media::SoundChannel_obj::lime_sound_channel_get_data_position(this->__handle);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(122)
			request->position = _g;
			HX_STACK_LINE(123)
			this->__dataProvider->dispatchEvent(request);
			HX_STACK_LINE(125)
			if (((request->data->length > (int)0))){
				HX_STACK_LINE(127)
				::openfl::_v2::media::SoundChannel_obj::lime_sound_channel_add_data(this->__handle,request->data);
			}
		}
		HX_STACK_LINE(162)
		if ((this->__runCheckComplete())){
			HX_STACK_LINE(164)
			return true;
		}
		HX_STACK_LINE(168)
		return false;
	}
	else{
		HX_STACK_LINE(172)
		return true;
	}
	HX_STACK_LINE(117)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__checkComplete,return )

bool SoundChannel_obj::__runCheckComplete( ){
	HX_STACK_FRAME("openfl._v2.media.SoundChannel","__runCheckComplete",0xa6084555,"openfl._v2.media.SoundChannel.__runCheckComplete","openfl/_v2/media/SoundChannel.hx",231,0xb300254c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	if ((::openfl::_v2::media::SoundChannel_obj::lime_sound_channel_is_complete(this->__handle))){
		HX_STACK_LINE(235)
		this->__soundInstance = null();
		HX_STACK_LINE(236)
		this->__handle = null();
		HX_STACK_LINE(238)
		if (((this->__dataProvider != null()))){
			HX_STACK_LINE(240)
			(::openfl::_v2::media::SoundChannel_obj::__dynamicSoundCount)--;
		}
		HX_STACK_LINE(244)
		::openfl::_v2::events::Event completeEvent = ::openfl::_v2::events::Event_obj::__new(::openfl::_v2::events::Event_obj::SOUND_COMPLETE,null(),null());		HX_STACK_VAR(completeEvent,"completeEvent");
		HX_STACK_LINE(245)
		this->dispatchEvent(completeEvent);
		HX_STACK_LINE(247)
		return true;
	}
	HX_STACK_LINE(251)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__runCheckComplete,return )

Float SoundChannel_obj::get_leftPeak( ){
	HX_STACK_FRAME("openfl._v2.media.SoundChannel","get_leftPeak",0xdfea336e,"openfl._v2.media.SoundChannel.get_leftPeak","openfl/_v2/media/SoundChannel.hx",263,0xb300254c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	return ::openfl::_v2::media::SoundChannel_obj::lime_sound_channel_get_left(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_leftPeak,return )

Float SoundChannel_obj::get_rightPeak( ){
	HX_STACK_FRAME("openfl._v2.media.SoundChannel","get_rightPeak",0xed509573,"openfl._v2.media.SoundChannel.get_rightPeak","openfl/_v2/media/SoundChannel.hx",264,0xb300254c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	return ::openfl::_v2::media::SoundChannel_obj::lime_sound_channel_get_right(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_rightPeak,return )

Float SoundChannel_obj::get_position( ){
	HX_STACK_FRAME("openfl._v2.media.SoundChannel","get_position",0x5994b251,"openfl._v2.media.SoundChannel.get_position","openfl/_v2/media/SoundChannel.hx",265,0xb300254c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	return ::openfl::_v2::media::SoundChannel_obj::lime_sound_channel_get_position(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_position,return )

Float SoundChannel_obj::set_position( Float value){
	HX_STACK_FRAME("openfl._v2.media.SoundChannel","set_position",0x6e8dd5c5,"openfl._v2.media.SoundChannel.set_position","openfl/_v2/media/SoundChannel.hx",266,0xb300254c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(266)
	Float _g = this->get_position();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(266)
	return ::openfl::_v2::media::SoundChannel_obj::lime_sound_channel_set_position(this->__handle,_g);
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_position,return )

::openfl::media::SoundTransform SoundChannel_obj::get_soundTransform( ){
	HX_STACK_FRAME("openfl._v2.media.SoundChannel","get_soundTransform",0xd7f1ae45,"openfl._v2.media.SoundChannel.get_soundTransform","openfl/_v2/media/SoundChannel.hx",269,0xb300254c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(271)
	if (((this->__transform == null()))){
		HX_STACK_LINE(273)
		::openfl::media::SoundTransform _g = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(273)
		this->__transform = _g;
	}
	HX_STACK_LINE(277)
	return this->__transform->clone();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_soundTransform,return )

::openfl::media::SoundTransform SoundChannel_obj::set_soundTransform( ::openfl::media::SoundTransform value){
	HX_STACK_FRAME("openfl._v2.media.SoundChannel","set_soundTransform",0xb4a0e0b9,"openfl._v2.media.SoundChannel.set_soundTransform","openfl/_v2/media/SoundChannel.hx",282,0xb300254c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(284)
	::openfl::media::SoundTransform _g = value->clone();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(284)
	this->__transform = _g;
	HX_STACK_LINE(285)
	::openfl::_v2::media::SoundChannel_obj::lime_sound_channel_set_transform(this->__handle,this->__transform);
	HX_STACK_LINE(287)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_soundTransform,return )

int SoundChannel_obj::__dynamicSoundCount;

Array< ::Dynamic > SoundChannel_obj::__incompleteList;

::openfl::_v2::media::SoundChannel SoundChannel_obj::createDynamic( Dynamic handle,::openfl::media::SoundTransform soundTransform,::openfl::_v2::events::EventDispatcher dataProvider){
	HX_STACK_FRAME("openfl._v2.media.SoundChannel","createDynamic",0x952a0564,"openfl._v2.media.SoundChannel.createDynamic","openfl/_v2/media/SoundChannel.hx",80,0xb300254c)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(soundTransform,"soundTransform")
	HX_STACK_ARG(dataProvider,"dataProvider")
	HX_STACK_LINE(82)
	::openfl::_v2::media::SoundChannel result = ::openfl::_v2::media::SoundChannel_obj::__new(null(),(int)0,(int)0,soundTransform);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(84)
	result->__dataProvider = dataProvider;
	HX_STACK_LINE(85)
	result->__handle = handle;
	HX_STACK_LINE(86)
	::openfl::_v2::media::SoundChannel_obj::__incompleteList->push(result);
	HX_STACK_LINE(88)
	(::openfl::_v2::media::SoundChannel_obj::__dynamicSoundCount)++;
	HX_STACK_LINE(90)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SoundChannel_obj,createDynamic,return )

bool SoundChannel_obj::__completePending( ){
	HX_STACK_FRAME("openfl._v2.media.SoundChannel","__completePending",0xd5114b7f,"openfl._v2.media.SoundChannel.__completePending","openfl/_v2/media/SoundChannel.hx",209,0xb300254c)
	HX_STACK_LINE(209)
	return (::openfl::_v2::media::SoundChannel_obj::__incompleteList->length > (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__completePending,return )

Void SoundChannel_obj::__pollComplete( ){
{
		HX_STACK_FRAME("openfl._v2.media.SoundChannel","__pollComplete",0xbc37d897,"openfl._v2.media.SoundChannel.__pollComplete","openfl/_v2/media/SoundChannel.hx",214,0xb300254c)
		HX_STACK_LINE(216)
		int i = ::openfl::_v2::media::SoundChannel_obj::__incompleteList->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(218)
		while((true)){
			HX_STACK_LINE(218)
			int _g = --(i);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(218)
			if ((!(((_g >= (int)0))))){
				HX_STACK_LINE(218)
				break;
			}
			HX_STACK_LINE(220)
			if ((::openfl::_v2::media::SoundChannel_obj::__incompleteList->__get(i).StaticCast< ::openfl::_v2::media::SoundChannel >()->__checkComplete())){
				HX_STACK_LINE(222)
				::openfl::_v2::media::SoundChannel_obj::__incompleteList->splice(i,(int)1);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__pollComplete,(void))

Dynamic SoundChannel_obj::lime_sound_channel_is_complete;

Dynamic SoundChannel_obj::lime_sound_channel_get_left;

Dynamic SoundChannel_obj::lime_sound_channel_get_right;

Dynamic SoundChannel_obj::lime_sound_channel_get_position;

Dynamic SoundChannel_obj::lime_sound_channel_set_position;

Dynamic SoundChannel_obj::lime_sound_channel_get_data_position;

Dynamic SoundChannel_obj::lime_sound_channel_stop;

Dynamic SoundChannel_obj::lime_sound_channel_create;

Dynamic SoundChannel_obj::lime_sound_channel_set_transform;

Dynamic SoundChannel_obj::lime_sound_channel_needs_data;

Dynamic SoundChannel_obj::lime_sound_channel_add_data;


SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(leftPeak,"leftPeak");
	HX_MARK_MEMBER_NAME(rightPeak,"rightPeak");
	HX_MARK_MEMBER_NAME(__dataProvider,"__dataProvider");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__soundInstance,"__soundInstance");
	HX_MARK_MEMBER_NAME(__transform,"__transform");
	::openfl::_v2::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftPeak,"leftPeak");
	HX_VISIT_MEMBER_NAME(rightPeak,"rightPeak");
	HX_VISIT_MEMBER_NAME(__dataProvider,"__dataProvider");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__soundInstance,"__soundInstance");
	HX_VISIT_MEMBER_NAME(__transform,"__transform");
	::openfl::_v2::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SoundChannel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { return inCallProp ? get_leftPeak() : leftPeak; }
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { return inCallProp ? get_rightPeak() : rightPeak; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_leftPeak") ) { return get_leftPeak_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createDynamic") ) { return createDynamic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rightPeak") ) { return get_rightPeak_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__pollComplete") ) { return __pollComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return get_soundTransform(); }
		if (HX_FIELD_EQ(inName,"__dataProvider") ) { return __dataProvider; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__soundInstance") ) { return __soundInstance; }
		if (HX_FIELD_EQ(inName,"__checkComplete") ) { return __checkComplete_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__incompleteList") ) { return __incompleteList; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__completePending") ) { return __completePending_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__runCheckComplete") ) { return __runCheckComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return get_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return set_soundTransform_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__dynamicSoundCount") ) { return __dynamicSoundCount; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_stop") ) { return lime_sound_channel_stop; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_create") ) { return lime_sound_channel_create; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_left") ) { return lime_sound_channel_get_left; }
		if (HX_FIELD_EQ(inName,"lime_sound_channel_add_data") ) { return lime_sound_channel_add_data; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_right") ) { return lime_sound_channel_get_right; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_needs_data") ) { return lime_sound_channel_needs_data; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_is_complete") ) { return lime_sound_channel_is_complete; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_position") ) { return lime_sound_channel_get_position; }
		if (HX_FIELD_EQ(inName,"lime_sound_channel_set_position") ) { return lime_sound_channel_set_position; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_set_transform") ) { return lime_sound_channel_set_transform; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_data_position") ) { return lime_sound_channel_get_data_position; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { leftPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { rightPeak=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { __transform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return set_soundTransform(inValue); }
		if (HX_FIELD_EQ(inName,"__dataProvider") ) { __dataProvider=inValue.Cast< ::openfl::_v2::events::EventDispatcher >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__soundInstance") ) { __soundInstance=inValue.Cast< ::openfl::_v2::media::Sound >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__incompleteList") ) { __incompleteList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__dynamicSoundCount") ) { __dynamicSoundCount=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_stop") ) { lime_sound_channel_stop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_create") ) { lime_sound_channel_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_left") ) { lime_sound_channel_get_left=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_sound_channel_add_data") ) { lime_sound_channel_add_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_right") ) { lime_sound_channel_get_right=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_needs_data") ) { lime_sound_channel_needs_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_is_complete") ) { lime_sound_channel_is_complete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_position") ) { lime_sound_channel_get_position=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_sound_channel_set_position") ) { lime_sound_channel_set_position=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_set_transform") ) { lime_sound_channel_set_transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_data_position") ) { lime_sound_channel_get_data_position=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("leftPeak"));
	outFields->push(HX_CSTRING("rightPeak"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("soundTransform"));
	outFields->push(HX_CSTRING("__dataProvider"));
	outFields->push(HX_CSTRING("__handle"));
	outFields->push(HX_CSTRING("__soundInstance"));
	outFields->push(HX_CSTRING("__transform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__dynamicSoundCount"),
	HX_CSTRING("__incompleteList"),
	HX_CSTRING("createDynamic"),
	HX_CSTRING("__completePending"),
	HX_CSTRING("__pollComplete"),
	HX_CSTRING("lime_sound_channel_is_complete"),
	HX_CSTRING("lime_sound_channel_get_left"),
	HX_CSTRING("lime_sound_channel_get_right"),
	HX_CSTRING("lime_sound_channel_get_position"),
	HX_CSTRING("lime_sound_channel_set_position"),
	HX_CSTRING("lime_sound_channel_get_data_position"),
	HX_CSTRING("lime_sound_channel_stop"),
	HX_CSTRING("lime_sound_channel_create"),
	HX_CSTRING("lime_sound_channel_set_transform"),
	HX_CSTRING("lime_sound_channel_needs_data"),
	HX_CSTRING("lime_sound_channel_add_data"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,leftPeak),HX_CSTRING("leftPeak")},
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,rightPeak),HX_CSTRING("rightPeak")},
	{hx::fsObject /*::openfl::_v2::events::EventDispatcher*/ ,(int)offsetof(SoundChannel_obj,__dataProvider),HX_CSTRING("__dataProvider")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundChannel_obj,__handle),HX_CSTRING("__handle")},
	{hx::fsObject /*::openfl::_v2::media::Sound*/ ,(int)offsetof(SoundChannel_obj,__soundInstance),HX_CSTRING("__soundInstance")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(SoundChannel_obj,__transform),HX_CSTRING("__transform")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("leftPeak"),
	HX_CSTRING("rightPeak"),
	HX_CSTRING("__dataProvider"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__soundInstance"),
	HX_CSTRING("__transform"),
	HX_CSTRING("stop"),
	HX_CSTRING("__checkComplete"),
	HX_CSTRING("__runCheckComplete"),
	HX_CSTRING("get_leftPeak"),
	HX_CSTRING("get_rightPeak"),
	HX_CSTRING("get_position"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_soundTransform"),
	HX_CSTRING("set_soundTransform"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__dynamicSoundCount,"__dynamicSoundCount");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__incompleteList,"__incompleteList");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_is_complete,"lime_sound_channel_is_complete");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_left,"lime_sound_channel_get_left");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_right,"lime_sound_channel_get_right");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_position,"lime_sound_channel_get_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_set_position,"lime_sound_channel_set_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_data_position,"lime_sound_channel_get_data_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_stop,"lime_sound_channel_stop");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_create,"lime_sound_channel_create");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_set_transform,"lime_sound_channel_set_transform");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_needs_data,"lime_sound_channel_needs_data");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_add_data,"lime_sound_channel_add_data");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__dynamicSoundCount,"__dynamicSoundCount");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__incompleteList,"__incompleteList");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_is_complete,"lime_sound_channel_is_complete");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_left,"lime_sound_channel_get_left");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_right,"lime_sound_channel_get_right");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_position,"lime_sound_channel_get_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_set_position,"lime_sound_channel_set_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_data_position,"lime_sound_channel_get_data_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_stop,"lime_sound_channel_stop");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_create,"lime_sound_channel_create");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_set_transform,"lime_sound_channel_set_transform");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_needs_data,"lime_sound_channel_needs_data");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_add_data,"lime_sound_channel_add_data");
};

#endif

Class SoundChannel_obj::__mClass;

void SoundChannel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.media.SoundChannel"), hx::TCanCast< SoundChannel_obj> ,sStaticFields,sMemberFields,
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

void SoundChannel_obj::__boot()
{
	__dynamicSoundCount= (int)0;
	__incompleteList= Array_obj< ::Dynamic >::__new();
	lime_sound_channel_is_complete= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_sound_channel_is_complete"),(int)1);
	lime_sound_channel_get_left= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_sound_channel_get_left"),(int)1);
	lime_sound_channel_get_right= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_sound_channel_get_right"),(int)1);
	lime_sound_channel_get_position= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_sound_channel_get_position"),(int)1);
	lime_sound_channel_set_position= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_sound_channel_set_position"),(int)2);
	lime_sound_channel_get_data_position= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_sound_channel_get_data_position"),(int)1);
	lime_sound_channel_stop= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_sound_channel_stop"),(int)1);
	lime_sound_channel_create= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_sound_channel_create"),(int)4);
	lime_sound_channel_set_transform= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_sound_channel_set_transform"),(int)2);
	lime_sound_channel_needs_data= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_sound_channel_needs_data"),(int)1);
	lime_sound_channel_add_data= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_sound_channel_add_data"),(int)2);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace media
