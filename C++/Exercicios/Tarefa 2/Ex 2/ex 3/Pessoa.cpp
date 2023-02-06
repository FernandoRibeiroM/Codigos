#include "Pessoa.h"

string Pessoa::getNomePessoa(){
	return nomePessoa;
}

string Pessoa::getMatricula(){
	return matriula;
}

string Pessoa::getCpf(){
	return cpf;
}

string Pessoa::getTelefone(){
	return telefone;
}

void Pessoa::setNomePessoa(string nomePessoa){
	this->nomePessoa = nomePessoa;
}

void Pessoa::setMatricula(string matriula){
	this->matriula = matriula;
}

void Pessoa::setCpf(string cpf){
	this->cpf = cpf;
}

void Pessoa::setTelefone(string telefone){
	this->telefone = telefone;
}

void Pessoa::imprimePessoa(vector<Pessoa*> listCadastro){
	cout << "********Cadastro********" << endl;
	for(vector<Pessoa*>::iterator it = listCadastro.begin(); it != listCadastro.end(); it++){
		
		cout << "Nome: " << (*it)->getNomePessoa() << endl;
		cout << "Cpf: " << (*it)->getCpf() << endl;
		cout << "Telefone: " << (*it)->getTelefone() << endl;
		cout << "Matricula: " << (*it)->getMatricula() << endl << endl;
	}
}
