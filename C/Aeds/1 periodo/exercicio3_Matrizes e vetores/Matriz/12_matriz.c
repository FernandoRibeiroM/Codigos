/*12. Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira o elemento [%d][%d]: ", i, j);
            scanf("%d", &v[i][j]);
        }
    }
    printf("A matriz transposta:\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", v[j][i]);
        }
        printf("\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}