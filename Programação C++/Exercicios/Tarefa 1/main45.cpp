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
	
	int vetor[nLidos];
	
	for (i = 0; i<nLidos;i++){
		cout << "\n\tDigite o valor " << i+1 << ": ";
		cin >> vetor[i];
		Limpa_buffer();
}
	
	for (i = nLidos-1; i>= 0 ;i--){
		cout << "\n\tValor " << i +1<< ": " << vetor[i] << endl;
	}
	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}
