#include "produto.h"
#include "Produto.h"

string Produto::getNomeProduto(){
	return nomeProduto;
}

int Produto::getQuantEstoque(){
	return quantEstoque;
}

float Produto::getPrecoProduto(){
	return precoProduto;
}

void Produto::setNomeProduto(string nomeProduto){
	this->nomeProduto = nomeProduto;
}

void Produto::setQuantEstoque(int estoque){
	this->quantEstoque = estoque;
}

void Produto::setPrecoProduto(float precoProduto){
	this->precoProduto = precoProduto;
}


