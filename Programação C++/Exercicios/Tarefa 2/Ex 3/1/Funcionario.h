#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "Empresa.h"

class Funcionario : public Empresa
{
	private:
		string nome;
		float salario;
		string data_admissao;
		string departamento;
		Empresa empresa;
		
	public:
		string getNome();
		float getSalario();
		string getData_admissao();
		string getDepartamento();
		Empresa getEmpresa();
		
		void setNome(string nome);
		void setSalario(float salario);
		void setData_admissao(string data_admissao);
		void setDepartamento(string departamento);
		void setEmpresa(Empresa empresa);


		
		Funcionario();
		~Funcionario();
	protected:
};

#endif
