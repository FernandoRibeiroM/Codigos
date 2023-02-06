/*14. A nota final de um estudante e calculada a partir de tr  ́ es notas atribu ˆ  ́ıdas entre o intervalo
de 0 ate 10, respectivamente, a um trabalho de laborat  ́ orio, a uma avaliac ̧  ́ ao semestral  ̃
e a um exame final. A media das tr  ́ es notas mencionadas anteriormente obedece aos ˆ
pesos: Trabalho de Laboratorio: 2; Avaliac ̧  ́ ao Semestral: 3; Exame Final: 5. De acordo  ̃
com o resultado, mostre na tela se o aluno esta reprovado (m  ́ edia entre 0 e 2,9), de  ́
recuperac ̧ao (entre 3 e 4,9) ou se foi aprovado. Fac ̧a todas as verificac ̧  ̃ oes necess  ̃ arias.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float trabalho_de_laboratorio, a_semestral, exame_final, media;
    printf("Digite respectivamente a nota do seu trabalho de laboratoria, avaliçao semetral e do exame final:\n");
    scanf("%f %f %f", &trabalho_de_laboratorio, &a_semestral, &exame_final);
    trabalho_de_laboratorio = trabalho_de_laboratorio * 2;
    a_semestral = a_semestral * 3;
    exame_final = exame_final * 5;
    media = (trabalho_de_laboratorio + a_semestral + exame_final) / 10;
    system("cls");
    if ((media <= 2.9) && (media >= 0))
    {
        printf("O aluno  foi  reprovado.\n");
    }
    else if ((media >= 3) && (media <= 4.9))
    {
        printf("O aluno esta de recuperaçao.\n");
    }
    else if ((media >= 5) && (media <= 10))
    {
        printf("O aluno foi aprovado.\n");
    }
    else
    {
        printf("voce coloco um numero maior do que 10 ou  menor do que 0.\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}