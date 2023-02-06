/*29. Escreva um programa para calcular o valor da serie, para 5 termos.  ́
S = 0 + 1/2! + 2/4! + 3/6! + ...*/
#include <stdio.h>
#include <stdio.h>
int main()
{
    int n = 0, i = 0, j = 0;
    float h = 1, fat = 1, t = 0;
    for (t = 0; t < 5; t++)
    {
        system("cls");
        printf("Digite o valor de n:\n");
        scanf("%d", &n);
        system("pause");

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                fat = fat * j;
            }
            h += (1.0 / fat);
            fat = 1;
        }
        system("cls");
        
        printf("O numero harmonico e: %f\n", h);
        system("pause");
        h = 1;
    }
    
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}