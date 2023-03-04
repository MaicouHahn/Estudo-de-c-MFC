#pragma once
#include "afxdialogex.h"
#include <afxtempl.h>
#include "Pessoa.h"
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
	CArray<Pessoa, Pessoa&>ListaDePessoas;
	CString Nome;
	CString Email;
	int Idade;
	Pessoa *p1;
	CString Endereco;
	CString IdText;
	afx_msg void OnBnClickedCadastrar();
	CString EditNome;
	CString EditID;
	CString EditEmail;
	int EditIdade;
	CString EditEndereco;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedEditarCadastro();
	CString EditCpf;
	CString CpfText;
	afx_msg void OnBnClickedButtonEditar();
};
