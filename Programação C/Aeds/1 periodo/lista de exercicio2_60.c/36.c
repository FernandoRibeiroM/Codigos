/*36. Fac ̧a um programa que calcule a diferenc ̧a entre a soma dos quadrados dos primeiros
100 numeros naturais e o quadrado da soma. Ex: A soma dos quadrados dos dez pri-  ́
meiros numeros naturais  ́ e,  ́
1
2 + 22 + ... + 102 = 385
O quadrado da soma dos dez primeiros numeros naturais  ́ e,  ́
(1 + 2 + ... + 10)2 = 552 = 3025

A diferenc ̧a entre a soma dos quadrados dos dez primeiros numeros naturais e o qua-  ́
drado da soma e 3025-385 = 2640.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    float quadrado_das_somas = 0, soma_dos_quadrados = 0;
    for (i = 1; i <= 100; i++)
    {
        quadrado_das_somas += i * i;
        soma_dos_quadrados += i;
    }
    soma_dos_quadrados = pow(soma_dos_quadrados, 2);
    printf("A diferenca entre a soma dos quadrados dos dez primeiros numeros naturais e o quadrado da soma e %.2f - %.2f = %.2f.", quadrado_das_somas, soma_dos_quadrados, soma_dos_quadrados - quadrado_das_somas);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}