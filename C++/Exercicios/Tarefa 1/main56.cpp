#include <iostream>

using namespace std;

void Limpa_buffer();

int main(int argc, char** argv) {
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");

	int i, nLidos;
	cout << "\n\tDeseja ler quantos numeros? ";
	cin >> nLidos;
	Limpa_buffer();
	
	int vetor[nLidos], contadorPAR = 0, contadorCINCO = 0;
	
	for (i = 0; i<nLidos;i++){
		cout << "\n\tDigite o valor " << i+1 << ": ";
		cin >> vetor[i];
		Limpa_buffer();
	}
	
	for (i = 0; i<nLidos;i++){
		if(vetor[i]%2 == 0)
		contadorPAR++;
	}
	
	for (i = 0; i <nLidos ;i++){
		if(vetor[i]%5 == 0)
		contadorCINCO++;
	}
	system("pause");
	system("cls");
	cout << "\n\tContador Par: " << contadorPAR << endl << "\tContador Cinco: " << contadorCINCO << endl;
	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}
