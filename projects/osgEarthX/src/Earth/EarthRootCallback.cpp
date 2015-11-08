#include <Earth/Earth.h>
#include <Earth/EarthRootCallback.h>
#include <Group/GroupChange.h>

#include <Layer/ImageSurfaceLayer.h>
#include <Layer/VectorSurfaceLayer.h>
#include <Layer/ElevationSurfaceLayer.h>

#include <Externals/Viewpoint.h>
#include <Externals/Sky.h>

using namespace osgEarthX;

#include <cassert>

EarthRootCallback::EarthRootCallback( Earth* pEarth )
{
	assert( pEarth != NULL );
	m_pEarth = pEarth;
	m_pEarthRoot = m_pEarth->getEarthRoot();
}

EarthRootCallback::~EarthRootCallback()
{

}

void EarthRootCallback::doCallback(osgEarthXCore::Change* pChange)
{
	osgEarthX::GroupChange* pGroupChange = dynamic_cast< osgEarthX::GroupChange* >( pChange );

	if ( pGroupChange == NULL )
	{
		return;
	}

	switch( pGroupChange->getChangeType().changeType )
	{
	case GroupChangeType::ADD_OBJECT:
		{
			this->addObject( pGroupChange->getChangeType().pObject );
			break;
		}
		

	case GroupChangeType::REMOVE_OBJECT:
		{
			removeObject( pGroupChange->getChangeType().pObject );
		}
		break;

	case GroupChangeType::MOVE_OBJECT:
		{
			moveObject( pGroupChange->getChangeType().pObject );
		}
		break;

	case GroupChangeType::INSERT_OBJECT:
		insertObject( pGroupChange->getChangeType().pObject );
		break;

	default:
		break;
	}
}

void EarthRootCallback::addObject(Object*pObject)
{

	switch( pObject->getObjectType() )
	{
	case OBJECT:
		break;

	case GROUP:
		{
			Group* pGroup = ( Group* ) pObject;
			pGroup->addCallback( m_pEarthRoot->getNotifiedGroupCallback() );

			//对组的子节点进行添加
			ObjectsDynamicVector& objectsVector = pGroup->getObjects();
			for ( unsigned int i = 0, size = objectsVector.size(); i < size; i++ )
			{
				EarthRootCallback::addObject( objectsVector[ i ] );
			}
		}
		break;

	case IMAGE_SURFACE_LAYER:
		m_pEarth->getEarthMap()->addImageLayerProvider( ( ImageSurfaceLayer* ) pObject );//不能多次添加相同的Provider，否则会出现一个Provider被加载多次
		break;

	case VECTOR_SURFACE_LAYER:
		m_pEarth->getEarthMap()->addModelLayerProvider( ( VectorSurfaceLayer* ) pObject );
		break;

	case ELEVATION_SURFACE_LAYER:
		m_pEarth->getEarthMap()->addElevationLayerProvider( ( ElevationSurfaceLayer* ) pObject );
		break;

	case TERMASK_SURFACE_LAYER:
		break;

	case SKY:
		// do nothing.
		break;

	case GRATICULE:
		// do nothing
		break;

	case VIEWPOINT:
		{
			Viewpoint* pViewpoint = ( Viewpoint* )pObject;
			pViewpoint->bindEarthManipulator( m_pEarth->getEarthViewer()->getOrCreateEarthManipulator() );
		}
		break;

	case TEXT_LABEL:
	case MODEL:
	case FEATURE_PRIMITIVE:
	case CIRCLE:
	case IMAGE_OVERLAY:
	case PLACE:
	case RECTANGLE_PRIMITIVE:
	case ELLIPSE_PRIMITIVE:
		{
			m_pEarth->getEarthMap()->addAnnotation( dynamic_cast< osgEarth::Annotation::AnnotationNode* >( pObject ) );
		}
		break;

	case LABEL_SET_LAYER:
		break;

	case MODEL_SET_LAYER:
		break;

	case OVERLAY_IMAGE_SET_LAYER:
		break;

	case SHAPE_SET_LAYER:
		break;

	case PLACE_SET_LAYER:
		break;

	case VIEWPOINT_SET_LAYER:
		break;

	default:
		break;

	}
}

void EarthRootCallback::removeObject( Object*pObject )
{
	switch( pObject->getObjectType() )
	{
	case OBJECT:
		break;

	case GROUP:
		{
			Group* pGroup = ( Group* ) pObject;
			pGroup->removeCallback( m_pEarthRoot->getNotifiedGroupCallback() );

			//对组的子节点进行添加
			ObjectsDynamicVector& objectsVector = pGroup->getObjects();
			for ( unsigned int i = 0, size = objectsVector.size(); i < size; i++ )
			{
				EarthRootCallback::removeObject( objectsVector[ i ] );
			}
		}

		break;

	case IMAGE_SURFACE_LAYER:
		m_pEarth->getEarthMap()->removeImageLayerProvider( ( ImageSurfaceLayer* ) pObject );
		break;

	case VECTOR_SURFACE_LAYER:
		m_pEarth->getEarthMap()->removeModelLayerProvider( ( VectorSurfaceLayer* ) pObject );
		break;

	case ELEVATION_SURFACE_LAYER:
		m_pEarth->getEarthMap()->removeElevationLayerProvider( ( ElevationSurfaceLayer* ) pObject );
		break;

	case TERMASK_SURFACE_LAYER:
		break;

	case SKY:
		{
			if ( m_pEarth->getEarthMap()->getSkyProvider() == ( osgEarthXCore::SkyProvider* ) pObject )
			{
				m_pEarth->getEarthMap()->removeSkyProvider();
			}
		}
		break;

	case GRATICULE:
		{
			if ( m_pEarth->getEarthMap()->getGraticuleProvider() == ( osgEarthXCore::GraticuleProvider* ) pObject )
			{
				m_pEarth->getEarthMap()->removeGraticuleProvider();
			}
		}
		break;

	case TEXT_LABEL:
	case MODEL:
	case FEATURE_PRIMITIVE:
	case CIRCLE:
	case IMAGE_OVERLAY:
	case PLACE:
	case RECTANGLE_PRIMITIVE:
	case ELLIPSE_PRIMITIVE:
		{
			m_pEarth->getEarthMap()->removeAnnotation( dynamic_cast< osgEarth::Annotation::AnnotationNode* >( pObject ) );
		}
		break;

	case VIEWPOINT:
		break;

	case LABEL_SET_LAYER:
		break;

	case MODEL_SET_LAYER:
		break;

	case OVERLAY_IMAGE_SET_LAYER:
		break;

	case SHAPE_SET_LAYER:
		break;

	case PLACE_SET_LAYER:
		break;

	case VIEWPOINT_SET_LAYER:
		break;

	}
}

