/*5. Leia uma matriz 5 x 5. Leia tambem um valor  ́ X. O programa devera fazer uma busca  ́
desse valor na matriz e, ao final, escrever a localizac ̧ao (linha e coluna) ou uma mensa-  ̃
gem de “nao encontrado”.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[5][5], i, j, x, aux = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Insira um valor na posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &v[i][j]);
        }
    }
    printf("\nInsira um numero: ");
    scanf("%d", &x);
    printf("As respectivas posicoes dos elementos da matriz igual a %d:", x);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (v[i][j] == x)
            {
                printf("\n[%d][%d]", i + 1, j + 1);
                aux++;
            }
        }
        printf("\n");
    }
    if (aux == 0)
    {
        printf("Nenhum numero igual a %d encontrado!", x);
    }
    printf("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}