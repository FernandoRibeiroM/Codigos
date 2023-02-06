#include "Funcionario.h"

Funcionario::Funcionario()
{
}

Funcionario::~Funcionario()
{
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





