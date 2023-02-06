#include "Agenda.h"

Contatos* Agenda::getContatos(){
	return contatos;
}

void Agenda::setContatos(Contatos *contatos){
	this->contatos = contatos;
}
