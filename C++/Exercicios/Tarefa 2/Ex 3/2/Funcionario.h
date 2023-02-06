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
		virtual string getCargo() = 0;
		
		void setNome(string nome);
		void setSalario(float salario);
		void setData_admissao(string data_admissao);
		void setDepartamento(string departamento);
		void setEmpresa(Empresa empresa);
		
		Funcionario();
		Funcionario(string nome, float salario, string data_admissao, string departamento, Empresa empresa);
		~Funcionario();
		
		virtual void imprime(string nome, float salario, string data_admissao, string departamento, Empresa empresa) = 0;
		
	protected:
		


		
};

#endif
