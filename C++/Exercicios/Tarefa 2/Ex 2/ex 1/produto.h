#ifndef PRODUTO_H
#define PRODUTO_H

#include<iostream>

using namespace std;

class Produto
{
	protected:
		string nomeProduto;
		int quantEstoque;
		float precoProduto;
		
		
	public:
		string getNomeProduto();
		int getQuantEstoque();
		float getPrecoProduto();
		
		void setNomeProduto(string nome);
		void setQuantEstoque(int estoque);
		void setPrecoProduto(float preco);
			
		
	
};

#endif
