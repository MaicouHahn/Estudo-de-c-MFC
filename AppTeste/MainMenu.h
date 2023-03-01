#pragma once
#include "afxdialogex.h"


// MainMenu dialog

class MainMenu : public CDialogEx
{
	DECLARE_DYNAMIC(MainMenu)

public:
	MainMenu(CWnd* pParent = nullptr);   // standard constructor
	virtual ~MainMenu();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MainMenu };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCadastroNovo();
	afx_msg void OnCalcularCalcular();
};
