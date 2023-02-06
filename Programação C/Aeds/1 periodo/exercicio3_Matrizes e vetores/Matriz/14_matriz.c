/*14. Fac ̧a um programa para gerar automaticamente numeros entre 0 e 99 de uma cartela de  ́
bingo. Sabendo que cada cartela devera conter 5 linhas de 5 n  ́ umeros, gere estes dados  ́
de modo a nao ter n  ̃ umeros repetidos dentro das cartelas. O programa deve exibir na  ́
tela a cartela gerada.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int v[5][5], i, j;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            v[i][j] = rand() % 99;
        }
    }
    printf("A cartela:\n\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf(" %d", v[i][j]);
        }
        printf("\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}