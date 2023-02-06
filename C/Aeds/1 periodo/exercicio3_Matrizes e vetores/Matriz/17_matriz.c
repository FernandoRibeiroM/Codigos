/*17. Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva
o numero de alunos cuja pior nota foi na prova 1, o n  ́ umero de alunos cuja pior nota foi  ́
na prova 2, e o numero de alunos cuja pior nota foi na prova 3. Em caso de empate  ́
das piores notas de um aluno, o criterio de desempate  ́ e arbitr  ́ ario, mas o aluno deve ser  ́
contabilizado apenas uma vez.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int i, j, pior[3] = {0, 0, 0};
    float v[10][3];
    printf("Insira apenas notas no intervalo 0 a 10. Caso contrario sera pedido para inserir novamente corretamente!\n");
    for (i = 0; i < 10; i++)
    {
        printf("\nInsira as notas do %do. aluno:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("%da. prova:", j + 1);
            scanf(" %f", &v[i][j]);
            while (v[i][j] < 0 || v[i][j] > 10)
            {
                printf("Valor invalido! Digite novamente um valor de 0 a 10:");
                scanf(" %f", &v[i][j]);
            }
        }
        if (v[i][0] < v[i][1] && v[i][0] < v[i][2])
        {
            pior[0]++;
        }
        else if (v[i][1] < v[i][0] && v[i][0] < v[i][2])
        {
            pior[1]++;
        }
        else
        {
            pior[2]++;
        }
    }
    printf("\nResultados!\n");
    for (i = 0; i < 3; i++)
    {
        printf("O numero de alunos cujo a %d prova foi a pior e: %d.\n", i + 1, pior[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}