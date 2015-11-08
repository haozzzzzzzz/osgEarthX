/**********************************************************\

  Auto-generated EarthWebAPI.cpp

\**********************************************************/

#include "JSObject.h"
#include "variant_list.h"
#include "DOM/Document.h"
#include "global/config.h"

#include "EarthWebAPI.h"

#include <EarthWeb/Utils/StaticUtils/EarthStaticUtils.h>
#include <EarthWeb/Utils/StaticUtils/EarthObjectStaticUtils.h>

///////////////////////////////////////////////////////////////////////////////
/// @fn FB::variant EarthWebAPI::echo(const FB::variant& msg)
///
/// @brief  Echos whatever is passed from Javascript.
///         Go ahead and change it. See what happens!
///////////////////////////////////////////////////////////////////////////////
FB::variant EarthWebAPI::echo(const FB::variant& msg)
{
    static int n(0);
    fire_echo("So far, you clicked this many times: ", n++);

    // return "foobar";
    return msg;
}

///////////////////////////////////////////////////////////////////////////////
/// @fn EarthWebPtr EarthWebAPI::getPlugin()
///
/// @brief  Gets a reference to the plugin that was passed in when the object
///         was created.  If the plugin has already been released then this
///         will throw a FB::script_error that will be translated into a
///         javascript exception in the page.
///////////////////////////////////////////////////////////////////////////////
EarthWebPtr EarthWebAPI::getPlugin()
{
    EarthWebPtr plugin(m_plugin.lock());
    if (!plugin) {
        throw FB::script_error("The plugin is invalid");
    }
    return plugin;
}

// Read/Write property testString
std::string EarthWebAPI::get_testString()
{
    return m_testString;
}

void EarthWebAPI::set_testString(const std::string& val)
{
    m_testString = val;
}

// Read-only property version
std::string EarthWebAPI::get_version()
{
    return FBSTRING_PLUGIN_VERSION;
}

void EarthWebAPI::testEvent()
{
    fire_test();
}

bool EarthWebAPI::equal( IEarthDispatchPtr ptr )
{
	return false;
}

void EarthWebAPI::run()
{
	m_plugin.lock()->getOrCreateInnerObject()->run();
}

FB::JSAPIPtr EarthWebAPI::getClassFactory()
{
	return EarthStaticUtils::createInstance( CLASS_FACTORY );
}

FB::JSAPIPtr EarthWebAPI::getEarthMap()
{
	return EarthStaticUtils::createInstance( EARTH_MAP, m_plugin.lock()->getOrCreateInnerObject()->getEarthMap() );
}

FB::JSAPIPtr EarthWebAPI::getEarthRoot()
{
	return EarthObjectStaticUtils::createInstance( EARTH_GROUP, ( osgEarthX::Group* ) m_plugin.lock()->getOrCreateInnerObject()->getEarthRoot() );
}

void EarthWebAPI::setActiveSky( SkyPtr ptrSky )
{
	if ( ptrSky.get() == NULL )
	{
		return;
	}
	m_plugin.lock()->getOrCreateInnerObject()->setActiveSky( dynamic_cast< osgEarthX::Sky* >( EarthObjectStaticUtils::getInnerObject( ptrSky.get(), true ) ) );
}

void EarthWebAPI::removeActiveSky()
{
	m_plugin.lock()->getOrCreateInnerObject()->removeActiveSky();
}

void EarthWebAPI::setHomeViewpoint( ViewpointPtr ptrViewpoint )
{
	if ( ptrViewpoint.get() == NULL )
	{
		return;
	}

	m_plugin.lock()->getOrCreateInnerObject()->setHomeViewpoint( dynamic_cast< osgEarthX::Viewpoint* >( EarthObjectStaticUtils::getInnerObject( ptrViewpoint.get(), true ) ) );
}

void EarthWebAPI::setActiveGraticule( GraticulePtr ptrGraticule )
{
	if ( ptrGraticule.get() == NULL )
	{
		return;
	}
	m_plugin.lock()->getOrCreateInnerObject()->setActiveGraticule( dynamic_cast< osgEarthX::Graticule* >( EarthObjectStaticUtils::getInnerObject( ptrGraticule.get(), true ) ) );
}

void EarthWebAPI::removeActiveGraticule()
{
	m_plugin.lock()->getOrCreateInnerObject()->removeActiveGraticule();
}