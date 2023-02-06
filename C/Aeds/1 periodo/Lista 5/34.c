#include <stdio.h>

int numerosPell(int n);

int main()
{
    int num;
    printf("Insira o numero desejado da sequencia dos numeros de Pell: ");
    scanf("%d", &num);
    while (num < 1)
    {
        printf("Valor invalido! Insira novamente o numero desejado da sequencia ddos numeros de Pell: ");
        scanf("%d", &num);
    }
    int resposta = numerosPell(num - 1);
    printf("\nO %do. termo na sequencia de tetranacci: %d.\n", num, resposta);
    return 0;
}

int numerosPell(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return 2 * numerosPell(n - 1) + numerosPell(n - 2);
    }
}