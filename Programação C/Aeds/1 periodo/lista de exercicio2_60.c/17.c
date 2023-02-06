/*17. Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros
números naturais.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, numero, soma = 0;
    printf("Digite um numero:");
    scanf("%d", &numero);
    for (i = 0; i <= numero; i++)
    {
        soma += i;
    }
    printf("A soma e: %d\n", soma);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}