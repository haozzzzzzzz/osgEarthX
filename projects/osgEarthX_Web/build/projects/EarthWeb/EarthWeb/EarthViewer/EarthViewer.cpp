#include <EarthWeb/EarthViewer/EarthViewer.h>

bool EarthViewer::equal( IEarthDispatchPtr ptr )
{
	EarthViewerPtr ptrEarthViewer = boost::dynamic_pointer_cast< EarthViewer >( ptr );
	if ( ptrEarthViewer.get() == NULL )
	{
		return false;
	}

	return ptrEarthViewer->m_refInnerObject == m_refInnerObject;
}