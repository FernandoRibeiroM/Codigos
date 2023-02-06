/*6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida
deverá ser impresso o maior e o menor elemento do vetor.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero[10], i, maior, menor;
    printf ("Digite um numero: ");
    scanf  ("%d", &numero[0]);
    maior = numero[0];
    menor = numero[0];
    for (i = 1; i < 10; i++)
    {
        printf ("Digite um numero: ");
        scanf  ("%d", &numero[i]);
        if (numero[i] > maior)
        {
           maior = numero[i];
        }
        if (numero[i] < menor)
        {
            menor = numero[i];
        }
    } 
    system("pause");
    system("cls");
    printf ("%d e o maior.\n%d e o menor.\n", maior, menor);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}