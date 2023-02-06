/*28. Leia 10 numeros inteiros e armazene em um vetor  ́ v. Crie dois novos vetores v1 e v2.
Copie os valores  ́ımpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 tem no m ˆ aximo 10 elementos, mas nem todos os elementos s  ́ ao ̃
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetorA[10], vetorB[10], vetorC[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Digiite o valor do vetorA[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }
    printf("\nElementos utilizados de v1: ");
    for (i = 0; i < 10; i++)
    {
        if (vetorA[i] % 2 != 0)
        {
            vetorB[i] = vetorA[i];
            printf("%d ", i);
        }
    }
    printf("\nElementos utilizados de v2: ");
    for (i = 0; i < 10; i++)
    {
        if (vetorA[i] % 2 == 0)
        {
            vetorC[i] = vetorA[i];
            printf("%d ", i);
        }
    }
    printf("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}