/**********************************************************\

  Auto-generated EarthWeb.h

  This file contains the auto-generated main plugin object
  implementation for the EarthWeb project

\**********************************************************/
#ifndef H_EarthWebPLUGIN
#define H_EarthWebPLUGIN

#include "PluginWindow.h"
/**
	osgEarthX_Web中EarthWeb对应于osgEarthX中的Earth
*/

#include "PluginEvents/MouseEvents.h"
#include "PluginEvents/AttachedEvent.h"

#include "PluginCore.h"

//osgEarthX
#include <Earth/Earth.h>

#include <EarthWeb/Earth/RefEarthDispatchImpl.h>
#include <EarthWeb/Earth/EarthClassType.h>

FB_FORWARD_PTR(EarthWebAPI)
class EarthWebAPI;

FB_FORWARD_PTR(EarthWeb)
class EarthWeb : 
	public FB::PluginCore,
	public RefEarthDispatch< EarthClassType, osgEarthX::Earth >
{
protected:
	void reset();

public:
    static void StaticInitialize();
    static void StaticDeinitialize();

public:
    EarthWeb();
    virtual ~EarthWeb();

public:
    void onPluginReady();
    void shutdown();
    virtual FB::JSAPIPtr createJSAPI();
    // If you want your plugin to always be windowless, set this to true
    // If you want your plugin to be optionally windowless based on the
    // value of the "windowless" param tag, remove this method or return
    // FB::PluginCore::isWindowless()
    virtual bool isWindowless() { return false; }

    BEGIN_PLUGIN_EVENT_MAP()
        EVENTTYPE_CASE(FB::MouseDownEvent, onMouseDown, FB::PluginWindow)
        EVENTTYPE_CASE(FB::MouseUpEvent, onMouseUp, FB::PluginWindow)
        EVENTTYPE_CASE(FB::MouseMoveEvent, onMouseMove, FB::PluginWindow)
        EVENTTYPE_CASE(FB::MouseMoveEvent, onMouseMove, FB::PluginWindow)
        EVENTTYPE_CASE(FB::AttachedEvent, onWindowAttached, FB::PluginWindow)
        EVENTTYPE_CASE(FB::DetachedEvent, onWindowDetached, FB::PluginWindow)
    END_PLUGIN_EVENT_MAP()

    /** BEGIN EVENTDEF -- DON'T CHANGE THIS LINE **/
    virtual bool onMouseDown(FB::MouseDownEvent *evt, FB::PluginWindow *);
    virtual bool onMouseUp(FB::MouseUpEvent *evt, FB::PluginWindow *);
    virtual bool onMouseMove(FB::MouseMoveEvent *evt, FB::PluginWindow *);
    virtual bool onWindowAttached(FB::AttachedEvent *evt, FB::PluginWindow *);
    virtual bool onWindowDetached(FB::DetachedEvent *evt, FB::PluginWindow *);
    /** END EVENTDEF -- DON'T CHANGE THIS LINE **/
};


#endif

