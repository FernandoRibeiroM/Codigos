/* 1. Faça um programa que receba dois números e mostre qual deles é o maior.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1, numero2, maior;
    printf("Digite dois valores:\n");
    scanf("%f %f", &numero1, &numero2);
    if (numero1 < numero2)
    {
        printf("O maior numero e o numero %0.2f", numero2);
    }
    else
    {
        printf("O maior numero e o %0.2f \n", numero1);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");

    return 0;
}