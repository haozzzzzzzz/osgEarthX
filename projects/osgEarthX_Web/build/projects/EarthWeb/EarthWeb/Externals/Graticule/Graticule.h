/**
	@brief ¾­Î³Ïß
	@author Hao Luo
	@date 2015/04/08
*/
#ifndef OSGEARTHX_WEB_GRATICULE_H
#define OSGEARTHX_WEB_GRATICULE_H 1

#include <EarthWeb/EarthObject/EarthObjectDispatchImpl.h>
#include <EarthWeb/EarthObject/IEarthObject.h>

#include <Externals/Graticule.h>

#define GraticuleDispatchImpl EarthObjectDispatchImpl< osgEarthX::Graticule, Graticule, IEarthObject >

FB_FORWARD_PTR(Graticule)
class Graticule :
	public GraticuleDispatchImpl
{
public:
	Graticule( const std::vector<FB::variant>* pArgs = NULL ) : GraticuleDispatchImpl( EXTERNAL_GRATICLUE )
	{

	}

	virtual ~Graticule()
	{

	}

	//impl EarthObject
	virtual bool get_visible();
	virtual void put_visible( bool bVisible );
	virtual bool get_enabled();

protected:
private:
};

#endif