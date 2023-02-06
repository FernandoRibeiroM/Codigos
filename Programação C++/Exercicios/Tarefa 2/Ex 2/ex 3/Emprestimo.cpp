#include "Emprestimo.h"
#include "Emprestimo.h"

string Emprestimo::getDataEmprestimo(){
	return dataEmprestimo;
}

string Emprestimo::getDataDevolucao(){
	return dataDevolucao;
}

Livro* Emprestimo::getEmprestado(){
	return emprestado;
}

Pessoa* Emprestimo::getCadastrada(){
	return cadastrada;
}

void Emprestimo::setDataEmprestimo(string dataEmprestimo){
	this->dataEmprestimo = dataEmprestimo;
}

void Emprestimo::setDataDevolucao(string dataDevolucao){
	this->dataDevolucao = dataDevolucao;
}

void Emprestimo::setEmprestado(Livro *emprestado){
	this->emprestado = emprestado;
}

void Emprestimo::setCadastrada(Pessoa *cadastrada){
	this->cadastrada = cadastrada;
}
