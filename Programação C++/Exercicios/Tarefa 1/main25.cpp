#include <iostream>

using namespace std;

void Limpa_buffer();

int main(int argc, char** argv) {
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");

	float altura;
	string sexo;

	cout << "\n\tDigite sua altura: ";
	cin >> altura;
	Limpa_buffer();
	cout << "\n\tDigite seu sexo(h/m): ";
	getline(cin, sexo);
	Limpa_buffer();
	
	if(sexo == "H")
	cout << "\n\tSeu peso ideal é: " << ((72.7 * altura) - 58) << endl;
	else if (sexo == "M")
	cout << "\n\tSeu peso ideal é: " << ((62.1 * altura) - 44,7) << endl;
	else
	cout << "\n\tVc digitou um sexo inválido!";
	system("pause");
	system("cls");
	cout << endl;
	
	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}
