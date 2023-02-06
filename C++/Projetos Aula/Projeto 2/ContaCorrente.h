#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta
{
	private:
		float limite;
	public:
		
		float getLimite();
		void setLimite(float limite);
		
		void imprimirExtrato();
		
		bool sacar(float valor);
		
		ContaCorrente();
		ContaCorrente(string agencia, string numConta, string proprietario, float saldo, float limite);
		~ContaCorrente();
	protected:
};

#endif
