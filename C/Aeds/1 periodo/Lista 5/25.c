#include <stdio.h>

int soma(int n);

int main()
{
    int num;
    printf("Insira um numero natural: ");
    scanf("%d", &num);
    while (num < 1)
    {
        printf("Valor invalido! Insira novamente um numero inteiro positivo: ");
        scanf("%d", &num);
    }
    int resultado = soma(num);
    printf("\nValores de 1 a %d somados: %d.\n", num, resultado);
    return 0;
}

int soma(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + soma(n - 1);
    }
}