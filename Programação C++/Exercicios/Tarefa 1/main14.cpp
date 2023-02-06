#include <iostream>

using namespace std;

void Limpa_buffer();

int main(int argc, char** argv) {
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	int valor1, valor2, diferenca;
	
	cout << "Digite o primeiro valor: ";
	cin >> valor1;
	cout << endl;
	Limpa_buffer();
	
	cout << "Digite o segundo valor: ";
	cin >> valor2;
	cout << endl;
	Limpa_buffer();
	
	if(valor1 <  valor2){
		diferenca = valor2 - valor1;
	}
	else{
		diferenca = valor1 - valor2;
	}
	
	cout << "Diferença: " << diferenca;
	
	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}
