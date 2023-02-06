/*5. Faça um programa que receba um número inteiro e verifique se este número é par
ou ímpar.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int numero;
    float mod;
    printf("Digite um numero inteiro:");
    scanf("%d", &numero);
    mod = numero % 2;
    if (mod == 0)
    {
        printf("O numero %d e par\n", numero);
    }
    else
    {
        printf("o numero %d e impar\n", numero);
    }
    system("pause");
    system ("cls");
    printf ("By: Fernando Ribeiro Martins");
    return 0;
}