/*31. Fac ̧a um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, verifique e mostra qual a classificac ̧ao dessa pessoa.  ̃
Altura Peso

Ate 60  ́ Entre 60 e 90 (Inclusive) Acima de 90
Menor que 1,20 A D G
De 1,20 a 1,70 B E H
Maior que 1,70 C F I*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float altura, peso;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    if ((peso > 0) && (altura > 0))
    {
        if (altura < 1.20)
        {
            printf("teste");
            if (peso <= 60)
            {
                printf("A\n");
            }
            else if ((peso > 60) && (peso <= 90))
            {
                printf("D\n");
            }
            else
            {
                printf("G\n");
            }
        }
        else if ((altura >= 1.20) && (altura <= 1.70))
        {
            printf("teste");
            if (peso <= 60)
            {
                printf("B\n");
            }
            else if ((peso > 60) && (peso <= 90))
            {
                printf("E\n");
            }
            else
            {
                printf("H\n");
            }
        }
        else
        {
            if (peso <= 60)
            {
                printf("C\n");
            }
            else if ((peso > 60) && (peso <= 90))
            {
                printf("F\n");
            }
            else if (peso > 90)
            {
                printf("I\n");
            }
        }
    }
    else
    {
        printf("Vc digitou numeros menores ou iguais a 0");
    }

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}
