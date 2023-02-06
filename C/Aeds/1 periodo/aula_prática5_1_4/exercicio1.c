/*1ª Questão
Suponha um arranjo a com 5 elementos e outro arranjo b com 5 elementos. Faça um programa que calcule o produto escalar de a por b (Isto é, o primeiro elemento de a multiplicado pelo primeiro elemento de b mais o segundo elemento de a multiplicado pelo segundo de b mais . . .).
Digite o primeiro elemento do arranjo a: 6
Digite o segundo elemento do arranjo a: 3
Digite o terceiro elemento do arranjo a: 4
Digite o quarto elemento do arranjo a: 8
Digite o quinto elemento do arranjo a: 3
Digite o primeiro elemento do arranjo b: 2
Digite o segundo elemento do arranjo b: 6
Digite o terceiro elemento do arranjo b: 7
Digite o quarto elemento do arranjo b: 2
Digite o quinto elemento do arranjo b: 5
O produto escalar de a[] por b[] é 89*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arranjoA[5], arranjoB[5];
    int soma = 0, multiplicar = 0;
    printf("Digite o valor do primeiro numero de A: ");
    scanf("%d", &arranjoA[0]);
    printf("Digite o valor do segundo numero de A: ");
    scanf("%d", &arranjoA[1]);
    printf("Digite o valor do terceiro numero de A: ");
    scanf("%d", &arranjoA[2]);
    printf("Digite o valor do quarto numero de A: ");
    scanf("%d", &arranjoA[3]);
    printf("Digite o valor do quinto numero de A: ");
    scanf("%d", &arranjoA[4]);
    system ("cls");
    printf("Digite o valor do primeiro numero de B: ");
    scanf("%d", &arranjoB[0]);
    printf("Digite o valor do segundo numero de B: ");
    scanf("%d", &arranjoB[1]);
    printf("Digite o valor do terceiro numero de B: ");
    scanf("%d", &arranjoB[2]);
    printf("Digite o valor do quarto numero de B: ");
    scanf("%d", &arranjoB[3]);
    printf("Digite o valor do quinto numero de B: ");
    scanf("%d", &arranjoB[4]);

    soma = (arranjoA[0] * arranjoB[0]) + soma;
    soma = (arranjoA[1] * arranjoB[1]) + soma;
    soma = (arranjoA[2] * arranjoB[2]) + soma;
    soma = (arranjoA[3] * arranjoB[3]) + soma;
    soma = (arranjoA[4] * arranjoB[4]) + soma;
    system("cls");
    printf("O produto escalar de A por B e: %d\n", soma);
    system("pause");
    system ("cls");
    printf ("By: Fernando Ribeiro Martins");
    return 0;
}