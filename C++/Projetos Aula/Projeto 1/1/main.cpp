#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*int n1, n2, resultado;
	cout << "\n\tDigite o primeiro valor: ";
	cin >> n1;
	cout << "\n\tDigite o segundo valor: ";
	cin >> n2;
	resultado = n1 + n2;
	cout << "\n\tO resultado da soma e: " << resultado << endl;
	*/
	string nome, data_nascimento;
	int matricula;
	long long cpf;
	char sexo;
	bool bolsista;
	float nota;
	
	int aux_bolsista;
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	
	cout << "\n\tCadastro de aluno" << endl << endl;
	cout << "Digite o Nome do aluno: "; 
	getline(cin, nome);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Digite a matrícula: ";
	cin >> matricula;
	cout << endl;
	
	cout << "Digite o CPF do aluno: ";
	cin >> cpf;
	cout << endl;
	
	cout << "Digite a data de nascimento do aluno: ";
	cin >> data_nascimento;
	cout << endl;
	
	cout << "Digite o sexo do aluno (H - Homem ou M - mulher): ";
	cin >> sexo;
	cout << endl;
	
	cout << "Digite se o aluno é bolsista (1- sim ou 2- não): ";
	cin >> aux_bolsista;
	cout << endl;
	
	if(aux_bolsista == 1)
	{
		bolsista = true;
	}
	else
	{
		bolsista = false;
	}
	
	cout << "Digite a nota do aluno: ";
	cin >> nota;
	cout << endl;
	cout << "\n\nInformações importantes do aluno\n\n";
	cout << "Nome: " << nome << endl << "Matrícula: " << matricula << endl << "Cpf: " << cpf << endl<< "Data de Nascimento: " << data_nascimento << endl << "Sexo: " << sexo << endl << "Bolsista: " << bolsista << endl << "Nota: " << nota;
	
		
	
	return 0;
}
