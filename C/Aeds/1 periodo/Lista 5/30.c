#include <stdio.h>

int fatorialDuplo(int n);

int main()
{
    int num;
    printf("Insira um numero natural impar: ");
    scanf("%d", &num);
    while (num < 1 || (num % 2) == 0)
    {
        printf("Valor invalido! Insira novamente um numero natural impar: ");
        scanf("%d", &num);
    }
    int fatduplo = fatorialDuplo(num);
    printf("\n%d!! = %d.\n", num, fatduplo);
    return 0;
}

int fatorialDuplo(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fatorialDuplo(n - 2);
    }
}