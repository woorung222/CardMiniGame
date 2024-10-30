﻿#pragma once
#include "afxdialogex.h"


// CSpinMachineDlg 대화 상자

class CSpinMachineDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSpinMachineDlg)

public:
	CSpinMachineDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CSpinMachineDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SPINMACHINE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
