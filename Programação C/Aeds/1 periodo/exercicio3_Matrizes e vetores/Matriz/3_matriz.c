/*3. Fac ̧a um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
coluna de cada elemento. Em seguida, imprima na tela a matriz.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[4][4], i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            v[i][j] = i * j;
        }
    }
    printf("A matriz com valores dos elemtentos igual ao produto do valor da linha e coluna:\n\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
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