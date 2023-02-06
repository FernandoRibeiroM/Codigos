#include "Disciplina.h"

Disciplina::Disciplina()
{
}

Disciplina::~Disciplina()
{
}

string Disciplina::getNome(){
	return nome;
}

int Disciplina::getCargaHoraria(){
	return cargaHoraria;
}

int Disciplina::getCreditos(){
	return creditos;
}
		
void Disciplina::setNome(string nome){
	this->nome = nome;
}

void Disciplina::setCargaHoraria(int cargaHoraria){
	this->cargaHoraria = (cargaHoraria == 54 || cargaHoraria == 72 || cargaHoraria == 90) ? cargaHoraria : 54;
	
	switch(this->cargaHoraria){
		case 54:
			this->creditos = 3;
			break;
		case 72:
			this->creditos = 4;
			break;
		case 90:
			this->creditos = 5;
			break;
	}
	
}

void Disciplina::imprimirInformacoes(){
	
	cout << "Nome: " << nome << endl;
	cout << "Carga Horaria: " << cargaHoraria << endl;
	cout << "Creditos: " << creditos << endl;
	
}

