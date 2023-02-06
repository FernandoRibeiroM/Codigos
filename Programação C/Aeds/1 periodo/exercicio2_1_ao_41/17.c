/*17. Fac ̧a um programa que calcule e mostre a area de um trap  ́ ezio. Sabe-se que:  ́

A =
(basemaior + basemenor) ∗ altura

2

Lembre-se a base maior e a base menor devem ser numeros maiores que zero.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float base_maior, base_menor, altura, area;
    printf("Digite a base maior e a menor respectivamente:\n");
    scanf("%f %f", &base_maior, &base_menor);
    printf("Digite a altura\n");
    scanf("%f", &altura);
    if ((base_menor > 0) && (base_maior > 0) && (altura > 0))
    {
        area = ((base_maior + base_menor) * altura) / 2;
        printf("A area do trapezio e: %f\n", area);
    }
    else
    {
        printf("Um ou mais dos valores digitados foi igual ou menor que 0\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}