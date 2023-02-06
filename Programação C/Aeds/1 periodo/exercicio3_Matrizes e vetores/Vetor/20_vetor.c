/*20. Escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um  ́
vetor com 10 posic ̧oes. Preencha um segundo vetor apenas com os n  ̃ umeros  ́  ́ımpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, j = 0, num[10], impar[10];
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero inteiro no intervalo de 0 a 50: ", i + 1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 9; i++)
    {
        if (num[i] % 2 == 0)
            ;

        else
            impar[j++] = num[i];
    }
    printf("\nNumeros digitados: ");
    for (i = 0; i < 9; i++)
        printf("%d ", num[i]);
    printf("\n\nNumeros impares digitados: ");
    for (i = 0; i < j; i++)
        printf("%d ", impar[i]);

    printf("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}