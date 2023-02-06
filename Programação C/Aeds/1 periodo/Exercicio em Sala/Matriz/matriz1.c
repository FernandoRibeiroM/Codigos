/*Dado duas matrizes reais de dimensão 2 x 3 fazer um programa para
calcular a soma delas*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matriz[2][3], matriz2[2][3], i = 0, j = 0, soma = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor de A[%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma = soma + matriz[i][j];
        }
    }
    system("pause");
    system("cls");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor de B[%d] [%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Soma = %d\n", matriz[i][j] + matriz2[i][j]);
        }
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}