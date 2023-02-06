#ifndef DISCIPLINACURSADA_H
#define DISCIPLINACURSADA_H

#include "disciplina.h"

class DisciplinaCursada
{
	private:
		disciplina *disc;
		float nota;
		float frequencia;
		
		string situacaoDisciplina();
		
	public:
		DisciplinaCursada();
		~DisciplinaCursada();
	
		disciplina *getDisc();
		float getNota();
		float getFrequencia();
		
		void setDisc(disciplina *disc);
		void setNota(float nota);
		void setFrequencia(float frequencia);
		
		void imprimirInformacoes();
};

#endif
