
// Demo_AtEC_MFC_SDIView.cpp : CDemo_AtEC_MFC_SDIView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Demo_AtEC_MFC_SDI.h"
#endif

#include "Demo_AtEC_MFC_SDIDoc.h"
#include "Demo_AtEC_MFC_SDIView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include <osgEarthDrivers/gdal/GDALOptions>

#include <osgViewer/Viewer>
#include <Viewer/Win32ViewerT.h>

// CDemo_AtEC_MFC_SDIView

IMPLEMENT_DYNCREATE(CDemo_AtEC_MFC_SDIView, CView)

BEGIN_MESSAGE_MAP(CDemo_AtEC_MFC_SDIView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_EXTERNALS_GRATICULE, &CDemo_AtEC_MFC_SDIView::OnExternalsGraticule)
	ON_COMMAND(ID_EXTERNALS_SKY, &CDemo_AtEC_MFC_SDIView::OnExternalsSky)
END_MESSAGE_MAP()

// CDemo_AtEC_MFC_SDIView 构造/析构

CDemo_AtEC_MFC_SDIView::CDemo_AtEC_MFC_SDIView()
{
	// TODO: 在此处添加构造代码
	m_refMap = new AtEarthCore::Map();
	m_refMapViewer = new AtEarthCore::MapViewer();

	m_refMap->setMaxThreadsNum( 10 );
	m_refMapViewer->setMap( m_refMap );

	AtEarthCore::ImageLayerProvider* pImageLayerProvider = new AtEarthCore::ImageLayerProvider();
	osgEarth::Drivers::GDALOptions gdal;
	gdal.url() = "E:\\OpenSceneGraph\\AtEarth\\environment\\data\\world.tif";
	pImageLayerProvider->setTileSource( gdal );
	m_refMap->addImageLayerProvider( pImageLayerProvider );
}

CDemo_AtEC_MFC_SDIView::~CDemo_AtEC_MFC_SDIView()
{
	m_refMapViewer = NULL;
	m_refMap = NULL;
}

BOOL CDemo_AtEC_MFC_SDIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDemo_AtEC_MFC_SDIView 绘制

void CDemo_AtEC_MFC_SDIView::OnDraw(CDC* /*pDC*/)
{
	CDemo_AtEC_MFC_SDIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDemo_AtEC_MFC_SDIView 打印

BOOL CDemo_AtEC_MFC_SDIView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CDemo_AtEC_MFC_SDIView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CDemo_AtEC_MFC_SDIView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CDemo_AtEC_MFC_SDIView 诊断

#ifdef _DEBUG
void CDemo_AtEC_MFC_SDIView::AssertValid() const
{
	CView::AssertValid();
}

void CDemo_AtEC_MFC_SDIView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDemo_AtEC_MFC_SDIDoc* CDemo_AtEC_MFC_SDIView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDemo_AtEC_MFC_SDIDoc)));
	return (CDemo_AtEC_MFC_SDIDoc*)m_pDocument;
}
#endif //_DEBUG


// CDemo_AtEC_MFC_SDIView 消息处理程序


void CDemo_AtEC_MFC_SDIView::OnInitialUpdate()
{
	CView::OnInitialUpdate();

	// TODO: 在此添加专用代码和/或调用基类
	AtEarthCore::Win32ViewerT< osgViewer::Viewer >* pViewer = new AtEarthCore::Win32ViewerT< osgViewer::Viewer >();
	pViewer->setCameraGraphicsWindow( pViewer->getCamera(), m_hWnd );
	m_refMapViewer->setViewer( pViewer );
	m_refMapViewer->run();
}


void CDemo_AtEC_MFC_SDIView::OnExternalsGraticule()
{
	// TODO: 在此添加命令处理程序代码
	m_refMap->setGraticuleProvider( new AtEarthCore::GraticuleProvider() );
}


void CDemo_AtEC_MFC_SDIView::OnExternalsSky()
{
	// TODO: 在此添加命令处理程序代码
	m_refMap->setSkyProvider( new AtEarthCore::SkyProvider() );
}
