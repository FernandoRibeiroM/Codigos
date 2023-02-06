/*39. Fac ̧a um programa que calcule a area de um tri  ́ angulo, cuja base e altura s ˆ ao fornecidas  ̃
pelo usuario. Esse programa n  ́ ao pode permitir a entrada de dados inv  ̃ alidos, ou seja,  ́
medidas menores ou iguais a 0.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float base, altura, area;
    do
    {
        printf("Digite o valor da altura do triangulo: ");
        scanf("%f", &altura);
        printf("Digite o valor da base do triangulo: ");
        scanf("%f", &base);
        if (base <= 0 || altura <= 0)
        {
            system("cls");
            printf("Os valores precisam ser maiores que zero.\n");
        }
    } while (base <= 0 || altura <= 0);
    area = (base * altura) / 2;
    printf("A area do triangulo e: %.2f\n", area);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}