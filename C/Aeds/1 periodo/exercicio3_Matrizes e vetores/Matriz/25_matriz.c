/*25. Fac ̧a um programa para determinar a proxima jogada em um Jogo da Velha. Assumir que  ́
o tabuleiro e representado por uma matriz de 3 x 3, onde cada posic ̧  ́ ao representa uma  ̃
das casas do tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando
respectivamente uma casa contendo uma pec ̧a minha (-1), uma casa vazia do tabuleiro
(0), e uma casa contendo uma pec ̧a do meu oponente (1).
Exemplo:

-1 1 1
-1 -1 0
0 1 0
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char x = 'X';
    int v[3][3], i, j, aux = 0, cont = 0;

    printf("Jogo da Velha!\n\nInsira a situacao atual do tabuleiro para saber a proxima melhor jogada.\n\n");
    printf("Detalhes:\n\n(-1 ) Peca sua;\n( 0 ) Casa vazia;\n( 1 ) Peca do oponente.\n\n", i + 1, j + 1);
    printf("Considerando: [Linha][Coluna]\n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira a situacao atual em [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &v[i][j]);
            while (v[i][j] < -1 || v[i][j] > 1)
            {
                printf("Valor invalido! Leia os Detalhes e insira novamente: ");
                scanf("%d", &v[i][j]);
            }
        }
    }

    printf("\nTabuleiro atual:\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (v[i][j] != -1)
            {
                printf(" ");
            }
            printf("%d |", v[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {

        if (v[i][0] + v[i][1] + v[i][2] == 3)
        {
            cont++;
            break;
        }

        else if (v[i][0] + v[i][1] + v[i][2] == -2)
        {
            if (v[i][0] == 0)
            {
                v[i][0] = 2;
            }
            else if (v[i][1] == 0)
            {
                v[i][1] = 2;
            }
            else
            {
                v[i][2] = 2;
            }
            aux++;
        }

        if (v[0][i] + v[1][i] + v[2][i] == 3)
        {
            cont++;
            break;
        }

        else if (v[0][i] + v[1][i] + v[2][i] == -2)
        {
            if (v[0][i] == 0)
            {
                v[0][i] = 2;
            }
            else if (v[1][i] == 0)
            {
                v[1][i] = 2;
            }
            else
            {
                v[2][i] = 2;
            }
            aux++;
        }
        if (v[0][0] + v[1][1] + v[2][2] == 3)
        {
            cont++;
            break;
        }
        else if (v[0][0] + v[1][1] + v[2][2] == -2)
        {
            if (v[0][0] == 0)
            {
                v[0][0] = 2;
            }
            else if (v[1][1] == 0)
            {
                v[1][1] = 2;
            }
            else
            {
                v[2][2] = 2;
            }
            aux++;
            break;
        }
        if (v[0][2] + v[1][1] + v[2][0] == 3)
        {
            cont++;
            break;
        }
        else if (v[0][2] + v[1][1] + v[2][0] == -2)
        {
            if (v[0][2] == 0)
            {
                v[0][2] = 2;
            }
            else if (v[2][2] == 0)
            {
                v[2][2] = 2;
            }
            else
            {
                v[i][0] = 2;
            }
            aux++;
            break;
        }
    }
    if (cont != 0)
    {
        printf("\nVoce perdeu!\n");
    }
    else if (aux == 0)
    {
        printf("\nNenhuma sugestao encontrada!\n");
    }
    else
    {
        printf("\nPossiveis possibilidades de vitoria, demarcada por X:\n\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (v[i][j] != -1)
                {
                    printf(" ");
                }
                if (v[i][j] == 2)
                {
                    printf("%c |", x);
                }
                else
                {
                    printf("%d |", v[i][j]);
                }
            }
            printf("\n");
        }
        system("pause");
        system("cls");
        printf("By: Fernando Ribeiro Martins");
        return 0;
    }