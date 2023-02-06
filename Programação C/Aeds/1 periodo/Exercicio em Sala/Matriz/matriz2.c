/*Leia uma matriz de 3 x 3 elementos inteiros e calcule a soma dos seus
elementos*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matriz[3][3], i = 0, j = 0, soma = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf ("Digite o valor de [%d] [%d]: ", i, j);
            scanf  ("%d", &matriz[i][j]);
            soma = soma + matriz[i][j];
        }
    }
    printf ("soma e: %d\n", soma);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}
