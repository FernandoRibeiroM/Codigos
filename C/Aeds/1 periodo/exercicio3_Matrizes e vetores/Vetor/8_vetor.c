/*8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores
lidos na ordem inversa.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero[6], i;
    for (i = 0; i < 6; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
    }
    system("pause");
    system("cls");
    for (i = 5; i >= 0; i--)
    {
        printf("Numero[%d] e: %d\n", i, numero[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}