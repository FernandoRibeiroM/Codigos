/*44. Leia um numero positivo do usu  ́ ario, ent  ́ ao, calcule e imprima a sequ  ̃ encia Fibonacci at ˆ e ́
o primeiro numero superior ao n  ́ umero lido. Exemplo: se o usu  ́ ario informou o n  ́ umero  ́
30, a sequencia a ser impressa ser ˆ a 0 1 1 2 3 5 8 13 21 34.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, f1 = 0, f2 = 1, f3;
    printf("Digite um numero: ");
    scanf("%d", &n);
    system("pause");
    system("cls");
    if (n < 0)
    {
        printf("Numero invalido.\n");
    }
    else
    {
        printf("0 - 1");
        while (f2 <= n)
        {
            f3 = f2 + f1;
            printf(" - %d", f3);
            f1 = f2;
            f2 = f3;
        }
    }
    printf("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}