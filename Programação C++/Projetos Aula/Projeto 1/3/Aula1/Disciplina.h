#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include<iostream>

using namespace std;

class Disciplina
{
	private:
		string nome;
		int cargaHoraria;
		int creditos;
	
	public:
		Disciplina();
		~Disciplina();
		
		string getNome();
		int getCargaHoraria();
		int getCreditos();
		
		void setNome(string nome);
		void setCargaHoraria(int cargaHoraria);
		
		void imprimirInformacoes();

};

#endif
