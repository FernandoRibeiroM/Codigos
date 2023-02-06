/* 13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira
e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do
aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser
igual ou superior a 60 pontos. */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float nota1, nota2, nota3, media;
    printf("Digite suas 3 notas:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    nota3 = nota3 * 2;
    media = (nota1 + nota2 + nota3) / 4;
    if (media >= 60)
    {
        printf("O aluno foi apovado.\n");
    }
    else
    {
        printf("O aluno foi reprovado\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}