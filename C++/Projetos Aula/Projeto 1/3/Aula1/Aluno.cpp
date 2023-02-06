#include "Aluno.h"

Aluno::Aluno()
{
    nome = "";
	matricula = 0;
	cpf = 0;
	dataNasc = "01/01/1950";
	sexo = 'M';
	bolsista = 2;
}

Aluno::~Aluno()
{
}

string Aluno::getNome(){
	return nome;
}

int Aluno::getMatricula(){
	return matricula;
}

long Aluno::getCpf(){
	return cpf;
}

string Aluno::getDataNasc(){
	return dataNasc;
}

char Aluno::getSexo(){
	return sexo;
}

int Aluno::getBolsista(){
	return bolsista;	
}

Curso * Aluno::getCurso(){
	return curso;
}

void Aluno::getListDisciplinaCursada(DisciplinaCursada * listDisciplinaCursada[QUANT_DISC]){
	for(int i=0; i<QUANT_DISC; i++){
		listDisciplinaCursada[i] = this->listDisciplinaCursada[i];
	}
}
		
void Aluno::setNome(string nome){
	this->nome = nome;
}

void Aluno::setMatricula(int matricula){
	this->matricula = matricula;
}

void Aluno::setCpf(long cpf){
	this->cpf = cpf;
}

void Aluno::setDataNasc(string dataNasc){
	this->dataNasc = dataNasc;
}

void Aluno::setSexo(char sexo){
	
	switch(sexo){
		case 'M':
			this->sexo = 'M';
			break;
		case 'm':
			this->sexo = 'M';
			break;
		case 'F':
			this->sexo = 'F';
			break;
		case 'f':
			this->sexo = 'F';
			break;
		default:
			this->sexo = 'M';
			
	}
		
}

void Aluno::setBolsista(int bolsista){
	this->bolsista = (bolsista > 0 && bolsista < 4) ? bolsista : 2;
}

void Aluno::setCurso(Curso *curso){
	this->curso = curso;
}
void Aluno::setListDisciplinaCursada(DisciplinaCursada * listDisciplinaCursada[QUANT_DISC]){
	for(int i=0; i<QUANT_DISC; i++){
		this->listDisciplinaCursada[i] = listDisciplinaCursada[i];
	}
}

void Aluno::imprimirInformacoes(){
	
	cout << "Informações do Aluno:	" << endl << endl;
	cout << "Nome: " << nome << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "CPF: " << cpf << endl;
	cout << "Data de Nascimento: " << dataNasc << endl;
	cout << "Sexo: " << sexo << endl;
	
	switch(bolsista){
		case 1:
				cout << "Bolsista: Sim" << endl;
				break;
				
		case 2:
				cout << "Bolsista: Não" << endl;
				break;
		
		case 3: 
				cout << "Bolsista: Em processo" << endl;
				break;
				
		default:
				cout << "Opção invalida!" << endl;
		
	}
	
	cout << "Curso: " << curso->getNome() << endl;
	cout << "Disciplinas cursadas pelo aluno: " << endl;
	
	for (int i=0; i < QUANT_DISC; i++){
		listDisciplinaCursada[i]->imprimirInformacoes();
	}
	
}
