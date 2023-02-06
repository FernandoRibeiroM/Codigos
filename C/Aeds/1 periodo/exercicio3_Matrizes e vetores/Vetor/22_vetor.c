/*22. Fac ̧a um programa que leia dois vetores de 10 posic ̧oes e calcule outro vetor contendo,  ̃
nas posic ̧oes pares os valores do primeiro e nas posic ̧  ̃ oes impares os valores do se-  ̃
gundo.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetorA[10], vetorB[10], vetorC[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Insira o valor do vetorA[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("Insira o valor do vetorB[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }
    for (i = 0; i < 10; i += 2)
    {
        vetorC[i] = vetorA[i];
    }
    for (i = 1; i < 10; i += 2)
    {
        vetorC[i] = vetorB[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetorC[i]);
    }
    printf("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}