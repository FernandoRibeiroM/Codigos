#include "Funcionario.h"

Funcionario::Funcionario()
{
}

Funcionario::~Funcionario()
{
}

Funcionario:: Funcionario(string nome, float salario, string data_admissao, string departamento, Empresa empresa){
	setNome(nome);
	setSalario( salario);
	setData_admissao( data_admissao);
	setDepartamento( departamento);
	setEmpresa( empresa);
}

string Funcionario:: getNome(){
	return nome;
}

float Funcionario::  getSalario(){
	return salario;
}

string Funcionario:: getData_admissao(){
	return data_admissao;
}

string Funcionario:: getDepartamento(){
	return departamento;
}

Empresa Funcionario:: getEmpresa(){
	return empresa;
}

string Funcionario::getCargo(){
}

void Funcionario:: setNome(string nome){
	this->nome = nome;
}

void Funcionario:: setSalario(float salario){
	this->salario = salario;
}

void Funcionario:: setData_admissao(string data_admissao){
	this->data_admissao = data_admissao;
}

void Funcionario:: setDepartamento(string departamento){
	this->departamento = departamento;
}

void Funcionario:: setEmpresa(Empresa empresa){
	this->empresa = empresa;
}

virtual void Funcionario:: imprime(string nome, float salario, string data_admissao, string departamento, Empresa empresa){
	cout << nome << endl << "Salário: " << salario << endl << "Data de admissão: " << data_admissao << endl << empresa.getNomeE() << ednl << "Cnpj: " << empresa.getCnpj();
}





