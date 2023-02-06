/*Faça um programa que leia um nome, e em seguida calcule e retorne quantas letras esse nome tem. Obs : não use a função strlen;*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char nome[20];
    int i, contador = -1;
    setbuf(stdin, NULL);
    printf("Digite seu nome:");
    fgets(nome, 20, stdin);
    for (i = 0; nome[i] != '\0'; i++)
    {
        contador++;
    }
    printf("Tem %d letras.\n", contador);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}