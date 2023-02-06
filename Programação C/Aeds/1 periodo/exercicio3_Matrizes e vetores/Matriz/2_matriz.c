/*2. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[5][5], i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = 0;
            }
        }
    }
    printf("A matriz com valores da diagonal principal igual a 1 e restantes igual a 0:\n\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf(" %d", v[i][j]);
        }
        printf("\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}