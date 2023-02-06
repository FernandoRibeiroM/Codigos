#include "DisciplinaCursada.h"

DisciplinaCursada::DisciplinaCursada()
{
		disc = NULL;
}

DisciplinaCursada::~DisciplinaCursada()
{
}

disciplina * DisciplinaCursada:: getDisc(){
	return disc;
}

float DisciplinaCursada:: getNota(){
	return nota;
}

float DisciplinaCursada:: getFrequencia(){
	return frequencia;
}
		
void DisciplinaCursada:: setDisc(disciplina *disc){
	this->disc = disc;
}

void DisciplinaCursada:: setNota(float nota){
	this->nota = (nota >= 0 && nota <= 100) ? nota : 0;
}

void DisciplinaCursada:: setFrequencia(float frequencia){
	this->frequencia = (frequencia >= 0 && frequencia <= 100) ? frequencia : 0;
}

string DisciplinaCursada:: situacaoDisciplina(){
	if(frequencia < 75){
		return "Aluno Reprovado!";
	}
	else if(nota>=60){
		return "Aluno Aprovado!";
	}
	else if(nota >= 40){
		return "Aluno em exame!";
	}
	else{
		return "Aluno Reprovado!";
	}
}


void DisciplinaCursada::imprimirInformacoes(){
	disc->imprimirInformacoes();
	cout << "Nota:" << nota << endl << "Frequencia: " << frequencia << endl;
	cout << "Situação Aluno: " << situacaoDisciplina() << endl;
}

