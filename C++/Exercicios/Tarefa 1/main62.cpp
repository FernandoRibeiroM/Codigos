#include <iostream>
#include <cmath>


using namespace std;

void Limpa_buffer();

void HIPOTENUSA(float altura, float base);

int main(int argc, char** argv) {
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");

	int base, altura;
	
	cout <<"\n\tDigite a altura: ";
	cin >>altura;	
	Limpa_buffer();
	cout <<"\n\tDigite a base: ";
	cin >>base;	
	Limpa_buffer();
	HIPOTENUSA( altura, base);

	system("pause");
	system("cls");
	return 0;
}

void Limpa_buffer(){
	cin.clear();
	fflush(stdin);
}

void HIPOTENUSA(float altura, float base){
	cout << "\n\tHipotenusa = " << sqrt((base* base) + (altura * altura)) << endl << "\tÁrea = " << ((base * altura) / 2) << endl;
}

