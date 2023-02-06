#ifndef CONTATOS_H
#define CONTATOS_H
#include <iostream>

using namespace std;

class Contatos
{
	protected:
		string nome;
		string endereco;
		string email;
		
	public:
		Contatos(string nome, string email, string endereco);
		
		string getnome();
		string getemail();
		string getendereco();
		
		void setnome(string nome);
		void setemail(string email);
		void setendereco(string endereco);
		virtual void imprimirDados();
		
		
	
};

#endif
