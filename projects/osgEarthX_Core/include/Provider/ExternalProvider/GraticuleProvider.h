/**
	@brief 经纬线提供者
	@author Hao Luo
	@date 2015/03/30
	@note Graticule类加载需要耗费一定时间，虽然不阻塞渲染，但是会阻塞操作线程，若在实际应用中占用时间过长，可以考虑加入Task
*/

#ifndef OSGEARTHX_CORE_GRATICULE_PROVIDER_H
#define OSGEARTHX_CORE_GRATICULE_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Provider/AsynProvider.h>
#include <osgEarthUtil/GeodeticGraticule>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT GraticuleProvider : public AsynProvider
	{
	private:
		osg::ref_ptr< osgEarth::Util::GeodeticGraticule > m_refGeodeticGraticule;

	public:
		GraticuleProvider();

		void initGeodeticGraticule( osgEarth::MapNode* pMapNode );

		osgEarth::Util::GeodeticGraticule* getGeodeticGraticule()
		{
			return m_refGeodeticGraticule;
		}

	protected:
		virtual ~GraticuleProvider();

	private:
	};
}

#endif