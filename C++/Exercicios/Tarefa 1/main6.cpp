#include <iostream>

using namespace std;

void Limpa_buffer();

int main(int argc, char** argv) {
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	float celsius;
	
	cout << "Digite o valor em celcius: ";
	cin >> celsius;
	Limpa_buffer;
	
	cout << "\nFahrenheit: " << ((9 * celsius + 160) / 5) << endl;
	return 0;
}

void Limpa_buffer()
	{
		cin.clear();
		fflush(stdin);
	}

