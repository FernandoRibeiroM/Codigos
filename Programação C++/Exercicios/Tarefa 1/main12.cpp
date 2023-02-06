#include <iostream>

using namespace std;

void Limpa_buffer();

int main(int argc, char** argv) {
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	int valor;
	
	cout << "Digite um valor: ";
	cin >> valor;
	cout << endl;
	Limpa_buffer();
	
	if(valor < 0){
		valor = valor * -1;
	}
	
	cout << "Valor: " << valor;

	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}
