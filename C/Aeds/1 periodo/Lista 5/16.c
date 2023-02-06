#include <stdio.h>

int somar(int *n);

int main()
{
    int vet[3][3], i, j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Insira o [%d][%d] elemento da matriz: ", i + 1, j + 1);
            scanf("%d", &vet[i][j]);
        }
    }
    int soma = somar(*vet);
    printf("\nA soma dos elementos que estao abaixo da diagonal principal: %d.\n", soma);
}

int somar(int *n)
{
    int soma = 0, cont = 0, i, j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i > j)
            {
                soma += n[cont];
            }
            cont++;
        }
    }
    return soma;
}