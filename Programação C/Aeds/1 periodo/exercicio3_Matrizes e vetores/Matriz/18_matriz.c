/*18. Fac ̧a um programa que permita ao usuario entrar com uma matriz de 3 x 3 n  ́ umeros  ́
inteiros. Em seguida, gere um array unidimensional pela soma dos numeros de cada  ́
coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:
5 -8 10
1 2 15
25 10 7
Vai gerar um vetor, onde cada posic ̧ao ̃ e a soma das colunas da matriz. A primeira  ́
posic ̧ao ser  ̃ a 5 + 1 + 25, e assim por diante:  ́
31 4 3*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[3][3], soma[3] = {0, 0, 0}, i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &v[i][j]);
            soma[i] += v[i][j];
        }
    }
    printf("\nVetor contendo os elementos como soma das calunas da matriz inserida: ");
    for (i = 0; i < 3; i++)
    {
        printf(" %d\n", soma[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}