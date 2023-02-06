#include <iostream>

using namespace std;

void Limpa_buffer();

int VERIFICA_QUADRANTE(int x, int y);

int main(int argc, char** argv) {
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");

	int x, y;
	int resposta = 0;
	cout << "\n\tDigite X: ";
	cin >> x;
	Limpa_buffer();
	cout << "\n\tDigite y: ";
	cin >> x;
	Limpa_buffer();
	
	resposta += VERIFICA_QUADRANTE( x,  y);
	
	system("pause");
	system("cls");
	cout << "\n\tQuadrante: " << resposta << endl;
	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}

int VERIFICA_QUADRANTE(int x, int y){
	if((x > 0 ) && (y > 0))
		return 1;	
	else if((x < 0) && (y > 0))
		return 2;
	else if((x < 0) && (y < 0))
		return 3;
	else if((x>0 )&& (y<0))
		return 4;
	else 
		return 5;
}
