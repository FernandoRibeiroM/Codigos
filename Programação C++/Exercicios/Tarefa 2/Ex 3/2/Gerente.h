#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.h"

class Gerente : public Funcionario
{
	private:
		string cargo;
	public:
		Gerente();
		~Gerente();
		Gerente(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo);
		
		string getCargo();
		
		void imprime(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo);
	protected:
		
};

#endif
