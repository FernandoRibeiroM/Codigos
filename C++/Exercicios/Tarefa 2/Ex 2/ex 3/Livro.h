#ifndef LIVRO_H
#define LIVRO_H
#include <iostream>
#include <vector>

using namespace std;

class Livro
{
	protected:
	 	string nomeLivro;
		string autorLivro;		
		string volume;
		string editora;
		
	public:
		string getNomeLivro();
		string getAutorLivro();
		string getVolume();
		string getEditora();
		Livro *getCadastrar_Novo_Livro();
		
		void setNomeLivro(string nomeLivro);
		void setAutorLivro(string autorLivro);
		void setVolume(string volume);
		void setEditora(string editora);
		void imprime(vector<Livro*> acervo);
	
};

#endif
