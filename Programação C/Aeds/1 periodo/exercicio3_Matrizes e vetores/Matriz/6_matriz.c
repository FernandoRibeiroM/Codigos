/*6. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posic ̧ao ̃
das matrizes lidas.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[4][4], v2[4][4], v3[4][4], i, j;
    printf("Primeira matriz!\n\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Insira um valor na posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &v[i][j]);
            v3[i][j] = v[i][j];
        }
    }
    printf("Segunda matriz!\n\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Insira um valor na posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &v2[i][j]);

            if (v2[i][j] > v3[i][j])
            {
                v3[i][j] = v2[i][j];
            }
        }
    }
    printf("Matriz contendo o maior valor de cada elemtento das matrizes lidas!\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf(" %d\n", v3[i][j]);
        }
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}