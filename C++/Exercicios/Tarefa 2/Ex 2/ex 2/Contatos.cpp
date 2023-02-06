#include "Contatos.h"

string Contatos::getNomeContato(){
	return nomeContato;
}

string Contatos::getTelefoneContato(){
	return telefoneContato;
}

void Contatos::setNomeContato(string nomeContato){
	this->nomeContato = nomeContato;
}

void Contatos::setTelefoneContato(string telefoneContato){
	this->telefoneContato = telefoneContato;
}
