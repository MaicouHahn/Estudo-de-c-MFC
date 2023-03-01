#pragma once
#include "afxdialogex.h"
#include "iostream"


// Cadastro dialog

class Cadastro : public CDialogEx
{
	DECLARE_DYNAMIC(Cadastro)

public:
	Cadastro(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Cadastro();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CADASTRO };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CString Nome;
	CString Email;
	int Idade;
	CString nOmE;
	CString eMaIL;
	int iDaDe;

	CString CpfText;
	CString Endereco;
};
