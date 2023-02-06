/*22. Fac ̧a um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A ∗ B.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, opcao;
    int a[3][3], b[3][3], c[3][3];
    printf("Matriz A\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira o valor do elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
            c[i][j] = a[i][j];
        }
    }
    printf("\nMatriz B\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira o valor do elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
            c[i][j] *= b[i][j];
        }
    }
    printf("\nMatriz C = A * B\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", c[i][j]);
        }
        printf("\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}