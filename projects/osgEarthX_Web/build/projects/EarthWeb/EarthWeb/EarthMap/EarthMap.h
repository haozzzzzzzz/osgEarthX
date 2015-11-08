/*
	@brief : EarthMap JS ½Ó¿Ú
*/

#ifndef OSGEARTHX_WEB_EARTH_MAP_H
#define OSGEARTHX_WEB_EARTH_MAP_H 1

#include <EarthWeb/Earth/IEarthDispatch.h>
#include <EarthWeb/Earth/RefEarthDispatchImpl.h>
#include <EarthWeb/Earth/EarthClassType.h>

#include <EarthWeb/EarthGroup/EarthGroup.h>
#include <EarthMap/EarthMap.h>

#define EarthMapDispatchImpl RefEarthDispatchImpl< EarthClassType, osgEarthX::EarthMap, EarthMap, IEarthDispatch >

FB_FORWARD_PTR(EarthMap)
class EarthMap : 
	public EarthMapDispatchImpl
{
public:
	EarthMap() : 
		EarthMapDispatchImpl( EARTH_MAP )
	{
		registerProperty("maxThreadsNum", make_property(this, &EarthMap::get_maxThreadsNum, &EarthMap::put_maxThreadsNum));
	}
	virtual ~EarthMap(){}

public:
	unsigned int get_maxThreadsNum();
	void put_maxThreadsNum(unsigned int num);

protected:
private:
};

#endif