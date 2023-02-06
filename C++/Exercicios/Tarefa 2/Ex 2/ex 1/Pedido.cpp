#include "Pedido.h"

Produto *Pedido::getProduto(){
	return produto;
}

string Pedido::getNomeCliente(){
	return nomeCliente;
}

float Pedido::getValor(){
	return valor;
}

int Pedido::getPagamento(){
	return pagamento;
}

int Pedido::getQuantia_pedido(){
	return quantPedido;
}

void Pedido::setProduto(Produto *produto){
	this->produto = produto;
}
void Pedido::setNomeCliente(string nomeCliente){
	this->nomeCliente = nomeCliente;
}

void Pedido::setValor(float valor){
	
	this->valor = valor;
	
}
void Pedido::setPagamento(int pagamento){
	this->pagamento = pagamento;
}
void Pedido::setQuantia_pedido(int quantPedido){
	this->quantPedido = quantPedido;
}
