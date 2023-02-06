/*Faça um programa que receba uma palavra e a imprima de trás para frente;*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char palavra[20];
    int i;
    setbuf (stdin, NULL);
    printf ("Digite uma palavra: ");
    gets  (palavra);
    system("cls");
    for (i = strlen(palavra); i != -1; i--)
    {
        printf ("%c",palavra[i]);
    }
    printf ("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}