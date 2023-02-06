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
    int i, soma = 0, multiplicar = 0;
     for (i = 0; i < 5; i++)
    {
        printf("Digite o valor do %d A:", i + 1);
        scanf("%d", &arranjoA[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor do %d B:", i + 1);
        scanf("%d", &arranjoB[i]);
    }
    for(i = 0; i < 5; i++)
    {
        multiplicar = arranjoA[i] * arranjoB[i];
        soma = soma + multiplicar;
    }
    system ("cls");
    printf("O produto escalar de A por B e: %d", soma);
    return 0;
}