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
	
	int vetor1[nLidos], vetor2[nLidos], contador = 0;
	
	for (i = 0; i<nLidos;i++){
		cout << "\n\tVetor , digite o valor " << i+1 << ": ";
		cin >> vetor1[i];
		Limpa_buffer();
	}
	
	for (i = 0; i<nLidos;i++){
		cout << "\n\tVetor 2, digite o valor " << i+1 << ": ";
		cin >> vetor2[i];
		Limpa_buffer();
	}
	
	for (i = 0; i <nLidos ;i++){
		if(vetor1[i] == vetor2[i])
		contador++;
	}
	system("pause");
	system("cls");
	cout << "\n\tContador: " << contador << endl;
	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}
