#include "pessoaJuridica.h"

string pessoaJuridica::getcnpj(){
	return cnpj;
}

string pessoaJuridica::getrazaoSocial(){
	return razaoSocial;
}

string pessoaJuridica::getinscEstadual(){
	return inscEstadual;
}

void pessoaJuridica::setcnpj(string cnpj){
	this->cnpj = cnpj;
}

void pessoaJuridica::setrazaoSocial(string razaoSocial){
	this->razaoSocial = razaoSocial;
}

void pessoaJuridica::setinscEstadual(string inscEstadual){
	this->inscEstadual = inscEstadual;
}

void pessoaJuridica::imprimirDados(){
	Contatos::imprimirDados();
	cout << endl << "CNPJ: " << getcnpj() << endl << endl;
	cout << endl << "Inscri  o estadual: " << getinscEstadual() << endl << endl;
	cout << endl << "Raz o Social: " << getrazaoSocial() << endl << endl;
}
