
// Demo_AtE_MFC_SDIView.h : CDemo_AtE_MFC_SDIView 类的接口
//

#pragma once

//AT_Earth
#include <Earth/Earth.h>

class CDemo_AtE_MFC_SDIView : public CView
{
private:
	osg::ref_ptr<AtEarth::Earth> m_refEarth;

protected: // 仅从序列化创建
	CDemo_AtE_MFC_SDIView();
	DECLARE_DYNCREATE(CDemo_AtE_MFC_SDIView)

// 特性
public:
	CDemo_AtE_MFC_SDIDoc* GetDocument() const;

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
	virtual ~CDemo_AtE_MFC_SDIView();
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
};

#ifndef _DEBUG  // Demo_AtE_MFC_SDIView.cpp 中的调试版本
inline CDemo_AtE_MFC_SDIDoc* CDemo_AtE_MFC_SDIView::GetDocument() const
   { return reinterpret_cast<CDemo_AtE_MFC_SDIDoc*>(m_pDocument); }
#endif

