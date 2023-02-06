/*1. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[4][4], i, j, cont = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Insira um valor na posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &v[i][j]);
            if (v[i][j] > 10)
            {
                cont++;
            }
        }
    }
    printf("\n%d dos numeros da matriz sao maiores que 10, sao eles:", cont);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (v[i][j] > 10)
            {
                printf(" %d", v[i][j]);
            }
        }
    }
    printf ("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}