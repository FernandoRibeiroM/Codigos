#include "Curso.h"

Curso::Curso()
{
	for(int i=0; i< QUANT_DISC; i++){
		listDisciplina[i] = NULL;
	}
}

Curso::~Curso()
{
}

string Curso::getNome(){
	return nome;
}

int Curso::getDuracao(){
	return duracao;
}

char Curso::getTurno(){
	return turno;
}

void Curso::getListDisciplina(Disciplina *listDisciplina[QUANT_DISC]){
	for(int i=0; i< QUANT_DISC; i++){
		listDisciplina[i] = this->listDisciplina[i];
	}
}
	
void Curso::setNome(string nome){
	this->nome = nome;
}

void Curso::setDuracao(int duracao){
	this->duracao = (duracao > 0 && duracao < 4) ? duracao : 1;
}
void Curso::setTurno(char turno){
	switch(turno){
		case 'M':
			this->turno = 'M';
			break;
		case 'm':
			this->turno = 'M';
			break;
		case 'N':
			this->turno = 'N';
			break;
		case 'n':
			this->turno = 'N';
			break;
		case 'V':
			this->turno = 'V';
			break;
		case 'v':
			this->turno = 'V';
			break;
		default:
			this->turno = 'M';
	}
}

void Curso::setListDisciplina(Disciplina *listDisciplina[QUANT_DISC]){
	for(int i=0; i<QUANT_DISC; i++){
		this->listDisciplina[i] = listDisciplina[i];
	}
}

void Curso::imprimirInformacoes(){
	
	cout << "Nome: " << nome << endl;
	cout << "Duração: " << duracao << endl;
	cout << "Turno: " << turno << endl;
	cout << "Disciplinas do curso: " << endl;
	
	for(int i=0; i < QUANT_DISC; i++){
		Disciplina *disc = listDisciplina[i];
		disc->imprimirInformacoes();
		cout << endl;
	}
		
}
