/*23. Fac ̧a um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A2
.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, opcao;
    int a[3][3], b[3][3];
    printf("Matriz A\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira o valor do elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatriz B = A ^ 2\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[i][j] = a[i][j] * a[i][j];
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}