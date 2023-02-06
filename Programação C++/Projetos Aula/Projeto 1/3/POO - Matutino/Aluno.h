#ifndef ALUNO_H
#define ALUNO_H

#include "Curso.h"
#include "DisciplinaCursada.h"


using namespace std;

class Aluno
{
	private:
		string nome;
		string data_nascimento;
		int matricula;
		long long cpf;
		char sexo;
		int bolsista;
		Curso *curso;
		DisciplinaCursada *listDisciplinaCursada[QUANT_DISC];
		
	public:
		string getnome(), getdata_nascimento();
		int getmatricula();
		long long getcpf();
		char getsexo();
		int getbolsista();
		Curso *getCurso();
		DisciplinaCursada getListDisciplinaCursada(DisciplinaCursada *listDisciplinaCursada[QUANT_DISC]);
		
		void setNome(string nome);
		void setData_nascimento(string data_nascimento);
		void setMatricula(int matricula);
		void setCpf(long long cpf);
		void setSexo(char sexo);
		void setBolsista(int bolsista);
		void setCurso(Curso *curso);
		void setListDisciplinaCursada(DisciplinaCursada *listDisciplinaCursada[QUANT_DISC]);
		
		Aluno();
		~Aluno();
		
		void imprimirInformacoes();
	
};

#endif
