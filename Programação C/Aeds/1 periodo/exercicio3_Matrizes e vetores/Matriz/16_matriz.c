/*16. Fac ̧a um programa para corrigir uma prova com 10 questoes de m  ̃ ultipla escolha (  ́ a, b,
c, d ou e), em uma turma com 3 alunos. Cada questao vale 1 ponto. Leia o gabarito, e  ̃
para cada aluno leia sua matricula (numero inteiro) e suas respostas. Calcule e escreva:  ́
Para cada aluno, escreva sua matr ́ıcula, suas respostas, e sua nota. O percentual de
aprovac ̧ao, assumindo m  ̃ edia 7.0.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char aluno[3][10], gabarito[10];
    int i, j, matricula[3], acertos[3] = {0, 0, 0};
    printf("Insira apenas caracteres A, B, C ou D. Caso contrario sera pedido para inserir novamente corretamente!\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nNumero da matricula do aluno: ");
        scanf("%d", &matricula[i]);
        printf("\nInsira as alternativas marcadas pelo %do. aluno:\n\n", i + 1);
        for (j = 0; j < 10; j++)
        {
            printf("Questao %d:", j + 1);
            scanf(" %c", &aluno[i][j]);
            aluno[i][j] = tolower(aluno[i][j]);
            if (aluno[i][j] == 'a' || aluno[i][j] == 'b' || aluno[i][j] == 'c' || aluno[i][j] == 'd' || aluno[i][j] == 'e')
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
        if (gabarito[i] == 'a' || gabarito[i] == 'b' || gabarito[i] == 'c' || gabarito[i] == 'd' || gabarito[i] == 'e')
        {
            if (aluno[0][i] == gabarito[i])
            {
                acertos[0]++;
            }
            if (aluno[1][i] == gabarito[i])
            {
                acertos[1]++;
            }
            if (aluno[2][i] == gabarito[i])
            {
                acertos[2]++;
            }
        }
        else
        {
            i -= 1;
        }
    }
    printf("\nO resultado para cada aluno:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nAluno de matricula %d\n", matricula[i]);
        printf("\nAlternativas marcadas:\n");
        for (j = 0; j < 10; j++)
        {
            printf("%d - %c\n", j + 1, aluno[i][j]);
        }
        printf("Acertos: %d em 10, %d por cento de aproveitamento\n", acertos[i], ((acertos[i] / 10) * 100));
        if (acertos[i] >= 7)
        {
            printf("Aprovado!");
        }
        else
        {
            printf("Nao aprovado!");
        }
    }
    printf("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}