/*39. Escreva um programa que leia um numero inteiro positivo  ́ n e em seguida imprima n
linhas do chamado Triangulo de Pascal:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
...*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i, j, soma, aux;
    printf("Digite, o numero de linhas que deseja imprimir do Triangulo de Pascal: ");
    scanf("%d", &num);
    while (num < 1)
    {
        printf("Numero invalido! Apenas numeros a partir de 1: ");
        scanf("%d", &num);
    }
    int v[num], v2[num];
    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == (i))
            {
                v[j] = 1;
            }
            else
            {
                v[j] = v2[j] + v2[j - 1];
            }
        }
        for (j = 0; j <= i; j++)
        {
            printf("%d ", v[j]);
            v2[j] = v[j];
        }
        printf("\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}