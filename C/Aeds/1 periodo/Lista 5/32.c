#include <stdio.h>

int tetranacci(int n);

int main()
{
    int num;
    printf("Insira o numero desejado da sequencia de tetranacci: ");
    scanf("%d", &num);
    while (num < 1)
    {
        printf("Valor invalido! Insira novamente o numero desejado da sequencia de tetranacci: ");
        scanf("%d", &num);
    }
    int resposta = tetranacci(num - 1);
    printf("\nO %do. termo na sequencia de tetranacci: %d.\n", num, resposta);
    return 0;
}

int tetranacci(int n)
{ 
    if (n == 0 || n == 1 || n == 2)
    {
        return 0;
    }
    else if (n == 3)
    {
        return 1;
    }
    else
    {
        return tetranacci(n - 4) + tetranacci(n - 3) + tetranacci(n - 2) + tetranacci(n - 1);
    }
}