
// project33View.h: Cproject33View 클래스의 인터페이스
//

#pragma once


class Cproject33View : public CFormView
{
protected: // serialization에서만 만들어집니다.
	Cproject33View();
	DECLARE_DYNCREATE(Cproject33View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_PROJECT33_FORM };
#endif

// 특성입니다.
public:
	Cproject33Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	virtual void OnInitialUpdate(); // 생성 후 처음 호출되었습니다.
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~Cproject33View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // project33View.cpp의 디버그 버전
inline Cproject33Doc* Cproject33View::GetDocument() const
   { return reinterpret_cast<Cproject33Doc*>(m_pDocument); }
#endif

