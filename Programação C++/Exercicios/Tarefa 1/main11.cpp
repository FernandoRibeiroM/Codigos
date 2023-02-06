#include <iostream>

using namespace std;

void Limpa_buffer();

int main(int argc, char** argv) {
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	int A, B, C;
	
	cout << "Digite o valor de A: ";
	cin >> A;
	cout << endl;
	Limpa_buffer();
	
	cout << "Digite o valor de B:";
	cin >> B;
	cout << endl;
	Limpa_buffer();
	
	C = A;
	A = B;
	B = C;
	
	cout << "A = " << A << endl << "B = " << B;
	
	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}
