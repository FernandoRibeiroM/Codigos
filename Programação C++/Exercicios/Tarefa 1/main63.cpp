#include <iostream>
#include <cmath>


using namespace std;

void Limpa_buffer();

int VERIFICA(int numero);

int main(int argc, char** argv) {
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");

	int numero, resposta;
	
	cout <<"\n\tDigite um número: ";
	cin >>numero;	
	Limpa_buffer();

	resposta = VERIFICA(numero);
	
	if(resposta == 1)
		cout <<"\n\tO numero é Par\n\n";
	else
		cout <<"\n\tO numero é ímpar\n\n";
	system("pause");
	system("cls");
	return 0;
}

void Limpa_buffer(){
	cin.clear();
	fflush(stdin);
}

int VERIFICA(int numero){
	if(numero%2 == 0)
		return 1;
	else
		return 0;
}
