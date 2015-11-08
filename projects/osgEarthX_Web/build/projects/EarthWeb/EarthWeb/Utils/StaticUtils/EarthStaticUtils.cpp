#include <EarthWeb/Utils/StaticUtils/EarthStaticUtils.h>

#include <EarthWeb/Utils/ClassFactory/ClassFactory.h>
#include <EarthWeb/EarthMap/EarthMap.h>
#include <EarthWeb/EarthViewer/EarthViewer.h>

FB::JSAPIPtr EarthStaticUtils::createInstance( EarthClassType classType, void* innerParams /* = NULL */ )
{
	FB::JSAPIPtr ptrJSAPI;

	switch ( classType )
	{
	case  CLASS_FACTORY:
		{
			ClassFactoryPtr ptrClassFactory = boost::make_shared< ClassFactory >();
			ptrJSAPI = boost::dynamic_pointer_cast< FB::JSAPI >( ptrClassFactory );
		}
		break;

	case EARTH_MAP:
		{
			EarthMapPtr ptrEarthMap = boost::make_shared< EarthMap >();
			ptrJSAPI = boost::dynamic_pointer_cast< FB::JSAPI >( ptrEarthMap );
			if ( innerParams )
			{
				ptrEarthMap->setInnerObject( ( osgEarthX::EarthMap* ) innerParams );
			}
		}
		break;

	case EARTH_VIEWER:
		{
			EarthViewerPtr ptrEarthViewer = boost::make_shared< EarthViewer >();
			ptrJSAPI = boost::dynamic_pointer_cast< FB::JSAPI >( ptrEarthViewer );
			if ( innerParams )
			{
				ptrEarthViewer->setInnerObject( ( osgEarthX::EarthViewer* ) innerParams );
			}
		}
		break;

	default:
		break;
	}

	return ptrJSAPI;
}
