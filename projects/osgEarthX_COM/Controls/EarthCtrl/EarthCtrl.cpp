// EarthCtrl.cpp : CEarthCtrl 的实现
#include "stdafx.h"
#include "EarthCtrl.h"

#include <COM/Utils/StaticUtils/EarthStaticUtils.h>
#include <COM/Utils/StaticUtils/EarthObjectStaticUtils.h>

#include <Viewer/Win32ViewerT.h>
#include <osgViewer/Viewer>

// CEarthCtrl
CEarthCtrl::CEarthCtrl() : 
	IEarthCtrlStockPropImpl( EARTH )
{
	m_bWindowOnly = true;
}

CEarthCtrl::CEarthCtrl( const CEarthCtrl& earthCtrl ) : 
	IEarthCtrlStockPropImpl( earthCtrl )
{
	m_bWindowOnly = earthCtrl.m_bWindowOnly;
}

CEarthCtrl::~CEarthCtrl()
{

}
void CEarthCtrl::setInnerObject( osgEarthX::Earth* pObject )
{
	IEarthCtrlStockPropImpl::setInnerObject( pObject );

	if ( m_refInnerObject.get() != NULL )
	{
		m_refInnerObject->setFirer(this);
	}

}

LRESULT CEarthCtrl::OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	osgEarthXCore::Win32ViewerT< osgViewer::Viewer >* pViewerContext = new osgEarthXCore::Win32ViewerT< osgViewer::Viewer >( true );
	pViewerContext->setCameraGraphicsWindow( pViewerContext->getCamera(), m_hWnd );
	getOrCreateInnerObject()->getEarthViewer()->setViewer( pViewerContext );
	return 0;
}

STDMETHODIMP CEarthCtrl::run( void )
{
	getOrCreateInnerObject()->run();
	return S_OK;
}

STDMETHODIMP CEarthCtrl::getEarthViewer( IEarthViewer** ppEarthViewer )
{
	EarthStaticUtils::createInstance( EARTH_VIEWER, ( IDispatch** )ppEarthViewer, getOrCreateInnerObject()->getEarthViewer() );
	return S_OK;
}

STDMETHODIMP CEarthCtrl::getEarthMap( IEarthMap** ppEarthMap )
{
	EarthStaticUtils::createInstance( EARTH_MAP, ( IDispatch** )ppEarthMap, getOrCreateInnerObject()->getEarthMap() );
	return S_OK;
}

STDMETHODIMP CEarthCtrl::getUtilObjectFactory(IDispatch** ppIDispatch)
{
	EarthStaticUtils::createInstance( OBJECT_FACTORY, ppIDispatch );
	return S_OK;
}

STDMETHODIMP CEarthCtrl::getEarthRoot( IEarthGroup**ppIEarthGroup )
{
	EarthObjectStaticUtils::createInstance( EARTH_GROUP, ( IDispatch** )ppIEarthGroup, ( osgEarthX::Object* )getOrCreateInnerObject()->getEarthRoot() );
	return S_OK;
}

STDMETHODIMP CEarthCtrl::setActiveSky( ISky* pISky )
{
	if ( pISky == NULL )
	{
		return S_FALSE;
	}

	getOrCreateInnerObject()->setActiveSky( dynamic_cast< osgEarthX::Sky* >( EarthObjectStaticUtils::getInnerObject( pISky, true ) ) );
	return S_OK;
}

STDMETHODIMP CEarthCtrl::removeActiveSky()
{
	getOrCreateInnerObject()->removeActiveSky();
	return S_OK;
}

STDMETHODIMP CEarthCtrl::setHomeViewpoint( IViewpoint* pIViewpoint )
{
	if ( pIViewpoint == NULL )
	{
		return S_FALSE;
	}

	getOrCreateInnerObject()->setHomeViewpoint( dynamic_cast< osgEarthX::Viewpoint* >( EarthObjectStaticUtils::getInnerObject( pIViewpoint, true ) ) );
	return S_OK;
}

STDMETHODIMP CEarthCtrl::setActiveGraticule( IGraticule* pIGraticule )
{
	if ( pIGraticule == NULL )
	{
		return S_FALSE;
	}
	getOrCreateInnerObject()->setActiveGraticule( dynamic_cast< osgEarthX::Graticule* >( EarthObjectStaticUtils::getInnerObject( pIGraticule, true ) ) );
	return S_OK;
}

STDMETHODIMP CEarthCtrl::removeActiveGraticule()
{
	getOrCreateInnerObject()->removeActiveGraticule();
	return S_OK;
}

//osgEarthX event
void CEarthCtrl::onInitialized()
{

}

void CEarthCtrl::onInitializeFailed()
{

}
void CEarthCtrl::onKeyDown(int keyCode)
{

}

void CEarthCtrl::onKeyUp(int keyCode)
{

}
void CEarthCtrl::onMouseDown()
{

}
void CEarthCtrl::onMouseUp()
{

}
void CEarthCtrl::onLButtonDown()
{
}
void CEarthCtrl::onLButtonUp()
{

}
void CEarthCtrl::onLButtonDBClick()
{

}
void CEarthCtrl::onRButtonDown()
{

}
void CEarthCtrl::onRButtonUp()
{

}
void CEarthCtrl::onRButtonDBClick()
{

}
void CEarthCtrl::onMButtonDown()
{

}
void CEarthCtrl::onMButtonUp()
{

}
void CEarthCtrl::onMButtonDBClick()
{

}
void CEarthCtrl::onSetFocus()
{

}

void CEarthCtrl::onKillFocus()
{

}
