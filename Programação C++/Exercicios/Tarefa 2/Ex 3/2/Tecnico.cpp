#include "Tecnico.h"

Tecnico::Tecnico()
{
}

Tecnico::~Tecnico()
{
}

Tecnico::Tecnico(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo):Funcionario( nome,  salario,  data_admissao,  departamento,  empresa){	
}

string Tecnico::getCargo(){
	Funcionario::getCargo();
	return cargo;
}

void Tecnico:: imprime(string nome, float salario, string data_admissao, string departamento, Empresa empresa, string cargo){
	cout << cargo << ": ";
	Funcionario:: imprime(nome, salario, data_admissao, departamento, empresa);
}

