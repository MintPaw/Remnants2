#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxLinkedList
#include <flixel/system/FlxLinkedList.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{

Void FlxQuadTree_obj::__construct(Float X,Float Y,Float Width,Float Height,::flixel::system::FlxQuadTree Parent)
{
HX_STACK_FRAME("flixel.system.FlxQuadTree","new",0xc8d074fc,"flixel.system.FlxQuadTree.new","flixel/system/FlxQuadTree.hx",200,0xb5742814)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(Parent,"Parent")
{
	HX_STACK_LINE(201)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		this->x = X;
		HX_STACK_LINE(202)
		this->y = Y;
		HX_STACK_LINE(202)
		this->width = Width;
		HX_STACK_LINE(202)
		this->height = Height;
		HX_STACK_LINE(202)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(203)
	this->reset(X,Y,Width,Height,Parent);
}
;
	return null();
}

//FlxQuadTree_obj::~FlxQuadTree_obj() { }

Dynamic FlxQuadTree_obj::__CreateEmpty() { return  new FlxQuadTree_obj; }
hx::ObjectPtr< FlxQuadTree_obj > FlxQuadTree_obj::__new(Float X,Float Y,Float Width,Float Height,::flixel::system::FlxQuadTree Parent)
{  hx::ObjectPtr< FlxQuadTree_obj > result = new FlxQuadTree_obj();
	result->__construct(X,Y,Width,Height,Parent);
	return result;}

Dynamic FlxQuadTree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxQuadTree_obj > result = new FlxQuadTree_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxQuadTree_obj::reset( Float X,Float Y,Float Width,Float Height,::flixel::system::FlxQuadTree Parent){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","reset",0x432c4d6b,"flixel.system.FlxQuadTree.reset","flixel/system/FlxQuadTree.hx",244,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_ARG(Parent,"Parent")
		HX_STACK_LINE(245)
		this->exists = true;
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			this->x = X;
			HX_STACK_LINE(247)
			this->y = Y;
			HX_STACK_LINE(247)
			this->width = Width;
			HX_STACK_LINE(247)
			this->height = Height;
			HX_STACK_LINE(247)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(249)
		::flixel::system::FlxLinkedList _g = ::flixel::system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(249)
		::flixel::system::FlxLinkedList _g1 = this->_tailA = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(249)
		this->_headA = _g1;
		HX_STACK_LINE(250)
		::flixel::system::FlxLinkedList _g2 = ::flixel::system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(250)
		::flixel::system::FlxLinkedList _g3 = this->_tailB = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(250)
		this->_headB = _g3;
		HX_STACK_LINE(253)
		if (((Parent != null()))){
			HX_STACK_LINE(255)
			::flixel::system::FlxLinkedList iterator;		HX_STACK_VAR(iterator,"iterator");
			HX_STACK_LINE(256)
			::flixel::system::FlxLinkedList ot;		HX_STACK_VAR(ot,"ot");
			HX_STACK_LINE(257)
			if (((Parent->_headA->object != null()))){
				HX_STACK_LINE(259)
				iterator = Parent->_headA;
				HX_STACK_LINE(260)
				while((true)){
					HX_STACK_LINE(260)
					if ((!(((iterator != null()))))){
						HX_STACK_LINE(260)
						break;
					}
					HX_STACK_LINE(262)
					if (((this->_tailA->object != null()))){
						HX_STACK_LINE(264)
						ot = this->_tailA;
						HX_STACK_LINE(265)
						::flixel::system::FlxLinkedList _g4 = ::flixel::system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(265)
						this->_tailA = _g4;
						HX_STACK_LINE(266)
						ot->next = this->_tailA;
					}
					HX_STACK_LINE(268)
					this->_tailA->object = iterator->object;
					HX_STACK_LINE(269)
					iterator = iterator->next;
				}
			}
			HX_STACK_LINE(272)
			if (((Parent->_headB->object != null()))){
				HX_STACK_LINE(274)
				iterator = Parent->_headB;
				HX_STACK_LINE(275)
				while((true)){
					HX_STACK_LINE(275)
					if ((!(((iterator != null()))))){
						HX_STACK_LINE(275)
						break;
					}
					HX_STACK_LINE(277)
					if (((this->_tailB->object != null()))){
						HX_STACK_LINE(279)
						ot = this->_tailB;
						HX_STACK_LINE(280)
						::flixel::system::FlxLinkedList _g5 = ::flixel::system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(280)
						this->_tailB = _g5;
						HX_STACK_LINE(281)
						ot->next = this->_tailB;
					}
					HX_STACK_LINE(283)
					this->_tailB->object = iterator->object;
					HX_STACK_LINE(284)
					iterator = iterator->next;
				}
			}
		}
		else{
			HX_STACK_LINE(290)
			int _g6 = ::Math_obj::floor((Float(((this->width + this->height))) / Float((((int)2 * ::flixel::system::FlxQuadTree_obj::divisions)))));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(290)
			::flixel::system::FlxQuadTree_obj::_min = _g6;
		}
		HX_STACK_LINE(292)
		this->_canSubdivide = (bool((this->width > ::flixel::system::FlxQuadTree_obj::_min)) || bool((this->height > ::flixel::system::FlxQuadTree_obj::_min)));
		HX_STACK_LINE(295)
		this->_northWestTree = null();
		HX_STACK_LINE(296)
		this->_northEastTree = null();
		HX_STACK_LINE(297)
		this->_southEastTree = null();
		HX_STACK_LINE(298)
		this->_southWestTree = null();
		HX_STACK_LINE(299)
		this->_leftEdge = this->x;
		HX_STACK_LINE(300)
		this->_rightEdge = (this->x + this->width);
		HX_STACK_LINE(301)
		this->_halfWidth = (Float(this->width) / Float((int)2));
		HX_STACK_LINE(302)
		this->_midpointX = (this->_leftEdge + this->_halfWidth);
		HX_STACK_LINE(303)
		this->_topEdge = this->y;
		HX_STACK_LINE(304)
		this->_bottomEdge = (this->y + this->height);
		HX_STACK_LINE(305)
		this->_halfHeight = (Float(this->height) / Float((int)2));
		HX_STACK_LINE(306)
		this->_midpointY = (this->_topEdge + this->_halfHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxQuadTree_obj,reset,(void))

Void FlxQuadTree_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","destroy",0x64a74f96,"flixel.system.FlxQuadTree.destroy","flixel/system/FlxQuadTree.hx",313,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_LINE(314)
		::flixel::system::FlxLinkedList _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_headA);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(314)
		this->_headA = _g;
		HX_STACK_LINE(315)
		::flixel::system::FlxLinkedList _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_headB);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(315)
		this->_headB = _g1;
		HX_STACK_LINE(317)
		::flixel::system::FlxLinkedList _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tailA);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(317)
		this->_tailA = _g2;
		HX_STACK_LINE(318)
		::flixel::system::FlxLinkedList _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tailB);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(318)
		this->_tailB = _g3;
		HX_STACK_LINE(320)
		::flixel::system::FlxQuadTree _g4 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_northWestTree);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(320)
		this->_northWestTree = _g4;
		HX_STACK_LINE(321)
		::flixel::system::FlxQuadTree _g5 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_northEastTree);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(321)
		this->_northEastTree = _g5;
		HX_STACK_LINE(323)
		::flixel::system::FlxQuadTree _g6 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_southWestTree);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(323)
		this->_southWestTree = _g6;
		HX_STACK_LINE(324)
		::flixel::system::FlxQuadTree _g7 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_southEastTree);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(324)
		this->_southEastTree = _g7;
		HX_STACK_LINE(326)
		::flixel::system::FlxQuadTree_obj::_object = null();
		HX_STACK_LINE(327)
		::flixel::system::FlxQuadTree_obj::_processingCallback = null();
		HX_STACK_LINE(328)
		::flixel::system::FlxQuadTree_obj::_notifyCallback = null();
		HX_STACK_LINE(330)
		this->exists = false;
		HX_STACK_LINE(333)
		this->next = ::flixel::system::FlxQuadTree_obj::_cachedTreesHead;
		HX_STACK_LINE(334)
		::flixel::system::FlxQuadTree_obj::_cachedTreesHead = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(335)
		(::flixel::system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES)++;
		HX_STACK_LINE(337)
		this->super::destroy();
	}
