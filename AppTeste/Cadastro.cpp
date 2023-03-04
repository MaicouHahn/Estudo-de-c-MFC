// Cadastro.cpp : implementation file
//

#include "pch.h"
#include "iomanip"
#include "iostream"
#include "AppTeste.h"
#include "afxdialogex.h"
#include "afxcmn.h"
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
	, p1()
	, IdText(_T(""))
	, EditNome(_T(""))
	, EditID(_T(""))
	, EditEmail(_T(""))
	, EditIdade(0)
	, EditCpf(_T(""))
	, EditEndereco(_T(""))
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
	DDX_Text(pDX, ID_TEXT, IdText);
	DDX_Text(pDX, NomeTextField2, EditNome);
	DDX_Text(pDX, ID_TEXT2, EditID);
	DDX_Text(pDX, EmailTextField2, EditEmail);
	DDX_Text(pDX, IdadeTextField2, EditIdade);
	DDX_Text(pDX, CpfComMascara2, EditCpf);
	DDX_Text(pDX, EnderecoTextField2, EditEndereco);
}


BEGIN_MESSAGE_MAP(Cadastro, CDialogEx)
	ON_BN_CLICKED(BT_CADASTRAR, &Cadastro::OnBnClickedCadastrar)
	ON_BN_CLICKED(IDC_BUTTON1, &Cadastro::OnBnClickedButton1)
	ON_BN_CLICKED(ID_PROCURAR, &Cadastro::OnBnClickedEditarCadastro)
END_MESSAGE_MAP()


// Cadastro message handlers


void Cadastro::OnBnClickedCadastrar()
{
	UpdateData(TRUE);
	TRACE(_T("%s"), CpfText);
	p1 = new Pessoa(IdText, Nome, Email, Idade, CpfText, Endereco);
	ListaDePessoas.Add(*p1);
	TRACE(_T("\nNome: %s\nEmail: %s\nIdade: %d\nCPF: %s\nEndereco: %s\n"), p1->getNome(), p1->getEmail(), p1->getIdade(), p1->getCpf(), p1->getEndereco());
	UpdateData(FALSE);
}


void Cadastro::OnBnClickedButton1()
{	
	for (int i = 0;i < ListaDePessoas.GetSize();i++) {
		TRACE(_T("\nId: %s\nNome: %s\nEmail: %s\nIdade: %d\nCPF: %s\nEndereco: %s\n"), ListaDePessoas.GetAt(i).getId(),
																					   ListaDePessoas.GetAt(i).getNome(), 
																					   ListaDePessoas.GetAt(i).getEmail(), 
			                                                                           ListaDePessoas.GetAt(i).getIdade(),
			                                                                           ListaDePessoas.GetAt(i).getCpf(), 
	                                                                                   ListaDePessoas.GetAt(i).getEndereco());
	}
}


void Cadastro::OnBnClickedEditarCadastro()
{
	
	bool encontrou = false;
	Pessoa *p2;

	for (int i = 0;i < ListaDePessoas.GetSize();i++) {

		if (ListaDePessoas.GetAt(i).getId()== EditID) {
			p2 = new Pessoa(ListaDePessoas.GetAt(i).getId(), 
							ListaDePessoas.GetAt(i).getNome(), 
							ListaDePessoas.GetAt(i).getEmail(), 
							ListaDePessoas.GetAt(i).getIdade(),
							ListaDePessoas.GetAt(i).getCpf(),
							ListaDePessoas.GetAt(i).getEndereco());
			
			EditNome = p2->getNome();
			EditEmail = p2->getEmail();
			EditIdade = p2->getIdade();
			EditCpf = p2->getCpf();
			EditEndereco = p2->getEndereco();
			TRACE(_T("CPF: %s"), p2->getCpf());
			encontrou = true;
			UpdateData(FALSE);
		}
		else {
			encontrou = false;
		}

		if (encontrou) {
			MessageBox(NULL, _T("Usuario Encontrado"), MB_OK);
		}
		else {
			if (ListaDePessoas.IsEmpty()==true) {
				MessageBox(NULL, _T("Usuario nao Encontrado"), MB_ICONWARNING);
			}
			MessageBox(NULL, _T("Usuario nao Encontrado"), MB_ICONWARNING);
		}
	}

}
