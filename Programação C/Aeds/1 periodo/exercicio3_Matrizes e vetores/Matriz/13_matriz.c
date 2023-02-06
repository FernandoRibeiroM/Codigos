/*13. Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme

a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os ele-
mentos acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[4][4], i, j, num = 1;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            v[i][j] = num;
            num++;
        }
    }
    printf("A matriz:\n\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf(" %d", v[i][j]);
        }
        printf("\n");
    }
    printf("\nA matriz triangular inferior resultante:\n\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i < j)
            {
                v[i][j] = 0;
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