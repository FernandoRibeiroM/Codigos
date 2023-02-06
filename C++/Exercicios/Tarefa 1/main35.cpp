#include <iostream>

using namespace std;

void Limpa_buffer();

int main(int argc, char** argv) {
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");

	int i;
	for (i = 1; i<=100;i++){
		cout << i << ", ";
		if (i %10 == 0)
		cout << " Multiplo de 10\n";
	}
	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}
