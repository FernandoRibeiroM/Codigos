#include <stdio.h>

void simplifica(int *n, int *d);

int main()
{
    int numerador, denominador;
    printf("Insira o numerador e o denominador da fracao: ");
    scanf("%d %d", &numerador, &denominador);
    simplifica(&numerador, &denominador);
    printf("\nFracao simplificada: %d/%d.\n", numerador, denominador);
    return 0;
}

void simplifica(int *n, int *d)
{
    int aux = 1;
    while (aux != 0)
    {
        aux = 0;
        if ((*n % 7) == 0 && (*d % 7) == 0)
        {
            *n /= 7;
            *d /= 7;
            aux++;
        }
        if ((*n % 5) == 0 && (*d % 5) == 0)
        {
            *n /= 5;
            *d /= 5;
            aux++;
        }
        if ((*n % 3) == 0 && (*d % 3) == 0)
        {
            *n /= 3;
            *d /= 3;
            aux++;
        }
        if ((*n % 2) == 0 && (*d % 2) == 0)
        {
            *n /= 2;
            *d /= 2;
            aux++;
        }
    }
}
