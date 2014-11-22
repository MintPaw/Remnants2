#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace math{

Void FlxRandom_obj::__construct(Dynamic InitialSeed)
{
HX_STACK_FRAME("flixel.math.FlxRandom","new",0x97b4f113,"flixel.math.FlxRandom.new","flixel/math/FlxRandom.hx",10,0x4fa37e1d)
HX_STACK_THIS(this)
HX_STACK_ARG(InitialSeed,"InitialSeed")
{
	HX_STACK_LINE(394)
	this->internalSeed = (int)1;
	HX_STACK_LINE(157)
	this->_floatNormalRho = (int)0;
	HX_STACK_LINE(156)
	this->_twoPI = (::Math_obj::PI * (int)2);
	HX_STACK_LINE(155)
	this->_floatNormalRand2 = (int)0;
	HX_STACK_LINE(154)
	this->_floatNormalRand1 = (int)0;
	HX_STACK_LINE(153)
	this->_hasFloatNormalSpare = false;
	HX_STACK_LINE(17)
	this->initialSeed = (int)1;
	HX_STACK_LINE(32)
	if (((InitialSeed != null()))){
		HX_STACK_LINE(34)
		int NewSeed = InitialSeed;		HX_STACK_VAR(NewSeed,"NewSeed");
		HX_STACK_LINE(34)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(34)
		{
			struct _Function_3_1{
				inline static Dynamic Block( int &NewSeed){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",34,0x4fa37e1d)
					{
						HX_STACK_LINE(34)
						Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(34)
						if (((NewSeed < (int)1))){
							HX_STACK_LINE(34)
							lowerBound = (int)1;
						}
						else{
							HX_STACK_LINE(34)
							lowerBound = NewSeed;
						}
						HX_STACK_LINE(34)
						return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(34)
			int NewSeed1 = ::Std_obj::_int(_Function_3_1::Block(NewSeed));		HX_STACK_VAR(NewSeed1,"NewSeed1");
			struct _Function_3_2{
				inline static Dynamic Block( int &NewSeed1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",34,0x4fa37e1d)
					{
						HX_STACK_LINE(34)
						Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(34)
						if (((NewSeed1 < (int)1))){
							HX_STACK_LINE(34)
							lowerBound = (int)1;
						}
						else{
							HX_STACK_LINE(34)
							lowerBound = NewSeed1;
						}
						HX_STACK_LINE(34)
						return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(34)
			int _g = ::Std_obj::_int(_Function_3_2::Block(NewSeed1));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(34)
			Float _g1 = this->internalSeed = _g;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(34)
			_g2 = ::Std_obj::_int(_g1);
		}
		HX_STACK_LINE(34)
		this->initialSeed = _g2;
	}
	else{
		HX_STACK_LINE(38)
		int NewSeed;		HX_STACK_VAR(NewSeed,"NewSeed");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			Float _g3 = ::Math_obj::random();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(38)
			Float _g4 = (_g3 * (int)2147483647);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(38)
			int Value = ::Std_obj::_int(_g4);		HX_STACK_VAR(Value,"Value");
			struct _Function_3_1{
				inline static Dynamic Block( int &Value){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",38,0x4fa37e1d)
					{
						HX_STACK_LINE(38)
						Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(38)
						if (((Value < (int)1))){
							HX_STACK_LINE(38)
							lowerBound = (int)1;
						}
						else{
							HX_STACK_LINE(38)
							lowerBound = Value;
						}
						HX_STACK_LINE(38)
						return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(38)
			NewSeed = ::Std_obj::_int(_Function_3_1::Block(Value));
		}
		HX_STACK_LINE(38)
		int _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(38)
		{
			struct _Function_3_1{
				inline static Dynamic Block( int &NewSeed){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",38,0x4fa37e1d)
					{
						HX_STACK_LINE(38)
						Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(38)
						if (((NewSeed < (int)1))){
							HX_STACK_LINE(38)
							lowerBound = (int)1;
						}
						else{
							HX_STACK_LINE(38)
							lowerBound = NewSeed;
						}
						HX_STACK_LINE(38)
						return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(38)
			int NewSeed1 = ::Std_obj::_int(_Function_3_1::Block(NewSeed));		HX_STACK_VAR(NewSeed1,"NewSeed1");
			struct _Function_3_2{
				inline static Dynamic Block( int &NewSeed1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",38,0x4fa37e1d)
					{
						HX_STACK_LINE(38)
						Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(38)
						if (((NewSeed1 < (int)1))){
							HX_STACK_LINE(38)
							lowerBound = (int)1;
						}
						else{
							HX_STACK_LINE(38)
							lowerBound = NewSeed1;
						}
						HX_STACK_LINE(38)
						return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(38)
			int _g5 = ::Std_obj::_int(_Function_3_2::Block(NewSeed1));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(38)
			Float _g6 = this->internalSeed = _g5;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(38)
			_g7 = ::Std_obj::_int(_g6);
		}
		HX_STACK_LINE(38)
		this->initialSeed = _g7;
	}
}
;
	return null();
}

//FlxRandom_obj::~FlxRandom_obj() { }

Dynamic FlxRandom_obj::__CreateEmpty() { return  new FlxRandom_obj; }
hx::ObjectPtr< FlxRandom_obj > FlxRandom_obj::__new(Dynamic InitialSeed)
{  hx::ObjectPtr< FlxRandom_obj > result = new FlxRandom_obj();
	result->__construct(InitialSeed);
	return result;}

Dynamic FlxRandom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRandom_obj > result = new FlxRandom_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic FlxRandom_obj::getObject_flixel_group_FlxTypedGroup_T( Dynamic Objects,Array< Float > WeightsArray,hx::Null< int >  __o_StartIndex,Dynamic EndIndex){
int StartIndex = __o_StartIndex.Default(0);
	HX_STACK_FRAME("flixel.math.FlxRandom","getObject_flixel_group_FlxTypedGroup_T",0x29a53b90,"flixel.math.FlxRandom.getObject_flixel_group_FlxTypedGroup_T","flixel/math/FlxRandom.hx",264,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Objects,"Objects")
	HX_STACK_ARG(WeightsArray,"WeightsArray")
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
{
		HX_STACK_LINE(265)
		Dynamic selected = null();		HX_STACK_VAR(selected,"selected");
		HX_STACK_LINE(267)
		if (((Objects->__Field(HX_CSTRING("length"),true) != (int)0))){
			HX_STACK_LINE(269)
			if (((WeightsArray == null()))){
				HX_STACK_LINE(271)
				Array< Float > _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(271)
				{
					HX_STACK_LINE(271)
					Array< Float > _g1 = Array_obj< Float >::__new();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(271)
					{
						HX_STACK_LINE(271)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(271)
						int _g11 = Objects->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(271)
						while((true)){
							HX_STACK_LINE(271)
							if ((!(((_g2 < _g11))))){
								HX_STACK_LINE(271)
								break;
							}
							HX_STACK_LINE(271)
							int i = (_g2)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(271)
							_g1->push((int)1);
						}
					}
					HX_STACK_LINE(271)
					_g = _g1;
				}
				HX_STACK_LINE(271)
				WeightsArray = _g;
			}
			HX_STACK_LINE(274)
			if (((EndIndex == null()))){
				HX_STACK_LINE(276)
				EndIndex = (Objects->__Field(HX_CSTRING("length"),true) - (int)1);
			}
			struct _Function_2_1{
				inline static Float Block( Dynamic &Objects,int &StartIndex){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",279,0x4fa37e1d)
					{
						HX_STACK_LINE(279)
						Dynamic Max = (Objects->__Field(HX_CSTRING("length"),true) - (int)1);		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(279)
						Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(279)
						if (((StartIndex < (int)0))){
							HX_STACK_LINE(279)
							lowerBound = (int)0;
						}
						else{
							HX_STACK_LINE(279)
							lowerBound = StartIndex;
						}
						HX_STACK_LINE(279)
						return (  (((bool((Max != null())) && bool((lowerBound > Max))))) ? Dynamic(Max) : Dynamic(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(279)
			int _g1 = ::Std_obj::_int(_Function_2_1::Block(Objects,StartIndex));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(279)
			StartIndex = _g1;
			struct _Function_2_2{
				inline static Float Block( Dynamic &Objects,Dynamic &EndIndex){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",280,0x4fa37e1d)
					{
						HX_STACK_LINE(280)
						Float Value = EndIndex;		HX_STACK_VAR(Value,"Value");
						HX_STACK_LINE(280)
						Dynamic Max = (Objects->__Field(HX_CSTRING("length"),true) - (int)1);		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(280)
						Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(280)
						if (((Value < (int)0))){
							HX_STACK_LINE(280)
							lowerBound = (int)0;
						}
						else{
							HX_STACK_LINE(280)
							lowerBound = Value;
						}
						HX_STACK_LINE(280)
						return (  (((bool((Max != null())) && bool((lowerBound > Max))))) ? Dynamic(Max) : Dynamic(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(280)
			int _g2 = ::Std_obj::_int(_Function_2_2::Block(Objects,EndIndex));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(280)
			EndIndex = _g2;
			HX_STACK_LINE(284)
			if (((EndIndex < StartIndex))){
				HX_STACK_LINE(286)
				StartIndex = (StartIndex + EndIndex);
				HX_STACK_LINE(287)
				EndIndex = (StartIndex - EndIndex);
				HX_STACK_LINE(288)
				StartIndex = (StartIndex - EndIndex);
			}
			HX_STACK_LINE(291)
			if (((EndIndex > (WeightsArray->length - (int)1)))){
				HX_STACK_LINE(293)
				EndIndex = (WeightsArray->length - (int)1);
			}
			HX_STACK_LINE(296)
			Array< Float > _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					int _g21 = StartIndex;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(296)
					int _g11 = (EndIndex + (int)1);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(296)
					while((true)){
						HX_STACK_LINE(296)
						if ((!(((_g21 < _g11))))){
							HX_STACK_LINE(296)
							break;
						}
						HX_STACK_LINE(296)
						int i = (_g21)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(296)
						_g->push(WeightsArray->__get(i));
					}
				}
				HX_STACK_LINE(296)
				_g3 = _g;
			}
			HX_STACK_LINE(296)
			::flixel::math::FlxRandom_obj::_arrayFloatHelper = _g3;
			HX_STACK_LINE(297)
			int _g4 = this->weightedPick(::flixel::math::FlxRandom_obj::_arrayFloatHelper);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(297)
			Dynamic _g5 = Objects->__GetItem(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(297)
			selected = _g5;
		}
		HX_STACK_LINE(300)
		return selected;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRandom_obj,getObject_flixel_group_FlxTypedGroup_T,return )

int FlxRandom_obj::resetInitialSeed( ){
	HX_STACK_FRAME("flixel.math.FlxRandom","resetInitialSeed",0xb48811f3,"flixel.math.FlxRandom.resetInitialSeed","flixel/math/FlxRandom.hx",51,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	int NewSeed;		HX_STACK_VAR(NewSeed,"NewSeed");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		Float _g1 = (_g * (int)2147483647);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		int Value = ::Std_obj::_int(_g1);		HX_STACK_VAR(Value,"Value");
		struct _Function_2_1{
			inline static Dynamic Block( int &Value){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",51,0x4fa37e1d)
				{
					HX_STACK_LINE(51)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(51)
					if (((Value < (int)1))){
						HX_STACK_LINE(51)
						lowerBound = (int)1;
					}
					else{
						HX_STACK_LINE(51)
						lowerBound = Value;
					}
					HX_STACK_LINE(51)
					return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(51)
		NewSeed = ::Std_obj::_int(_Function_2_1::Block(Value));
	}
	HX_STACK_LINE(51)
	int _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(51)
	{
		struct _Function_2_1{
			inline static Dynamic Block( int &NewSeed){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",51,0x4fa37e1d)
				{
					HX_STACK_LINE(51)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(51)
					if (((NewSeed < (int)1))){
						HX_STACK_LINE(51)
						lowerBound = (int)1;
					}
					else{
						HX_STACK_LINE(51)
						lowerBound = NewSeed;
					}
					HX_STACK_LINE(51)
					return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(51)
		int NewSeed1 = ::Std_obj::_int(_Function_2_1::Block(NewSeed));		HX_STACK_VAR(NewSeed1,"NewSeed1");
		struct _Function_2_2{
			inline static Dynamic Block( int &NewSeed1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",51,0x4fa37e1d)
				{
					HX_STACK_LINE(51)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(51)
					if (((NewSeed1 < (int)1))){
						HX_STACK_LINE(51)
						lowerBound = (int)1;
					}
					else{
						HX_STACK_LINE(51)
						lowerBound = NewSeed1;
					}
					HX_STACK_LINE(51)
					return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(51)
		int _g2 = ::Std_obj::_int(_Function_2_2::Block(NewSeed1));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(51)
		Float _g3 = this->internalSeed = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(51)
		_g4 = ::Std_obj::_int(_g3);
	}
	HX_STACK_LINE(51)
	return this->initialSeed = _g4;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,resetInitialSeed,return )

int FlxRandom_obj::_int( hx::Null< int >  __o_Min,hx::Null< int >  __o_Max,Array< int > Excludes){
int Min = __o_Min.Default(0);
int Max = __o_Max.Default(2147483647);
	HX_STACK_FRAME("flixel.math.FlxRandom","int",0x97b12da2,"flixel.math.FlxRandom.int","flixel/math/FlxRandom.hx",65,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Excludes,"Excludes")
{
		HX_STACK_LINE(65)
		if (((bool((bool((Min == (int)0)) && bool((Max == (int)2147483647)))) && bool((Excludes == null()))))){
			HX_STACK_LINE(67)
			Float _g = this->internalSeed = hx::Mod((this->internalSeed * 48271.0),(int)2147483647);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			return ::Std_obj::_int(_g);
		}
		else{
			HX_STACK_LINE(69)
			if (((Min == Max))){
				HX_STACK_LINE(71)
				return Min;
			}
			else{
				HX_STACK_LINE(77)
				if (((Min > Max))){
					HX_STACK_LINE(79)
					Min = (Min + Max);
					HX_STACK_LINE(80)
					Max = (Min - Max);
					HX_STACK_LINE(81)
					Min = (Min - Max);
				}
				HX_STACK_LINE(84)
				if (((Excludes == null()))){
					HX_STACK_LINE(86)
					Float _g1 = this->internalSeed = hx::Mod((this->internalSeed * 48271.0),(int)2147483647);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(86)
					Float _g2 = (Float(_g1) / Float((int)2147483647));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(86)
					Float _g3 = (_g2 * (((Max - Min) + (int)1)));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(86)
					Float _g4 = (Min + _g3);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(86)
					return ::Math_obj::floor(_g4);
				}
				else{
					HX_STACK_LINE(90)
					int result = (int)0;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(92)
					while((true)){
						HX_STACK_LINE(94)
						Float _g5 = this->internalSeed = hx::Mod((this->internalSeed * 48271.0),(int)2147483647);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(94)
						Float _g6 = (Float(_g5) / Float((int)2147483647));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(94)
						Float _g7 = (_g6 * (((Max - Min) + (int)1)));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(94)
						Float _g8 = (Min + _g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(94)
						int _g9 = ::Math_obj::floor(_g8);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(94)
						result = _g9;
						HX_STACK_LINE(96)
						int _g10 = Excludes->indexOf(result,null());		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(92)
						if ((!(((_g10 >= (int)0))))){
							HX_STACK_LINE(92)
							break;
						}
					}
					HX_STACK_LINE(98)
					return result;
				}
			}
		}
		HX_STACK_LINE(65)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,_int,return )

Float FlxRandom_obj::_float( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max,Array< Float > Excludes){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(1);
	HX_STACK_FRAME("flixel.math.FlxRandom","float",0x0d07b90f,"flixel.math.FlxRandom.float","flixel/math/FlxRandom.hx",113,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Excludes,"Excludes")
{
		HX_STACK_LINE(114)
		Float result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(116)
		if (((bool((bool((Min == (int)0)) && bool((Max == (int)1)))) && bool((Excludes == null()))))){
			HX_STACK_LINE(118)
			Float _g = this->internalSeed = hx::Mod((this->internalSeed * 48271.0),(int)2147483647);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(118)
			return (Float(_g) / Float((int)2147483647));
		}
		else{
			HX_STACK_LINE(120)
			if (((Min == Max))){
				HX_STACK_LINE(122)
				result = Min;
			}
			else{
				HX_STACK_LINE(127)
				if (((Min > Max))){
					HX_STACK_LINE(129)
					Min = (Min + Max);
					HX_STACK_LINE(130)
					Max = (Min - Max);
					HX_STACK_LINE(131)
					Min = (Min - Max);
				}
				HX_STACK_LINE(134)
				if (((Excludes == null()))){
					HX_STACK_LINE(136)
					Float _g1 = this->internalSeed = hx::Mod((this->internalSeed * 48271.0),(int)2147483647);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(136)
					Float _g2 = (Float(_g1) / Float((int)2147483647));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(136)
					Float _g3 = (_g2 * ((Max - Min)));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(136)
					Float _g4 = (Min + _g3);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(136)
					result = _g4;
				}
				else{
					HX_STACK_LINE(140)
					while((true)){
						HX_STACK_LINE(142)
						Float _g5 = this->internalSeed = hx::Mod((this->internalSeed * 48271.0),(int)2147483647);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(142)
						Float _g6 = (Float(_g5) / Float((int)2147483647));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(142)
						Float _g7 = (_g6 * ((Max - Min)));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(142)
						Float _g8 = (Min + _g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(142)
						result = _g8;
						HX_STACK_LINE(144)
						int _g9 = Excludes->indexOf(result,null());		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(140)
						if ((!(((_g9 >= (int)0))))){
							HX_STACK_LINE(140)
							break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(148)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,_float,return )

Float FlxRandom_obj::floatNormal( hx::Null< Float >  __o_Mean,hx::Null< Float >  __o_StdDev){
Float Mean = __o_Mean.Default(0);
Float StdDev = __o_StdDev.Default(1);
	HX_STACK_FRAME("flixel.math.FlxRandom","floatNormal",0xe3d85496,"flixel.math.FlxRandom.floatNormal","flixel/math/FlxRandom.hx",170,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Mean,"Mean")
	HX_STACK_ARG(StdDev,"StdDev")
{
		HX_STACK_LINE(171)
		if ((this->_hasFloatNormalSpare)){
			HX_STACK_LINE(173)
			this->_hasFloatNormalSpare = false;
			HX_STACK_LINE(174)
			Float scale = (StdDev * this->_floatNormalRho);		HX_STACK_VAR(scale,"scale");
			HX_STACK_LINE(175)
			return (Mean + (scale * this->_floatNormalRand2));
		}
		HX_STACK_LINE(178)
		this->_hasFloatNormalSpare = true;
		HX_STACK_LINE(180)
		Float _g = this->internalSeed = hx::Mod((this->internalSeed * 48271.0),(int)2147483647);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(180)
		Float _g1 = (Float(_g) / Float((int)2147483647));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(180)
		Float theta = (this->_twoPI * _g1);		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(181)
		Float _g2 = this->internalSeed = hx::Mod((this->internalSeed * 48271.0),(int)2147483647);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(181)
		Float _g3 = (Float(_g2) / Float((int)2147483647));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(181)
		Float _g4 = ((int)1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(181)
		Float _g5 = ::Math_obj::log(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(181)
		Float _g6 = ((int)-2 * _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(181)
		Float _g7 = ::Math_obj::sqrt(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(181)
		this->_floatNormalRho = _g7;
		HX_STACK_LINE(182)
		Float scale = (StdDev * this->_floatNormalRho);		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(184)
		Float _g8 = ::Math_obj::cos(theta);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(184)
		this->_floatNormalRand1 = _g8;
		HX_STACK_LINE(185)
		Float _g9 = ::Math_obj::sin(theta);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(185)
		this->_floatNormalRand2 = _g9;
		HX_STACK_LINE(187)
		return (Mean + (scale * this->_floatNormalRand1));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRandom_obj,floatNormal,return )

bool FlxRandom_obj::_bool( hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
	HX_STACK_FRAME("flixel.math.FlxRandom","bool",0x1eb70017,"flixel.math.FlxRandom.bool","flixel/math/FlxRandom.hx",200,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Chance,"Chance")
{
		HX_STACK_LINE(201)
		Float _g = this->_float((int)0,(int)100,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(201)
		return (_g < Chance);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,_bool,return )

int FlxRandom_obj::sign( hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
	HX_STACK_FRAME("flixel.math.FlxRandom","sign",0x29ef0c2a,"flixel.math.FlxRandom.sign","flixel/math/FlxRandom.hx",212,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Chance,"Chance")
{
		HX_STACK_LINE(213)
		Float _g = this->_float((int)0,(int)100,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(213)
		if (((_g < Chance))){
			HX_STACK_LINE(213)
			return (int)1;
		}
		else{
			HX_STACK_LINE(213)
			return (int)-1;
		}
		HX_STACK_LINE(213)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,sign,return )

int FlxRandom_obj::weightedPick( Array< Float > WeightsArray){
	HX_STACK_FRAME("flixel.math.FlxRandom","weightedPick",0x1c7c1545,"flixel.math.FlxRandom.weightedPick","flixel/math/FlxRandom.hx",226,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(WeightsArray,"WeightsArray")
	HX_STACK_LINE(227)
	Float totalWeight = (int)0;		HX_STACK_VAR(totalWeight,"totalWeight");
	HX_STACK_LINE(228)
	int pick = (int)0;		HX_STACK_VAR(pick,"pick");
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(230)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(230)
		while((true)){
			HX_STACK_LINE(230)
			if ((!(((_g < WeightsArray->length))))){
				HX_STACK_LINE(230)
				break;
			}
			HX_STACK_LINE(230)
			Float i = WeightsArray->__get(_g);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(230)
			++(_g);
			HX_STACK_LINE(232)
			hx::AddEq(totalWeight,i);
		}
	}
	HX_STACK_LINE(235)
	Float _g = this->_float((int)0,totalWeight,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(235)
	totalWeight = _g;
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(237)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(237)
		int _g2 = WeightsArray->length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(237)
		while((true)){
			HX_STACK_LINE(237)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(237)
				break;
			}
			HX_STACK_LINE(237)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(239)
			if (((totalWeight < WeightsArray->__get(i)))){
				HX_STACK_LINE(241)
				pick = i;
				HX_STACK_LINE(242)
				break;
			}
			HX_STACK_LINE(245)
			hx::SubEq(totalWeight,WeightsArray->__get(i));
		}
	}
	HX_STACK_LINE(248)
	return pick;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,weightedPick,return )

int FlxRandom_obj::color( Dynamic Min,Dynamic Max,Dynamic Alpha,hx::Null< bool >  __o_GreyScale){
bool GreyScale = __o_GreyScale.Default(false);
	HX_STACK_FRAME("flixel.math.FlxRandom","color",0x54cd64d6,"flixel.math.FlxRandom.color","flixel/math/FlxRandom.hx",341,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_ARG(GreyScale,"GreyScale")
{
		HX_STACK_LINE(342)
		int red;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(343)
		int green;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(344)
		int blue;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(345)
		int alpha;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(347)
		if (((bool((Min == null())) && bool((Max == null()))))){
			HX_STACK_LINE(349)
			int _g = this->_int((int)0,(int)255,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(349)
			red = _g;
			HX_STACK_LINE(350)
			int _g1 = this->_int((int)0,(int)255,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(350)
			green = _g1;
			HX_STACK_LINE(351)
			int _g2 = this->_int((int)0,(int)255,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(351)
			blue = _g2;
			HX_STACK_LINE(352)
			int _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(352)
			if (((Alpha == null()))){
				HX_STACK_LINE(352)
				_g3 = this->_int((int)0,(int)255,null());
			}
			else{
				HX_STACK_LINE(352)
				_g3 = Alpha;
			}
			HX_STACK_LINE(352)
			alpha = _g3;
		}
		else{
			HX_STACK_LINE(354)
			if (((Min == null()))){
				struct _Function_3_1{
					inline static int Block( Dynamic &Min){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",356,0x4fa37e1d)
						{
							HX_STACK_LINE(356)
							int this1 = Min;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(356)
							return (int((int(this1) >> int((int)16))) & int((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(356)
				int _g4 = this->_int(_Function_3_1::Block(Min),(int)255,null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(356)
				red = _g4;
				HX_STACK_LINE(357)
				int _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(357)
				if ((GreyScale)){
					HX_STACK_LINE(357)
					_g5 = red;
				}
				else{
					struct _Function_4_1{
						inline static int Block( Dynamic &Min){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",357,0x4fa37e1d)
							{
								HX_STACK_LINE(357)
								int this1 = Min;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(357)
								return (int((int(this1) >> int((int)8))) & int((int)255));
							}
							return null();
						}
					};
					HX_STACK_LINE(357)
					_g5 = this->_int(_Function_4_1::Block(Min),(int)255,null());
				}
				HX_STACK_LINE(357)
				green = _g5;
				HX_STACK_LINE(358)
				int _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(358)
				if ((GreyScale)){
					HX_STACK_LINE(358)
					_g6 = red;
				}
				else{
					struct _Function_4_1{
						inline static int Block( Dynamic &Min){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",358,0x4fa37e1d)
							{
								HX_STACK_LINE(358)
								int this1 = Min;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(358)
								return (int(this1) & int((int)255));
							}
							return null();
						}
					};
					HX_STACK_LINE(358)
					_g6 = this->_int(_Function_4_1::Block(Min),(int)255,null());
				}
				HX_STACK_LINE(358)
				blue = _g6;
				HX_STACK_LINE(359)
				int _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(359)
				if (((Alpha == null()))){
					struct _Function_4_1{
						inline static int Block( Dynamic &Min){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",359,0x4fa37e1d)
							{
								HX_STACK_LINE(359)
								int this1 = Min;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(359)
								return (int((int(this1) >> int((int)24))) & int((int)255));
							}
							return null();
						}
					};
					HX_STACK_LINE(359)
					_g7 = this->_int(_Function_4_1::Block(Min),(int)255,null());
				}
				else{
					HX_STACK_LINE(359)
					_g7 = Alpha;
				}
				HX_STACK_LINE(359)
				alpha = _g7;
			}
			else{
				HX_STACK_LINE(361)
				if (((Max == null()))){
					struct _Function_4_1{
						inline static int Block( Dynamic &Max){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",363,0x4fa37e1d)
							{
								HX_STACK_LINE(363)
								int this1 = Max;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(363)
								return (int((int(this1) >> int((int)16))) & int((int)255));
							}
							return null();
						}
					};
					HX_STACK_LINE(363)
					int _g8 = this->_int((int)0,_Function_4_1::Block(Max),null());		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(363)
					red = _g8;
					HX_STACK_LINE(364)
					int _g9;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(364)
					if ((GreyScale)){
						HX_STACK_LINE(364)
						_g9 = red;
					}
					else{
						struct _Function_5_1{
							inline static int Block( Dynamic &Max){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",364,0x4fa37e1d)
								{
									HX_STACK_LINE(364)
									int this1 = Max;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(364)
									return (int((int(this1) >> int((int)8))) & int((int)255));
								}
								return null();
							}
						};
						HX_STACK_LINE(364)
						_g9 = this->_int((int)0,_Function_5_1::Block(Max),null());
					}
					HX_STACK_LINE(364)
					green = _g9;
					HX_STACK_LINE(365)
					int _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(365)
					if ((GreyScale)){
						HX_STACK_LINE(365)
						_g10 = red;
					}
					else{
						struct _Function_5_1{
							inline static int Block( Dynamic &Max){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",365,0x4fa37e1d)
								{
									HX_STACK_LINE(365)
									int this1 = Max;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(365)
									return (int(this1) & int((int)255));
								}
								return null();
							}
						};
						HX_STACK_LINE(365)
						_g10 = this->_int((int)0,_Function_5_1::Block(Max),null());
					}
					HX_STACK_LINE(365)
					blue = _g10;
					HX_STACK_LINE(366)
					int _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(366)
					if (((Alpha == null()))){
						struct _Function_5_1{
							inline static int Block( Dynamic &Max){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",366,0x4fa37e1d)
								{
									HX_STACK_LINE(366)
									int this1 = Max;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(366)
									return (int((int(this1) >> int((int)24))) & int((int)255));
								}
								return null();
							}
						};
						HX_STACK_LINE(366)
						_g11 = this->_int((int)0,_Function_5_1::Block(Max),null());
					}
					else{
						HX_STACK_LINE(366)
						_g11 = Alpha;
					}
					HX_STACK_LINE(366)
					alpha = _g11;
				}
				else{
					struct _Function_4_1{
						inline static int Block( Dynamic &Min){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",370,0x4fa37e1d)
							{
								HX_STACK_LINE(370)
								int this1 = Min;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(370)
								return (int((int(this1) >> int((int)16))) & int((int)255));
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static int Block( Dynamic &Max){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",370,0x4fa37e1d)
							{
								HX_STACK_LINE(370)
								int this1 = Max;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(370)
								return (int((int(this1) >> int((int)16))) & int((int)255));
							}
							return null();
						}
					};
					HX_STACK_LINE(370)
					int _g12 = this->_int(_Function_4_1::Block(Min),_Function_4_2::Block(Max),null());		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(370)
					red = _g12;
					HX_STACK_LINE(371)
					int _g13;		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(371)
					if ((GreyScale)){
						HX_STACK_LINE(371)
						_g13 = red;
					}
					else{
						struct _Function_5_1{
							inline static int Block( Dynamic &Min){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",371,0x4fa37e1d)
								{
									HX_STACK_LINE(371)
									int this1 = Min;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(371)
									return (int((int(this1) >> int((int)8))) & int((int)255));
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static int Block( Dynamic &Max){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",371,0x4fa37e1d)
								{
									HX_STACK_LINE(371)
									int this1 = Max;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(371)
									return (int((int(this1) >> int((int)8))) & int((int)255));
								}
								return null();
							}
						};
						HX_STACK_LINE(371)
						_g13 = this->_int(_Function_5_1::Block(Min),_Function_5_2::Block(Max),null());
					}
					HX_STACK_LINE(371)
					green = _g13;
					HX_STACK_LINE(372)
					int _g14;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(372)
					if ((GreyScale)){
						HX_STACK_LINE(372)
						_g14 = red;
					}
					else{
						struct _Function_5_1{
							inline static int Block( Dynamic &Min){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",372,0x4fa37e1d)
								{
									HX_STACK_LINE(372)
									int this1 = Min;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(372)
									return (int(this1) & int((int)255));
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static int Block( Dynamic &Max){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",372,0x4fa37e1d)
								{
									HX_STACK_LINE(372)
									int this1 = Max;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(372)
									return (int(this1) & int((int)255));
								}
								return null();
							}
						};
						HX_STACK_LINE(372)
						_g14 = this->_int(_Function_5_1::Block(Min),_Function_5_2::Block(Max),null());
					}
					HX_STACK_LINE(372)
					blue = _g14;
					HX_STACK_LINE(373)
					int _g15;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(373)
					if (((Alpha == null()))){
						struct _Function_5_1{
							inline static int Block( Dynamic &Min){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",373,0x4fa37e1d)
								{
									HX_STACK_LINE(373)
									int this1 = Min;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(373)
									return (int((int(this1) >> int((int)24))) & int((int)255));
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static int Block( Dynamic &Max){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",373,0x4fa37e1d)
								{
									HX_STACK_LINE(373)
									int this1 = Max;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(373)
									return (int((int(this1) >> int((int)24))) & int((int)255));
								}
								return null();
							}
						};
						HX_STACK_LINE(373)
						_g15 = this->_int(_Function_5_1::Block(Min),_Function_5_2::Block(Max),null());
					}
					else{
						HX_STACK_LINE(373)
						_g15 = Alpha;
					}
					HX_STACK_LINE(373)
					alpha = _g15;
				}
			}
		}
		HX_STACK_LINE(376)
		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
		struct _Function_1_1{
			inline static int Block( int &red,int &green,int &blue,int &color,int &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",376,0x4fa37e1d)
				{
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						hx::AndEq(color,(int)-16711681);
						HX_STACK_LINE(376)
						hx::OrEq(color,(int(((  (((red > (int)255))) ? int((int)255) : int((  (((red < (int)0))) ? int((int)0) : int(red) )) ))) << int((int)16)));
						HX_STACK_LINE(376)
						red;
					}
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						hx::AndEq(color,(int)-65281);
						HX_STACK_LINE(376)
						hx::OrEq(color,(int(((  (((green > (int)255))) ? int((int)255) : int((  (((green < (int)0))) ? int((int)0) : int(green) )) ))) << int((int)8)));
						HX_STACK_LINE(376)
						green;
					}
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						hx::AndEq(color,(int)-256);
						HX_STACK_LINE(376)
						if (((blue > (int)255))){
							HX_STACK_LINE(376)
							hx::OrEq(color,(int)255);
						}
						else{
							HX_STACK_LINE(376)
							if (((blue < (int)0))){
								HX_STACK_LINE(376)
								hx::OrEq(color,(int)0);
							}
							else{
								HX_STACK_LINE(376)
								hx::OrEq(color,blue);
							}
						}
						HX_STACK_LINE(376)
						blue;
					}
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						hx::AndEq(color,(int)16777215);
						HX_STACK_LINE(376)
						hx::OrEq(color,(int(((  (((alpha > (int)255))) ? int((int)255) : int((  (((alpha < (int)0))) ? int((int)0) : int(alpha) )) ))) << int((int)24)));
						HX_STACK_LINE(376)
						alpha;
					}
					HX_STACK_LINE(376)
					return color;
				}
				return null();
			}
		};
		HX_STACK_LINE(376)
		return _Function_1_1::Block(red,green,blue,color,alpha);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRandom_obj,color,return )

Float FlxRandom_obj::generate( ){
	HX_STACK_FRAME("flixel.math.FlxRandom","generate",0xe00ed5a2,"flixel.math.FlxRandom.generate","flixel/math/FlxRandom.hx",387,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(387)
	return this->internalSeed = hx::Mod((this->internalSeed * 48271.0),(int)2147483647);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,generate,return )

int FlxRandom_obj::set_initialSeed( int NewSeed){
	HX_STACK_FRAME("flixel.math.FlxRandom","set_initialSeed",0x5f4b69eb,"flixel.math.FlxRandom.set_initialSeed","flixel/math/FlxRandom.hx",401,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewSeed,"NewSeed")
	HX_STACK_LINE(402)
	int _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(402)
	{
		struct _Function_2_1{
			inline static Dynamic Block( int &NewSeed){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",402,0x4fa37e1d)
				{
					HX_STACK_LINE(402)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(402)
					if (((NewSeed < (int)1))){
						HX_STACK_LINE(402)
						lowerBound = (int)1;
					}
					else{
						HX_STACK_LINE(402)
						lowerBound = NewSeed;
					}
					HX_STACK_LINE(402)
					return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(402)
		int NewSeed1 = ::Std_obj::_int(_Function_2_1::Block(NewSeed));		HX_STACK_VAR(NewSeed1,"NewSeed1");
		struct _Function_2_2{
			inline static Dynamic Block( int &NewSeed1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",402,0x4fa37e1d)
				{
					HX_STACK_LINE(402)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(402)
					if (((NewSeed1 < (int)1))){
						HX_STACK_LINE(402)
						lowerBound = (int)1;
					}
					else{
						HX_STACK_LINE(402)
						lowerBound = NewSeed1;
					}
					HX_STACK_LINE(402)
					return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(402)
		int _g = ::Std_obj::_int(_Function_2_2::Block(NewSeed1));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(402)
		Float _g1 = this->internalSeed = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(402)
		_g2 = ::Std_obj::_int(_g1);
	}
	HX_STACK_LINE(402)
	return this->initialSeed = _g2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,set_initialSeed,return )

int FlxRandom_obj::get_currentSeed( ){
	HX_STACK_FRAME("flixel.math.FlxRandom","get_currentSeed",0xbfecf714,"flixel.math.FlxRandom.get_currentSeed","flixel/math/FlxRandom.hx",410,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(410)
	return ::Std_obj::_int(this->internalSeed);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,get_currentSeed,return )

int FlxRandom_obj::set_currentSeed( int NewSeed){
	HX_STACK_FRAME("flixel.math.FlxRandom","set_currentSeed",0xbbb87420,"flixel.math.FlxRandom.set_currentSeed","flixel/math/FlxRandom.hx",417,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewSeed,"NewSeed")
	struct _Function_1_1{
		inline static Dynamic Block( int &NewSeed){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",418,0x4fa37e1d)
			{
				HX_STACK_LINE(418)
				Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(418)
				if (((NewSeed < (int)1))){
					HX_STACK_LINE(418)
					lowerBound = (int)1;
				}
				else{
					HX_STACK_LINE(418)
					lowerBound = NewSeed;
				}
				HX_STACK_LINE(418)
				return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
			}
			return null();
		}
	};
	HX_STACK_LINE(418)
	int _g = ::Std_obj::_int(_Function_1_1::Block(NewSeed));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(418)
	Float _g1 = this->internalSeed = _g;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(418)
	return ::Std_obj::_int(_g1);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,set_currentSeed,return )

int FlxRandom_obj::rangeBound( int Value){
	HX_STACK_FRAME("flixel.math.FlxRandom","rangeBound",0x5cf038ee,"flixel.math.FlxRandom.rangeBound","flixel/math/FlxRandom.hx",426,0x4fa37e1d)
	HX_STACK_ARG(Value,"Value")
	struct _Function_1_1{
		inline static Dynamic Block( int &Value){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",426,0x4fa37e1d)
			{
				HX_STACK_LINE(426)
				Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(426)
				if (((Value < (int)1))){
					HX_STACK_LINE(426)
					lowerBound = (int)1;
				}
				else{
					HX_STACK_LINE(426)
					lowerBound = Value;
				}
				HX_STACK_LINE(426)
				return (  (((lowerBound > (int)2147483646))) ? Dynamic((int)2147483646) : Dynamic(lowerBound) );
			}
			return null();
		}
	};
	HX_STACK_LINE(426)
	return ::Std_obj::_int(_Function_1_1::Block(Value));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,rangeBound,return )

Array< Float > FlxRandom_obj::_arrayFloatHelper;

Float FlxRandom_obj::MULTIPLIER;

int FlxRandom_obj::MODULUS;


FlxRandom_obj::FlxRandom_obj()
{
}

Dynamic FlxRandom_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { return _bool_dyn(); }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { return _float_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_twoPI") ) { return _twoPI; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"generate") ) { return generate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rangeBound") ) { return rangeBound_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialSeed") ) { return initialSeed; }
		if (HX_FIELD_EQ(inName,"currentSeed") ) { return get_currentSeed(); }
		if (HX_FIELD_EQ(inName,"floatNormal") ) { return floatNormal_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weightedPick") ) { return weightedPick_dyn(); }
		if (HX_FIELD_EQ(inName,"internalSeed") ) { return internalSeed; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_floatNormalRho") ) { return _floatNormalRho; }
		if (HX_FIELD_EQ(inName,"set_initialSeed") ) { return set_initialSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentSeed") ) { return get_currentSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentSeed") ) { return set_currentSeed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"resetInitialSeed") ) { return resetInitialSeed_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_arrayFloatHelper") ) { return _arrayFloatHelper; }
		if (HX_FIELD_EQ(inName,"_floatNormalRand1") ) { return _floatNormalRand1; }
		if (HX_FIELD_EQ(inName,"_floatNormalRand2") ) { return _floatNormalRand2; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_hasFloatNormalSpare") ) { return _hasFloatNormalSpare; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"getObject_flixel_group_FlxTypedGroup_T") ) { return getObject_flixel_group_FlxTypedGroup_T_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRandom_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_twoPI") ) { _twoPI=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialSeed") ) { if (inCallProp) return set_initialSeed(inValue);initialSeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentSeed") ) { return set_currentSeed(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"internalSeed") ) { internalSeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_floatNormalRho") ) { _floatNormalRho=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_arrayFloatHelper") ) { _arrayFloatHelper=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_floatNormalRand1") ) { _floatNormalRand1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_floatNormalRand2") ) { _floatNormalRand2=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_hasFloatNormalSpare") ) { _hasFloatNormalSpare=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRandom_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("initialSeed"));
	outFields->push(HX_CSTRING("currentSeed"));
	outFields->push(HX_CSTRING("_hasFloatNormalSpare"));
	outFields->push(HX_CSTRING("_floatNormalRand1"));
	outFields->push(HX_CSTRING("_floatNormalRand2"));
	outFields->push(HX_CSTRING("_twoPI"));
	outFields->push(HX_CSTRING("_floatNormalRho"));
	outFields->push(HX_CSTRING("internalSeed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("rangeBound"),
	HX_CSTRING("_arrayFloatHelper"),
	HX_CSTRING("MULTIPLIER"),
	HX_CSTRING("MODULUS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxRandom_obj,initialSeed),HX_CSTRING("initialSeed")},
	{hx::fsBool,(int)offsetof(FlxRandom_obj,_hasFloatNormalSpare),HX_CSTRING("_hasFloatNormalSpare")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_floatNormalRand1),HX_CSTRING("_floatNormalRand1")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_floatNormalRand2),HX_CSTRING("_floatNormalRand2")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_twoPI),HX_CSTRING("_twoPI")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_floatNormalRho),HX_CSTRING("_floatNormalRho")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,internalSeed),HX_CSTRING("internalSeed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getObject_flixel_group_FlxTypedGroup_T"),
	HX_CSTRING("initialSeed"),
	HX_CSTRING("resetInitialSeed"),
	HX_CSTRING("int"),
	HX_CSTRING("float"),
	HX_CSTRING("_hasFloatNormalSpare"),
	HX_CSTRING("_floatNormalRand1"),
	HX_CSTRING("_floatNormalRand2"),
	HX_CSTRING("_twoPI"),
	HX_CSTRING("_floatNormalRho"),
	HX_CSTRING("floatNormal"),
	HX_CSTRING("bool"),
	HX_CSTRING("sign"),
	HX_CSTRING("weightedPick"),
	HX_CSTRING("color"),
	HX_CSTRING("generate"),
	HX_CSTRING("internalSeed"),
	HX_CSTRING("set_initialSeed"),
	HX_CSTRING("get_currentSeed"),
	HX_CSTRING("set_currentSeed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_arrayFloatHelper,"_arrayFloatHelper");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::MULTIPLIER,"MULTIPLIER");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::MODULUS,"MODULUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_arrayFloatHelper,"_arrayFloatHelper");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::MULTIPLIER,"MULTIPLIER");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::MODULUS,"MODULUS");
};

#endif

Class FlxRandom_obj::__mClass;

void FlxRandom_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.math.FlxRandom"), hx::TCanCast< FlxRandom_obj> ,sStaticFields,sMemberFields,
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

void FlxRandom_obj::__boot()
{
	_arrayFloatHelper= null();
	MULTIPLIER= 48271.0;
	MODULUS= (int)2147483647;
}

} // end namespace flixel
} // end namespace math
