/*20. Fac ̧a programa que leia uma matriz 3 x 6 com valores reais.
(a) Imprima a soma de todos os elementos das colunas  ́ımpares.
(b) Imprima a media aritm  ́ etica dos elementos da segunda e quarta colunas.  ́
(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
(d) Imprima a matriz modificada.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    float v[3][6], soma = 0, media = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("Insira o valor do elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &v[i][j]);
            
            if ((j % 2) == 0 || j == 0)
            {
                soma += v[i][j];
            }
            if (j == 1 || j == 3)
            {
                media += v[i][j];
            }
            if (j == 5)
            {
                v[i][j] = v[i][0] + v[i][1];
            }
        }
    }
    printf("\nSoma de todos os elementos das colunas impares: %.2f", soma);
    printf("\nMedia aritmetica dos elementos da segunda e quarta colunas: %.2f", media / 6);
    printf("\nMatriz modificada:\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf(" %.2f", v[i][j]);
        }
        printf("\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}