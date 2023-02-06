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
	cout << "\tInformações Aluno:" << endl << endl;
	cout << "Nome: " << nome << endl << "Matrícula: " << matricula << endl << "Cpf: " << cpf << endl<< "Data de Nascimento: " << data_nascimento << endl << "Sexo: " << sexo << endl;
	switch(bolsista){
		case 1:
			cout << "Bolsista: Sim";
			break;
		case 2:
			cout << "Bolsista: Não";
			break;
		case 3:
			cout << "Bolsista: Em processo";
			break;
		default:
			cout << "Opção inválida";
			break;
	 } 
	cout << endl;
	cout << "Nota: " << nota;
}
