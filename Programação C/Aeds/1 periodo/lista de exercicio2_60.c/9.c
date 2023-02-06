/*9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int impar = 1, numero, i;
    printf("Digite o numero de numeros impares que deseja saber:");
    scanf("%d", &numero);
    printf("%d\n", impar);
    for (i = 1; i < numero; i++)
    {
        impar = impar + 2;
        printf("%d\n", impar);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}