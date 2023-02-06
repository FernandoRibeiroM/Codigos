#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include "Contatos.h"

class pessoaJuridica: public Contatos
{
	protected:
		string inscEstadual;
		string razaoSocial;
		string cnpj;
		
	public:
		string getcnpj();
		string getrazaoSocial();
		string getinscEstadual();
		
		void imprimirDados();
		void setcnpj(string cnpj);
		void setrazaoSocial(string razaoSocial);
		void setinscEstadual(string inscEstadual);
};

#endif
