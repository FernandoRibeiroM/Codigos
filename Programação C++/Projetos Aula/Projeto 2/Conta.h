#ifndef CONTA_H
#define CONTA_H

#include <iostream>

using namespace std;

class Conta
{
	protected:
		string agencia;
		string numConta;
		string proprietario;
		float saldo;
		
	public:
		
		virtual bool sacar(float valor);
		bool depositar(float valor);
		virtual void imprimirExtrato() = 0;
		
		string getAgencia();
		string getNumConta();
		string getProprietario();
		float getSaldo();
		
		void setAgencia(string agencia);
		void setNumConta(string numConta);
		void setProprietario(string proprietario);
		void setSaldo(float saldo);
		
		Conta();
		Conta(string agencia, string numConta, string proprietario, float saldo);
		~Conta();
};

#endif
