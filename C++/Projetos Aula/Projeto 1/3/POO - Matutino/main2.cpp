#include <iostream>
#include <locale>

#include "Aluno.h"

using namespace std;

void limpar_buffer();

disciplina * cadastrarDisciplina();

Curso * cadastrarCurso();

Aluno* cadastrarAluno(Curso *curso);

void inserirInformacoesAluno(Aluno *aluno);

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
	system ("cls");
	Curso *curso;
	curso = cadastrarCurso();
	curso->imprimirInformacoes();
	
	for( i = 0; i < N_alunos; i++){	
		Lista_alunos[i]	= cadastrarAluno(curso);
	}

	cout << endl;
	 
	for (i  = 0; i<N_alunos; i++){
		Aluno *aluno = Lista_alunos[i];
		inserirInformacoesAluno(aluno);
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

disciplina * cadastrarDisciplina(){
	disciplina *disc = new disciplina();
	
	cout << "		Cadastrar Disciplina		" << endl << endl;
	cout << "\tNome: ";
	string nome;
	getline(cin, nome);
	disc->setNome(nome);
	limpar_buffer();
	cout << endl;
	
	cout << "\tCarga Horária: ";
	int carga_horaria;
	cin >> carga_horaria;
	disc->setCarga_horaria(carga_horaria);
	cin.clear();
	limpar_buffer();
	system ("cls");

	return disc;
}

Curso * cadastrarCurso(){
	Curso *curso = new Curso();
	
	cout << "		Cadastrar Curso		 " << endl << endl;
	cout << "\tNome: ";
	string nome;
	getline(cin, nome);
	curso->setNome(nome);
	limpar_buffer();
	cout << endl;
	
	cout << "\tDuração em semestres: ";
	int duracao;
	cin >> duracao;
	curso->setDuracao(duracao);
	limpar_buffer();
	cout << endl;

	char turno;
	do{
		cout << "\tTurno (M - Matutino | V -Vespertino | N - Noturno): ";
		cin >> turno;
		curso->setTurno(turno);
		limpar_buffer();
		cout << endl;
		if(turno != 'M' && turno != 'm' && turno != 'V' && turno != 'v' && turno != 'N' && turno != 'n'){
			cout << "Informação inválida! Favor entrar com um turno correto para um curso!" << endl;
		}
	}while(turno != 'M' && turno != 'm' && turno != 'V' && turno != 'v' && turno != 'N' && turno != 'n');
	
	disciplina * listDisciplina[QUANT_DISC];
	
	for(int i = 0; i < QUANT_DISC; i++){
		listDisciplina[i] = cadastrarDisciplina();
	}
	
	curso->setListDisciplina(listDisciplina);
	
	return curso;
}

Aluno* cadastrarAluno(Curso *curso){	
	
	Aluno *aluno = new Aluno();
	
	string nome;
	cout << "Nome do aluno: "; 
	getline(cin, nome);
	limpar_buffer();
	aluno->setNome(nome);
	cout << endl;
	
	int matricula;
	do{
		cout << "Matrícula: ";
		
		cin >> matricula;
		cout << endl;
		limpar_buffer();
		if(matricula < 0){
			cout << "Valor inválido, digite novamente\n";
		}
	}while(matricula < 0);
	aluno->setMatricula(matricula);

	cout << "CPF: ";
	long long cpf;
	cin >> cpf;
	aluno->setCpf(cpf);
	cout << endl;
	limpar_buffer();

	
	cout << "Data de nascimento (xx/xx/xxxx): ";
	string data_nascimento;
	cin >> data_nascimento;
	aluno->setData_nascimento(data_nascimento);
	cout << endl;
	limpar_buffer();

	
	cout << "Digite o sexo do aluno (H/M): ";
	char sexo;
	cin >> sexo;
	aluno->setSexo(sexo);
	cout << endl;
	limpar_buffer();

	int bolsista;
	do{
		cout << "Digite se o aluno é bolsista (1- sim ou 2- não ou 3- Em precesso): ";
		cin >> bolsista;
		cout << endl;
		limpar_buffer();
	}while(bolsista >= 4 || bolsista <= 0);
	
	aluno->setBolsista(bolsista);
	
	aluno->setCurso(curso);
	
	disciplina *listDisciplina[QUANT_DISC];
	
	curso->getListDisciplina(listDisciplina);
	
	DisciplinaCursada* listDisciplinaCursada[QUANT_DISC];
	
	for(int i = 0; QUANT_DISC; i++){
		DisciplinaCursada *disCursada = new DisciplinaCursada();
		disCursada->setDisc(listDisciplina[i]);
		listDisciplinaCursada[i] = disCursada;
	}
	
	aluno->setListDisciplinaCursada(listDisciplinaCursada);

	cout << "Aluno " << aluno->getnome() << "cadastrado com sucesso!" << endl << endl;
	return aluno;
}

void inserirInformacoesAluno(Aluno *aluno){
	cout << "Informações Aluno " << aluno->getnome() << endl;
	
	DisciplinaCursada *listDiciplinaCursada[QUANT_DISC];
	aluno->getListDisciplinaCursada(listDiciplinaCursada);
	
	for(int i=0; i < QUANT_DISC; i++){
		DisciplinaCursada *discCursada = listDiciplinaCursada[i];
		cout << "Entre com as informações para a disciplina " << discCursada->getDisc()->getNome() << endl; 
		
		cout << "Entre com a nota do aluno: ";
		float nota;
		cin >> nota;
		discCursada->setNota(nota);
		limpar_buffer();
		cout << endl;
		
		cout << "Entre com a frequencia do aluno: ";
		float freq;
		cin >> freq;
		discCursada->setFrequencia(freq);
		limpar_buffer();
		cout << endl;
		
	}
 }
