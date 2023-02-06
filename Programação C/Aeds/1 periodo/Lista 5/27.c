#include <stdio.h>

int multiplica(int n1, int n2);

int main()
{
    int num, num2;
    printf("Insira dois numeros naturais: ");
    scanf("%d %d", &num, &num2);
    while (num < 1 || num2 < 1)
    {
        printf("Valores invalidos! Insira novamente os numeros inteiros positivos: ");
        scanf("%d %d", &num, &num2);
    }
    int resultado = multiplica(num, num2);
    printf("\nValores %d e %d multiplicados: %d.\n", num, num2, resultado);
    return 0;
}

int multiplica(int n1, int n2)
{
    if (n2 == 0)
    {
        return 0;
    }
    else
    {
        return n1 + multiplica(n1, n2 - 1);
    }
}