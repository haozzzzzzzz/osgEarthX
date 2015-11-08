#include <EarthWeb/Source/VectorSource/VectorSourceGeom/VectorSourceGeom.h>
#include <EarthWeb/Utils/StaticUtils/SourceStaticUtils.h>

VectorSourceGeom::VectorSourceGeom( const std::vector<FB::variant>* pArgs ) : VectorSourceGeomDispatchImpl( VECTOR_SOURCE_GEOM )
{
	_register();

	osgEarth::Symbology::Style style;
	osgEarth::Symbology::LineSymbol* lineSymbol = style.getOrCreateSymbol<osgEarth::Symbology::LineSymbol>();
	lineSymbol->stroke()->color() = osgEarth::Symbology::Color::Yellow;
	lineSymbol->stroke()->width() = 2.0f;

	getOrCreateInnerObject()->styles() = new osgEarth::Symbology::StyleSheet();
	getOrCreateInnerObject()->styles()->addStyle( style );
}

IFeatureSourceDispatchPtr VectorSourceGeom::get_featureSource()
{
	IFeatureSourceDispatchPtr ptrIFeatureSourceDispatch;
	return ptrIFeatureSourceDispatch;
}

void VectorSourceGeom::put_featureSource( IFeatureSourceDispatchPtr ptrIFeatureSourceDispatch )
{
	osgEarth::Features::FeatureSourceOptions* pOptions = SourceStaticUtils::getFeatureSourceOptions( ptrIFeatureSourceDispatch.get() );
	if ( pOptions )
	{
		getOrCreateInnerObject()->featureOptions() = *pOptions;
	}
}