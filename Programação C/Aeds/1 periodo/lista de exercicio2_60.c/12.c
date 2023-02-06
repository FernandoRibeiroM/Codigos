/*12. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, numero;
    printf("Quantos numeros deseja saber: ");
    scanf("%d", &numero);
    for (i = numero; i >= 0; i--)
    {
        printf("%d\n", i);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}