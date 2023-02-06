/*3a Questão
Faça um programa que mostre os elementos diagonais A[i,i] de uma matriz. Uma estrutura de
repetição deve ser utilizada para percorrer as linhas e colunas.
Exemplo de saída:
Digite o elemento da linha 0 e coluna 0: 5
Digite o elemento da linha 0 e coluna 1: 7
Digite o elemento da linha 0 e coluna 2: 3
Digite o elemento da linha 0 e coluna 3: 6
Digite o elemento da linha 1 e coluna 0: 3
Digite o elemento da linha 1 e coluna 1: 4
Digite o elemento da linha 1 e coluna 2: 6
Digite o elemento da linha 1 e coluna 3: 3
Digite o elemento da linha 2 e coluna 0: 8
Digite o elemento da linha 2 e coluna 1: 3
Digite o elemento da linha 2 e coluna 2: 2
Digite o elemento da linha 2 e coluna 3: 6
Digite o elemento da linha 3 e coluna 0: 5
Digite o elemento da linha 3 e coluna 1: 3
Digite o elemento da linha 3 e coluna 2: 7
Digite o elemento da linha 3 e coluna 3: 3
Os elementos da diagonal são 5 4 2 3*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matriz[4][4], i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
        printf ("Digite o valor do [%d][%d]: ", i + 1, j + 1);
        scanf ("%d", &matriz[i][j]);
        }
        system ("pause");
        system ("cls");
    }
    printf ("Os elementons da diagonal sao: \n");
    for (i = 0; i < 4; i++)
    {
            printf ("%d\n", matriz[i][i]);
    }


    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}