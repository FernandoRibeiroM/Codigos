/*2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores
lidos.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero[6], i;
    for (i = 0; i < 6; i++)
    {
        printf ("Digite o %d numero: ", i + 1);
        scanf  ("%d", &numero[i]);
    }
    system("pause");
    system("cls");
    for (i = 0; i < 6; i++)
    {
        printf ("%d: %d\n", i + 1, numero[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}