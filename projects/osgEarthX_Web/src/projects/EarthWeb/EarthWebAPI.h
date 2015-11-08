/**********************************************************\

  Auto-generated EarthWebAPI.h

\**********************************************************/

#include <string>
#include <sstream>
#include <boost/weak_ptr.hpp>
#include "BrowserHost.h"
#include "EarthWeb.h"

#ifndef H_EarthWebAPI
#define H_EarthWebAPI

//osgEarthX_Web
#include <EarthWeb/Earth/IEarthDispatch.h>
#include <EarthWeb/EarthMap/EarthMap.h>

#include <EarthWeb/Externals/Graticule/Graticule.h>
#include <EarthWeb/Externals/Sky/Sky.h>
#include <EarthWeb/Externals/Viewpoint/Viewpoint.h>

class EarthWebAPI : 
	public IEarthDispatch
{
public:
	void registerEarth()
	{
		registerMethod("run",make_method(this,&EarthWebAPI::run));

		registerMethod("getClassFactory",make_method(this,&EarthWebAPI::getClassFactory));
		registerMethod("getEarthRoot",make_method(this,&EarthWebAPI::getEarthRoot));
		registerMethod("getEarthMap",make_method(this,&EarthWebAPI::getEarthMap));

		registerMethod( "setActiveSky", make_method( this, &EarthWebAPI::setActiveSky ) );
		registerMethod( "removeActiveSky", make_method( this, &EarthWebAPI::removeActiveSky ) );
		registerMethod( "setHomeViewpoint", make_method( this, &EarthWebAPI::setHomeViewpoint ) );
		registerMethod( "setActiveGraticule", make_method( this, &EarthWebAPI::setActiveGraticule ) );
		registerMethod( "removeActiveGraticule", make_method( this, &EarthWebAPI::removeActiveGraticule ) );
	}

public:
	//IEarthJSAPI
	virtual bool equal( IEarthDispatchPtr ptr );

	//osgEarthX
	void run();

	//osgEarthX_Web objects
public:
	//获取类创建对象
	FB::JSAPIPtr getClassFactory();
	FB::JSAPIPtr getEarthRoot();
	FB::JSAPIPtr getEarthMap();
	void setActiveSky( SkyPtr ptrSky );
	void removeActiveSky();
	void setHomeViewpoint( ViewpointPtr ptrViewpoint );
	void setActiveGraticule( GraticulePtr ptrGraticule );
	void removeActiveGraticule();

public:
    ////////////////////////////////////////////////////////////////////////////
    /// @fn EarthWebAPI::EarthWebAPI(const EarthWebPtr& plugin, const FB::BrowserHostPtr host)
    ///
    /// @brief  Constructor for your JSAPI object.
    ///         You should register your methods, properties, and events
    ///         that should be accessible to Javascript from here.
    ///
    /// @see FB::JSAPIAuto::registerMethod
    /// @see FB::JSAPIAuto::registerProperty
    /// @see FB::JSAPIAuto::registerEvent
    ////////////////////////////////////////////////////////////////////////////
    EarthWebAPI(const EarthWebPtr& plugin, const FB::BrowserHostPtr& host) :
        m_plugin(plugin), m_host(host)
    {
        registerMethod("echo",      make_method(this, &EarthWebAPI::echo));
        registerMethod("testEvent", make_method(this, &EarthWebAPI::testEvent));
        
        // Read-write property
        registerProperty("testString",
                         make_property(this,
                                       &EarthWebAPI::get_testString,
                                       &EarthWebAPI::set_testString));
        
        // Read-only property
        registerProperty("version",
                         make_property(this,
                                       &EarthWebAPI::get_version));

		registerEarth();
    }

    ///////////////////////////////////////////////////////////////////////////////
    /// @fn EarthWebAPI::~EarthWebAPI()
    ///
    /// @brief  Destructor.  Remember that this object will not be released until
    ///         the browser is done with it; this will almost definitely be after
    ///         the plugin is released.
    ///////////////////////////////////////////////////////////////////////////////
    virtual ~EarthWebAPI() {};

    EarthWebPtr getPlugin();

    // Read/Write property ${PROPERTY.ident}
    std::string get_testString();
    void set_testString(const std::string& val);

    // Read-only property ${PROPERTY.ident}
    std::string get_version();

    // Method echo
    FB::variant echo(const FB::variant& msg);
    
    // Event helpers
    FB_JSAPI_EVENT(test, 0, ());
    FB_JSAPI_EVENT(echo, 2, (const FB::variant&, const int));

    // Method test-event
    void testEvent();
private:
    EarthWebWeakPtr m_plugin;
    FB::BrowserHostPtr m_host;

    std::string m_testString;
};

#endif // H_EarthWebAPI

