#include <stdio.h>
int main()
{
    int x, numero;
    int par = 0;
    int impar = 0;
    numero = 0;
    printf("quantos valores voce deseja testar:");
    scanf("%d", &x);
    while (x > 0)
    {
        x = x - 1;
        printf ("digite um numero:");
        scanf ("%d", &numero);
        if (numero % 2 == 0)
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }
    }
    printf("sao %d pares e %d impares", par, impar);
    return 0;
}