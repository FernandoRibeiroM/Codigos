#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca(){
}
ContaPoupanca:: ContaPoupanca(string agencia, string numConta, string proprietario, float saldo, MesAniversario mes) :
	Conta( agencia,  numConta,  proprietario,  saldo){
		setMes(mes);
	}


ContaPoupanca::~ContaPoupanca(){
}

MesAniversario ContaPoupanca:: getMes(){
	return mes;
}

void ContaPoupanca:: setMes(MesAniversario mes){
	this-> mes = mes;
}

void ContaPoupanca:: imprimirExtrato(){
	Conta:: imprimirExtrato();
	cout << "\tMes de aniversário: " << mes << endl << endl;
}

