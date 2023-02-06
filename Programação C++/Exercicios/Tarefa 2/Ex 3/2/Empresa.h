#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>

using namespace std;

class Empresa
{
	private:
		string nome;
		int cnpj;
	public:
		
		string getNomeE();
		int getCnpj();
		
		void setNomeE(string nome);
		void setCnpj(int cnpj);
		
		Empresa();
		~Empresa();
	protected:
};

#endif
