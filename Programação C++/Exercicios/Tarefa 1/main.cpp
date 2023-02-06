#include <iostream>

using namespace std;

void Limpa_buffer();

int main(int argc, char** argv) {
	int estoque_medio, estoque_minimo, estoque_maximo;
	
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	cout << "Digite o valor do estoque máximo: ";
	cin >> estoque_maximo;
	cout << endl;
	Limpa_buffer();
	
	cout << "Digite o valor do estoque minimo: ";
	cin >> estoque_maximo;
	cout << endl;
	Limpa_buffer();
	
	cout << "Estoque médio: " << ((estoque_maximo + estoque_minimo / 2));
	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}

