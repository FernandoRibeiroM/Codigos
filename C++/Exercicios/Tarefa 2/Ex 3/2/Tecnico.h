#ifndef TECNICO_H
#define TECNICO_H

#include "Funcionario.h"

class Tecnico : public Funcionario
{
	private:
		string cargo;
	public:
		Tecnico();
		~Tecnico();
		Tecnico(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo);
		
		string getCargo();
		void imprime(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo);

	protected:
};

#endif
