#include <stdio.h>

int main()
{
    int i = 0, numero, mod = 0;
    printf("digite um numero inteiro:");
    scanf("%d", &numero);
    printf("E divisivisivel por:");
    while (i <= numero)
    {
        i++;
        mod = numero % i;
        if (mod == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}