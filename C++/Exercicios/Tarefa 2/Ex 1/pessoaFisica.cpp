#include "pessoaFisica.h"

string pessoaFisica::getcpf(){
	return cpf;
}

string pessoaFisica::getdataNascimento(){
	return dataNascimento;
}

string pessoaFisica::getestadoCivil(){
	return estadoCivil;
}

void pessoaFisica::setcpf(string cpf){
	this->cpf = cpf;
}

void pessoaFisica::setdataNascimento(string dataNascimento){
	this->dataNascimento = dataNascimento;
}

void pessoaFisica::setestadoCivil(string estadoCivil){
	this->estadoCivil = estadoCivil;
}

void pessoaFisica::imprimirDados(){
	Contatos::imprimirDados();
	cout << endl << "CPF: " << getcpf() << endl << endl;
	cout << endl << "Data de nascimento: " << getdataNascimento() << endl << endl;
	cout << endl << "Estado civil: " << getestadoCivil() << endl << endl;
}
