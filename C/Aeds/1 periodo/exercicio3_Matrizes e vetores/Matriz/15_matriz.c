/*15. Leia uma matriz 5 x 10 que se refere respostas de 10 questoes de m  ̃ ultipla escolha,  ́
referentes a 5 alunos. Leia tambem um vetor de 10 posic ̧  ́ oes contendo o gabarito de  ̃
respostas que podem ser a, b, c ou d. Seu programa devera comparar as respostas  ́
de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a
pontuac ̧ao correspondente a cada aluno.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char v[5][10], gabarito[10];
    int i, j, resultado[5] = {0, 0, 0, 0, 0};
    printf("Insira apenas caracteres A, B, C ou D. Caso contrario sera pedido para inserir novamente corretamente!\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nInsira as alternativas marcadas pelo %do. aluno:\n\n", i + 1);
        for (j = 0; j < 10; j++)
        {
            printf("Questao %d:", j + 1);
            scanf(" %c", &v[i][j]);
            v[i][j] = tolower(v[i][j]);
            if (v[i][j] == 'a' || v[i][j] == 'b' || v[i][j] == 'c' || v[i][j] == 'd')
            {
                j++;
            }
            j -= 1;
        }
    }
    printf("\nInsira o Gabarito:\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("Questao %d: ", i + 1);
        scanf(" %c", &gabarito[i]);

        gabarito[i] = tolower(gabarito[i]);
        if (gabarito[i] == 'a' || gabarito[i] == 'b' || gabarito[i] == 'c' || gabarito[i] == 'd')
        {
            if (v[0][i] == gabarito[i])
            {
                resultado[0]++;
            }
            if (v[1][i] == gabarito[i])
            {
                resultado[1]++;
            }
            if (v[2][i] == gabarito[i])
            {
                resultado[2]++;
            }
            if (v[3][i] == gabarito[i])
            {
                resultado[3]++;
            }
            if (v[4][i] == gabarito[i])
            {
                resultado[4]++;
            }
        }
        else
        {
            i -= 1;
        }
    }
    printf("\nO resultado para cada aluno:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Aluno %d obteve %d acertos em 10!\n", i + 1, resultado[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}