return null();
}


Void FlxQuadTree_obj::load( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","load",0xec4afe0a,"flixel.system.FlxQuadTree.load","flixel/system/FlxQuadTree.hx",348,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1")
		HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2")
		HX_STACK_ARG(NotifyCallback,"NotifyCallback")
		HX_STACK_ARG(ProcessCallback,"ProcessCallback")
		HX_STACK_LINE(349)
		this->add(ObjectOrGroup1,(int)0);
		HX_STACK_LINE(350)
		if (((ObjectOrGroup2 != null()))){
			HX_STACK_LINE(352)
			this->add(ObjectOrGroup2,(int)1);
			HX_STACK_LINE(353)
			::flixel::system::FlxQuadTree_obj::_useBothLists = true;
		}
		else{
			HX_STACK_LINE(357)
			::flixel::system::FlxQuadTree_obj::_useBothLists = false;
		}
		HX_STACK_LINE(359)
		::flixel::system::FlxQuadTree_obj::_notifyCallback = NotifyCallback;
		HX_STACK_LINE(360)
		::flixel::system::FlxQuadTree_obj::_processingCallback = ProcessCallback;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxQuadTree_obj,load,(void))

Void FlxQuadTree_obj::add( ::flixel::FlxBasic ObjectOrGroup,int list){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","add",0xc8c696bd,"flixel.system.FlxQuadTree.add","flixel/system/FlxQuadTree.hx",371,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(372)
		::flixel::system::FlxQuadTree_obj::_list = list;
		HX_STACK_LINE(374)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(374)
			if (((ObjectOrGroup != null()))){
				HX_STACK_LINE(374)
				if (((ObjectOrGroup->flixelType == (int)2))){
					HX_STACK_LINE(374)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(374)
					if (((ObjectOrGroup->flixelType == (int)4))){
						HX_STACK_LINE(374)
						group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(374)
			group = group1;
		}
		HX_STACK_LINE(375)
		if (((group != null()))){
			HX_STACK_LINE(377)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(378)
			::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(379)
			Array< ::Dynamic > members = group->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(380)
			int l = group->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(381)
			while((true)){
				HX_STACK_LINE(381)
				if ((!(((i < l))))){
					HX_STACK_LINE(381)
					break;
				}
				HX_STACK_LINE(383)
				int _g = (i)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(383)
				::flixel::FlxBasic _g1 = members->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(383)
				basic = _g1;
				HX_STACK_LINE(384)
				if (((bool((basic != null())) && bool(basic->exists)))){
					HX_STACK_LINE(386)
					::flixel::group::FlxTypedGroup _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(386)
					{
						HX_STACK_LINE(386)
						::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
						HX_STACK_LINE(386)
						if (((basic != null()))){
							HX_STACK_LINE(386)
							if (((basic->flixelType == (int)2))){
								HX_STACK_LINE(386)
								group1 = basic;
							}
							else{
								HX_STACK_LINE(386)
								if (((basic->flixelType == (int)4))){
									HX_STACK_LINE(386)
									group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(basic))->group;
								}
							}
						}
						HX_STACK_LINE(386)
						_g2 = group1;
					}
					HX_STACK_LINE(386)
					group = _g2;
					HX_STACK_LINE(387)
					if (((group != null()))){
						HX_STACK_LINE(389)
						this->add(group,list);
					}
					else{
						HX_STACK_LINE(393)
						::flixel::FlxObject _g3;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(393)
						_g3 = hx::TCast< flixel::FlxObject >::cast(basic);
						HX_STACK_LINE(393)
						::flixel::system::FlxQuadTree_obj::_object = _g3;
						HX_STACK_LINE(394)
						if (((bool(::flixel::system::FlxQuadTree_obj::_object->exists) && bool((::flixel::system::FlxQuadTree_obj::_object->allowCollisions != (int)0))))){
							HX_STACK_LINE(396)
							::flixel::system::FlxQuadTree_obj::_objectLeftEdge = ::flixel::system::FlxQuadTree_obj::_object->x;
							HX_STACK_LINE(397)
							::flixel::system::FlxQuadTree_obj::_objectTopEdge = ::flixel::system::FlxQuadTree_obj::_object->y;
							HX_STACK_LINE(398)
							Float _g4 = ::flixel::system::FlxQuadTree_obj::_object->get_width();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(398)
							Float _g5 = (::flixel::system::FlxQuadTree_obj::_object->x + _g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(398)
							::flixel::system::FlxQuadTree_obj::_objectRightEdge = _g5;
							HX_STACK_LINE(399)
							Float _g6 = ::flixel::system::FlxQuadTree_obj::_object->get_height();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(399)
							Float _g7 = (::flixel::system::FlxQuadTree_obj::_object->y + _g6);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(399)
							::flixel::system::FlxQuadTree_obj::_objectBottomEdge = _g7;
							HX_STACK_LINE(400)
							this->addObject();
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(408)
			::flixel::FlxObject _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(408)
			_g8 = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
			HX_STACK_LINE(408)
			::flixel::system::FlxQuadTree_obj::_object = _g8;
			HX_STACK_LINE(409)
			if (((bool(::flixel::system::FlxQuadTree_obj::_object->exists) && bool((::flixel::system::FlxQuadTree_obj::_object->allowCollisions != (int)0))))){
				HX_STACK_LINE(411)
				::flixel::system::FlxQuadTree_obj::_objectLeftEdge = ::flixel::system::FlxQuadTree_obj::_object->x;
				HX_STACK_LINE(412)
				::flixel::system::FlxQuadTree_obj::_objectTopEdge = ::flixel::system::FlxQuadTree_obj::_object->y;
				HX_STACK_LINE(413)
				Float _g9 = ::flixel::system::FlxQuadTree_obj::_object->get_width();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(413)
				Float _g10 = (::flixel::system::FlxQuadTree_obj::_object->x + _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(413)
				::flixel::system::FlxQuadTree_obj::_objectRightEdge = _g10;
				HX_STACK_LINE(414)
				Float _g11 = ::flixel::system::FlxQuadTree_obj::_object->get_height();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(414)
				Float _g12 = (::flixel::system::FlxQuadTree_obj::_object->y + _g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(414)
				::flixel::system::FlxQuadTree_obj::_objectBottomEdge = _g12;
				HX_STACK_LINE(415)
				this->addObject();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxQuadTree_obj,add,(void))

Void FlxQuadTree_obj::addObject( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","addObject",0x3207b55c,"flixel.system.FlxQuadTree.addObject","flixel/system/FlxQuadTree.hx",425,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_LINE(427)
		if (((bool(!(this->_canSubdivide)) || bool((bool((bool((bool((this->_leftEdge >= ::flixel::system::FlxQuadTree_obj::_objectLeftEdge)) && bool((this->_rightEdge <= ::flixel::system::FlxQuadTree_obj::_objectRightEdge)))) && bool((this->_topEdge >= ::flixel::system::FlxQuadTree_obj::_objectTopEdge)))) && bool((this->_bottomEdge <= ::flixel::system::FlxQuadTree_obj::_objectBottomEdge))))))){
			HX_STACK_LINE(429)
			this->addToList();
			HX_STACK_LINE(430)
			return null();
		}
		HX_STACK_LINE(434)
		if (((bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge > this->_leftEdge)) && bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge < this->_midpointX))))){
			HX_STACK_LINE(436)
			if (((bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge > this->_topEdge)) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge < this->_midpointY))))){
				HX_STACK_LINE(438)
				if (((this->_northWestTree == null()))){
					HX_STACK_LINE(440)
					::flixel::system::FlxQuadTree _g = ::flixel::system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_topEdge,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(440)
					this->_northWestTree = _g;
				}
				HX_STACK_LINE(442)
				this->_northWestTree->addObject();
				HX_STACK_LINE(443)
				return null();
			}
			HX_STACK_LINE(445)
			if (((bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge > this->_midpointY)) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge < this->_bottomEdge))))){
				HX_STACK_LINE(447)
				if (((this->_southWestTree == null()))){
					HX_STACK_LINE(449)
					::flixel::system::FlxQuadTree _g1 = ::flixel::system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_midpointY,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(449)
					this->_southWestTree = _g1;
				}
				HX_STACK_LINE(451)
				this->_southWestTree->addObject();
				HX_STACK_LINE(452)
				return null();
			}
		}
		HX_STACK_LINE(455)
		if (((bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge > this->_midpointX)) && bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge < this->_rightEdge))))){
			HX_STACK_LINE(457)
			if (((bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge > this->_topEdge)) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge < this->_midpointY))))){
				HX_STACK_LINE(459)
				if (((this->_northEastTree == null()))){
					HX_STACK_LINE(461)
					::flixel::system::FlxQuadTree _g2 = ::flixel::system::FlxQuadTree_obj::recycle(this->_midpointX,this->_topEdge,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(461)
					this->_northEastTree = _g2;
				}
				HX_STACK_LINE(463)
				this->_northEastTree->addObject();
				HX_STACK_LINE(464)
				return null();
			}
			HX_STACK_LINE(466)
			if (((bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge > this->_midpointY)) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge < this->_bottomEdge))))){
				HX_STACK_LINE(468)
				if (((this->_southEastTree == null()))){
					HX_STACK_LINE(470)
					::flixel::system::FlxQuadTree _g3 = ::flixel::system::FlxQuadTree_obj::recycle(this->_midpointX,this->_midpointY,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(470)
					this->_southEastTree = _g3;
				}
				HX_STACK_LINE(472)
				this->_southEastTree->addObject();
				HX_STACK_LINE(473)
				return null();
			}
		}
		HX_STACK_LINE(478)
		if (((bool((bool((bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge > this->_leftEdge)) && bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge < this->_midpointX)))) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge > this->_topEdge)))) && bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge < this->_midpointY))))){
			HX_STACK_LINE(480)
			if (((this->_northWestTree == null()))){
				HX_STACK_LINE(482)
				::flixel::system::FlxQuadTree _g4 = ::flixel::system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_topEdge,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(482)
				this->_northWestTree = _g4;
			}
			HX_STACK_LINE(484)
			this->_northWestTree->addObject();
		}
		HX_STACK_LINE(486)
		if (((bool((bool((bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge > this->_midpointX)) && bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge < this->_rightEdge)))) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge > this->_topEdge)))) && bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge < this->_midpointY))))){
			HX_STACK_LINE(488)
			if (((this->_northEastTree == null()))){
				HX_STACK_LINE(490)
				::flixel::system::FlxQuadTree _g5 = ::flixel::system::FlxQuadTree_obj::recycle(this->_midpointX,this->_topEdge,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(490)
				this->_northEastTree = _g5;
			}
			HX_STACK_LINE(492)
			this->_northEastTree->addObject();
		}
		HX_STACK_LINE(494)
		if (((bool((bool((bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge > this->_midpointX)) && bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge < this->_rightEdge)))) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge > this->_midpointY)))) && bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge < this->_bottomEdge))))){
			HX_STACK_LINE(496)
			if (((this->_southEastTree == null()))){
				HX_STACK_LINE(498)
				::flixel::system::FlxQuadTree _g6 = ::flixel::system::FlxQuadTree_obj::recycle(this->_midpointX,this->_midpointY,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(498)
				this->_southEastTree = _g6;
			}
			HX_STACK_LINE(500)
			this->_southEastTree->addObject();
		}
		HX_STACK_LINE(502)
		if (((bool((bool((bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge > this->_leftEdge)) && bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge < this->_midpointX)))) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge > this->_midpointY)))) && bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge < this->_bottomEdge))))){
			HX_STACK_LINE(504)
			if (((this->_southWestTree == null()))){
				HX_STACK_LINE(506)
				::flixel::system::FlxQuadTree _g7 = ::flixel::system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_midpointY,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(506)
				this->_southWestTree = _g7;
			}
			HX_STACK_LINE(508)
			this->_southWestTree->addObject();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,addObject,(void))

