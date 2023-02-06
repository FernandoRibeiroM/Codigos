#include <iostream>
#include "Contatos.h"
#include "pessoaFisica.h"
#include "pessoaJuridica.h"
#include <locale>
#include <vector>

using namespace std;

void Dados_contatos(Contatos *contatos);
void Dados_PessoaFisica(pessoaFisica *pessoaFisica);
void Dados_PessoaJurid(pessoaJuridica *pessoaJuridica);
void Cadastrar_Contatos(vector<Contatos *> &listContatos);
Contatos *Buscar_Contato(vector<Contatos *> &listContatos);
void Informacoes_Contato(vector<Contatos *> &listContatos);
bool Remover_Contato(vector<Contatos *> &listContatos);

int main(int argc, char** argv) {
	setlocale(LC_ALL, " ");
	
	int opcao;
	vector<Contatos *>listContatos;
	cout << endl << "\AGENDA DE CONTATOS\t" << endl;
	do{
		do{
		cout << endl << "\tCadastro de contas\t" << endl << endl << endl << "[1]Adicionar contato" << endl << "[2]Remover contato" << endl << "[3]Pesquisar contato" << endl << "[4]Ordenar contatos" << endl << endl << endl << "Escolha alguma opÃ§Ã£o: ";
		cin >> opcao;
		cin.clear();
		fflush(stdin);
		if(opcao < 1 || opcao > 5){
			cout << endl << "Opção invalida!!!" << endl << endl;
		}
	}while(opcao < 1 || opcao > 4);
	
	switch(opcao){
		case 1:
			Cadastrar_Contatos(listContatos);
			break;
		case 2:
			if(!listContatos.empty()){
				Remover_Contato(listContatos);
			}
			else{
				cout << endl << "Até o momento nenhum contato foi criado!" << endl;
			} 
			break;
		case 3:
			if (!listContatos.empty()){
				Informacoes_Contato(listContatos);
			}                                
			
			else{
				cout << endl << "Até o momento nenhum contato foi criado!" << endl;
			}          
		case 4:
			if (!listContatos.empty()){
				//metodoOrdenar(listContatos);
			}
			
			else{
				cout << endl << "Até o momento nenhum contato foi criado!" << endl;
			}   
			break;
	}
	}while(opcao != 4);
	
	return 0;
}

void Dados_contatos(Contatos *contatos){
	
	cout << endl << "Nome: ";
	string nome;
	getline(cin, nome);
	contatos->setnome(nome);
	cin.clear();
	fflush(stdin);
	cout << endl << "Email: ";
	string email;
	getline(cin, email);
	contatos->setemail(email);
	cin.clear();
	fflush(stdin);
	cout << endl << "Endereço: ";
	string endereco;
	getline(cin, endereco);
	contatos->setendereco(endereco);
	cin.clear();
	fflush(stdin);
}

void Dados_PessoaFisica(pessoaFisica *pessoaFisica){
	
	Dados_contatos(pessoaFisica);
	cout << endl << "Cpf: ";
	string cpf;
	getline(cin, cpf);
	pessoaFisica->setcpf(cpf);
	cin.clear();
	fflush(stdin);
	cout << endl << "Data de nascimento: ";
	string dataNascimento;
	getline(cin,dataNascimento);
	pessoaFisica->setdataNascimento(dataNascimento);
	cin.clear();
	fflush(stdin);
	cout << endl << "Estado civil: ";
	string estadoCivil;
	getline(cin,estadoCivil);
	pessoaFisica->setestadoCivil(estadoCivil);
	cin.clear();
	fflush(stdin);
}

void Dados_PessoaJurid(pessoaJuridica *pessoaJuridica){
	
	Dados_contatos(pessoaJuridica);
	cout << endl << "Cnpj: ";
	string cnpj;
	getline(cin, cnpj);
	pessoaJuridica->setcnpj(cnpj);
	cin.clear();
	fflush(stdin);
	
	cout << endl << "Inscrição estadual: ";
	string inscEstadual;
	getline(cin, inscEstadual);
	pessoaJuridica->setinscEstadual(inscEstadual);
	cin.clear();
	fflush(stdin);
	
	cout << endl << "Raz o social: ";
	string razaoSocial;
	getline(cin,razaoSocial);
	pessoaJuridica->setrazaoSocial(razaoSocial);
	cin.clear();
	fflush(stdin);
}

