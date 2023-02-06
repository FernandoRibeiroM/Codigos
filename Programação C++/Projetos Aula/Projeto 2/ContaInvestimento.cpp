#include "ContaInvestimento.h"

ContaInvestimento::ContaInvestimento()
{
}

ContaInvestimento:: ContaInvestimento(string agencia, string numConta, string proprietario, float saldo, float limite, TipoInvestimento tipoinvestimento, float saldoInvestimento) : 
	ContaCorrente(agencia, numConta, proprietario, saldo, limite), 
	Investimento(tipoinvestimento, saldoInvestimento){
}

ContaInvestimento::~ContaInvestimento()
{
}

void ContaInvestimento:: imprimirExtratoCI(){
	ContaCorrente :: imprimirExtrato();
	cout << "\tTipo Investimento: " << tipoinvestimento << endl << endl;
	cout << "\tSaldo investimento: " << saldoInvestimento << endl << endl;
}

