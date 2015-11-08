#include <Provider/ExternalProvider/GraticuleProvider.h>
using namespace osgEarthXCore;

#include <osgEarthUtil/GeodeticGraticule>

GraticuleProvider::GraticuleProvider()
{
}

GraticuleProvider::~GraticuleProvider()
{

}

void GraticuleProvider::initGeodeticGraticule( osgEarth::MapNode* pMapNode )
{
	if( pMapNode == NULL || m_refGeodeticGraticule.get() != NULL )
	{
		return;
	}

	m_refGeodeticGraticule = new osgEarth::Util::GeodeticGraticule( pMapNode );
	osgEarth::Util::GeodeticGraticuleOptions o = m_refGeodeticGraticule->getOptions();
	o.lineStyle()->getOrCreate<osgEarth::Util::LineSymbol>()->stroke()->color().set(1,0,0,1);
	m_refGeodeticGraticule->setOptions( o );
}