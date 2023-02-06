#ifndef DISCIPLINACURSADA_H
#define DISCIPLINACURSADA_H

#include "Disciplina.h"

class DisciplinaCursada
{
	
	private:
		Disciplina *disc;
		float nota;
		float frequencia;
		
		string situacaoNaDisciplina();
		
	public:
		DisciplinaCursada();
		~DisciplinaCursada();

		Disciplina * getDisc();
		float getNota();
		float getFrequencia();
		
		void setDisc(Disciplina *disc);
		void setNota(float nota);
		void setFrequencia(float frequencia);
		
		void imprimirInformacoes();
};

#endif
