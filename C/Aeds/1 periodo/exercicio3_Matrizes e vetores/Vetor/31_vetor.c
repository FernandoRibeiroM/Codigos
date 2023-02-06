/*31. Fac ̧a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a uniao ̃
entre os 2 vetores anteriores, ou seja, que contem os n  ́ umeros dos dois vetores. N  ́ ao ̃
deve conter numeros repetidos.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
int v[10], v2[10], v3[20], i, j, aux = 0, max = 0;
    printf("Primeiro vetor:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Insira o valor do %do. elemento do vetor: ", i + 1);
        scanf("%d", &v[i]);
        if (max == 0)
        {
            v3[max] = v[i];
            max++;
        }
        else
        {
            aux = 0;
            for (j = 0; j < i; j++)
            {
                if (v[i] == v3[j])
                {
                    aux++;
                }
            }
            if (aux == 0)
            {
                v3[max] = v[i];
                max++;
            }
        }
    }
    printf("\nSegundo vetor:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Insira o valor do %do. elemento do vetor: ", i + 1);
        scanf("%d", &v2[i]);
        aux = 0;
        for (j = 0; j < 10; j++)
        {
            if (v2[i] == v3[j])
            {
                aux++;
            }
        }
        if (aux == 0)
        {
            v3[max] = v2[i];
            max++;
        }
    }
    printf("A uniao dos vetores e: ");
    for (i = 0; i < max; i++)
    {
        printf(" %d\n", v3[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}