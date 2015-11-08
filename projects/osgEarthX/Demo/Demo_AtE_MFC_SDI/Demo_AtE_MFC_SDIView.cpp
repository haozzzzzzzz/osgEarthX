
// Demo_AtE_MFC_SDIView.cpp : CDemo_AtE_MFC_SDIView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Demo_AtE_MFC_SDI.h"
#endif

#include "Demo_AtE_MFC_SDIDoc.h"
#include "Demo_AtE_MFC_SDIView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include <Viewer/Win32ViewerT.h>

// CDemo_AtE_MFC_SDIView

IMPLEMENT_DYNCREATE(CDemo_AtE_MFC_SDIView, CView)

BEGIN_MESSAGE_MAP(CDemo_AtE_MFC_SDIView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDemo_AtE_MFC_SDIView 构造/析构

CDemo_AtE_MFC_SDIView::CDemo_AtE_MFC_SDIView()
{
	// TODO: 在此处添加构造代码
	m_refEarth = new AtEarth::Earth();
}

CDemo_AtE_MFC_SDIView::~CDemo_AtE_MFC_SDIView()
{
}

BOOL CDemo_AtE_MFC_SDIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDemo_AtE_MFC_SDIView 绘制

void CDemo_AtE_MFC_SDIView::OnDraw(CDC* /*pDC*/)
{
	CDemo_AtE_MFC_SDIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDemo_AtE_MFC_SDIView 打印

BOOL CDemo_AtE_MFC_SDIView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CDemo_AtE_MFC_SDIView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CDemo_AtE_MFC_SDIView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CDemo_AtE_MFC_SDIView 诊断

#ifdef _DEBUG
void CDemo_AtE_MFC_SDIView::AssertValid() const
{
	CView::AssertValid();
}

void CDemo_AtE_MFC_SDIView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDemo_AtE_MFC_SDIDoc* CDemo_AtE_MFC_SDIView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDemo_AtE_MFC_SDIDoc)));
	return (CDemo_AtE_MFC_SDIDoc*)m_pDocument;
}
#endif //_DEBUG


// CDemo_AtE_MFC_SDIView 消息处理程序


void CDemo_AtE_MFC_SDIView::OnInitialUpdate()
{
	CView::OnInitialUpdate();

	// TODO: 在此添加专用代码和/或调用基类
	AtEarthCore::Win32ViewerT< osgViewer::Viewer >* pViewerContext = new AtEarthCore::Win32ViewerT< osgViewer::Viewer >( true );
	pViewerContext->setCameraGraphicsWindow( pViewerContext->getCamera(), m_hWnd );
	m_refEarth->getEarthViewer()->setViewer( pViewerContext );
	m_refEarth->run();
}
