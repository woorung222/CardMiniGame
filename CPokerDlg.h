﻿#pragma once
#include "afxdialogex.h"


// CPokerDlg 대화 상자

class CPokerDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPokerDlg)

public:
	CPokerDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CPokerDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_POKER_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
