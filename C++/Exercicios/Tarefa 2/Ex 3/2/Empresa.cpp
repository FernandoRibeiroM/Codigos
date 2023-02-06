#include "Empresa.h"

Empresa::Empresa()
{
}

Empresa::~Empresa()
{
}

string Empresa:: getNomeE(){
	return nome;
}

int Empresa:: getCnpj(){
	return cnpj;
}
		
void Empresa:: setNomeE(string nome){
	this->nome = nome;	
}

void Empresa:: setCnpj(int cnpj){
	this->cnpj = cnpj;
}




