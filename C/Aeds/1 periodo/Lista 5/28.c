#include <stdio.h>

int decrescente(int n);

int main()
{
    int num, num2;
    printf("Insira um numero natural: ");
    scanf("%d", &num);
    while (num < 1)
    {
        printf("Valor invalido! Insira novamente um numeros inteiro positivo: ");
        scanf("%d", &num);
    }
    printf("\nNumeros pares de 0 ate %d na ordem decrescente:", num);
    decrescente(num);
    return 0;
}

int decrescente(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        if ((n % 2) == 0)
        {
            printf(" %d", n);
        }
        return decrescente(n - 1);
    }
}