Void FlxQuadTree_obj::addToList( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","addToList",0x9a34be16,"flixel.system.FlxQuadTree.addToList","flixel/system/FlxQuadTree.hx",516,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_LINE(517)
		::flixel::system::FlxLinkedList ot;		HX_STACK_VAR(ot,"ot");
		HX_STACK_LINE(518)
		if (((::flixel::system::FlxQuadTree_obj::_list == (int)0))){
			HX_STACK_LINE(520)
			if (((this->_tailA->object != null()))){
				HX_STACK_LINE(522)
				ot = this->_tailA;
				HX_STACK_LINE(523)
				::flixel::system::FlxLinkedList _g = ::flixel::system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(523)
				this->_tailA = _g;
				HX_STACK_LINE(524)
				ot->next = this->_tailA;
			}
			HX_STACK_LINE(526)
			this->_tailA->object = ::flixel::system::FlxQuadTree_obj::_object;
		}
		else{
			HX_STACK_LINE(530)
			if (((this->_tailB->object != null()))){
				HX_STACK_LINE(532)
				ot = this->_tailB;
				HX_STACK_LINE(533)
				::flixel::system::FlxLinkedList _g1 = ::flixel::system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(533)
				this->_tailB = _g1;
				HX_STACK_LINE(534)
				ot->next = this->_tailB;
			}
			HX_STACK_LINE(536)
			this->_tailB->object = ::flixel::system::FlxQuadTree_obj::_object;
		}
		HX_STACK_LINE(538)
		if ((!(this->_canSubdivide))){
			HX_STACK_LINE(540)
			return null();
		}
		HX_STACK_LINE(542)
		if (((this->_northWestTree != null()))){
			HX_STACK_LINE(544)
			this->_northWestTree->addToList();
		}
		HX_STACK_LINE(546)
		if (((this->_northEastTree != null()))){
			HX_STACK_LINE(548)
			this->_northEastTree->addToList();
		}
		HX_STACK_LINE(550)
		if (((this->_southEastTree != null()))){
			HX_STACK_LINE(552)
			this->_southEastTree->addToList();
		}
		HX_STACK_LINE(554)
		if (((this->_southWestTree != null()))){
			HX_STACK_LINE(556)
			this->_southWestTree->addToList();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,addToList,(void))

bool FlxQuadTree_obj::execute( ){
	HX_STACK_FRAME("flixel.system.FlxQuadTree","execute",0x0c2e2cd1,"flixel.system.FlxQuadTree.execute","flixel/system/FlxQuadTree.hx",566,0xb5742814)
	HX_STACK_THIS(this)
	HX_STACK_LINE(567)
	bool overlapProcessed = false;		HX_STACK_VAR(overlapProcessed,"overlapProcessed");
	HX_STACK_LINE(568)
	::flixel::system::FlxLinkedList iterator;		HX_STACK_VAR(iterator,"iterator");
	HX_STACK_LINE(570)
	if (((this->_headA->object != null()))){
		HX_STACK_LINE(572)
		iterator = this->_headA;
		HX_STACK_LINE(573)
		while((true)){
			HX_STACK_LINE(573)
			if ((!(((iterator != null()))))){
				HX_STACK_LINE(573)
				break;
			}
			HX_STACK_LINE(575)
			::flixel::system::FlxQuadTree_obj::_object = iterator->object;
			HX_STACK_LINE(576)
			if ((::flixel::system::FlxQuadTree_obj::_useBothLists)){
				HX_STACK_LINE(578)
				::flixel::system::FlxQuadTree_obj::_iterator = this->_headB;
			}
			else{
				HX_STACK_LINE(582)
				::flixel::system::FlxQuadTree_obj::_iterator = iterator->next;
			}
			HX_STACK_LINE(584)
			if (((  (((bool((bool((bool((bool((::flixel::system::FlxQuadTree_obj::_object != null())) && bool(::flixel::system::FlxQuadTree_obj::_object->exists))) && bool((::flixel::system::FlxQuadTree_obj::_object->allowCollisions > (int)0)))) && bool((::flixel::system::FlxQuadTree_obj::_iterator != null())))) && bool((::flixel::system::FlxQuadTree_obj::_iterator->object != null()))))) ? bool(this->overlapNode()) : bool(false) ))){
				HX_STACK_LINE(587)
				overlapProcessed = true;
			}
			HX_STACK_LINE(589)
			iterator = iterator->next;
		}
	}
	HX_STACK_LINE(594)
	if (((  (((this->_northWestTree != null()))) ? bool(this->_northWestTree->execute()) : bool(false) ))){
		HX_STACK_LINE(596)
		overlapProcessed = true;
	}
	HX_STACK_LINE(598)
	if (((  (((this->_northEastTree != null()))) ? bool(this->_northEastTree->execute()) : bool(false) ))){
		HX_STACK_LINE(600)
		overlapProcessed = true;
	}
	HX_STACK_LINE(602)
	if (((  (((this->_southEastTree != null()))) ? bool(this->_southEastTree->execute()) : bool(false) ))){
		HX_STACK_LINE(604)
		overlapProcessed = true;
	}
	HX_STACK_LINE(606)
	if (((  (((this->_southWestTree != null()))) ? bool(this->_southWestTree->execute()) : bool(false) ))){
		HX_STACK_LINE(608)
		overlapProcessed = true;
	}
	HX_STACK_LINE(611)
	return overlapProcessed;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,execute,return )

bool FlxQuadTree_obj::overlapNode( ){
	HX_STACK_FRAME("flixel.system.FlxQuadTree","overlapNode",0x0fc5e9c5,"flixel.system.FlxQuadTree.overlapNode","flixel/system/FlxQuadTree.hx",619,0xb5742814)
	HX_STACK_THIS(this)
	HX_STACK_LINE(621)
	if (((::flixel::system::FlxQuadTree_obj::_object->x < ::flixel::system::FlxQuadTree_obj::_object->last->x))){
		HX_STACK_LINE(621)
		::flixel::system::FlxQuadTree_obj::_objectHullX = ::flixel::system::FlxQuadTree_obj::_object->x;
	}
	else{
		HX_STACK_LINE(621)
		::flixel::system::FlxQuadTree_obj::_objectHullX = ::flixel::system::FlxQuadTree_obj::_object->last->x;
	}
	HX_STACK_LINE(622)
	if (((::flixel::system::FlxQuadTree_obj::_object->y < ::flixel::system::FlxQuadTree_obj::_object->last->y))){
		HX_STACK_LINE(622)
		::flixel::system::FlxQuadTree_obj::_objectHullY = ::flixel::system::FlxQuadTree_obj::_object->y;
	}
	else{
		HX_STACK_LINE(622)
		::flixel::system::FlxQuadTree_obj::_objectHullY = ::flixel::system::FlxQuadTree_obj::_object->last->y;
	}
	HX_STACK_LINE(623)
	::flixel::system::FlxQuadTree_obj::_objectHullWidth = (::flixel::system::FlxQuadTree_obj::_object->x - ::flixel::system::FlxQuadTree_obj::_object->last->x);
	HX_STACK_LINE(624)
	Float _g = ::flixel::system::FlxQuadTree_obj::_object->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(624)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(624)
	_g1 = (_g + ((  (((::flixel::system::FlxQuadTree_obj::_objectHullWidth > (int)0))) ? Float(::flixel::system::FlxQuadTree_obj::_objectHullWidth) : Float(-(::flixel::system::FlxQuadTree_obj::_objectHullWidth)) )));
	HX_STACK_LINE(624)
	::flixel::system::FlxQuadTree_obj::_objectHullWidth = _g1;
	HX_STACK_LINE(625)
	::flixel::system::FlxQuadTree_obj::_objectHullHeight = (::flixel::system::FlxQuadTree_obj::_object->y - ::flixel::system::FlxQuadTree_obj::_object->last->y);
	HX_STACK_LINE(626)
	Float _g2 = ::flixel::system::FlxQuadTree_obj::_object->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(626)
	Float _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(626)
	_g3 = (_g2 + ((  (((::flixel::system::FlxQuadTree_obj::_objectHullHeight > (int)0))) ? Float(::flixel::system::FlxQuadTree_obj::_objectHullHeight) : Float(-(::flixel::system::FlxQuadTree_obj::_objectHullHeight)) )));
	HX_STACK_LINE(626)
	::flixel::system::FlxQuadTree_obj::_objectHullHeight = _g3;
	HX_STACK_LINE(629)
	bool overlapProcessed = false;		HX_STACK_VAR(overlapProcessed,"overlapProcessed");
	HX_STACK_LINE(630)
	::flixel::FlxObject checkObject;		HX_STACK_VAR(checkObject,"checkObject");
	HX_STACK_LINE(632)
	while((true)){
		HX_STACK_LINE(632)
		if ((!(((::flixel::system::FlxQuadTree_obj::_iterator != null()))))){
			HX_STACK_LINE(632)
			break;
		}
		HX_STACK_LINE(634)
		checkObject = ::flixel::system::FlxQuadTree_obj::_iterator->object;
		HX_STACK_LINE(635)
		if (((bool((bool((::flixel::system::FlxQuadTree_obj::_object == checkObject)) || bool(!(checkObject->exists)))) || bool((checkObject->allowCollisions <= (int)0))))){
			HX_STACK_LINE(637)
			::flixel::system::FlxQuadTree_obj::_iterator = ::flixel::system::FlxQuadTree_obj::_iterator->next;
			HX_STACK_LINE(638)
			continue;
		}
		HX_STACK_LINE(642)
		if (((checkObject->x < checkObject->last->x))){
			HX_STACK_LINE(642)
			::flixel::system::FlxQuadTree_obj::_checkObjectHullX = checkObject->x;
		}
		else{
			HX_STACK_LINE(642)
			::flixel::system::FlxQuadTree_obj::_checkObjectHullX = checkObject->last->x;
		}
		HX_STACK_LINE(643)
		if (((checkObject->y < checkObject->last->y))){
			HX_STACK_LINE(643)
			::flixel::system::FlxQuadTree_obj::_checkObjectHullY = checkObject->y;
		}
		else{
			HX_STACK_LINE(643)
			::flixel::system::FlxQuadTree_obj::_checkObjectHullY = checkObject->last->y;
		}
		HX_STACK_LINE(644)
		::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth = (checkObject->x - checkObject->last->x);
		HX_STACK_LINE(645)
		Float _g4 = checkObject->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(645)
		Float _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(645)
		_g5 = (_g4 + ((  (((::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth > (int)0))) ? Float(::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth) : Float(-(::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth)) )));
		HX_STACK_LINE(645)
		::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth = _g5;
		HX_STACK_LINE(646)
		::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight = (checkObject->y - checkObject->last->y);
		HX_STACK_LINE(647)
		Float _g6 = checkObject->get_height();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(647)
		Float _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(647)
		_g7 = (_g6 + ((  (((::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight > (int)0))) ? Float(::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight) : Float(-(::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight)) )));
		HX_STACK_LINE(647)
		::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight = _g7;
		HX_STACK_LINE(650)
		if (((bool((bool((bool(((::flixel::system::FlxQuadTree_obj::_objectHullX + ::flixel::system::FlxQuadTree_obj::_objectHullWidth) > ::flixel::system::FlxQuadTree_obj::_checkObjectHullX)) && bool((::flixel::system::FlxQuadTree_obj::_objectHullX < (::flixel::system::FlxQuadTree_obj::_checkObjectHullX + ::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth))))) && bool(((::flixel::system::FlxQuadTree_obj::_objectHullY + ::flixel::system::FlxQuadTree_obj::_objectHullHeight) > ::flixel::system::FlxQuadTree_obj::_checkObjectHullY)))) && bool((::flixel::system::FlxQuadTree_obj::_objectHullY < (::flixel::system::FlxQuadTree_obj::_checkObjectHullY + ::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight)))))){
			HX_STACK_LINE(656)
			if (((  ((!(((::flixel::system::FlxQuadTree_obj::_processingCallback_dyn() == null()))))) ? bool(::flixel::system::FlxQuadTree_obj::_processingCallback(::flixel::system::FlxQuadTree_obj::_object,checkObject)) : bool(true) ))){
				HX_STACK_LINE(658)
				overlapProcessed = true;
				HX_STACK_LINE(659)
				if (((::flixel::system::FlxQuadTree_obj::_notifyCallback_dyn() != null()))){
					HX_STACK_LINE(661)
					::flixel::system::FlxQuadTree_obj::_notifyCallback(::flixel::system::FlxQuadTree_obj::_object,checkObject);
				}
			}
		}
		HX_STACK_LINE(665)
		if (((::flixel::system::FlxQuadTree_obj::_iterator != null()))){
			HX_STACK_LINE(667)
			::flixel::system::FlxQuadTree_obj::_iterator = ::flixel::system::FlxQuadTree_obj::_iterator->next;
		}
	}
	HX_STACK_LINE(671)
	return overlapProcessed;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,overlapNode,return )

int FlxQuadTree_obj::A_LIST;

int FlxQuadTree_obj::B_LIST;

int FlxQuadTree_obj::divisions;

int FlxQuadTree_obj::_min;

::flixel::FlxObject FlxQuadTree_obj::_object;

Float FlxQuadTree_obj::_objectLeftEdge;

Float FlxQuadTree_obj::_objectTopEdge;

Float FlxQuadTree_obj::_objectRightEdge;

Float FlxQuadTree_obj::_objectBottomEdge;

int FlxQuadTree_obj::_list;

bool FlxQuadTree_obj::_useBothLists;

Dynamic FlxQuadTree_obj::_processingCallback;

Dynamic FlxQuadTree_obj::_notifyCallback;

::flixel::system::FlxLinkedList FlxQuadTree_obj::_iterator;

Float FlxQuadTree_obj::_objectHullX;

Float FlxQuadTree_obj::_objectHullY;

Float FlxQuadTree_obj::_objectHullWidth;

Float FlxQuadTree_obj::_objectHullHeight;

Float FlxQuadTree_obj::_checkObjectHullX;

Float FlxQuadTree_obj::_checkObjectHullY;

Float FlxQuadTree_obj::_checkObjectHullWidth;

Float FlxQuadTree_obj::_checkObjectHullHeight;

int FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES;

::flixel::system::FlxQuadTree FlxQuadTree_obj::_cachedTreesHead;

::flixel::system::FlxQuadTree FlxQuadTree_obj::recycle( Float X,Float Y,Float Width,Float Height,::flixel::system::FlxQuadTree Parent){
	HX_STACK_FRAME("flixel.system.FlxQuadTree","recycle",0x77ad32af,"flixel.system.FlxQuadTree.recycle","flixel/system/FlxQuadTree.hx",216,0xb5742814)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_LINE(216)
	if (((::flixel::system::FlxQuadTree_obj::_cachedTreesHead != null()))){
		HX_STACK_LINE(218)
		::flixel::system::FlxQuadTree cachedTree = ::flixel::system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(cachedTree,"cachedTree");
		HX_STACK_LINE(219)
		::flixel::system::FlxQuadTree_obj::_cachedTreesHead = ::flixel::system::FlxQuadTree_obj::_cachedTreesHead->next;
		HX_STACK_LINE(220)
		(::flixel::system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES)--;
		HX_STACK_LINE(222)
		cachedTree->reset(X,Y,Width,Height,Parent);
		HX_STACK_LINE(223)
		return cachedTree;
	}
	else{
		HX_STACK_LINE(226)
		return ::flixel::system::FlxQuadTree_obj::__new(X,Y,Width,Height,Parent);
	}
	HX_STACK_LINE(216)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxQuadTree_obj,recycle,return )

Void FlxQuadTree_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","clearCache",0xc0fc4059,"flixel.system.FlxQuadTree.clearCache","flixel/system/FlxQuadTree.hx",232,0xb5742814)
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			if ((!(((::flixel::system::FlxQuadTree_obj::_cachedTreesHead != null()))))){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(236)
			::flixel::system::FlxQuadTree node = ::flixel::system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(237)
			::flixel::system::FlxQuadTree_obj::_cachedTreesHead = ::flixel::system::FlxQuadTree_obj::_cachedTreesHead->next;
			HX_STACK_LINE(238)
			node->next = null();
		}
		HX_STACK_LINE(240)
		::flixel::system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,clearCache,(void))


