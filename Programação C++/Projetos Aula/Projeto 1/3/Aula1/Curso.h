#ifndef CURSO_H
#define CURSO_H

#include "Disciplina.h"

#define QUANT_DISC 1

class Curso
{
	private:
		string nome;
		int duracao;
		char turno;
		Disciplina *listDisciplina[QUANT_DISC];
	
	public:
		Curso();
		~Curso();
	
	string getNome();
	int getDuracao();
	char getTurno();
	void getListDisciplina(Disciplina *listDisciplina[QUANT_DISC]);
	
	void setNome(string nome);
	void setDuracao(int duracao);
	void setTurno(char turno);
	void setListDisciplina(Disciplina *listDisciplina[QUANT_DISC]);
	
	void imprimirInformacoes();
	
};

#endif
