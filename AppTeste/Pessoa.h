#pragma once
#include <string>
#include <iostream>

class Pessoa
{
private:
	CString nome;
	CString email;
	CString cpf;
	CString endereco;
	int idade;

public:
	Pessoa(CString nome, CString email,int idade,CString cpf,CString endereco) {
		this->nome = nome;
		this->email = email;
		this->idade = idade;
		this->cpf = cpf;
		this->endereco = endereco;
	
	}
	CString getEndereco() {
		return this->endereco;
	}
	CString getCpf() {
		return this->cpf;
	}
	CString getNome() {
		return this->nome;
	}
	CString getEmail() {
		return this->email;
	}
	int getIdade() {
		return this->idade;
	}
};

