/**
	@brief 由ModelLayer构成的Map
	@author Hao Luo
	@date 2015/01/07
*/

#ifndef OSGEARTHX_CORE_MODEL_LAYER_MAP_H
#define OSGEARTHX_CORE_MODEL_LAYER_MAP_H 1

#include <osgEarthXCoreExport/Export.h>

#include <Map/BaseMap.h>
#include <ThreadPool/OrderHoldersContainer/OrderHoldersContainer.h>

#include <Provider/LayerProvider/ModelLayerTask.h>
namespace osgEarthXCore
{
	class ModelLayerTask;

	class OSGEARTHX_CORE_EXPORT ModelLayerMap:
		virtual public BaseMap
	{
	public:
	protected:
		osgXThreads::OrderHoldersContainer<ModelLayerProvider> m_ModelLayerProviders;

	public:
		ModelLayerMap();

		void addModelLayerProvider( ModelLayerProvider* pModelLayerProvider );
		void insertModelLayerProvider( ModelLayerProvider* pModelLayerProvider, unsigned int index );
		void removeModelLayerProvider( ModelLayerProvider* pModelLayerProvider );
		void removeModelLayerProvider( unsigned int index );
		void moveModelLayerProvider( ModelLayerProvider* pModelLayerProvider, unsigned int newIndex );
		void moveModelLayerProvider( unsigned int oldIndex, unsigned int newIndex );

		void addModelLayer( osgEarth::ModelLayer* pModelLayer, int insertIndex = -1 );
		void removeModelLayer( osgEarth::ModelLayer* pModelLayer );
		void moveModelLayer( osgEarth::ModelLayer* pModelLayer, unsigned int newIndex );

	protected:
		virtual ~ModelLayerMap();

	private:
		friend ModelLayerTask;
		void _addAndFixOrderOfModLyerProv( ModelLayerProvider* pLoadedModelLayerProvider );//内部不加锁

		void _addTaskOfModLyerProv( ModelLayerProvider* pModelLayerProvider );//内部不加锁

		void _insertModelLayerProvider( ModelLayerProvider* pModelLayerProvider, int index = -1 );//内部不加锁
		void _removeModelLayerProvider( ModelLayerProvider* pModelLayerProvider, int index = -1 );
	};

	/*
		对ModelLayerMap进行控制的各种Operations
	*/
	class AddModeLayerOperation : public osg::Operation
	{
	public:
		AddModeLayerOperation( ModelLayerMap* pModelLayerMap, osgEarth::ModelLayer* pModelLayer, int insertIndex = -1 )
		{
			m_pModelLayerMap = pModelLayerMap;
			m_pModelLayer = pModelLayer;
			m_iIndex = insertIndex;
		}

		virtual void operator() ( osg::Object* );

	protected:
		virtual ~ AddModeLayerOperation(){}

	private:
		ModelLayerMap* m_pModelLayerMap;
		osgEarth::ModelLayer* m_pModelLayer;
		int m_iIndex;

	};

	class RemoveModelLayerOperation : public osg::Operation
	{
	public:
		RemoveModelLayerOperation( ModelLayerMap* pModelLayerMap, osgEarth::ModelLayer* pModelLayer )
		{
			m_pModelLayerMap = pModelLayerMap;
			m_pModelLayer = pModelLayer;
		}

		virtual void operator() ( osg::Object* );

	protected:
		virtual ~RemoveModelLayerOperation(){}

	private:
		ModelLayerMap* m_pModelLayerMap;
		osgEarth::ModelLayer* m_pModelLayer;

	};

	class MoveModelLayerOperation : public osg::Operation
	{
	public:
		MoveModelLayerOperation( ModelLayerMap* pModelLayerMap, osgEarth::ModelLayer* pModelLayer, unsigned int newIndex )
		{
			m_pModelLayerMap = pModelLayerMap;
			m_pModelLayer = pModelLayer;
			m_uiIndex = newIndex;
		}

		virtual void operator() ( osg::Object* );

	protected:
		virtual ~MoveModelLayerOperation(){}

	private:
		ModelLayerMap* m_pModelLayerMap;
		osgEarth::ModelLayer* m_pModelLayer;
		unsigned int m_uiIndex;

	};

}

#endif