FlxQuadTree_obj::FlxQuadTree_obj()
{
}

void FlxQuadTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxQuadTree);
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_MEMBER_NAME(_canSubdivide,"_canSubdivide");
	HX_MARK_MEMBER_NAME(_headA,"_headA");
	HX_MARK_MEMBER_NAME(_tailA,"_tailA");
	HX_MARK_MEMBER_NAME(_headB,"_headB");
	HX_MARK_MEMBER_NAME(_tailB,"_tailB");
	HX_MARK_MEMBER_NAME(_northWestTree,"_northWestTree");
	HX_MARK_MEMBER_NAME(_northEastTree,"_northEastTree");
	HX_MARK_MEMBER_NAME(_southEastTree,"_southEastTree");
	HX_MARK_MEMBER_NAME(_southWestTree,"_southWestTree");
	HX_MARK_MEMBER_NAME(_leftEdge,"_leftEdge");
	HX_MARK_MEMBER_NAME(_rightEdge,"_rightEdge");
	HX_MARK_MEMBER_NAME(_topEdge,"_topEdge");
	HX_MARK_MEMBER_NAME(_bottomEdge,"_bottomEdge");
	HX_MARK_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_MARK_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_MARK_MEMBER_NAME(_midpointX,"_midpointX");
	HX_MARK_MEMBER_NAME(_midpointY,"_midpointY");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void FlxQuadTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(exists,"exists");
	HX_VISIT_MEMBER_NAME(_canSubdivide,"_canSubdivide");
	HX_VISIT_MEMBER_NAME(_headA,"_headA");
	HX_VISIT_MEMBER_NAME(_tailA,"_tailA");
	HX_VISIT_MEMBER_NAME(_headB,"_headB");
	HX_VISIT_MEMBER_NAME(_tailB,"_tailB");
	HX_VISIT_MEMBER_NAME(_northWestTree,"_northWestTree");
	HX_VISIT_MEMBER_NAME(_northEastTree,"_northEastTree");
	HX_VISIT_MEMBER_NAME(_southEastTree,"_southEastTree");
	HX_VISIT_MEMBER_NAME(_southWestTree,"_southWestTree");
	HX_VISIT_MEMBER_NAME(_leftEdge,"_leftEdge");
	HX_VISIT_MEMBER_NAME(_rightEdge,"_rightEdge");
	HX_VISIT_MEMBER_NAME(_topEdge,"_topEdge");
	HX_VISIT_MEMBER_NAME(_bottomEdge,"_bottomEdge");
	HX_VISIT_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_VISIT_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_VISIT_MEMBER_NAME(_midpointX,"_midpointX");
	HX_VISIT_MEMBER_NAME(_midpointY,"_midpointY");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic FlxQuadTree_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { return _min; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { return _list; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		if (HX_FIELD_EQ(inName,"_headA") ) { return _headA; }
		if (HX_FIELD_EQ(inName,"_tailA") ) { return _tailA; }
		if (HX_FIELD_EQ(inName,"_headB") ) { return _headB; }
		if (HX_FIELD_EQ(inName,"_tailB") ) { return _tailB; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_topEdge") ) { return _topEdge; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"divisions") ) { return divisions; }
		if (HX_FIELD_EQ(inName,"_iterator") ) { return _iterator; }
		if (HX_FIELD_EQ(inName,"_leftEdge") ) { return _leftEdge; }
		if (HX_FIELD_EQ(inName,"addObject") ) { return addObject_dyn(); }
		if (HX_FIELD_EQ(inName,"addToList") ) { return addToList_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		if (HX_FIELD_EQ(inName,"_rightEdge") ) { return _rightEdge; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { return _halfWidth; }
		if (HX_FIELD_EQ(inName,"_midpointX") ) { return _midpointX; }
		if (HX_FIELD_EQ(inName,"_midpointY") ) { return _midpointY; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bottomEdge") ) { return _bottomEdge; }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { return _halfHeight; }
		if (HX_FIELD_EQ(inName,"overlapNode") ) { return overlapNode_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectHullX") ) { return _objectHullX; }
		if (HX_FIELD_EQ(inName,"_objectHullY") ) { return _objectHullY; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useBothLists") ) { return _useBothLists; }
		if (HX_FIELD_EQ(inName,"_canSubdivide") ) { return _canSubdivide; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_objectTopEdge") ) { return _objectTopEdge; }
		if (HX_FIELD_EQ(inName,"_northWestTree") ) { return _northWestTree; }
		if (HX_FIELD_EQ(inName,"_northEastTree") ) { return _northEastTree; }
		if (HX_FIELD_EQ(inName,"_southEastTree") ) { return _southEastTree; }
		if (HX_FIELD_EQ(inName,"_southWestTree") ) { return _southWestTree; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_objectLeftEdge") ) { return _objectLeftEdge; }
		if (HX_FIELD_EQ(inName,"_notifyCallback") ) { return _notifyCallback; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_objectRightEdge") ) { return _objectRightEdge; }
		if (HX_FIELD_EQ(inName,"_objectHullWidth") ) { return _objectHullWidth; }
		if (HX_FIELD_EQ(inName,"_cachedTreesHead") ) { return _cachedTreesHead; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_objectBottomEdge") ) { return _objectBottomEdge; }
		if (HX_FIELD_EQ(inName,"_objectHullHeight") ) { return _objectHullHeight; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullX") ) { return _checkObjectHullX; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullY") ) { return _checkObjectHullY; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_processingCallback") ) { return _processingCallback; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_checkObjectHullWidth") ) { return _checkObjectHullWidth; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_checkObjectHullHeight") ) { return _checkObjectHullHeight; }
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_QUAD_TREES") ) { return _NUM_CACHED_QUAD_TREES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxQuadTree_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { _min=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headA") ) { _headA=inValue.Cast< ::flixel::system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tailA") ) { _tailA=inValue.Cast< ::flixel::system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headB") ) { _headB=inValue.Cast< ::flixel::system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tailB") ) { _tailB=inValue.Cast< ::flixel::system::FlxLinkedList >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_topEdge") ) { _topEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"divisions") ) { divisions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iterator") ) { _iterator=inValue.Cast< ::flixel::system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftEdge") ) { _leftEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_rightEdge") ) { _rightEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { _halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_midpointX") ) { _midpointX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_midpointY") ) { _midpointY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bottomEdge") ) { _bottomEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { _halfHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectHullX") ) { _objectHullX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_objectHullY") ) { _objectHullY=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useBothLists") ) { _useBothLists=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_canSubdivide") ) { _canSubdivide=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_objectTopEdge") ) { _objectTopEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_northWestTree") ) { _northWestTree=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_northEastTree") ) { _northEastTree=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_southEastTree") ) { _southEastTree=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_southWestTree") ) { _southWestTree=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_objectLeftEdge") ) { _objectLeftEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_notifyCallback") ) { _notifyCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_objectRightEdge") ) { _objectRightEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_objectHullWidth") ) { _objectHullWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedTreesHead") ) { _cachedTreesHead=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_objectBottomEdge") ) { _objectBottomEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_objectHullHeight") ) { _objectHullHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullX") ) { _checkObjectHullX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullY") ) { _checkObjectHullY=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_processingCallback") ) { _processingCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_checkObjectHullWidth") ) { _checkObjectHullWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_checkObjectHullHeight") ) { _checkObjectHullHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_QUAD_TREES") ) { _NUM_CACHED_QUAD_TREES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxQuadTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("exists"));
	outFields->push(HX_CSTRING("_canSubdivide"));
	outFields->push(HX_CSTRING("_headA"));
	outFields->push(HX_CSTRING("_tailA"));
	outFields->push(HX_CSTRING("_headB"));
	outFields->push(HX_CSTRING("_tailB"));
	outFields->push(HX_CSTRING("_northWestTree"));
	outFields->push(HX_CSTRING("_northEastTree"));
	outFields->push(HX_CSTRING("_southEastTree"));
	outFields->push(HX_CSTRING("_southWestTree"));
	outFields->push(HX_CSTRING("_leftEdge"));
	outFields->push(HX_CSTRING("_rightEdge"));
	outFields->push(HX_CSTRING("_topEdge"));
	outFields->push(HX_CSTRING("_bottomEdge"));
	outFields->push(HX_CSTRING("_halfWidth"));
	outFields->push(HX_CSTRING("_halfHeight"));
	outFields->push(HX_CSTRING("_midpointX"));
	outFields->push(HX_CSTRING("_midpointY"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("A_LIST"),
	HX_CSTRING("B_LIST"),
	HX_CSTRING("divisions"),
	HX_CSTRING("_min"),
	HX_CSTRING("_object"),
	HX_CSTRING("_objectLeftEdge"),
	HX_CSTRING("_objectTopEdge"),
	HX_CSTRING("_objectRightEdge"),
	HX_CSTRING("_objectBottomEdge"),
	HX_CSTRING("_list"),
	HX_CSTRING("_useBothLists"),
	HX_CSTRING("_processingCallback"),
	HX_CSTRING("_notifyCallback"),
	HX_CSTRING("_iterator"),
	HX_CSTRING("_objectHullX"),
	HX_CSTRING("_objectHullY"),
	HX_CSTRING("_objectHullWidth"),
	HX_CSTRING("_objectHullHeight"),
	HX_CSTRING("_checkObjectHullX"),
	HX_CSTRING("_checkObjectHullY"),
	HX_CSTRING("_checkObjectHullWidth"),
	HX_CSTRING("_checkObjectHullHeight"),
	HX_CSTRING("_NUM_CACHED_QUAD_TREES"),
	HX_CSTRING("_cachedTreesHead"),
	HX_CSTRING("recycle"),
	HX_CSTRING("clearCache"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxQuadTree_obj,exists),HX_CSTRING("exists")},
	{hx::fsBool,(int)offsetof(FlxQuadTree_obj,_canSubdivide),HX_CSTRING("_canSubdivide")},
	{hx::fsObject /*::flixel::system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_headA),HX_CSTRING("_headA")},
	{hx::fsObject /*::flixel::system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_tailA),HX_CSTRING("_tailA")},
	{hx::fsObject /*::flixel::system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_headB),HX_CSTRING("_headB")},
	{hx::fsObject /*::flixel::system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_tailB),HX_CSTRING("_tailB")},
	{hx::fsObject /*::flixel::system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_northWestTree),HX_CSTRING("_northWestTree")},
	{hx::fsObject /*::flixel::system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_northEastTree),HX_CSTRING("_northEastTree")},
	{hx::fsObject /*::flixel::system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_southEastTree),HX_CSTRING("_southEastTree")},
	{hx::fsObject /*::flixel::system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_southWestTree),HX_CSTRING("_southWestTree")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_leftEdge),HX_CSTRING("_leftEdge")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_rightEdge),HX_CSTRING("_rightEdge")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_topEdge),HX_CSTRING("_topEdge")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_bottomEdge),HX_CSTRING("_bottomEdge")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_halfWidth),HX_CSTRING("_halfWidth")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_halfHeight),HX_CSTRING("_halfHeight")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_midpointX),HX_CSTRING("_midpointX")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_midpointY),HX_CSTRING("_midpointY")},
	{hx::fsObject /*::flixel::system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,next),HX_CSTRING("next")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("exists"),
	HX_CSTRING("_canSubdivide"),
	HX_CSTRING("_headA"),
	HX_CSTRING("_tailA"),
	HX_CSTRING("_headB"),
	HX_CSTRING("_tailB"),
	HX_CSTRING("_northWestTree"),
	HX_CSTRING("_northEastTree"),
	HX_CSTRING("_southEastTree"),
	HX_CSTRING("_southWestTree"),
	HX_CSTRING("_leftEdge"),
	HX_CSTRING("_rightEdge"),
	HX_CSTRING("_topEdge"),
	HX_CSTRING("_bottomEdge"),
	HX_CSTRING("_halfWidth"),
	HX_CSTRING("_halfHeight"),
	HX_CSTRING("_midpointX"),
	HX_CSTRING("_midpointY"),
	HX_CSTRING("next"),
	HX_CSTRING("reset"),
	HX_CSTRING("destroy"),
	HX_CSTRING("load"),
	HX_CSTRING("add"),
	HX_CSTRING("addObject"),
	HX_CSTRING("addToList"),
	HX_CSTRING("execute"),
	HX_CSTRING("overlapNode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::A_LIST,"A_LIST");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::B_LIST,"B_LIST");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::divisions,"divisions");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_min,"_min");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_object,"_object");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectLeftEdge,"_objectLeftEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectTopEdge,"_objectTopEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectRightEdge,"_objectRightEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectBottomEdge,"_objectBottomEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_list,"_list");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_useBothLists,"_useBothLists");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_processingCallback,"_processingCallback");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_notifyCallback,"_notifyCallback");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_iterator,"_iterator");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullX,"_objectHullX");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullY,"_objectHullY");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullWidth,"_objectHullWidth");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullHeight,"_objectHullHeight");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullX,"_checkObjectHullX");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullY,"_checkObjectHullY");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullWidth,"_checkObjectHullWidth");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullHeight,"_checkObjectHullHeight");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,"_NUM_CACHED_QUAD_TREES");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_cachedTreesHead,"_cachedTreesHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::A_LIST,"A_LIST");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::B_LIST,"B_LIST");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::divisions,"divisions");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_min,"_min");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_object,"_object");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectLeftEdge,"_objectLeftEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectTopEdge,"_objectTopEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectRightEdge,"_objectRightEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectBottomEdge,"_objectBottomEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_list,"_list");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_useBothLists,"_useBothLists");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_processingCallback,"_processingCallback");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_notifyCallback,"_notifyCallback");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_iterator,"_iterator");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullX,"_objectHullX");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullY,"_objectHullY");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullWidth,"_objectHullWidth");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullHeight,"_objectHullHeight");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullX,"_checkObjectHullX");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullY,"_checkObjectHullY");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullWidth,"_checkObjectHullWidth");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullHeight,"_checkObjectHullHeight");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,"_NUM_CACHED_QUAD_TREES");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_cachedTreesHead,"_cachedTreesHead");
};

#endif

Class FlxQuadTree_obj::__mClass;

void FlxQuadTree_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxQuadTree"), hx::TCanCast< FlxQuadTree_obj> ,sStaticFields,sMemberFields,
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

void FlxQuadTree_obj::__boot()
{
	A_LIST= (int)0;
	B_LIST= (int)1;
	_NUM_CACHED_QUAD_TREES= (int)0;
}

} // end namespace flixel
} // end namespace system
