#include <iostream>
#include "Emprestimo.h"
#include <vector>

using namespace std;

Livro *NovoLivro(){
	Livro *newLivro = new Livro();
	cout << "Título do Livro: ";
	string nomeLivro;
	getline(cin,nomeLivro);
	newLivro->setNomeLivro(nomeLivro);
	cin.clear();
	fflush(stdin);
	cout << endl;
	cout << "Nome do autor: ";
	string autorLivro;
	getline(cin,autorLivro);
	newLivro->setAutorLivro(autorLivro);
	cin.clear();
	fflush(stdin);
	cout << endl;
	cout << "Volume: ";
	string volumeLivro;
	getline(cin,volumeLivro);
	newLivro->setVolume(volumeLivro);
	cin.clear();
	fflush(stdin);
	cout << endl;
	cout << "Editora: ";
	string editoraLivro;
	getline(cin,editoraLivro);
	newLivro->setEditora(editoraLivro);
	cin.clear();
	fflush(stdin);
	cout << endl;
	return newLivro;
}

void CadastroLivro(vector<Livro*> &acervo){
	int op = 0;
	while(op != 3){
		cout << "---------Cadastro---------" << endl << endl;
		cout << "Escolha uma Opção:" << endl;
		cout << "[1] - Cadastrar" << endl << "[2] - Excluir" << endl;
		cout << "[3] - Sair: ";
		cin >> op;
		cin.clear();
		fflush(stdin);
		cout << endl;
		
		switch(op){
			case 1:{
				Livro *newLivro = NovoLivro();
				acervo.push_back(newLivro);
				break;
			}
			case 2:{
				cout << "Nome do Livro que deve ser excluido: ";
				string nomeLivro;
				getline(cin,nomeLivro);
				cout << endl;
				for(vector<Livro*>::iterator it = acervo.begin(); it != acervo.end(); it++){
					
					if((*it)->getNomeLivro() == nomeLivro){
						cout << "O livroque será escluido é:" << endl;
						cout << "Titulo: " << (*it)->getNomeLivro() << endl;
						cout << "Autor: " << (*it)->getAutorLivro() << endl;
						cout << "Volume: " << (*it)->getVolume() << endl;
						cout << "Editora: " << (*it)->getEditora() << endl << endl;
						
						int x;
						
						cout << "Tem certeza que deseja fazer isso? " << endl << "[1]-SIM" << endl << "[2]-Não: ";
						cin >> x;
						cout << endl <<endl;
						if(x == 1){
							acervo.erase(it);
							cout << "Excluido!" << endl;
						}
						else{
							cout << "Não excluido" << endl;
						}
					}
				}
				cin.clear();
				fflush(stdin);
				cout <<endl;
				break;
			}
			case 3:{
				cout << "Voltando para o menu anterior" << endl << endl;
				break;
			}
			default:{
				cout << "Está opção é inválida" << endl;
				break;
			}
		}
	}
}

Pessoa *NovoCadastro(){
	Pessoa *newPessoa = new Pessoa();
	
	cout << "Cadastro Pessoa: " << endl;
	cout << "Nome: ";
	string nomePessoa;
	getline(cin,nomePessoa);
	newPessoa->setNomePessoa(nomePessoa);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Cpf: ";
	string cpf;
	getline(cin,cpf);
	newPessoa->setCpf(cpf);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Telefone: ";
	string telefone;
	getline(cin,telefone);
	newPessoa->setTelefone(telefone);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Matrícula: ";
	string matricula;
	getline(cin,matricula);
	newPessoa->setMatricula(matricula);
	cin.clear();
	fflush(stdin);
	cout << endl;
	return newPessoa;
}

