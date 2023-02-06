#include <stdio.h>

int cubo(int n);

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
    int resultado = cubo(num);
    printf("\nValores de 1 a %d elevados ao cubo somados: %d.\n", num, resultado);
    return 0;
}

int cubo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n * n * n) + cubo(n - 1);
    }
}