#include <stdio.h>

int main()
{
    int numero, maior, menor, i;
    printf("digite quantos numeros deseja testar:");
    scanf("%d", &i);
    printf("Insira o numero 1: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;
    i--;
    while (i > 0)
    {
        printf("digite um numero:");
        scanf("%d", &numero);
        i--;
        if (numero >= maior)
        {
            maior = numero;
        }
        else if (numero <= menor)
        {
            menor = numero;
        }
    }
    printf("O maior e %d \n", maior);
    printf("O menor e %d", menor);
    return 0;
}