/**
	@brief 由外部模型组成的Map
	@author Hao Luo
	@date 2015/01/14
*/

#ifndef OSGEARTHX_CORE_EXTERNALS_MAP_H
#define OSGEARTHX_CORE_EXTERNALS_MAP_H 1

#include <osgEarthXCoreExport/Export.h>
#include <Map/BaseMap.h>

#include <Provider/ExternalProvider/SkyProvider.h>
#include <Provider/ExternalProvider/GraticuleProvider.h>

namespace osgEarthXCore
{
	class SetSkyProviderOperation;
	class RemoveSkyProviderOperation;

	class SetGraticuleProviderOperation;
	class RemoveGraticuleProviderOperation;

	class OSGEARTHX_CORE_EXPORT ExternalsMap:
		virtual public BaseMap
	{
	public:
		friend SetSkyProviderOperation;
		friend RemoveSkyProviderOperation;
		friend SetGraticuleProviderOperation;
		friend RemoveGraticuleProviderOperation;

	protected:
		osg::ref_ptr< SkyProvider > m_refSkyProvider;
		osg::ref_ptr< GraticuleProvider > m_refGraticuleProvider;

	public:
		ExternalsMap();

		void setSkyProvider( SkyProvider* pSkyProvider );
		SkyProvider* getSkyProvider();
		void removeSkyProvider();

		void setGraticuleProvider( GraticuleProvider* pGraticuleProvider );
		GraticuleProvider* getGraticuleProvider();
		void removeGraticuleProvider();

	protected:
		virtual ~ExternalsMap();
		virtual void initMapViewer( MapViewer* pMapViewer );

		void _removeSkyProvider();
		void _setSkyProvider( SkyProvider* pSkyProvider );

		void _removeGraticuleProvider();
		void _setGraticuleProvider( GraticuleProvider* pGraticuleProvider );

	private:
	};


	//Operations
	class SetSkyProviderOperation : public osg::Operation
	{
	public:
		SetSkyProviderOperation( ExternalsMap* pExternalsMap, SkyProvider* pSkyProvider )
		{
			m_pExternalsMap = pExternalsMap;
			m_pSkyProvider = pSkyProvider;
		}
		virtual void operator()( osg::Object* pObject );

	protected:
		virtual ~SetSkyProviderOperation(){}

	private:
		ExternalsMap* m_pExternalsMap;
		SkyProvider* m_pSkyProvider;
	};

	class RemoveSkyProviderOperation : public osg::Operation
	{
	public:
		RemoveSkyProviderOperation( ExternalsMap* pExternalsMap )
		{
			m_pExternalsMap = pExternalsMap;
		}
		virtual void operator()( osg::Object* pObject );

	protected:
		virtual ~RemoveSkyProviderOperation(){}

	private:
		ExternalsMap* m_pExternalsMap;
	};

	class SetGraticuleProviderOperation : public osg::Operation
	{
	public:
		SetGraticuleProviderOperation( ExternalsMap* pExternalsMap, GraticuleProvider* pGraticuleProvider )
		{
			m_pExternalsMap = pExternalsMap;
			m_pGraticuleProvider = pGraticuleProvider;

		}

		virtual void operator() ( osg::Object* pObject );

	protected:
		virtual ~SetGraticuleProviderOperation(){}

	private:
		ExternalsMap* m_pExternalsMap;
		GraticuleProvider* m_pGraticuleProvider;

	private:
	};

	class RemoveGraticuleProviderOperation : public osg::Operation
	{
	public:
		RemoveGraticuleProviderOperation( ExternalsMap* pExternalsMap )
		{
			m_pExternalsMap = pExternalsMap;
		}

		virtual void operator() ( osg::Object* pObject );

	protected:
		virtual ~RemoveGraticuleProviderOperation(){}

	private:
		ExternalsMap* m_pExternalsMap;

	};
}

#endif