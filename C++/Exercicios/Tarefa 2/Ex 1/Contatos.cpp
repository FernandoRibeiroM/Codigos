#include "Contatos.h"

Contatos::Contatos(string nome, string email, string endereco)
{
	setnome(nome);
	setemail(email);
	setendereco(endereco);
}

string Contatos::getnome(){
	return nome;
}

string Contatos::getemail(){
	return email;
}

string Contatos::getendereco(){
	return endereco;
}

void Contatos::setnome(string nome){
		this->nome = nome;
}

void Contatos::setemail(string email){
		this->email = email;
}

void Contatos::setendereco(string endereco){
		this->endereco = endereco;
}

void Contatos::imprimirDados(){
	cout << endl << "Nome: " << getnome() << endl;
	cout << endl << "E-mail: " << getemail() << endl;
	cout << endl << "Endere o: " << getendereco() << endl;
}



