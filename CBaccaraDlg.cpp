// CBaccaraDlg.cpp: 구현 파일
//

#include "pch.h"
#include "CardMiniGame.h"
#include "afxdialogex.h"
#include "CBaccaraDlg.h"


// CBaccaraDlg 대화 상자

IMPLEMENT_DYNAMIC(CBaccaraDlg, CDialogEx)

CBaccaraDlg::CBaccaraDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_BACCARA_DIALOG, pParent)
{

}

CBaccaraDlg::~CBaccaraDlg()
{
}

void CBaccaraDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CBaccaraDlg, CDialogEx)
END_MESSAGE_MAP()


// CBaccaraDlg 메시지 처리기
