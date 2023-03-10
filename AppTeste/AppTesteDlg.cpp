
// AppTesteDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "AppTeste.h"
#include "AppTesteDlg.h"
#include "afxdialogex.h"
#include "iostream"
#include "MainMenu.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CAppTesteDlg dialog



Login::Login(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_APPTESTE_DIALOG, pParent)
	, LoginText(_T("ADM"))
	, SenhaText(_T("123"))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Login::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, LoginTextField, LoginText);
	DDX_Text(pDX, SenhaTextField, SenhaText);
}

BEGIN_MESSAGE_MAP(Login, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_SOBRE_INFO, &Login::OnClickedInfo)
	ON_BN_CLICKED(IDOK, &Login::OnBnClickedOk)
	ON_EN_CHANGE(LoginTextField, &Login::OnEnChangeLogintextfield)
	ON_BN_CLICKED(IDCANCEL, &Login::OnBnClickedCancel)
END_MESSAGE_MAP()


// CAppTesteDlg message handlers

BOOL Login::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDM_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void Login::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void Login::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR Login::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}





void Login::OnClickedInfo()
{
	CAboutDlg about1;
	about1.DoModal();
}


void Login::OnBnClickedOk()
{
	

	try {

		UpdateData(TRUE);
		CString login = _T("ADM"),senha=_T("123");

		if (LoginText.Compare(login)==0 && SenhaText.Compare(senha)==0) {

			MessageBox(NULL,_T("Logado"),MB_OK);

			MainMenu menu;
			menu.DoModal();
			
		}
		else {
			MessageBox(NULL, _T("Erro!"), MB_ICONERROR);
		}

	}
	catch (const std::exception& e) 
	{
		TRACE(_T("Erro: %s", e.what()));
	}

}


void Login::OnEnChangeLogintextfield()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void Login::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnCancel();
}
