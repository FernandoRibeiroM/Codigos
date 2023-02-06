/*19. Fac ̧a um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
informac ̧oes sobre alunos de uma disciplina, sendo todas as informac ̧  ̃ oes do tipo inteiro:  ̃
• Primeira coluna: numero de matr  ́  ́ıcula (use um inteiro)
• Segunda coluna: media das provas  ́
• Terceira coluna: media dos trabalhos  ́
• Quarta coluna: nota final
Elabore um programa que:
(a) Leia as tres primeiras informac ̧ ˆ oes de cada aluno  ̃
(b) Calcule a nota final como sendo a soma da media das provas e da m  ́ edia dos  ́
trabalhos
(c) Imprima a matr ́ıcula do aluno que obteve a maior nota final (assuma que so existe  ́
uma maior nota)
(d) Imprima a media aritm  ́ etica das notas finais*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    float v[5][4], maior = 0, media = 0, aux;
    for (i = 0; i < 5; i++)
    {
        printf("\n%do. aluno\n", i + 1);
        j = 0;
        printf("Insira o numero de matricula do aluno: ");
        scanf("%f", &v[i][j]);
        j++;
        printf("Insira a media das provas: ");
        scanf("%f", &v[i][j]);
        while (v[i][j] < 0)
        {
            printf("Valor invalido! Insira novamente: ");
            scanf("%f", &v[i][j]);
        }
        j++;
        printf("Insira a media dos trabalhos: ");
        scanf("%f", &v[i][j]);
        while (v[i][j] < 0)
        {
            printf("Valor invalido! Insira novamente: ");
            scanf("%f", &v[i][j]);
        }
        j++;
        v[i][j] = v[i][1] + v[i][2];
        media += v[i][j];
        if (v[i][j] > maior)
        {
            maior = v[i][0];
        }
    }
    printf("\nA matricula do aluno com maior nota final: %.0f\n", maior);
    printf("A media das notas finais: %.2f\n", media / 5);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}