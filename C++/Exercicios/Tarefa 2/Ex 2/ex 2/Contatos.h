#ifndef CONTATOS_H
#define CONTATOS_H
#include<iostream>

using namespace std;

class Contatos
{
	protected:
		string nomeContato;
		string telefoneContato;
		
	public:
		string getNomeContato();
		string getTelefoneContato();
		
		void setNomeContato(string nomeContato);
		void setTelefoneContato(string telefoneContato);
	
};

#endif
