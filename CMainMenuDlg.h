#pragma once
#include "afxdialogex.h"


// CMainMenuDlg 대화 상자

class CMainMenuDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CMainMenuDlg)

public:
	CMainMenuDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CMainMenuDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MainMenu_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CButton m_btnBaccarat;
	CButton m_btnPoker;
	CButton m_btnSettings;
	CButton m_btnSpinMachine;
	int m_wallet;
	afx_msg void OnClickedButtonBaccara();
	afx_msg void OnClickedButtonPoker();
	afx_msg void OnClickedButtonSpinmachine();
	afx_msg void OnClickedButtonSetting();
};
