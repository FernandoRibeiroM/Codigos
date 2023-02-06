#ifndef ALUNO_H
#define ALUNO_H

#include "Curso.h"
#include "DisciplinaCursada.h"

class Aluno
{
			
	private:
		
		string nome;
		int matricula;
		long cpf;
		string dataNasc;
		char sexo;
		int bolsista;
		Curso *curso;
		DisciplinaCursada * listDisciplinaCursada[QUANT_DISC];
		
	
	public:
		
		Aluno();
		~Aluno();
		
		string getNome();
		int getMatricula();
		long getCpf();
		string getDataNasc();
		char getSexo();
		int getBolsista();
		Curso * getCurso();
		void getListDisciplinaCursada(DisciplinaCursada * listDisciplinaCursada[QUANT_DISC]);
		
		void setNome(string nome);
		void setMatricula(int matricula);
		void setCpf(long cpf);
		void setDataNasc(string dataNasc);
		void setSexo(char sexo);
		void setBolsista(int bolsista);	
		void setCurso(Curso *curso);
		void setListDisciplinaCursada(DisciplinaCursada * listDisciplinaCursada[QUANT_DISC]);
		
		void imprimirInformacoes();

};

#endif
