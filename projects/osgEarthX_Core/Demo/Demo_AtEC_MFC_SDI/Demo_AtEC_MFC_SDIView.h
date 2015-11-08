
// Demo_AtEC_MFC_SDIView.h : CDemo_AtEC_MFC_SDIView 类的接口
//

#pragma once

//AT_Earth_Core
#include <Map/Map.h>
#include <Viewer/MapViewer.h>

class CDemo_AtEC_MFC_SDIView : public CView
{
private:
	osg::ref_ptr<AtEarthCore::Map> m_refMap;
	osg::ref_ptr<AtEarthCore::MapViewer> m_refMapViewer;

protected: // 仅从序列化创建
	CDemo_AtEC_MFC_SDIView();
	DECLARE_DYNCREATE(CDemo_AtEC_MFC_SDIView)

// 特性
public:
	CDemo_AtEC_MFC_SDIDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CDemo_AtEC_MFC_SDIView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
	afx_msg void OnExternalsGraticule();
	afx_msg void OnExternalsSky();
};

#ifndef _DEBUG  // Demo_AtEC_MFC_SDIView.cpp 中的调试版本
inline CDemo_AtEC_MFC_SDIDoc* CDemo_AtEC_MFC_SDIView::GetDocument() const
   { return reinterpret_cast<CDemo_AtEC_MFC_SDIDoc*>(m_pDocument); }
#endif

