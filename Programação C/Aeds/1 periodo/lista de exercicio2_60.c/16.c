/*16. Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números
ímpares de 1 até N em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i = numero; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}