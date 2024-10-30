// CMainMenuDlg.cpp: 구현 파일
//

#include "pch.h"
#include "CardMiniGame.h"
#include "afxdialogex.h"
#include "CMainMenuDlg.h"
#include"CPokerDlg.h"
#include"CBaccaraDlg.h"
#include"CSettingDlg.h"
#include"CSpinMachineDlg.h"

// CMainMenuDlg 대화 상자

IMPLEMENT_DYNAMIC(CMainMenuDlg, CDialogEx)

CMainMenuDlg::CMainMenuDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MainMenu_DIALOG, pParent)
	, m_wallet(5000)
{

}

CMainMenuDlg::~CMainMenuDlg()
{
}

void CMainMenuDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_BACCARA, m_btnBaccarat);
	DDX_Control(pDX, IDC_BUTTON_POKER, m_btnPoker);
	DDX_Control(pDX, IDC_BUTTON_SETTING, m_btnSettings);
	DDX_Control(pDX, IDC_BUTTON_SPINMACHINE, m_btnSpinMachine);
	DDX_Text(pDX, IDC_EDIT_WALLET, m_wallet);
}


BEGIN_MESSAGE_MAP(CMainMenuDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_BACCARA, &CMainMenuDlg::OnClickedButtonBaccara)
	ON_BN_CLICKED(IDC_BUTTON_POKER, &CMainMenuDlg::OnClickedButtonPoker)
	ON_BN_CLICKED(IDC_BUTTON_SPINMACHINE, &CMainMenuDlg::OnClickedButtonSpinmachine)
	ON_BN_CLICKED(IDC_BUTTON_SETTING, &CMainMenuDlg::OnClickedButtonSetting)
END_MESSAGE_MAP()


// CMainMenuDlg 메시지 처리기


void CMainMenuDlg::OnClickedButtonBaccara()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EndDialog(IDOK);
	CBaccaraDlg baccaraDlg;
	baccaraDlg.DoModal();
}


void CMainMenuDlg::OnClickedButtonPoker()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EndDialog(IDOK);
	CPokerDlg pokerDlg;
	pokerDlg.DoModal();
}


void CMainMenuDlg::OnClickedButtonSpinmachine()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EndDialog(IDOK);
	CSpinMachineDlg spinDlg;
	spinDlg.DoModal();
}


void CMainMenuDlg::OnClickedButtonSetting()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EndDialog(IDOK);
	CSettingDlg setDlg;
	setDlg.DoModal();
}