void Cadastrar_Contatos(vector<Contatos *> &listContatos){
	int opcao;
	
	do{
		cout << endl << "\Cadastro de novos contato\t" << endl << endl;
		cout << endl << "[1]Pessoa fisica" << endl << "[2]Pessoa juridica" << endl << endl;
		cin >> opcao;
		cin.clear();
		fflush(stdin);
		
		if(opcao < 1 || opcao > 2){
			cout << endl << "Opção invalida!!!" << endl << endl;
		}
		
		switch(opcao){
			case 1:{
				cout << endl << "\tCadastro de pessoa fisica\t" << endl;
				pessoaFisica *pf = new pessoaFisica();
				Dados_PessoaFisica(pf);
				listContatos.push_back(pf);
				break;
			}
			case 2:{
				cout << endl << "\tCadastro de pessoa juridica\t" << endl;
				pessoaJuridica *pj = new pessoaJuridica();
				Dados_PessoaJurid(pj);
				listContatos.push_back(pj);
				break;
			}
		}
	}while(opcao < 1 || opcao > 2);
	
	cout << endl << "Cadastrado!!!" << endl;
}

Contatos *Buscar_Contato(vector<Contatos *> &listContatos){
	int op;
	
	do{
	cout << endl << "Deseja procurar por:" << endl << "[1]NOME" << endl << "[2]CPF" << endl << "[3]CNPJ" << endl;
	cin >> op;
	cin.clear();
	fflush(stdin);
		switch (op)
		{
			case 1:{
				cout << endl << "Nome que deseja buscar: " << endl;
				string nome;
				getline(cin, nome);
				cin.clear();
				fflush(stdin);
				
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){
					if(nome == (*it)->getnome()){
						return (*it);
					}
				}
				return NULL;
			break;
			}
			case 2:{
				cout << endl << "CPF que deseja buscar: " << endl;
				string cpf;
				getline(cin, cpf);
				cin.clear();
				fflush(stdin);
				
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){
					if(dynamic_cast<pessoaFisica*>(*it)){
						pessoaFisica *pf = dynamic_cast<pessoaFisica*>(*it);
						if(cpf == pf->getcpf()){
							return (*it);
						}
					}
				}
				return NULL;
			break;
			}
			case 3:{
				cout << endl << "CNPJ que deseja buscar: " << endl;
				string cnpj;
				getline(cin, cnpj);
				cin.clear();
				fflush(stdin);
				
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){

					if(dynamic_cast<pessoaJuridica*>(*it)){
						pessoaJuridica *pj = dynamic_cast<pessoaJuridica*>(*it);
						if(cnpj == (pj)->getcnpj()){
							return (*it);
						}
					}
				}
				return NULL;
			break;            
			}
		}
	}while(op < 1 || op > 3);

}

void Informacoes_Contato(vector<Contatos *> &listContatos){
	Contatos *contatos = Buscar_Contato(listContatos);
	if(contatos != NULL){
		if (dynamic_cast < pessoaFisica* > (contatos)){
			cout << "Pessoa física." << endl;
			pessoaFisica *pf = dynamic_cast < pessoaFisica* > (contatos);
		}
		else if(dynamic_cast < pessoaJuridica* > (contatos)){
			cout << "Pessoa Jurídica." << endl;
			pessoaJuridica *pj = dynamic_cast < pessoaJuridica* > (contatos);
		}
		contatos->imprimirDados();
	}
	else{
		cout << "Este contato não foi encontrado!" << endl;
	}
}

bool Remover_Contato(vector<Contatos *> &listContatos){
	Contatos *contato;
	int op;
	do{
	cout << endl << "Deseja remover por:" << endl << "[1]NOME" << endl << "[2]CPF" << endl << "[3]CNPJ" << endl;
	cin >> op;
	cin.clear();
	fflush(stdin);
		switch (op)
		{
			case 1:{
				cout << endl << "Nome que deseja remover: " << endl;
				string nome;
				getline(cin, nome);
				cin.clear();
				fflush(stdin);
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){
					if(nome == (*it)->getnome()){
						listContatos.erase(it);
						return true;
					}
				}
				break;
			}
			case 2:{
				cout << endl << "CPF que deseja remover: " << endl;
				string cpf;
				getline(cin, cpf);
				cin.clear();
				fflush(stdin);
				
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){
					if(dynamic_cast<pessoaFisica*>(contato)){
						pessoaFisica *pf = dynamic_cast<pessoaFisica*>(contato);
						if((cpf == (pf)->getcpf())){
							listContatos.erase(it);
							return true;
						}
					}
				}
				break;
			}
			case 3:{
				cout << endl << "CNPJ que deseja remover: " << endl;
				string cnpj;
				getline(cin, cnpj);
				cin.clear();
				fflush(stdin);
				
				for(vector<Contatos *>::iterator it = listContatos.begin();it != listContatos.end();it++){
					if(dynamic_cast<pessoaJuridica*>(contato)){
						pessoaJuridica *pj = dynamic_cast<pessoaJuridica*>(contato);
						if((cnpj == (pj)->getcnpj())){
							listContatos.erase(it);
							return true;
						}
					}
				}
				break;            
			}	
		}
	}while(op < 1 || op > 3);
	return NULL;
}

