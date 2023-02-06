/*30. Fac ̧a um programa que receba tres n ˆ umeros e mostre-os em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float numero[3], maior = 0;
    int i;
    printf("Digite os 3 numeros:\n");
    scanf("%f %f %f", &numero[0], &numero[1], &numero[2]);
    for (i = 0; i < 3; i++)
    {
        if (numero[i] > maior)
        {
            maior = numero[i];
        }
    }
    system("pause");
    system("cls");
    printf("O maior e: %0.2f\n", maior);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}
