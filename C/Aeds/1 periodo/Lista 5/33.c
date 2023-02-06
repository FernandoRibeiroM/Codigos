#include <stdio.h>

int mdc(int x, int y);

int main()
{
    int num, num2;
    printf("Insira dois numeros para calcular o MDC: ");
    scanf("%d %d", &num, &num2);
    int resposta = mdc(num, num2);
    printf("\nO MDC de %d e %d: %d.\n", num, num2, resposta);
    return 0;
}

int mdc(int x, int y)
{
    if (x < y)
    {
        return mdc(y, x);
    }
    else
    {
        if (x % y == 0)
        {
            return y;
        }
        else
        {
            return mdc(y, x % y);
        }
    }
}