/*32. Fac ̧a um programa que simula o lanc ̧amento de dois dados, d1 e d2, n vezes, e tem como
sa ́ıda o numero de cada dado e a relac ̧  ́ ao entre eles (  ̃ >,<,=) de cada lanc ̧amento.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, contador, dado1, dado2;
    srand(time(NULL));
    printf("Insira quantas vezes deseja rodar o dado: ");
    scanf("%d", &contador);
    for (i = 0; i < contador; i++)
    {
        dado1 = rand() % 6;
        dado2 = rand() % 6;
        printf("\nOs dados foram lancados!");
        if (dado1 > dado2)
            printf("\nDado 1 (%d) > Dado 2 (%d)", dado1, dado2);
        else if (dado1 < dado2)
            printf("\nDado 1 (%d) < Dado 2 (%d)", dado1, dado2);
        else
            printf("\nDado 1 (%d) = Dado 2 (%d)", dado1, dado2);
        printf("\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}