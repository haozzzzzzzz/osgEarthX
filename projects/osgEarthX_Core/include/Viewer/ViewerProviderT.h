/**
	@brief äÖÈ¾Æ÷Ä£°å
	@author Hao Luo
	@date 2014/11/03
*/

#ifndef OSGEARTHX_CORE_VIEWER_PROVIDER_T_H
#define OSGEARTHX_CORE_VIEWER_PROVIDER_T_H 1

#include <Viewer/IThreadedViewer.h>
#include <osg/ref_ptr>

namespace osgEarthXCore
{
	template < class T >
	class ViewerProviderT
	{
	public:
		ViewerProviderT( T* pViewer = NULL )
		{
			setViewer( pViewer );
		}

		virtual ~ ViewerProviderT()
		{
			m_refViewer = NULL;
		}

		T* getOrCreateViewer()
		{
			if ( m_refViewer.get() == NULL )
			{
				setViewer( new T() );
			}

			return m_refViewer;
		}

		void setViewer( T* pViewer )
		{
			m_refViewer = pViewer;
		}

		void run()
		{
			IThreadedViewer* pIThreadedViewer = dynamic_cast< IThreadedViewer* >( getOrCreateViewer() );

			if ( pIThreadedViewer != NULL )
			{
				pIThreadedViewer->start();
			}
			else
			{
				m_refViewer->run();
			}
		}

		void stop()
		{
			IThreadedViewer* pIThreadedViewer = dynamic_cast< IThreadedViewer* >( getOrCreateViewer() );

			if ( pIThreadedViewer != NULL )
			{
				pIThreadedViewer->stop();
			}
			else
			{
				m_refViewer->setDone( true );
			}
		}

	protected:
		osg::ref_ptr< T > m_refViewer;

	private:

	};
}

#endif