#ifndef ANALISTA_H
#define ANALISTA_H

#include "Funcionario.h"

class Analista : public Funcionario
{
	private:
		string cargo;
	public:
		Analista();
		~Analista();
		Analista(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo);

		string getCargo();
		void imprime(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo);

	protected:
};

#endif
