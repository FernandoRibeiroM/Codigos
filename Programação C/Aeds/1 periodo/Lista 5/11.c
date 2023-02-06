#include <stdio.h>

int superFatorial(int n);

int main()
{
    int num;
    printf("Digite um numero natural: ");
    scanf("%d", &num);
    while (num < 1)
    {
        printf("Valor invalido! Insira novamente um numero inteiro maior que 0: ");
        scanf("%d", &num);
    }
    int sf = superFatorial(num);
    printf("\nsf(%d) = %d\n", num, sf);
    return 0;
}

int superFatorial(int n)
{
    int sf = 1, i, j;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            sf *= j;
        }
    }
    return sf;
}