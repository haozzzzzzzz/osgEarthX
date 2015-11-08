/**
	@brief Viewer template for Qt
	@author Hao Luo
	@date 2015/04/10
*/

#ifndef AT_EARTH_CORE_QT_VIEWER_T_H
#define AT_EARTH_CORE_QT_VIEWER_T_H 1

#include <Viewer/IThreadedViewer.h>
#include <Viewer/QtViewerBase.h>

#include <osgViewer/ViewerBase>

#include <QTimer>

namespace AtEarthCore
{
    template< class T >
	class QtViewerT : 
        public T,
		public QtViewerBase,
		public IThreadedViewer,
        public osgQt::GLWidget
    {
	public:
		QtViewerT( osgViewer::ViewerBase::ThreadingModel threadingModel = osgViewer::ViewerBase::AutomaticSelection )
		{
#if QT_VERSION >= 0x050000
			//// Qt5 is currently crashing and reporting "Cannot make QOpenGLContext current in a different thread" when the viewer is run multi-threaded, this is regression from Qt4
            threadingModel = osgViewer::ViewerBase::SingleThreaded;
#endif
            T::setThreadingModel( threadingModel );
		}

		virtual void show()
		{
			start();
		}

		virtual int start()
		{
			connect( & m_Timer, SIGNAL( timeout() ), this, SLOT( update() ) );
			m_Timer.start( 10 );
			osgQt::GLWidget::show();
			return 0;
		}

        virtual void paintEvent( QPaintEvent* )
		{
            if ( T::getRunFrameScheme() == osgViewer::ViewerBase::CONTINUOUS || T::checkNeedToDoFrame() )
            {
                T::frame();
            }
		}

		virtual ~QtViewerT()
		{
			m_Timer.stop();
		}

	protected:
		QTimer m_Timer;

	private:
	};
}

#endif
