#pragma once
#include "afxdialogex.h"


// Calc dialog

class Calc : public CDialogEx
{
	DECLARE_DYNAMIC(Calc)

public:
	Calc(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Calc();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString numDisplay;
	CString numero1;
	CString numero2;
	char operador;
	double resultado;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButtonMulti();
	afx_msg void OnBnClickedButtonDiv();
	afx_msg void OnBnClickedButtonSub();
	afx_msg void OnBnClickedButtonAdicao();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButtonIgual();
	afx_msg void OnBnClickedButtonLimpar();
	afx_msg void OnBnClickedButtonLimpartudo();
	afx_msg void OnBnClickedButtonNegativo();
	afx_msg void OnBnClickedButtonDecimal();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedCancel();
};
