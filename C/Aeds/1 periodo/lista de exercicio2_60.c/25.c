/*25. Fac ̧a um programa que some todos os numeros naturais abaixo de 1000 que s  ́ ao m  ̃ ultiplos  ́
de 3 ou 5.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, soma = 0;
    for (i = 0; i <= 1000; i++)
    {
        if ((i %3 == 0) && (i %5 == 0))
        {
        printf("%d e divisivel por 3 e 5.\n", i);
        soma += i;
        }
    }
    printf ("Soma: %d\n", soma);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}