#include "Funcionario.h"
#include "Gerente.h"
#include "Analista.h"
#include "Tecnico.h"

#include <iostream>

using namespace std;

void limpa(){
	cin.clear();
	fflush(stdin);
}

Empresa CadastroEmpresa(){
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
	return empresaCadastrada;
}

void CadastroPessoa(Funcionario *funcionario, Empresa empresa){
	string nome;
	float salario;
	string data_admissao;
	string departamento;

	cout << "Cadastrar pessoa " << ": " << endl;
	cout << "Nome: ";
	limpa();
	getline(cin, nome);
	cout << nome << endl;
	    
	cout << "Salário: ";
	cin >> salario;
	limpa();
	funcionario->setSalario(salario);
	    
	cout << "Data de adimissão (xx/xx/xxxx): ";
	getline(cin, data_admissao);
	limpa();
	funcionario->setData_admissao(data_admissao);
	   
	    
	cout << "Departamento: ";
	getline(cin, departamento);
	limpa();
	funcionario->setDepartamento(departamento);
	   
	funcionario->setEmpresa(empresa);
	
	}

void Cadastro(Funcionario *funcionario[100], Empresa empresa, int quantidade){
	int i, opcao;
	for(i = 0; i<quantidade;i++){
		do{
			cout << "Função:\t1- Gerente\t2- Analista\t3- Tecnico"<< endl;
			cin >> opcao;
			if(opcao > 3 && opcao < 1){
				cout<< "Opção inválida!";
			}
		}while(opcao > 3 && opcao < 1);
		switch(opcao){
			case 1:{
				Gerente *gerente = new Gerente();
				CadastroPessoa(gerente, empresa);
				funcionario[i] = gerente;
				cout << gerente->getCargo();
					cout << "AAAAAAAAAAA";
				break;
		};
			case 2:{
					Analista *analista = new Analista();
					CadastroPessoa(analista, empresa);
					funcionario[i] = analista;
					break;
			};
			case 3:{
					Tecnico *tecnico = new Tecnico();
					CadastroPessoa(tecnico, empresa);
					funcionario[i] = tecnico;
					break;
			};
		}
	}
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	int quantidade, i;
	cout << "Digite a quantidade de trabalhadores que deseja cadastrar: ";
	cin >> quantidade;
	cout << endl;
	limpa();
	Funcionario *funcionarios[100];
	
	Empresa empresaCadastrada = CadastroEmpresa();
	Cadastro(funcionarios, empresaCadastrada, quantidade);

	
	string cargo;
	float salario;
	for(int i = 0; i < quantidade; i++){
		cargo = funcionarios[i]->getCargo();
		if(cargo == "gerente")	{
			salario = funcionarios[i]->getSalario();
			salario += salario *0.15;
			funcionarios[i]->setSalario(salario);
			cout << funcionarios[i]->getNome() << "\t" << funcionarios[i]->getSalario();
		}	
	}
	
	for(i = 0;i< quantidade; i++){
		cout << "Dados Pessoa: " << endl << funcionarios[i]->getCargo();
		cout << funcionarios[i]->getNome() << endl << funcionarios[i]->getSalario() << endl <<funcionarios[i]->getData_admissao() << endl << funcionarios[i]->getDepartamento();
		cout << "Dados Empresa: " << endl << funcionarios[i]->getNomeE() << endl << funcionarios[i]->getCnpj();
	}
	
	
	
	
	return 0;
}

