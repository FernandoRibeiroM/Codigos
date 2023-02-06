#include <iostream>

#include "ContaCorrente.h"
#include "ContaPoupanca.h"
#include "ContaInvestimento.h"

void cadastrarConta(Conta *conta){	

	cout << "\tEntre com a agencia da conta: ";
	string agencia;
	getline (cin, agencia);
	conta->setAgencia(agencia);
	cin.clear();
	fflush(stdin);
	
	cout << "\tEntre com o número da conta: ";
	string numConta;
	getline(cin, numConta);
	conta->setNumConta(numConta);
	cin.clear();
	fflush(stdin);
	
	cout << "\tEntre com o proprietário da conta: ";
	string proprietario;
	getline(cin, proprietario);
	conta->setProprietario(proprietario);
	cin.clear();
	fflush(stdin);
	
	cout << "\tEntre com o saldo da conta: ";
	float saldo;
	cin >> saldo;
	conta->setSaldo(saldo);
	cin.clear();
	fflush(stdin);
	
}

void cadastrarContaCorrente(ContaCorrente *contaCorrente){
	cadastrarConta(contaCorrente);
	
	cout << "\tEntre com o limite: ";
	float limite;
	cin >> limite;
	contaCorrente->setLimite(limite);
	cin.clear();
	fflush(stdin);
	cout << endl << endl;
	
	
	cout << "\tConta corrente criada com sucesso";
	
	system("pause");
	system("cls");
	contaCorrente->imprimirExtrato();
	
}

void cadastrarContaPoupanca(ContaPoupanca *cp){
	cadastrarConta(cp);
	int opcao; 
	
	do{
		
		cout << "\n\t\tEntre com o mes de aniversario\n";
		cout << "\t1 - Janeiro " << endl;
		cout << "\t2 - Fevereiro " << endl;
		cout << "\t3 - Março " << endl;
		cout << "\t4 - Abril " << endl;
		cout << "\t5 - Maio " << endl;
		cout << "\t6 - Junho " << endl;
		cout << "\t7 - Julho " << endl;
		cout << "\t8 - Agosto " << endl;
		cout << "\t9 - Setembro " << endl;
		cout << "\t10 - Outubro " << endl;
		cout << "\t11 - Novembro " << endl;
		cout << "\t12 - Dezembro " << endl;
		cin >> opcao;
		
		if(opcao < 1 || opcao > 12){
			cout << "\tValor inválido!";
		}
		
	}while(opcao < 1 || opcao > 12);
	
	MesAniversario mes;
	switch(opcao){
		case 1:
			mes = JANEIRO;
				break;
		case 2:
			mes = FEVEREIRO;
				break;
		case 3:
			mes = MARCO;
				break;
		case 4:
			mes = ABRIL;
				break;
		case 5:
			mes = MAIO;
			break;
		case 6:
			mes = JUNHO;
			break;
		case 7:
			mes = JULHO;
			break;
		case 8:
			mes = AGOSTO;
			break;
	    case 9:
	    	mes = SETEMBRO;
			break;
		case 10:
			mes = OUTUBRO;
			break;
		case 11:
			mes = NOVEMBRO;
			break;
		case 12:
			mes = DEZEMBRO;
			break;
	}
	cp->setMes(mes);
	cp->imprimirExtrato();
	
	
}

void cadastrarContaInvestimento(ContaInvestimento * conta){
	cadastrarContaCorrente(conta);
	int opcao; 
	
	do{
		
		cout << "\n\t\tEntre com o tipo de investimento\n";
		cout << "\t1 - CDB " << endl;
		cout << "\t2 - TESOURO DIRETO " << endl;
		cout << "\t3 - FUNDO DE AÇÕES " << endl;
		cout << "\t4 - FUNDO IMOBILIÁRIO " << endl;
		cout << "\tEntre com a opção: ";

		cin >> opcao;
		
		if(opcao < 1 || opcao > 4){
			cout << "\tValor inválido!";
		}
		
	}while(opcao < 1 || opcao > 4);

	TipoInvestimento tipo;
	
	switch(opcao){
		case 1:
			tipo = CDB;
			break;
		case 2:
			tipo = TESOURO;
			break;
		case 3:
			tipo = ACAO;
			break;
		case 4:
			tipo = IMOBILIARIO;
			break;
	}
	
	conta->SetTipoinvestimento(tipo);
	cout << "\tEntre com o saldo do investimento: ";
	float saldo;
	cin >> saldo;
	conta->SetSaldoInvestimento(saldo);
	cin.clear();
	fflush(stdin);
}

