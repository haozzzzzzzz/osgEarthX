/**
	@brief Map of annotations
	@author Hao Luo
	@date 2015/03/31
*/

#ifndef OSGEARTHX_CORE_ANNOTATION_MAP_H
#define OSGEARTHX_CORE_ANNOTATION_MAP_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Map/BaseMap.h>

#include <osgEarthAnnotation/AnnotationNode>
#include <osg/Group>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT AnnotationMap : virtual public BaseMap
	{
	protected:
		osg::ref_ptr<osg::Group> m_refAnnotations;

	public:
		AnnotationMap();

		void addAnnotation( osgEarth::Annotation::AnnotationNode* pAnnotationNode );
		void removeAnnotation( osgEarth::Annotation::AnnotationNode* pAnnotationNode );

	protected:
		virtual ~AnnotationMap(){}

	private:
	};
}

#endif