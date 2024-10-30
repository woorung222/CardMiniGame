#pragma once
#include "afxdialogex.h"


// CBaccaraDlg 대화 상자

class CBaccaraDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CBaccaraDlg)

public:
	CBaccaraDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CBaccaraDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BACCARA_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
