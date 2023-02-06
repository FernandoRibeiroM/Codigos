/*21. Fac ̧a um programa que receba do usuario dois vetores,  ́ A e B, com 10 numeros inteiros  ́
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.*/
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
    for (i = 0; i < 10; i++)
    {
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("%d ", vetorC[i]);
    }
    printf("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}