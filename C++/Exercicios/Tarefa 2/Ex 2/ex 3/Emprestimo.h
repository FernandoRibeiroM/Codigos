#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include "Livro.h"
#include "Pessoa.h"

class Emprestimo
{
	protected:
		string dataEmprestimo;
		string dataDevolucao;
		Livro *emprestado;
		Pessoa *cadastrada;
		
	public:
		string getDataEmprestimo();
		string getDataDevolucao();
		Livro *getEmprestado();
		Pessoa *getCadastrada();
		
		void setDataEmprestimo(string dataEmprestimo);
		void setDataDevolucao(string dataDevolucao);
		void setEmprestado(Livro *emprestado);
		void setCadastrada(Pessoa *cadastrada);
	
};

#endif
