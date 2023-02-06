#include "Livro.h"

string Livro::getNomeLivro(){
	return nomeLivro;
}

string Livro::getAutorLivro(){
	return autorLivro;
}

string Livro::getEditora(){
	return editora;
}

string Livro::getVolume(){
	return volume;
}

void Livro::setNomeLivro(string nomeLivro){
	this->nomeLivro = nomeLivro;
}

void Livro::setAutorLivro(string autorLivro){
	this->autorLivro = autorLivro;
}

void Livro::setEditora(string editora){
	this->editora = editora;
}

void Livro::setVolume(string volume){
	this->volume = volume;
}

void Livro::imprime(vector<Livro*> acervo){
	cout << "********Acervo********" << endl;
	for(vector<Livro*>::iterator it = acervo.begin(); it != acervo.end(); it++){
		
		cout << "Titulo: " << (*it)->getNomeLivro() << endl;
		cout << "Autor: " << (*it)->getAutorLivro() << endl;
		cout << "Editora: " << (*it)->getEditora() << endl;
		cout << "Volume: " << (*it)->getVolume() << endl << endl;
	}
}