void EarthRootCallback::moveObject( Object*pObject )
{
	unsigned int newIndex = 0;
	switch( pObject->getObjectType() )
	{
	case OBJECT:
		break;

	case GROUP:
		{
			Group* pGroup = ( Group* ) pObject;

			//对组的子节点进行添加
			ObjectsDynamicVector& objectsVector = pGroup->getObjects();
			for ( unsigned int i = 0, size = objectsVector.size(); i < size; i++ )
			{
				EarthRootCallback::moveObject( objectsVector[ i ] );
			}
		}
		break;

	case IMAGE_SURFACE_LAYER:
		{
			if ( m_pEarthRoot->countObjectsOfSameKindUntil( pObject, newIndex ) )
			{
				m_pEarth->getEarthMap()->moveImageLayerProvider( ( ImageSurfaceLayer* )pObject, newIndex );
			}
		}
		break;

	case VECTOR_SURFACE_LAYER:
		{
			if ( m_pEarthRoot->countObjectsOfSameKindUntil( pObject, newIndex ) )
			{
				m_pEarth->getEarthMap()->moveModelLayerProvider( ( VectorSurfaceLayer* ) pObject, newIndex );
			}
		}
		break;

	case ELEVATION_SURFACE_LAYER:
		{
			if ( m_pEarthRoot->countObjectsOfSameKindUntil( pObject, newIndex ) )
			{
				m_pEarth->getEarthMap()->moveElevationLayerProvider( (ElevationSurfaceLayer*) pObject, newIndex );
			}
		}
		break;

	case TERMASK_SURFACE_LAYER:
		break;

	case SKY:
		// do nothing
		break;

	case GRATICULE:
		// do nothing
		break;

	case TEXT_LABEL:
		break;

	case MODEL:
		break;

	case IMAGE_OVERLAY:
		break;

	case FEATURE_PRIMITIVE:
		break;

	case PLACE:
		break;

	case VIEWPOINT:
		break;

	case LABEL_SET_LAYER:
		break;

	case MODEL_SET_LAYER:
		break;

	case OVERLAY_IMAGE_SET_LAYER:
		break;

	case SHAPE_SET_LAYER:
		break;

	case PLACE_SET_LAYER:
		break;

	case VIEWPOINT_SET_LAYER:
		break;

	}
}



void EarthRootCallback::insertObject(Object* pObject)
{
	unsigned int pos = 0;
	switch( pObject->getObjectType() )
	{
	case OBJECT:
		break;

	case GROUP:
		{
			Group* pGroup = ( Group* ) pObject;

			//对组的子节点进行添加
			ObjectsDynamicVector& objectsVector = pGroup->getObjects();
			for ( unsigned int i = 0, size = objectsVector.size(); i < size; i++ )
			{
				EarthRootCallback::insertObject( objectsVector[ i ] );
			}
		}
		break;

	case IMAGE_SURFACE_LAYER:
		{
			if ( m_pEarthRoot->countObjectsOfSameKindUntil( pObject, pos ) )
			{
				m_pEarth->getEarthMap()->insertImageLayerProvider( ( ImageSurfaceLayer* ) pObject, pos );
			}
		}
		break;

	case VECTOR_SURFACE_LAYER:
		{
			if ( m_pEarthRoot->countObjectsOfSameKindUntil( pObject, pos ) )
			{
				m_pEarth->getEarthMap()->insertModelLayerProvider( ( VectorSurfaceLayer* ) pObject, pos );
			}
		}
		break;

	case ELEVATION_SURFACE_LAYER:
		{
			if ( m_pEarthRoot->countObjectsOfSameKindUntil( pObject,pos ) )
			{
				m_pEarth->getEarthMap()->insertElevationLayerProvider( ( ElevationSurfaceLayer* ) pObject, pos );
			}
		}
		break;

	case TERMASK_SURFACE_LAYER:
		break;

	case SKY:
		break;

	case TEXT_LABEL:
		break;

	case MODEL:
		break;

	case IMAGE_OVERLAY:
		break;

	case FEATURE_PRIMITIVE:
		break;

	case PLACE:
		break;

	case VIEWPOINT:
		break;

	case LABEL_SET_LAYER:
		break;

	case MODEL_SET_LAYER:
		break;

	case OVERLAY_IMAGE_SET_LAYER:
		break;

	case SHAPE_SET_LAYER:
		break;

	case PLACE_SET_LAYER:
		break;

	case VIEWPOINT_SET_LAYER:
		break;

	}
}