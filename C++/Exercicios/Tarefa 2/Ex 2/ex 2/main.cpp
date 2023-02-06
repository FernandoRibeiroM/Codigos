#include "Agenda.h"

int Cheia(Agenda *agenda[][30], int linha);

int CadastrarAgenda(Agenda *agenda[][30], int linha);

void Imprimir_Agenda(Agenda *agenda[][30], int Numero_agenda);

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	Agenda *agenda[10][30];
	for(int Numero_agenda = 0; Numero_agenda < 10; Numero_agenda++){
		for(int contato = 0; contato < 30; contato ++){
			agenda[Numero_agenda][contato] = new Agenda();
			agenda[Numero_agenda][contato] = NULL;
		}
	}	
	int cadastro = CadastrarAgenda(agenda, 10);
	cout << "Imprimir" << endl;
	cout << "[1]-Todas as Agendas" << endl << "[2]-Apenas uma das Agenas" << endl;
	int opcaoImprime;
	cin >> opcaoImprime;
	cin.clear();
	fflush(stdin);
	if(opcaoImprime == 1){
		Imprimir_Agenda(agenda, 10);
	}
	
	else if(opcaoImprime == 2){
		cout << "Qual Agenda deseja imprimir?" << endl;
		cout << "Escolha entre 0 e 9: " << endl;
		int imprime;
		cin >> imprime;
		cin.clear();
		fflush(stdin);
		Imprimir_Agenda(agenda, imprime);
	}
	
	return 0;
}

int Cheia(Agenda *agenda[][30], int linha){
	
	for(int Numero_agenda = 0; Numero_agenda < linha; Numero_agenda++){
		if(agenda[Numero_agenda][29] != NULL){
			return 1;
		}
	}
	return -1;
}

int CadastrarAgenda(Agenda *agenda[][30], int linha){
	int cheia = Cheia(agenda,linha);
	if(cheia == 1){
		cout << "\tCHEIA!!\t" << endl << endl;
	}
	else{
		cout << endl << "\tOlá!!\t" << endl << endl;
		for(int Numero_agenda  = 0; Numero_agenda < linha; agenda++){
			for(int contato = 0; contato < 30; contato ++){
				
				if(agenda[Numero_agenda][contato] == NULL){
					Contatos *newContato = new Contatos();
					cout << "Nome: ";
					string nomeContato;
					getline(cin, nomeContato);
					newContato->setNomeContato(nomeContato);
					cin.clear();
					fflush(stdin);
					cout << "Numero: ";
					string telefoneContato;
					getline(cin, telefoneContato);
					newContato->setTelefoneContato(telefoneContato);
					cin.clear();
					fflush(stdin);

					Agenda *newAgenda = new Agenda();
					newAgenda->setContatos(newContato);

					agenda[Numero_agenda][contato] = newAgenda;
					
					cout << "Quer cadastrar mais numeros?" << endl;
					cout << "[1] - Sim" << endl << "[0] - Não" << endl;
					int opcao;
					cin >> opcao;
					cin.clear();
					fflush(stdin);
					if(opcao == 0){
						return 1;
					}
				}
			}
		}
	}
}

void Imprimir_Agenda(Agenda *agenda[][30], int Numero_agenda){
	int contato = 0;
	if(Numero_agenda < 10){	
		do{
			Agenda *newAgenda = agenda[Numero_agenda][contato];
			cout << "Nome: " << newAgenda->getContatos()->getNomeContato() << endl;
			cout << "Tefefone: " << newAgenda->getContatos()->getTelefoneContato() << endl << endl;
			contato++;
		}while(agenda[Numero_agenda][contato] != NULL);
	}
	else{
		for(int imprimir_agenda = 0; imprimir_agenda < Numero_agenda; imprimir_agenda++){
			for(int contato = 0; contato < 30; contato++){
			 	Agenda *newAgenda = agenda[imprimir_agenda][contato];
				cout << "Nome: " << newAgenda->getContatos()->getNomeContato() << endl;
				cout << "Tefefone: " << newAgenda->getContatos()->getTelefoneContato() << endl;
			}
			cout << endl;
		}
	}
}

