#ifndef PESSOA_H
#define PESSOA_H
#include <vector>
#include <iostream>

using namespace std;

class Pessoa
{
	protected:
		string nomePessoa;
		string matriula;
		string telefone;
		string cpf;
		
	public:
		string getNomePessoa();
		string getMatricula();
		string getTelefone();
		string getCpf();
		
		void setNomePessoa(string nomePessoa);
		void setMatricula(string matriula);
		void setTelefone(string telefone);
		void setCpf(string cpf);
		void imprimePessoa(vector<Pessoa*> listCadastro);
	
};

#endif
