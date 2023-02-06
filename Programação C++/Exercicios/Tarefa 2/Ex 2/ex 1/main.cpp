#include <iostream>
#include "Pedido.h"

int Busca_Produto(Produto *listEstoque[], int quantEstoque, string nome);

int Busca_Pedido(Pedido *listPedido[], int quantPedido, string nome);

void Cadastrar_Produto(Produto *listEstoque[], int quantProduto);

void Imprime_Estoque(Produto *listEstoque[], int quantEstoque);

void Cadastro_Pedido(Pedido *pedido[], int quantPedido, Produto *listEstoque[], int quantEstoque);

void Imprime_Pedido(Pedido *pedido[], int quantPedido);

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");

	
	cout << "Quantia de produtos: ";
	int Quantia_produto;
	cin >> Quantia_produto;
	cin.clear();
	fflush(stdin);
	cout << endl;	
	Produto *listEstoque[Quantia_produto];
	
	for(int i = 0; i < Quantia_produto; i++){
		listEstoque[i] = NULL;		
	}
	
	Cadastrar_Produto(listEstoque, Quantia_produto);
	Imprime_Estoque(listEstoque, Quantia_produto);
	
	cout << "Nome cliente: ";
	string nomeCliente;
	getline(cin,nomeCliente);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Quantia de produtos do pedido: ";
	int Quantia_pedido;
	cin >> Quantia_pedido;
	cin.clear();
	fflush(stdin);
	cout << endl;	
	Pedido *pedido[Quantia_pedido];
	
	for(int i = 0; i < Quantia_pedido; i++){
		pedido[i] = NULL;		
	}
	
	Cadastro_Pedido(pedido, Quantia_pedido, listEstoque, Quantia_produto);
	pedido[0]->setNomeCliente(nomeCliente);
	Imprime_Pedido(pedido, Quantia_pedido);
	
	return 0;
}

int Busca_Produto(Produto *listEstoque[], int quantEstoque, string nome){
	
	if(listEstoque[0] == NULL){
		return -1;
	}
	else{
		int i = 0;
		Produto *nomeList = listEstoque[i];
		if(nome == nomeList->getNomeProduto()){
			return i;
		}
		else if(nome != nomeList->getNomeProduto()){
			for(i; i < quantEstoque; i++){				
				nomeList = listEstoque[i];
				if(nomeList == NULL){
					return -1;
				}
				else if(nome == nomeList->getNomeProduto()){
					return i;
				}
			}
			return -1;
		}
	}
}

int Busca_Pedido(Pedido *listPedido[], int Quantia_pedido, string nome){
	
	if(listPedido[0] == NULL){	
		return -1;
	}
	
	else{
		int i = 0;
		Pedido *nomeList = listPedido[i];
		if(nome == nomeList->getProduto()->getNomeProduto()){
			return i;
		}
		else{
			for(i; i < Quantia_pedido; i++){				
				nomeList = listPedido[i];
				if(nomeList == NULL){
					return -1;
				}
				else if(nome == nomeList->getProduto()->getNomeProduto()){
					return i;
				}
			}
			return -1;
		}
	}
}

void Cadastrar_Produto(Produto *listEstoque[], int Quantia_produto){
	for(int i = 0; i < Quantia_produto; i++){
		cin.clear();
		fflush(stdin);
		cout << endl;
		cout << "Nome do produto: ";
		string nome;
		getline(cin, nome);
		int busca = Busca_Produto(listEstoque,Quantia_produto,nome);			
		
		if (busca == -1){
			
			Produto *produto = new Produto();
			
			produto->setNomeProduto(nome);
			cin.clear();
			fflush(stdin);
			cout << endl;
			
			cout << "Valor do produto: ";
			float valorProduto;
			cin >> valorProduto;
			produto->setPrecoProduto(valorProduto);
			cin.clear();
			fflush(stdin);
			cout << endl;
			
			produto->setQuantEstoque(1);
			listEstoque[i] = produto;
			produto = listEstoque[i];			
		}
		else{
			int estoque;
			Produto *nomeList = listEstoque[busca];
			estoque = nomeList->getQuantEstoque();
			estoque++;
			nomeList->setQuantEstoque(estoque);
			listEstoque[i] = nomeList;
			i = i -1;
		}
	}
}

void Imprime_Estoque(Produto *listEstoque[], int quantEstoque){
	
	cout << "\tEstoque\t" << endl;
	for(int i = 0; i < quantEstoque; i++){
		
		Produto *produto = listEstoque[i];
		cout << "Produto: " << produto->getNomeProduto() << endl;
		cout << "Valor: R$" << produto->getPrecoProduto() << endl;
		cout << "Quantidade: " << produto->getQuantEstoque() << endl;
		cout << "_______________________________________" << endl;
	}
	cout << "--------------------------------------------------" << endl << endl;
}

void Cadastro_Pedido(Pedido *pedido[], int Quantia_pedido, Produto *listEstoque[], int quantEstoque){
	
	for(int i = 0; i < Quantia_pedido; i++){
		
		cout << "Produto que deseja adicionar a cesta: " << endl;
		string nomeProduto;
		getline(cin,nomeProduto);
		
		int value = Busca_Produto(listEstoque,quantEstoque, nomeProduto);
		int t = Busca_Pedido(pedido, Quantia_pedido, nomeProduto);
		
		Pedido *newPedido = new Pedido();
		Produto *produto;
		float valor;
		
		if((value >= 0) && (t < 0)){
			produto = listEstoque[value];
			int newEstoque = produto->getQuantEstoque();
			newEstoque = newEstoque - 1;
			produto->setQuantEstoque(newEstoque);
			listEstoque[value] = produto;
			valor = produto->getPrecoProduto();						
					
			newPedido->setQuantia_pedido(1);
			
			newPedido->setValor(valor);
			
			newPedido->setProduto(produto);			
			
			pedido[i] = newPedido;
			
			cin.clear();
			fflush(stdin);
			cout << endl;			
		}
		
		else if(t > 0){

			newPedido = pedido[t];
			float valor = newPedido->getValor();
			valor = valor + produto->getPrecoProduto();
			newPedido->setValor(valor);
			newPedido->setQuantia_pedido((newPedido->getQuantia_pedido() + 1));
			pedido[t] = newPedido;
			cin.clear();
			fflush(stdin);
			cout << endl;
				
		}
		
		else{
			cin.clear();
			fflush(stdin);
			cout << endl;
			cout << "Este produto não foi encontrado! " << endl;
			i = i - 1;
		}
	}
}

void Imprime_Pedido(Pedido *pedido[], int Quantia_pedido){
	float valorFinal = 0.00;
	cout << "\tPedido\t" << endl;
	Pedido *impriPedido = pedido[0];
	cout << "Cliente: " << impriPedido->getNomeCliente() << endl;
	cout << "Produto:	" << "Quantia:	" << "Valor: "<< endl;
	for(int i = 0; i < Quantia_pedido; i++){
		impriPedido = pedido[i];
		cout << "" << impriPedido->getProduto()->getNomeProduto() << "	 	" <<  impriPedido->getQuantia_pedido() <<"		 " << impriPedido->getValor()<< endl;
		valorFinal = valorFinal + impriPedido->getValor();
	}
	cout << "Preço Total :		R$" << valorFinal << " ." << endl;
	cout << "----------------------------------------------------" << endl << endl;
}

