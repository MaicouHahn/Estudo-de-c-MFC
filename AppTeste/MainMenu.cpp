// MainMenu.cpp : implementation file
//

#include "pch.h"
#include "AppTeste.h"
#include "afxdialogex.h"
#include "MainMenu.h"
#include "iostream"
#include "Cadastro.h"
#include "Calc.h"


// MainMenu dialog

IMPLEMENT_DYNAMIC(MainMenu, CDialogEx)

MainMenu::MainMenu(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MainMenu, pParent)
{

}

MainMenu::~MainMenu()
{
}

void MainMenu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MainMenu, CDialogEx)
	ON_COMMAND(ID_CADASTRO_NOVO, &MainMenu::OnCadastroNovo)
	ON_COMMAND(ID_CALCULADORA_CALCULAR, &MainMenu::OnCalcularCalcular)
END_MESSAGE_MAP()


// MainMenu message handlers


void MainMenu::OnCadastroNovo()
{
	try {

		Cadastro cd1;
		cd1.DoModal();
	}
	catch (const std::exception& e)
	{
		TRACE(_T("Erro: %s", e.what()));
	}

}


void MainMenu::OnCalcularCalcular()
{
	Calc c1;
	c1.DoModal();

}
