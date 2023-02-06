/*21. Fac ̧a um programa que leia duas matrizes 2 x 2 com valores reais. Oferec ̧a ao usuario  ́
um menu de opc ̧oes:  ̃
(a) somar as duas matrizes
(b) subtrair a primeira matriz da segunda
(c) adicionar uma constante as duas matrizes `
(d) imprimir as matrizes
Nas duas primeiras opc ̧oes uma terceira matriz 3 x 3 deve ser criada. Na terceira opc ̧  ̃ ao ̃
o valor da constante deve ser lido e o resultado da adic ̧ao da constante deve ser arma-  ̃
zenado na propria matriz.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, opcao;
    float v[2][2], v2[2][2], result[3][3], x = 0;
    printf("Primeira matriz\n\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Insira o valor do elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &v[i][j]);
        }
    }
    printf("\nSegunda matriz\n\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Insira o valor do elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &v2[i][j]);
        }
    }
    do
    {
        printf("\nEscolha uma posicao digitando o numero correspondente:\n");
        printf("(1) Somar matrizes;\n(2) Subtrair matrizes;\n");
        printf("(3) Adicionar constante em ambas matrizes;\n(4) Imprimir matrizes.");
        printf("\nSelecione uma opcao: ");
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 4);
    if (opcao == 1)
    {
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                result[i][j] = v[i][j] + v2[i][j];
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (i == 2 || i == 2)
                {
                    result[i][j] = 0;
                }
                printf(" %.2f", result[i][j]);
            }
            printf("\n");
        }
    }
    else if (opcao == 2)
    {
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                result[i][j] = v2[i][j] - v[i][j];
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (i == 2 || i == 2)
                {
                    result[i][j] = 0;
                }
                printf(" %.2f", result[i][j]);
            }
            printf("\n");
        }
    }
    else if (opcao == 3)
    {
        printf("\nInsira a constante a ser somada a cada elemento das duas matrizes: ");
        scanf("%f", &x);
        printf("\nPrimeira matriz com constante somada a cada elemento\n\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                v[i][j] += x;
                printf(" %.2f", v[i][j]);
            }
            printf("\n");
        }
        printf("\nSegunda matriz com constante somada a cada elemento\n\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                v2[i][j] += x;
                printf(" %.2f", v2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nPrimeira matriz\n\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf(" %.2f", v[i][j]);
            }
            printf("\n");
        }
        printf("\nSegunda matriz\n\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf(" %.2f", v2[i][j]);
            }
            printf("\n");
        }
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}