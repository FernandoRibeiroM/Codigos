#include <iostream>

using namespace std;

void Limpa_buffer();

int main(int argc, char** argv) {
	//acentua��o
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");

	int resposta, valor1, valor2, resultado = 0;
	
	cout << "Qual opera��o deseja fazer?\n1 - Adi��o\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\nResposta: ";
	cin >> resposta;
	cout << endl;
	Limpa_buffer();
	
	cout << "Digite o valor 1: ";
	cin >> valor1;
	cout << endl;
	Limpa_buffer();
	
	cout << "Digite o valor 2: ";
	cin >> valor2;
	cout << endl;
	Limpa_buffer();
	
	switch(resposta)
	{
		case 1:
			resultado = valor1 + valor2;
			cout << "Valor 1: " << valor1 << endl << "Valor 2: " << valor2 << endl << "Resultado: " << resultado; 
			break;
		case 2:
			resultado = valor1 - valor2;
			cout << "Valor 1: " << valor1 << endl << "Valor 2: " << valor2 << endl << "Resultado: " << resultado; 
	
			break;	
		case 3:
			resultado = valor1 * valor2;
			cout << "Valor 1: " << valor1 << endl << "Valor 2: " << valor2 << endl << "Resultado: " << resultado; 
		
			break;		
		case 4:
			resultado = valor1 / valor2;
			cout << "Valor 1: " << valor1 << endl << "Valor 2: " << valor2 << endl << "Resultado: " << resultado; 			
			break;	
		default:
			cout << "Op��o inv�lida";
			break;	
	}
	
	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}
