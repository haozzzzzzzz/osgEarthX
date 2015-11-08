/**
	@brief ‰÷»æ¿‡
	@author Hao Luo
	@date 2014/12/16
*/

#ifndef OSGEARTHX_WEB_EARTH_VIEWER_H
#define OSGEARTHX_WEB_EARTH_VIEWER_H 1

#include <EarthWeb/Earth/IEarthDispatch.h>
#include <EarthWeb/Earth/RefEarthDispatchImpl.h>
#include <EarthWeb/Earth/EarthClassType.h>

//osgEarthX
#include <EarthViewer/EarthViewer.h>

#define EarthViewerDispatchImpl RefEarthDispatchImpl< EarthClassType, osgEarthX::EarthViewer, EarthViewer, IEarthDispatch >

FB_FORWARD_PTR(EarthViewer)
class EarthViewer : 
	public EarthViewerDispatchImpl
{
public:
	EarthViewer() : 
		EarthViewerDispatchImpl( EARTH_VIEWER )
	{

	}

	//IEarthJSAPI
	virtual bool equal( IEarthDispatchPtr ptr );

protected:
private:
};

#endif