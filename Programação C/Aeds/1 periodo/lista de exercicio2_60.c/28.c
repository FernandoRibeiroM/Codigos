/*28. Fac ̧a um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a formula a seguir  ́

E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, E = 1, i, j, num, fatorial;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        num = 1.0 / i;
        fatorial = 1;
        for (j = num; j > 0; --j)
        {
            fatorial *= num;
        }
        E += fatorial;
    }
    printf("Valor de 'E': %d\n", E);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}