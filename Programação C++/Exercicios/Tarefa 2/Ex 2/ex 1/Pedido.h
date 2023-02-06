#ifndef PEDIDO_H
#define PEDIDO_H
#include "Produto.h"

class Pedido 
{
	protected:
		Produto *produto;
		string nomeCliente;
		float valor;
		int pagamento;
		int quantPedido;
		
		
	public:
		Produto *getProduto();
		string getNomeCliente();
		float getValor();
		int getPagamento();
		int getQuantia_pedido();
		
		void setProduto(Produto *produto);
		void setNomeCliente(string nomeCliente);
		void setValor(float Valor);
		void setPagamento(int pagamento);
		void setQuantia_pedido(int quantPedido);
	
};

#endif
