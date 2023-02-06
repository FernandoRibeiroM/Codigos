#ifndef ALUNO_H
#define ALUNO_H



#include <iostream>
using namespace std;

class Aluno
{
	public:
		string nome, data_nascimento;
		int matricula;
		long long cpf;
		char sexo;
		int bolsista;
		float nota;
		
		Aluno();
		~Aluno();
		
		void Imprimir_Informacoes_Aluno();
	
};

#endif
