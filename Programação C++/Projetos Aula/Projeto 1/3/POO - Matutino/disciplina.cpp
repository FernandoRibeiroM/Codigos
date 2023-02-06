#include "disciplina.h"

disciplina::disciplina()
{
}

disciplina::~disciplina()
{
}

string disciplina:: disciplina::getNome(){
	return nome;
}

int disciplina:: getCarga_horaria(){
	return carga_horaria;
}

int disciplina:: getCreditos(){
	return creditos;	
}
		
void disciplina:: setNome(string nome){
	this->nome = nome;
}

void disciplina::setCarga_horaria(int carga_horaria){
	this->carga_horaria = (carga_horaria == 54 || carga_horaria == 72 || carga_horaria == 90) ? carga_horaria: 54;
	switch(this->carga_horaria){
		case 54:
			this->creditos = 3;
			break;
		case 72:
			this->creditos = 4;
			break;
		case 90:
			this->creditos = 5;
	}
}
void  disciplina:: imprimirInformacoes(){
	cout << "Nome: " << nome << endl << "Carga Horária: " << carga_horaria << endl << "Creditos: " << creditos << endl;
}

