#include "Investimento.h"

Investimento:: Investimento(){
	
}

Investimento:: Investimento(TipoInvestimento tipoinvestimento, float saldoInvestimento){
	SetTipoinvestimento(tipoinvestimento);
	SetSaldoInvestimento(saldoInvestimento);
}

Investimento:: ~Investimento(){
	
}
		
TipoInvestimento Investimento:: getTipoinvestimento(){
	return tipoinvestimento;
}

float Investimento:: getSaldoInvestimento(){
	return saldoInvestimento;
}

void Investimento:: SetTipoinvestimento(TipoInvestimento tipoinvestimento){
	this->tipoinvestimento = tipoinvestimento;
}

void Investimento:: SetSaldoInvestimento(float saldoInvestimento){
	this->saldoInvestimento = saldoInvestimento;
}
				
