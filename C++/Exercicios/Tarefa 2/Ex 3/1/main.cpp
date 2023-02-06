#include "Funcionario.h"
#include <iostream>

using namespace std;

void limpa();

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	int quantidade;
	cout << "Digite a quantidade de trabalhadores que deseja cadastrar: ";
	cin >> quantidade;
	cout << endl;
	limpa();
	Funcionario funcionarios[quantidade];
	
	Empresa empresaCadastrada;
	cout << "Digite o nome da empresa: "; 
	string nome;
	getline(cin, nome);
	limpa();
	empresaCadastrada.setNomeE(nome);
	
	cout << "Digite o cnpj da empresa: "; 
	int cnpj;
	cin >> cnpj;
	limpa();
	empresaCadastrada.setCnpj(cnpj);
	
	float salario;
	string data_admissao;
	string departamento;
		
	for(int i = 0; i < quantidade; i++){
		cout << "Cadastrar pessoa " << i+1 << ": ";
		cout << "Nome: ";
		getline(cin, nome);
	    limpa();
	    funcionarios[i].setNome(nome);
	    
	    cout << "Salário: ";
		cin >> salario;
	    limpa();
	    funcionarios[i].setSalario(salario);
	    
	    cout << "Data de adimissão (xx/xx/xxxx): ";
		getline(cin, data_admissao);
	    limpa();
	    funcionarios[i].setData_admissao(data_admissao);
	    
	    
	    cout << "Departamento: ";
		getline(cin, departamento);
	    limpa();
	    funcionarios[i].setDepartamento(departamento);
	    
	    funcionarios[i].setEmpresa(empresaCadastrada);
	}
	
	cout << "Digite o departamento que deseja dar um aumento: ";
	string departamentoAumento;
	getline(cin, departamentoAumento);
	limpa();
	
	for(int i = 0; i < quantidade; i++){
		departamento = funcionarios[i].getDepartamento();
		if(departamento == departamentoAumento)	{
			salario = funcionarios[i].getSalario();
			salario += salario *0.10;
			funcionarios[i].setSalario(salario);
			cout << funcionarios[i].getNome() << "\t" << funcionarios[i].getSalario();
		}	
	}
	
	
	return 0;
}

void limpa(){
	cin.clear();
	fflush(stdin);
}
