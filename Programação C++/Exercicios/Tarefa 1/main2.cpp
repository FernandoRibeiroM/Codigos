#include <iostream>

using namespace std;

void Limpa_buffer();

int main(int argc, char** argv) {
	float cotacao_d, dolar, real;
	
	//acentua��o
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	cout << "Digite a cota��o do dolar: ";
	cin >> cotacao_d;
	Limpa_buffer();
	
	cout << "Digite o valor do dolar: ";
	cin >> dolar;
	Limpa_buffer();
	
	real = dolar * cotacao_d;
	cout << "Cota��o: " << cotacao_d << endl << "Dolar: " << dolar << endl << "Real: " << real;
	
	
	return 0;

}

void Limpa_buffer(){
		cin.clear();
		fflush(stdin);
}
