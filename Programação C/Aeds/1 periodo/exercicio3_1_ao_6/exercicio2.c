#include <stdio.h>
int main()
{
    int i, a, imp = 0, par = 0;
    printf("digite quantas numeros deseja testar");
    scanf("%d", &i);
    while (i != 0)
    {
        printf("digite um valor:");
        scanf("%d", &a);
        a = (a % 2);
        i = i - 1;
        if (a == 0)
        {
            par = par + 1;
        }
        else
        {
            imp = imp + 1;
        }
    }
    printf("sao %d pares e %d impares", par, imp);
    return 0;
}