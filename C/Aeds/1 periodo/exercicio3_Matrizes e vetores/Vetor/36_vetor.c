/*36. Leia um vetor com 10 numeros reais, ordene os elementos deste vetor, e no final escreva  ́
os elementos do vetor ordenado.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[10], i, j, aux;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %do. valor do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    printf("O vetor ordenado:\n");
    for (i = 0; i < 10; i++)
    {
        printf(" %d\n", v[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}