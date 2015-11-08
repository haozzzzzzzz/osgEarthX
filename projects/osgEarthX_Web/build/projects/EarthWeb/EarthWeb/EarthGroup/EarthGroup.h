/*
	@brief : EarthGroup JS API
	@author : Hao Luo
	@date : 2014/11/22
*/

#ifndef OSGEARTHX_MAP_EARTH_GROUP_H
#define OSGEARTHX_MAP_EARTH_GROUP_H 1

#include <EarthWeb/EarthObject/IEarthObject.h>
#include <EarthWeb/EarthObject/EarthObjectDispatchImpl.h>

//osgEarthX
#include <Group/Group.h>

#define EarthGroupDispatchImpl EarthObjectDispatchImpl< osgEarthX::Group, EarthGroup, IEarthObject >

FB_FORWARD_PTR(EarthGroup)
class EarthGroup : 
	public EarthGroupDispatchImpl
{
public:
	EarthGroup(const std::vector<FB::variant>* pArgs = NULL) : 
		EarthGroupDispatchImpl( EARTH_GROUP )
	{
		registerMethod("addChild",make_method(this,&EarthGroup::addChild));
		registerMethod("removeChild",make_method(this,&EarthGroup::removeChild));
		registerMethod("removeChildByPos", make_method(this, &EarthGroup::removeChildByPos));
		registerMethod("getChild", make_method(this, &EarthGroup::getChild));
		registerMethod("getPosOfChild", make_method(this, &EarthGroup::getPosOfChild));
		registerMethod("moveChild", make_method(this, &EarthGroup::moveChild));
		registerMethod("moveChildFromCurPos", make_method(this, &EarthGroup::moveChildFromCurPos));
		registerMethod("getChildrenCount", make_method(this, &EarthGroup::getChildrenCount));
		registerMethod("removeChildren", make_method(this, &EarthGroup::removeChildren));

		registerMethod("insertChild", make_method( this, &EarthGroup::insertChild ));
	}

	virtual ~EarthGroup(){}

	//impl EarthObject
	virtual bool get_visible();
	virtual void put_visible( bool bVisible );
	virtual bool get_enabled();

	//EarthGroup
	void addChild( IEarthObjectPtr ptrEarthObject );
	void removeChild( IEarthObjectPtr ptrEarthObject );
	void removeChildByPos( unsigned int pos );
	FB::JSAPIPtr getChild( unsigned int pos );
	int getPosOfChild( IEarthObjectPtr ptrObject );
	void moveChild( IEarthObjectPtr ptrObject, unsigned int newPos );
	void moveChildFromCurPos( unsigned int curPos, unsigned int newPos );
	unsigned int getChildrenCount();

	void removeChildren();
	void insertChild( IEarthObjectPtr ptrEarthObject, unsigned int uiInsertPos );

protected:

private:
};

#endif