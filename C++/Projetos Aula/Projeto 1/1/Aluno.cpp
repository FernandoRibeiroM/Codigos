#include "Aluno.h"

Aluno::Aluno()
{
	nome = ""; 
	data_nascimento = "01/01/2001";
	matricula = 1;
	cpf = 1;
	sexo = 'M';
	bolsista = 2;
	nota = 0;
}

Aluno::~Aluno()
{
}

void Aluno::Imprimir_Informacoes_Aluno(){
	cout << "\tInforma��es Aluno:" << endl << endl;
	cout << "Nome: " << nome << endl << "Matr�cula: " << matricula << endl << "Cpf: " << cpf << endl<< "Data de Nascimento: " << data_nascimento << endl << "Sexo: " << sexo << endl;
	switch(bolsista){
		case 1:
			cout << "Bolsista: Sim";
			break;
		case 2:
			cout << "Bolsista: N�o";
			break;
		case 3:
			cout << "Bolsista: Em processo";
			break;
		default:
			cout << "Op��o inv�lida";
			break;
	 } 
	cout << endl;
	cout << "Nota: " << nota;
}