void CadastroPessoa(vector<Pessoa*> &listCadastro){
	int op = 0;
	while(op != 3){
		cout << "\tCadastro cliente\t" << endl << endl;
		cout << "Menu:" << endl;
		cout << "[1] - Cadastro Cliente" << endl << "[2] - Excluir Cadastro" << endl;
		cout << "[3] - Sair: ";
		cin >> op;
		cin.clear();
		fflush(stdin);
		cout << endl;
		switch(op){
			case 1:{
				Pessoa *novaPessoa = NovoCadastro();
				listCadastro.push_back(novaPessoa);
				break;
			}
			case 2:{
				cout << "Nome cadastrado: ";
				string nomePessoa;
				getline(cin,nomePessoa);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				for(vector<Pessoa*>::iterator it = listCadastro.begin(); it != listCadastro.end(); it++){
					
					if((*it)->getNomePessoa() == nomePessoa){
						cout << "Cadastro a ser excluido:" << endl;
						cout << "Nome: " << (*it)->getNomePessoa() << endl;
						cout << "CPF: " << (*it)->getCpf() << endl;
						cout << "Telefone: " << (*it)->getTelefone() << endl;
						cout << "Matricula: " << (*it)->getMatricula() << endl << endl;						
						
						cout << "Certeza que quer exluir o cadastro " << endl << "[1]SIm" << endl << "[2]Não: ";
						int op;
						cin >> op;
						cin.clear();
						fflush(stdin);
						cout << endl <<endl;
						
						if(op == 1){
							listCadastro.erase(it);
							cout << "Excluido!" << endl;
							break;
						}
						else{
							cout << "Não excluido" << endl;
							break;
						}
					}
				}
				break;
			}
			default:{
				cout << "Opção invalida!!!" << endl;
				break;
			}
		}
	}
}

Emprestimo *NovoEmprestimo(vector<Livro*> &acervo, vector<Pessoa*> &listCadastro){
	
	Emprestimo *novoEmprestimo = new Emprestimo();
	
	cout << "Nome cadastrado: ";
	string nomePessoa;
	getline(cin,nomePessoa);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	for(vector<Pessoa*>::iterator it = listCadastro.begin(); it != listCadastro.end(); it++){
		
		if((*it)->getNomePessoa() == nomePessoa){
			cout << "Cadastro:" << endl;
			cout << "Nome: " << (*it)->getNomePessoa() << endl;
			cout << "CPF: " << (*it)->getCpf() << endl;
			cout << "Telefone: " << (*it)->getTelefone() << endl;
			cout << "Matricula: " << (*it)->getMatricula() << endl << endl;	
			novoEmprestimo->setCadastrada((*it));
		}
	}
	
	cout << "Nome livro a ser emprestado: ";
	string nomeLivro;
	getline(cin,nomeLivro);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	for(vector<Livro*>::iterator it = acervo.begin(); it != acervo.end(); it++){
		if((*it)->getNomeLivro() == nomeLivro){
			cout << "Livro::" << endl;
			cout << "Titulo: " << (*it)->getNomeLivro() << endl;
			cout << "Autor: " << (*it)->getAutorLivro() << endl;
			cout << "Volume: " << (*it)->getVolume() << endl;
			cout << "Editora: " << (*it)->getEditora() << endl << endl;
			novoEmprestimo->setEmprestado((*it));
		}
	}
	
	cout << "Data atual: ";
	string dataEmprestimo;
	getline(cin,dataEmprestimo);
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	novoEmprestimo->setDataEmprestimo(dataEmprestimo);
	
	cout << "Data da devolução: ";
	string dataDevolucao;
	getline(cin,dataDevolucao);
	cin.clear();
	fflush(stdin);
	cout << endl;
	novoEmprestimo->setDataDevolucao(dataDevolucao);
	return novoEmprestimo;
	
}

