/*7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posição que ele se encontra.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero[10], i, maior, posicao = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero[0]);
    maior = numero[0];
    for (i = 1; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
        if (numero[i] > maior)
        {
            maior = numero[i];
            posicao = i;
        }
    }
    system("pause");
    system("cls");
    for (i = 0; i < 10; i++)
    {
        printf("Numero[%d] e: %d\n", i, numero[i]);
    }
    printf("%d e o maior, ele esta na posicao %d.\n\n", maior, posicao);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}