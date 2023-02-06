#include "Gerente.h"

Gerente::Gerente()
{
	cargo = "gerente";
}

Gerente::~Gerente()
{
}

Gerente::Gerente(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo):Funcionario( nome,  salario,  data_admissao,  departamento,  empresa) {
	
}

string Gerente::getCargo(){
	Funcionario::getCargo();
	return cargo;
}

void Gerente:: imprime(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo){
	cout << cargo << ": ";
	Funcionario:: imprime(nome, salario, data_admissao, departamento, empresa);
}


