// CSpinMachineDlg.cpp: 구현 파일
//

#include "pch.h"
#include "CardMiniGame.h"
#include "afxdialogex.h"
#include "CSpinMachineDlg.h"


// CSpinMachineDlg 대화 상자

IMPLEMENT_DYNAMIC(CSpinMachineDlg, CDialogEx)

CSpinMachineDlg::CSpinMachineDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SPINMACHINE_DIALOG, pParent)
{

}

CSpinMachineDlg::~CSpinMachineDlg()
{
}

void CSpinMachineDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSpinMachineDlg, CDialogEx)
END_MESSAGE_MAP()


// CSpinMachineDlg 메시지 처리기
