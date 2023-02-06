/*1. Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome
da pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char nome[20], sexo[10], s;
    int idade;
    printf("Insira seu nome: ");
    setbuf(stdin, NULL);
    gets(nome);
    printf("Insira seu sexo, feminino ou masculino: ");
    setbuf(stdin, NULL);
    gets(nome);
    s = tolower(nome[0]);
    printf("Insira a idade: ");
    scanf("%d", &idade);
    while(idade < 0){
        printf("Valor invalido! Insira novamente: ");
        scanf("%d", &idade);
    }
    if(idade < 25 && s == 'f'){
        printf("\nAceita!\n");
    }
    else{
        printf("\nNao aceita!\n");
    }
    return 0;
}
