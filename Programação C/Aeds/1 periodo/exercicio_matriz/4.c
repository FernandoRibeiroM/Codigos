/*4a Questão
Faça um programa que multiplique duas matrizes. Uma estrutura de repetição deve ser utilizada para
percorrer as linhas e colunas.
Exemplo de saída:
Digite o elemento da linha 0 e coluna 0 da matriz A: 5
Digite o elemento da linha 0 e coluna 1 da matriz A: 7
Digite o elemento da linha 0 e coluna 2 da matriz A: 3
Digite o elemento da linha 1 e coluna 0 da matriz A: 3
Digite o elemento da linha 1 e coluna 1 da matriz A: 4
Digite o elemento da linha 1 e coluna 2 da matriz A: 6

Digite o elemento da linha 2 e coluna 0 da matriz A: 8
Digite o elemento da linha 2 e coluna 1 da matriz A: 3
Digite o elemento da linha 2 e coluna 2 da matriz A: 2
Digite o elemento da linha 0 e coluna 0 da matriz B: 5
Digite o elemento da linha 0 e coluna 1 da matriz B: 7
Digite o elemento da linha 0 e coluna 2 da matriz B: 3
Digite o elemento da linha 1 e coluna 0 da matriz B: 3
Digite o elemento da linha 1 e coluna 1 da matriz B: 4
Digite o elemento da linha 1 e coluna 2 da matriz B: 6
Digite o elemento da linha 2 e coluna 0 da matriz B: 8
Digite o elemento da linha 2 e coluna 1 da matriz B: 3
Digite o elemento da linha 2 e coluna 2 da matriz B: 2
A matriz C = A * B é igual a:
70 72 63
75 55 45
65 74 46*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrizA[3][3], matrizB[3][3], matrizC[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento [%d][%d] A: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento [%d][%d] B: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    int k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                matrizC[i][j] = matrizC[i][j] + (matrizA[i][k] * matrizB[k][j]);
            }
        }
    }
    system ("pause");
    system ("cls");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}