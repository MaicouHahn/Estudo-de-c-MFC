#pragma once
#include <string>
#include <iostream>

class Pessoa
{
private:
	CString id;
	CString nome;
	CString email;
	CString cpf;
	CString endereco;
	int idade;

public:
	Pessoa(){}
	Pessoa(CString id,CString nome, CString email,int idade,CString cpf,CString endereco) {
		this->id = id;
		this->nome = nome;
		this->email = email;
		this->idade = idade;
		this->cpf = cpf;
		this->endereco = endereco;
	
	}
	CString getId() {
		return this->id;
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


	void setId(CString id) {
		this->id = id;
	}
	void setNome(CString nome) {
		this->nome = nome;
	}
	void setCpf(CString cpf) {
		this->cpf = cpf;
	}
	void setEndereco(CString endereco) {
		this->endereco = endereco;
	}
	void setEmail(CString email) {
		this->email = email;
	}
	void setIdade(int idade) {
		this->idade = idade;
	}

};

