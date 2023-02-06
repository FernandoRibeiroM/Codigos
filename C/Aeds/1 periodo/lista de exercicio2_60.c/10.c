/*10. FaC'a um programa que calcule e mostre a soma dos 50 primeiros nC:meros pares.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, soma = 0;
    for (i = 0; i < 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            soma += i;
        }
    }
    printf("Soma = %d\n", soma);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}