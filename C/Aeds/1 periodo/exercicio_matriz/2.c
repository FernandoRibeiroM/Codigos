/*2a Questão
Dada uma matriz A[4x4], imprimir o número de linhas e o número de colunas nulas (com apenas 0s)
da matriz. Uma estrutura de repetição deve ser utilizada para percorrer as linhas e colunas.
Exemplo de saída:
Digite o elemento da linha 0 e coluna 0: 0
Digite o elemento da linha 0 e coluna 1: 0
Digite o elemento da linha 0 e coluna 2: 0
Digite o elemento da linha 0 e coluna 3: 0
Digite o elemento da linha 1 e coluna 0: 3
Digite o elemento da linha 1 e coluna 1: 4
Digite o elemento da linha 1 e coluna 2: 0

Digite o elemento da linha 1 e coluna 3: 3
Digite o elemento da linha 2 e coluna 0: 0
Digite o elemento da linha 2 e coluna 1: 0
Digite o elemento da linha 2 e coluna 2: 0
Digite o elemento da linha 2 e coluna 3: 0
Digite o elemento da linha 3 e coluna 0: 5
Digite o elemento da linha 3 e coluna 1: 3
Digite o elemento da linha 3 e coluna 2: 0
Digite o elemento da linha 3 e coluna 3: 3
Digite o elemento da linha 3 e coluna 4: 4
Esta matriz tem 2 linha(s) nula(s)
Esta matriz tem 1 coluna(s) nula(s)8*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int matriz[4][4], soma_linha[4] = {0, 0, 0, 0}, soma_coluna[4] = {0, 0, 0, 0}, i, j, nulol = 0, nuloc = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o valor do [%d] [%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            soma_linha[i] = soma_linha[i] + matriz[i][j];
        }
        if (i == 0)
        {
            soma_coluna[0] += matriz[i][0];
        }
        else if (i == 1)
        {
            soma_coluna[1] += matriz[i][1];
        }
        else if (i == 2)
        {
            soma_coluna[2] += matriz[i][2];
        }
        else if (i == 3)
        {
            soma_coluna[3] += matriz[i][3];
        }
    }
    for (j = 0; j < 4; j++)
    {
        if (soma_linha[i] == 0)
        {
            nulol++;
        }
        if (soma_coluna[i] == 0)
        {
            nuloc++;
        }
    }
    printf("Existem %d linhas nulas\nExistem %d colunas nulas\n", nulol, nuloc);

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}
