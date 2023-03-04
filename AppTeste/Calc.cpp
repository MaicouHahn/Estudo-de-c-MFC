// Calc.cpp : implementation file
//

#include "pch.h"

#include "AppTeste.h"
#include "afxdialogex.h"
#include "Calc.h"


// Calc dialog

IMPLEMENT_DYNAMIC(Calc, CDialogEx)
Calc::Calc(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, numDisplay(_T(""))
	, numero1(_T("0.0"))
	, numero2(_T("0.0"))
	, operador(' ')
	, resultado(0.0)
	
{

}

Calc::~Calc()
{
}


void Calc::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, NumberDisplay, numDisplay);
}


BEGIN_MESSAGE_MAP(Calc, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Calc::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Calc::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Calc::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Calc::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &Calc::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &Calc::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &Calc::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &Calc::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &Calc::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON_MULTI, &Calc::OnBnClickedButtonMulti)
	ON_BN_CLICKED(IDC_BUTTON_DIV, &Calc::OnBnClickedButtonDiv)
	ON_BN_CLICKED(IDC_BUTTON_SUB, &Calc::OnBnClickedButtonSub)
	ON_BN_CLICKED(IDC_BUTTON_ADICAO, &Calc::OnBnClickedButtonAdicao)
	ON_BN_CLICKED(IDC_BUTTON12, &Calc::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON_IGUAL, &Calc::OnBnClickedButtonIgual)
	ON_BN_CLICKED(IDC_BUTTON_LIMPAR, &Calc::OnBnClickedButtonLimpar)
	ON_BN_CLICKED(IDC_BUTTON_LIMPARTUDO, &Calc::OnBnClickedButtonLimpartudo)
	ON_BN_CLICKED(IDC_BUTTON_NEGATIVO, &Calc::OnBnClickedButtonNegativo)
	ON_BN_CLICKED(IDC_BUTTON_DECIMAL, &Calc::OnBnClickedButtonDecimal)
	ON_BN_CLICKED(IDC_BUTTON13, &Calc::OnBnClickedButton13)
	ON_BN_CLICKED(IDCANCEL, &Calc::OnBnClickedCancel)
END_MESSAGE_MAP()


// Calc message handlers




void Calc::OnBnClickedButton1()
{	
	UpdateData(TRUE);
	CString number = numDisplay + "1";
	numDisplay = number;
	UpdateData(FALSE);
}


void Calc::OnBnClickedButton2()
{
	UpdateData(TRUE);
	CString number = numDisplay + "2";
	numDisplay = number;
	UpdateData(FALSE);
}


void Calc::OnBnClickedButton3()
{
	UpdateData(TRUE);
	CString number = numDisplay + "3";
	numDisplay = number;
	UpdateData(FALSE);
}


void Calc::OnBnClickedButton4()
{
	UpdateData(TRUE);
	CString number = numDisplay + "4";
	numDisplay = number;
	UpdateData(FALSE);
}


void Calc::OnBnClickedButton5()
{
	UpdateData(TRUE);
	CString number = numDisplay + "5";
	numDisplay = number;
	UpdateData(FALSE);
}


void Calc::OnBnClickedButton6()
{
	UpdateData(TRUE);
	CString number = numDisplay + "6";
	numDisplay = number;
	UpdateData(FALSE);
}


void Calc::OnBnClickedButton7()
{
	UpdateData(TRUE);
	CString number = numDisplay + "7";
	numDisplay = number;
	UpdateData(FALSE);
}


void Calc::OnBnClickedButton8()
{
	UpdateData(TRUE);
	CString number = numDisplay + "8";
	numDisplay = number;
	UpdateData(FALSE);
}


void Calc::OnBnClickedButton9()
{
	UpdateData(TRUE);
	CString number = numDisplay + "9";
	numDisplay = number;
	UpdateData(FALSE);
}


void Calc::OnBnClickedButtonMulti()
{
	UpdateData(TRUE);
	if (operador != ' ') {
		operador = '*';
	}
	else {
		operador = '*';
	}
	numero1 = numDisplay;
	numDisplay = _T("");
	UpdateData(FALSE);
	
}


void Calc::OnBnClickedButtonDiv()
{
	UpdateData(TRUE);
	if (operador != ' ') {
		operador = '/';
	}
	else {
		operador = '/';
	}
	numero1 = numDisplay;
	numDisplay = _T("");
	UpdateData(FALSE);
}


void Calc::OnBnClickedButtonSub()
{
	UpdateData(TRUE);
	if (operador != ' ') {
		operador = '-';
	}
	else {
		operador = '-';
	}

	numero1 = numDisplay;
	numDisplay = _T("");
	UpdateData(FALSE);
}


void Calc::OnBnClickedButtonAdicao()
{
	UpdateData(TRUE);
	if (operador != ' ') {
		operador = '+';
	}
	else {
		operador = '+';
	}
	numero1 = numDisplay;
	numDisplay = _T("");
	UpdateData(FALSE);

}


void Calc::OnBnClickedButton12()
{
	TRACE(numero1+_T("\n"));
	TRACE(numero2 + _T("\n"));
	TRACE(numDisplay);
}



void Calc::OnBnClickedButtonIgual()
{
	UpdateData(TRUE);

	numero2 = numDisplay;
	numDisplay = _T("");

	double num1 = _tstof(numero1);
	double num2 = _tstof(numero2);
	numero1 = _T("");
	numero2 = _T("");
	switch (operador) {
	case '+':
		resultado=num1 + num2;
		break;
	case'-':
		resultado = num1 - num2;
		break;
	case '/':
		resultado = num1 / num2;
		break;
	case'*':
		resultado = num1 * num2;
		break;

	}

	numDisplay.Format(_T("%.2f"), resultado);
	resultado = 0.0;
	UpdateData(FALSE);
}


void Calc::OnBnClickedButtonLimpar()
{
	UpdateData(TRUE);
	numDisplay= _T("");
	UpdateData(FALSE);
}


void Calc::OnBnClickedButtonLimpartudo()
{
	UpdateData(TRUE);
	numDisplay = _T("");
	numero1 = _T("");
	numero2 = _T("");
	resultado = 0;
	UpdateData(FALSE);
}


void Calc::OnBnClickedButtonNegativo()
{
	UpdateData(TRUE);
	double num = _tstof(numDisplay);
	num *= -1;
	numDisplay.Format(_T("%.2f"),num);
	UpdateData(FALSE);
}


void Calc::OnBnClickedButtonDecimal()
{
	UpdateData(TRUE);

	bool check = false;
	TRACE(numDisplay);
	for (int i = 0; i < numDisplay.GetLength(); i++)
	{
		TCHAR c = numDisplay.GetAt(i);
		if (c == '.') {
			check = true;
		}
		else {
		}
	}

	if (check == false) {
		numDisplay.AppendChar('.');
	}
	else {
	}
	UpdateData(FALSE);
}

void Calc::OnBnClickedButton13()
{
	UpdateData(TRUE);
	numDisplay.Append(_T("0"));
	UpdateData(FALSE);

}


void Calc::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnCancel();
}
