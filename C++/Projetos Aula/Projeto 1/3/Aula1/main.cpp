#include <iostream>
#include <locale>

#include "Aluno.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


Disciplina * cadastrarDisciplina(){
	Disciplina *disc = new Disciplina();
	
	cout << "Entre com o nome da disciplina: ";
	string nome;
	getline(cin, nome);
	disc->setNome(nome);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Entre com a carga horaria da disciplina: ";
	int cargaHoraria;
	cin >> cargaHoraria;
	disc->setCargaHoraria(cargaHoraria);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	return disc;
}

Curso * cadastrarCurso(){
	Curso *curso = new Curso();
	
	cout << "Entre com o nome do curso: ";
	string nome;
	getline(cin, nome);
	curso->setNome(nome);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Entre com a duração do curso em meses: ";
	int duracao;
	cin >> duracao;
	curso->setDuracao(duracao);
	cin.clear();
	fflush(stdin);
	cout << endl;
			
	char turno;
	do{
		cout << "Entre com o turno do curso (M - Matutino | V - Vespertino | N - Noturno): ";
		cin >> turno;
		curso->setTurno(turno);
		cin.clear();
		fflush(stdin);
		cout << endl;
		
		if(turno != 'M' && turno != 'm' && turno != 'V' && turno != 'v' && turno != 'N' && turno != 'n')
			cout << "Informação invalida! Favor entrar com um turno correto para o curso!" << endl;
		
	}while(turno != 'M' && turno != 'm' && turno != 'V' && turno != 'v' && turno != 'N' && turno != 'n');
	
	Disciplina * listDisciplina[QUANT_DISC];
	
	for(int i=0; i<QUANT_DISC; i++){
		cout << "		Cadastrar " << (i+1) << "° Disciplina do curso " << curso->getNome() << endl << endl;
		listDisciplina[i] = cadastrarDisciplina();
	}
	
	curso->setListDisciplina(listDisciplina);
	
	return curso;
	
}

Aluno * cadastrarAluno(Curso *curso){
	Aluno *aluno = new Aluno();		
		
	
	cout << "Entre com o nome do aluno: ";
	string nome;
	getline(cin, nome);
	aluno->setNome(nome);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Entre com a matrícula do aluno: ";
	int matricula;
	cin >> matricula;
	aluno->setMatricula(matricula);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Entre com o cpf do aluno: ";
	long cpf;
	cin >> cpf;
	aluno->setCpf(cpf);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Entre com a data de nascimento do aluno: ";
	string dataNasc;
	getline(cin, dataNasc);
	aluno->setDataNasc(dataNasc);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Entre com a sexo do aluno (M/F): ";
	char sexo;
	cin >> sexo;
	aluno->setSexo(sexo);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	int bolsista;
	
	do{
		cout << "O aluno é bolsista (1 - sim / 2 - não / 3 - em processo): ";
		cin >> bolsista;
		cin.clear();
		fflush(stdin);
		cout << endl;
		
		if(bolsista < 0 || bolsista > 3)
			cout << "Opção invalida! Favor, entrar com uma opção correta para bolsista!" << endl;
		
	}while(bolsista < 0 || bolsista > 3);

	aluno->setBolsista(bolsista);
	
	aluno->setCurso(curso);

	Disciplina *listDisciplina[QUANT_DISC];
	curso->getListDisciplina(listDisciplina);
	
	DisciplinaCursada* listDiscCursada[QUANT_DISC];
	
	
	for(int i=0; i<QUANT_DISC; i++){
		DisciplinaCursada *disCursada = new DisciplinaCursada();
		disCursada->setDisc(listDisciplina[i]); 
		listDiscCursada[i] = disCursada;
	}
	
	aluno->setListDisciplinaCursada(listDiscCursada);
	
	
	cout << "Aluno " << aluno->getNome() << " cadastrado com sucesso!" << endl << endl;
	
	return aluno;
}

void inserirInformacoesAluno(Aluno *aluno){
	
	cout << "Informações do Aluno " << aluno->getNome()  << endl;
	
	DisciplinaCursada *listDisciplinaCursada[QUANT_DISC];
	aluno->getListDisciplinaCursada(listDisciplinaCursada);
	
	for (int i=0; i<QUANT_DISC; i++){
		DisciplinaCursada *disCursada = listDisciplinaCursada[i];
		cout << "Entre com as informações para a disciplina " << disCursada->getDisc()->getNome() << endl;
		cout << "Entre com a nota do aluno: ";
		float nota;
		cin >> nota;
		disCursada->setNota(nota);
		cin.clear();
		fflush(stdin);
		cout << endl;
		
		cout << "Entre com a frequência do aluno: ";
		float frequencia;
		cin >> frequencia;
		disCursada->setFrequencia(frequencia);
		cin.clear();
		fflush(stdin);
		cout << endl;
	}
	
}

int main(int argc, char** argv) {
		
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	int quantAlunos;
	
	Aluno *listAlunos[quantAlunos];
	Curso *curso;
	
	cout << "					Cadastrar Curso		" << endl << endl;
	
	curso = cadastrarCurso();
	
	cout << "Imprimir Informações de curso: " << endl << endl;
	
	curso->imprimirInformacoes();
	
	
	cout << "     				Cadastro de alunos" << endl << endl;
	
	cout << "Entre com a quantidade de aluno a cadastrar: ";
	cin >> quantAlunos;
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	
	for(int i=0; i<quantAlunos; i++){
		listAlunos[i] = NULL;
	}
	
	for(int i=0; i<quantAlunos; i++){
		listAlunos[i] = cadastrarAluno(curso);
	}
	
	cout << "Alunos do curso de " << curso->getNome() << " cadastros com sucesso!" << endl <<endl;
	
	for(int i=0; i<quantAlunos; i++){
		Aluno *aluno = listAlunos[i];
		inserirInformacoesAluno(aluno);
		cout << endl;
	}
	
	cout << "Imprimir os dados de todos os alunos: " << endl << endl;
	
	for(int i=0; i<quantAlunos; i++){
		Aluno *aluno = listAlunos[i];
		aluno->imprimirInformacoes();
	}
	

	for(int i=0; i<quantAlunos; i++){
		delete(listAlunos[i]);
	}

	return 0;
}
