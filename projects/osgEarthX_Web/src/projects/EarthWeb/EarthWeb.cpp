/**********************************************************\

  Auto-generated EarthWeb.cpp

  This file contains the auto-generated main plugin object
  implementation for the EarthWeb project

\**********************************************************/

#include "EarthWebAPI.h"

#include "EarthWeb.h"
#include "PluginWindowWin.h"

#include <Viewer/Win32ViewerT.h>
#include <osgViewer/Viewer>

///////////////////////////////////////////////////////////////////////////////
/// @fn EarthWeb::StaticInitialize()
///
/// @brief  Called from PluginFactory::globalPluginInitialize()
///
/// @see FB::FactoryBase::globalPluginInitialize
///////////////////////////////////////////////////////////////////////////////
void EarthWeb::StaticInitialize()
{
    // Place one-time initialization stuff here; As of FireBreath 1.4 this should only
    // be called once per process
}

///////////////////////////////////////////////////////////////////////////////
/// @fn EarthWeb::StaticInitialize()
///
/// @brief  Called from PluginFactory::globalPluginDeinitialize()
///
/// @see FB::FactoryBase::globalPluginDeinitialize
///////////////////////////////////////////////////////////////////////////////
void EarthWeb::StaticDeinitialize()
{
    // Place one-time deinitialization stuff here. As of FireBreath 1.4 this should
    // always be called just before the plugin library is unloaded
}

///////////////////////////////////////////////////////////////////////////////
/// @brief  EarthWeb constructor.  Note that your API is not available
///         at this point, nor the window.  For best results wait to use
///         the JSAPI object until the onPluginReady method is called
///////////////////////////////////////////////////////////////////////////////
EarthWeb::EarthWeb() :
	RefEarthDispatch< EarthClassType, osgEarthX::Earth >( EARTH )
{
}

///////////////////////////////////////////////////////////////////////////////
/// @brief  EarthWeb destructor.
///////////////////////////////////////////////////////////////////////////////
EarthWeb::~EarthWeb()
{
    // This is optional, but if you reset m_api (the shared_ptr to your JSAPI
    // root object) and tell the host to free the retained JSAPI objects then
    // unless you are holding another shared_ptr reference to your JSAPI object
    // they will be released here.
    releaseRootJSAPI();
    m_host->freeRetainedObjects();
}

void EarthWeb::onPluginReady()
{
    // When this is called, the BrowserHost is attached, the JSAPI object is
    // created, and we are ready to interact with the page and such.  The
    // PluginWindow may or may not have already fire the AttachedEvent at
    // this point.

}

void EarthWeb::shutdown()
{
    // This will be called when it is time for the plugin to shut down;
    // any threads or anything else that may hold a shared_ptr to this
    // object should be released here so that this object can be safely
    // destroyed. This is the last point that shared_from_this and weak_ptr
    // references to this object will be valid
	reset();
}

///////////////////////////////////////////////////////////////////////////////
/// @brief  Creates an instance of the JSAPI object that provides your main
///         Javascript interface.
///
/// Note that m_host is your BrowserHost and shared_ptr returns a
/// FB::PluginCorePtr, which can be used to provide a
/// boost::weak_ptr<EarthWeb> for your JSAPI class.
///
/// Be very careful where you hold a shared_ptr to your plugin class from,
/// as it could prevent your plugin class from getting destroyed properly.
///////////////////////////////////////////////////////////////////////////////
FB::JSAPIPtr EarthWeb::createJSAPI()
{
    // m_host is the BrowserHost
    return boost::make_shared<EarthWebAPI>(FB::ptr_cast<EarthWeb>(shared_from_this()), m_host);
}

bool EarthWeb::onMouseDown(FB::MouseDownEvent *evt, FB::PluginWindow *)
{
    //printf("Mouse down at: %d, %d\n", evt->m_x, evt->m_y);
    return false;
}

bool EarthWeb::onMouseUp(FB::MouseUpEvent *evt, FB::PluginWindow *)
{
    //printf("Mouse up at: %d, %d\n", evt->m_x, evt->m_y);
    return false;
}

bool EarthWeb::onMouseMove(FB::MouseMoveEvent *evt, FB::PluginWindow *)
{
    //printf("Mouse move at: %d, %d\n", evt->m_x, evt->m_y);
    return false;
}

bool EarthWeb::onWindowAttached(FB::AttachedEvent *evt, FB::PluginWindow * pWin)
{
    // The window is attached; act appropriately
	FB::PluginWindowWin* pWindow = reinterpret_cast<FB::PluginWindowWin*>(pWin);
	osgEarthXCore::Win32ViewerT< osgViewer::Viewer >* pViewerContext = new osgEarthXCore::Win32ViewerT< osgViewer::Viewer >( true );
	pViewerContext->setCameraGraphicsWindow( pViewerContext->getCamera(), pWindow->getHWND() );
	getOrCreateInnerObject()->getEarthViewer()->setViewer( pViewerContext );
    return false;
}

bool EarthWeb::onWindowDetached(FB::DetachedEvent *evt, FB::PluginWindow *pWin)
{
    // The window is about to be detached; act appropriately
	reset();
    return false;
}

void EarthWeb::reset()
{
	if ( m_refInnerObject )
	{
		m_refInnerObject.release();
	}
}