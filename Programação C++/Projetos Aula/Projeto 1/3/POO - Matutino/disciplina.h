#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <iostream>
using namespace std;

class disciplina
{
	private:
		string nome;
		int carga_horaria;
		int creditos;
		
	public:
		
		
		string getNome();
		int getCarga_horaria();
		int getCreditos();
		
		void setNome(string nome);
		void setCarga_horaria(int carga_horaria);
		void setCreditos(int creditos);
		disciplina();
		~disciplina();
		
		void  imprimirInformacoes();
};

#endif
