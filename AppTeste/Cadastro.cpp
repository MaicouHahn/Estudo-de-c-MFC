// Cadastro.cpp : implementation file
//

#include "pch.h"
#include "iomanip"
#include "iostream"
#include "AppTeste.h"
#include "afxdialogex.h"
#include "Cadastro.h"
#include "Pessoa.h"


// Cadastro dialog

IMPLEMENT_DYNAMIC(Cadastro, CDialogEx)

Cadastro::Cadastro(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CADASTRO, pParent)
	, Nome(_T(""))
	, Email(_T(""))
	, Idade(0)
	, CpfText(_T(""))
	, Endereco(_T(""))
{

}

Cadastro::~Cadastro()
{
}

void Cadastro::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);


	DDX_Text(pDX, NomeTextField, Nome);
	DDX_Text(pDX, EmailTextField, Email);
	DDX_Text(pDX, IdadeTextField, Idade);
	DDX_Text(pDX, CpfComMascara, CpfText);
	DDX_Text(pDX, EnderecoTextField, Endereco);
}


BEGIN_MESSAGE_MAP(Cadastro, CDialogEx)
	ON_BN_CLICKED(IDOK, &Cadastro::OnBnClickedOk)
END_MESSAGE_MAP()


// Cadastro message handlers


void Cadastro::OnBnClickedOk()
{
	UpdateData(TRUE);
	TRACE(_T("%s"),CpfText);
	Pessoa* p1 = new Pessoa(Nome,Email,Idade,CpfText,Endereco);
	TRACE(_T("\nNome: %s\nEmail: %s\nIdade: %d\nCPF: %s\nEndereco: %s\n"),p1->getNome(), p1->getEmail(), p1->getIdade(),p1->getCpf(),p1->getEndereco());
	UpdateData(FALSE);
}

