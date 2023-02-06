#include "Aluno.h"

Aluno::Aluno()
{
	nome = ""; 
	data_nascimento = "01/01/2001";
	matricula = 1;
	cpf = 1;
	sexo = 'H';
	bolsista = 2;
}

Aluno::~Aluno()
{
}

string Aluno:: getnome(){
	return nome;
} 

string Aluno:: getdata_nascimento(){
	return data_nascimento;
}

int Aluno:: getmatricula(){
	return matricula;
}

long long Aluno:: getcpf(){
	return cpf;
}

char Aluno:: getsexo(){
	return sexo;
}

int Aluno:: getbolsista(){
return bolsista;
}
	
Curso * Aluno:: getCurso(){
	return curso;
}

DisciplinaCursada Aluno:: getListDisciplinaCursada(DisciplinaCursada *listDisciplinaCursada[QUANT_DISC]){
	for(int i = 0; i< QUANT_DISC; i++){
		listDisciplinaCursada[i] = this->listDisciplinaCursada[i];
	}
}
		
void Aluno:: setNome(string nome){
	this->nome = nome;
}

void Aluno:: setData_nascimento(string data_nascimento){
	this->data_nascimento = data_nascimento;
}

void Aluno:: setMatricula(int matricula){
	this->matricula = matricula;
}

void Aluno:: setCpf(long long cpf){
	this->cpf = cpf;
}

void Aluno:: setSexo(char sexo){
	//isso funciona, porém irei usar switch: this->sexo = (sexo == 'M' || sexo == 'F' || sexo == 'm' || sexo == 'f') ? sexo : 'M';
	switch(sexo){
		case 'H':
			this->sexo = 'H';
			break;
		case 'h':
			this->sexo = 'H';
			break;
		case 'M':
			this->sexo = 'M';
			break;
		case 'm':
			this->sexo = 'M';
			break;
	}
}

void Aluno:: setBolsista(int bolsista){
	this->bolsista = (bolsista > 0 && bolsista < 4) ? bolsista : 2;
}

void Aluno:: setCurso(Curso *curso){
	this->curso = curso;
}

void Aluno:: setListDisciplinaCursada(DisciplinaCursada *listDisciplinaCursada[QUANT_DISC]){
	for(int i = 0; i< QUANT_DISC; i++){
		this->listDisciplinaCursada[i] = listDisciplinaCursada[i];
	}
}

void Aluno::imprimirInformacoes(){
	cout << "\tInformações Aluno:" << endl << endl;
	cout << "Nome: " << nome << endl;
	cout << "Matrícula: " << matricula << endl;
	cout << "Cpf: " << cpf << endl<< "Data de Nascimento: " << data_nascimento << endl << "Sexo: " << sexo << endl;
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
	// A partir daqui tem erro, não tá imprimindo nada além daqui
	cout << "Curso: " << curso->getNome() << endl;
	cout << "Disciplinas cursadas pelo aluno: " << endl;
	for(int i = 0; i < QUANT_DISC; i++){
		listDisciplinaCursada[i]->imprimirInformacoes();
	}
}


