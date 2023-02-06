#include <stdio.h>

int superFatorial(int n);

int main()
{
    int num;
    printf("Insira um numero natural: ");
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
    int sf = 1, i;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            sf *= i;
        }
        return sf * superFatorial(n - 1);
    }
}