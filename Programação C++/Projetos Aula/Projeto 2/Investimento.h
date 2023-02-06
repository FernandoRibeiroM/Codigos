#ifndef INVESTIMENTO_H
#define INVESTIMENTO_H

enum TipoInvestimento{
	CDB= 1,
	TESOURO = 2,
	ACAO = 3,
	IMOBILIARIO = 4,
};

class Investimento
{
	protected:
		
		TipoInvestimento tipoinvestimento;
		float saldoInvestimento; 
		
	public:
		
		Investimento();
		Investimento(TipoInvestimento tipoinvestimento, float saldoInvestimento);
		~Investimento();
		
		TipoInvestimento getTipoinvestimento();
		float getSaldoInvestimento(); 

		void SetTipoinvestimento(TipoInvestimento tipoinvestimento);
		void SetSaldoInvestimento(float saldoInvestimento); 
				
	
};

#endif
