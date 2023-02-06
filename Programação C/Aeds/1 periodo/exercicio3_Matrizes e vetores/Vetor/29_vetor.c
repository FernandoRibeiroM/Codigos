/*29. Fac ̧a um programa que receba 6 numeros inteiros e mostre:  ́
• Os numeros pares digitados;  ́
• A soma dos numeros pares digitados;  ́
• Os numeros  ́  ́ımpares digitados;
• A quantidade de numeros  ́  ́ımpares digitados;*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, vetor[6], pares = 0, impares = 0;
    for (i = 0; i < 6; i++)
    {
        printf("Digite o valor do vetor na posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("\nNumeros pares digitados: ");
    for (i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d ", vetor[i]);
            pares += vetor[i];
        }
    }
    printf("\nA soma dos numeros para digitados e de: %d", pares);
    printf("\nNumeros impares digitados: ");
    for (i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            printf("%d ", vetor[i]);
            impares += vetor[i];
        }
    }
    printf("\nA soma dos numeros para digitados e de: %d\n", impares);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}