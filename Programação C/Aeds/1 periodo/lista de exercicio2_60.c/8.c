/*8. Escreva um programa que leia 10 nC:meros e escreva o menor valor lido e o maior valor lido.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float numero, maior, menor;
    int i;
    printf("Digite um numero:");
    scanf("%f", &numero);
    maior = numero;
    menor = numero;

    for (i = 0; i < 9; i++)
    {
        printf("Digite um numero:");
        scanf("%f", &numero);
        if (numero < menor)
        {
            menor = numero;
        }
        if (numero > maior)
        {
            maior = numero;
        }
    }
    printf("O menor valor lido e: %0.2f\nO maior valor lido e: %0.2f\n", menor, maior);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}