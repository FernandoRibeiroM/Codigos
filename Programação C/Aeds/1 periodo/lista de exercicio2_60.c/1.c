/*1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
números maiores que 0.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    for (i = 1; i < 6; i++)
    {
        printf("%d = %d\n", i, i * 3);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}