void CadastroEmprestimo(vector<Emprestimo*> &controleInOut, vector<Livro*> &acervo, vector<Pessoa*> &listCadastro){
	int op = 0;
	while(op != 3){
		cout << "\tCadastro de Emprestimo e devolução\t" << endl << endl;
		cout << "Escolha uma Opï¿½ï¿½o:" << endl;
		cout << "[1] - Emprestimo" << endl << "[2] - Devolução" << endl << "[3] - Sair do Menu: ";
		cin >> op;
		cin.clear();
		fflush(stdin);
		cout << endl;
		
		switch(op){
			case 1:{
				Emprestimo *novoEmprestimo = NovoEmprestimo(acervo, listCadastro);
				controleInOut.push_back(novoEmprestimo);
				break;
			}
			case 2:{
				cout << "Nome cadastrado: ";
				string nomePessoa;
				getline(cin,nomePessoa);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				for(vector<Emprestimo*>::iterator it = controleInOut.begin(); it != controleInOut.end(); it++){
					if((*it)->getCadastrada()->getNomePessoa() == nomePessoa){
						cout << "Cadastro:" << endl;
						cout << "Nome: " << (*it)->getCadastrada()->getNomePessoa() << endl;						
						cout << "CPF: " << (*it)->getCadastrada()->getCpf()<< endl;						
						cout << "Telefone: " << (*it)->getCadastrada()->getTelefone()<< endl;						
						cout << "Matricula: " << (*it)->getCadastrada()->getMatricula()<< endl << endl;
						
						cout << "O livro a ser Devolvido ï¿½:" << endl;
						cout << "Titulo: " << (*it)->getEmprestado()->getNomeLivro() << endl;
						cout << "Autor: " << (*it)->getEmprestado()->getAutorLivro() << endl;
						cout << "Volume: " << (*it)->getEmprestado()->getVolume() << endl;
						cout << "Editora: " << (*it)->getEmprestado()->getEditora() << endl << endl;
						
						cout << "Certeza que deseja Devolver? " << endl << "[1]-SIM" << endl << "[2]-Nï¿½O: ";
						int x;
						cin >> x;
						cin.clear();
						fflush(stdin);
						cout << endl <<endl;
						
						if(x == 1){
							controleInOut.erase(it);
							cout << "Foi Devolvido!" << endl;
							break;
						}
						else{
							cout << "Não devolvido" << endl;
							break;
						}
					}
				}
				break;
			}
			default:{
				cout << "Opção inválida!!!" << endl;
				break;
			}
		}
	}
}

void Menu(){
	vector<Livro*> acervo;
	vector<Pessoa*> listCadastro;
	vector<Emprestimo*> controleInOut;
	cout << "\tMENU\t" << endl;
	int op = 0;
	while(op != 5){
		cout << "\t [1] - Acervo" << endl << "\t [2] - Cliente" << endl << "\t [3] - Emprestimo ou Devolução" << endl << "\t [4] - Imprimir  "<< endl << "\t [5] - Sair: " << endl << endl << endl;
		cin >> op;
		
		switch(op){
			case 1:{
				CadastroLivro(acervo);
				break;
			}
			case 2:{
				CadastroPessoa(listCadastro);
				break;
			}
			case 3:{
				CadastroEmprestimo(controleInOut, acervo, listCadastro);
				break;
			}
			case 4:{
				int op = 0;
				while(op != 4){
					cout << "Escolha: " << endl;
					cout << "[1] - Imprimir acervo" << endl << "[2] - Imprimir cadastros" << endl;
					cout << "[3] - Imprimir emprestimos" << endl << "[4] - Sair: ";				
					cin >> op;
					cin.clear();
					fflush(stdin);
					cout << endl;
					
					switch(op){
						case 1:{
							Livro imprime;	
							imprime.imprime(acervo);
							break;
						}
						case 2:{
							Pessoa imprime;
							imprime.imprimePessoa(listCadastro);
							break;
						}
						case 3:{
							break;
						}
						case 4:{
							break;
						}
						default:{
							cout << "Opção invalida!!!" << endl << endl;
							break;
						}
					}
				}
				break;
			}
			case 5:{
				cout << "Tchau" << endl << endl;
				break;
			}
			default:{
				cout << "Opção invalida!" << endl << endl;
				break;
			}
		}
	}
}

int main(int argc, char** argv){
	setlocale(LC_ALL, "");

	cout << endl << "\tBiblioteca\t" << endl;
	Menu();
	
	return 0;
}

