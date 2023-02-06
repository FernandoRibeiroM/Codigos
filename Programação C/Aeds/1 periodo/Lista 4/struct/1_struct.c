/*1. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene os dados em uma estrutura.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};
int main(){
    struct pessoa x;
    printf("Insira seu nome: ");
    setbuf(stdin, NULL);
    gets(x.nome);
    printf("Insira sua idade: ");
    scanf("%d", &x.idade);
    printf("Insira sua rua: ");
    setbuf(stdin, NULL);
    gets(x.rua);
    printf("Insira o numero da residencia: ");
    scanf("%d", &x.numero);
    printf("\nDados inseridos:\n\nNome: %s\nIdade: %d\nRua: %s\nNumero: %d\n", x.nome, x.idade, x.rua, x.numero);
    return 0;
}