void cadastrarConta(Conta *listConta[100], int quantConta){
	int opcao;
	
	do{
		cout << "\tCadastrar conta\t\n\n" << "\t1 - Conta Corrente\n" << "\t2 - Conta Poupança\n" << "\t3 - Conta investimento\n" ;
		cout << "\tEntre com a opção: ";
		cin >> opcao;
		cin.clear();
		fflush(stdin);
		if (opcao < 1 || opcao > 3){
			cout << "\n\tOpção inválida, digite novamente!";
		}
		cout << endl << endl;
		
		switch(opcao){
			
			case 1:{
				cout << "\t\tCadastro Conta Corrente: \n";
				ContaCorrente *cc = new ContaCorrente();
				cadastrarContaCorrente (cc);
				listConta[quantConta] = cc;
				break;
			}
			case 2:{
				cout << "\t\tCadastro Conta Poupança: \n";
				ContaPoupanca *cp = new ContaPoupanca();
				cadastrarContaPoupanca(cp);
				listConta[quantConta] = cp;
				break;
			}
			case 3:{
				cout << "\t\tCadastro Conta Investimento: \n";
				ContaInvestimento *ci = new ContaInvestimento();
				cadastrarContaInvestimento(ci);
				listConta[quantConta] = ci;
				break;
			}
		}
	}while(opcao < 1 || opcao > 3);
	
	system("pause");
	system("cls");
}

Conta * buscarConta(Conta *listConta[100], int quantCont){
	
	Conta *contaBusca = NULL;
	
	cout << "\tEntre com a angência da conta: ";
	string agencia;
	getline(cin, agencia);
	cin.clear();
	fflush(stdin);
	
	cout << "\tEntre com o número da conta: ";
	string numConta;
	getline(cin, numConta);
	cin.clear();
	fflush(stdin);
	for(int i=0; i < quantCont; i++)
	{
		Conta *conta = listConta[i];
		if((agencia == conta->getAgencia()) && (numConta == conta->getNumConta())){
			return conta;
		}
	}
	return NULL;
}

void extratoConta(Conta *listConta[100], int quantConta){
	
	Conta * conta  = buscarConta(listConta, quantConta);
	
	if(conta != NULL){
		if(dynamic_cast<ContaInvestimento*>(conta)){
			cout << "\tConta investimento" << endl;
		}else if(dynamic_cast<ContaCorrente*>(conta)){
			cout << "\tConta corrente" << endl;
		} else if(dynamic_cast<ContaPoupanca*>(conta)){
			cout << "\tConta poupança" << endl;
		}
		conta->imprimirExtrato();
	}else{
		cout << "\tConta não encontrada!" << endl;
	}
		system("pause");
}

void DepositarValor(Conta *listConta[100], int quantConta){
	
	Conta * conta  = buscarConta(listConta, quantConta);
	
	if(conta != NULL){
		cout << "\tEntre com o valor a ser depositado";
		float valor;
		cin >> valor;
		cin.clear();
		fflush(stdin);
	
		if(conta->depositar(valor))
			cout << "\tValor" << valor << " depositado com sucesso na conta de " << conta->getProprietario() << endl;
		else 
			cout << "\tValor inválido para depósito!";
	}else{
		cout << "\tConta não encontrada!" << endl;
	}
}

void SacarValor(Conta *listConta[100], int quantConta){
	
	Conta * conta  = buscarConta(listConta, quantConta);
	
	if(conta != NULL){
		cout << "\tEntre com o valor a ser sacado";
		float valor;
		cin >> valor;
		cin.clear();
		fflush(stdin);
		
		if(conta->sacar(valor))
			cout << "\tValor" << valor << " sacado com sucesso na conta de " << conta->getProprietario() << endl;
		else 
			cout << "\tValor inválido para sacar!";
	}else{
		cout << "\tConta não encontrada!" << endl;
	}
}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	Conta *listConta[100];
	int quantConta;
	
	int opcao;
	
	do{
		do{
			cout << "\n\t\tCadastro de Contas\t\n\n";
			cout << "\t1 - Cadastrar conta" << endl << "\t2 - Extrato de conta" << endl << "\t3 - Depositar valor" << endl << "\t4 - Sacar valor" << endl << "\t5- Sair" << endl;
	
			cout << "\tEntre com a opção: ";
			cin >> opcao;
			cin.clear();
			fflush(stdin);
			if (opcao < 1 || opcao > 5){
				cout << "\n\tOpção inválida, digite novamente!";
				system("pause");
			system("cls");
			}
		}while(opcao < 1 || opcao > 5);
		
		cout << endl;
		
		switch(opcao){
			case 1:
				cadastrarConta(listConta, quantConta);
				quantConta += 1;
				break;
			case 2:
				if (quantConta > 0){
					
					extratoConta(listConta, quantConta);		
				}else{
					cout << "\n\n\tNenhuma conta foi cadastrada, favor cadastrar uma conta."<< endl;
				}
				break;
			case 3:
				if(quantConta > 0){
					DepositarValor(listConta, quantConta);
				}else{
					cout << "\n\n\tNenhuma conta foi cadastrada, favor cadastrar uma conta."<< endl;
				}
				
				break;
			case 4:
				if(quantConta > 0){
					SacarValor(listConta, quantConta);
				}else{
					cout << "\n\n\tNenhuma conta foi cadastrada, favor cadastrar uma conta."<< endl;
				}
				
				break;
			case 5:
				cout << "\tObrigado por utilizar nosso sistema" << endl << endl;
				break;
		}
		system("cls");
	}while(opcao != 5);
	
	
	
	
	ContaPoupanca *cc = new ContaPoupanca("0125-6", "256256321-1", "Nando", 1000, SETEMBRO);
	
//_________________________________________________________________________________

	return 0;
}
