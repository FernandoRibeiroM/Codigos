#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H
#include "Contatos.h"

class pessoaFisica: public Contatos
{
	protected:
		string estadoCivil;
		string cpf;
		string dataNascimento;
		
		public:
			string getdataNascimento();
			string getestadoCivil();
			string getcpf();
			
			void setcpf(string cpf);
			void setdataNascimento(string dataNascimento);
			void setestadoCivil(string estadoCivil);
			void imprimirDados();
	
};

#endif
