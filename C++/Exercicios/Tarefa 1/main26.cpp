#include <iostream>

using namespace std;

void Limpa_buffer();

int main(int argc, char** argv) {
	//acentuação
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");

	int i;
	for (i = 100; i!=0;i--)
	cout << i << ", ";
	return 0;
}

void Limpa_buffer()
{
	cin.clear();
	fflush(stdin);
}
