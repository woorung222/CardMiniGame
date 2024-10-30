// CPokerDlg.cpp: 구현 파일
//

#include "pch.h"
#include "CardMiniGame.h"
#include "afxdialogex.h"
#include "CPokerDlg.h"


// CPokerDlg 대화 상자

IMPLEMENT_DYNAMIC(CPokerDlg, CDialogEx)

CPokerDlg::CPokerDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_POKER_DIALOG, pParent)
{

}

CPokerDlg::~CPokerDlg()
{
}

void CPokerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPokerDlg, CDialogEx)
END_MESSAGE_MAP()


// CPokerDlg 메시지 처리기
