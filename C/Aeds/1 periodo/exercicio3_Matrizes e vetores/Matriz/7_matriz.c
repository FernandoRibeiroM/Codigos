/*7. Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos sao da forma:  ̃
A[i][j] = 2i + 7j − 2 se i < j;
A[i][j] = 3i

2 − 1 se i = j;

A[i][j] = 4i
3 − 5j
2 + 1 se i > j.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[10][10], i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i < j)
            {
                v[i][j] = 2 * i + 7 * j - 2;
            }
            else if (i == j)
            {
                v[i][j] = (3 * i) * (3 * i) - 1;
            }
            else if (i > j)
            {
                v[i][j] = ((4 * i) * (4 * i) * (4 * i)) - ((5 * j) * (5 * j));
            }
            printf(" %d", v[i][j]);
        }
        printf("\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}