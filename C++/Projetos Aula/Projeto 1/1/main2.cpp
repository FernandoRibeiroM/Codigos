#include <iostream>
#include <locale>

#include "Aluno.h"

using namespace std;

void limpar_buffer();

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	int N_alunos;
	int i;
	
	cout << "\n\tCadastro de aluno" << endl << endl;
	cout << "Digite a quantidade de alunos: ";
	cin >> N_alunos;
	cout << endl;
	limpar_buffer();
	
	Aluno *Lista_alunos[N_alunos];
	for( i = 0; i < N_alunos; i++){
		Lista_alunos[i] = NULL;		
	}	

	
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	for( i = 0; i < N_alunos; i++){		
	
	Aluno *aluno = new Aluno();
	cout << "Digite o Nome do aluno: "; 
	getline(cin, aluno->nome);
	limpar_buffer();
	cout << endl;
	
	do{
		cout << "Digite a matrícula: ";
		cin >> aluno->matricula;
		cout << endl;
		limpar_buffer();
		if(aluno->matricula < 0){
			cout << "Valor inválido, digite novamente\n";
		}
	}while(aluno->matricula < 0);

	cout << "Digite o CPF do aluno: ";
	cin >> aluno->cpf;
	cout << endl;
	limpar_buffer();

	
	cout << "Digite a data de nascimento do aluno : ";
	cin >> aluno->data_nascimento;
	cout << endl;
	limpar_buffer();

	
	cout << "Digite o sexo do aluno (H - Homem ou M - mulher): ";
	cin >> aluno->sexo;
	cout << endl;
	limpar_buffer();

	
	cout << "Digite se o aluno é bolsista (1- sim ou 2- não ou 3- Em precesso): ";
	cin >> aluno->bolsista;
	cout << endl;
	limpar_buffer();
		
	cout << "Digite a nota do aluno: ";
	cin >> aluno->nota;
	cout << endl;
	limpar_buffer();
	
	Lista_alunos[i] = aluno;
	system ("pause > nul");
	system ("cls");
	
	cout << endl;

	}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	for( i = 0; i < N_alunos; i++){
		Aluno *aluno = 	Lista_alunos[i];
		aluno->Imprimir_Informacoes_Aluno();
	}
	
	for( i = 0; i < N_alunos; i++){
		delete Lista_alunos[i];
	}
		
	
	return 0;
}

void limpar_buffer(){
	cin.clear();
	fflush(stdin);
}

