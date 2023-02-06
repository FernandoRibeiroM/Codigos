/*25. Fac ̧a um programa que preencha um vetor de tamanho 100 com os 100 primeiros natu-
rais que nao s  ̃ ao m  ̃ ultiplos de 7 ou que terminam com 7.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[100], i, j;
    for (i = 0; i < 100; i++)
    {
        vet[i] = 0;
    }
    for (j = 1; j <= 100; j++)
    {
        if (j % 7 != 0 && j % 10 != 7)
        {
            vet[j] = j;
        }
        if (vet[j] != 0)
        {
            printf("%d ", vet[j]);
        }
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}