/*37. Considere um vetor A com 11 elementos onde A1 < A2 < · · · < A6 > A7 > A8 >
· · · > A11, ou seja, esta ordenado em ordem crescente at  ́ e o sexto elemento, e a partir  ́
desse elemento esta ordenado em ordem decrescente. Dado o vetor da quest  ́ ao anterior,  ̃
proponha um algoritmo para ordenar os elementos.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[11], i, j, aux;
    for (i = 0; i < 6; i++)
    {
        printf("Insira o %do. valor do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                if (i != 6)
                {
                    v[10 - j] = v[j];
                }
            }
        }
    }
    printf("O vetor ordenado ate o sexto elemento, e decrescente ate o decimo primeiro:\n");
    for (i = 0; i < 11; i++)
    {
        printf(" %d\n", v[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}