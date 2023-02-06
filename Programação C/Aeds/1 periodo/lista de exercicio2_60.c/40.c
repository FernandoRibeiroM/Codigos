/*40. Elabore um programa que fac ̧a leitura de varios n  ́ umeros inteiros, at  ́ e que se digite um  ́
numero negativo. O programa tem que retornar o maior e o menor n  ́ umero lido.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int maior = 0, menor = 0, valor;
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &valor);
        if (valor > 0)
        {
            if (valor > maior)
                maior = valor;
            if (valor < menor)
                menor = valor;
        }
        if (valor < 0)
            printf("Fim do programa.\n");
    } while (valor >= 0);
    system("pause");
    system("cls");
    printf("O maior valor lido e: %d\nO menor valor lido e: %d\n", maior, menor);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}