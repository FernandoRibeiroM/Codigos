#include "Analista.h"

Analista::Analista()
{
}

Analista::~Analista()
{
}

Analista::Analista(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo):Funcionario( nome,  salario,  data_admissao,  departamento,  empresa) {
}

string Analista:: getCargo(){
	Funcionario::getCargo();
	return cargo;
}

void Analista:: imprime(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo){
	cout << cargo << ": ";
	Funcionario:: imprime(nome, salario, data_admissao, departamento, empresa);
}

