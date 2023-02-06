/*33. Fac ̧a um programa que leia um vetor de 15 posic ̧oes e o compacte, ou seja, elimine as  ̃
posic ̧oes com valor zero. Para isso, todos os elementos  ̃ a frente do valor zero, devem ser `
movidos uma posic ̧ao para tr  ̃ as no vetor.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[15], i, j = 0;
    for (i = 0; i < 15; i++)
    {
        printf("Insira o valor do %do. elemento do vetor: ", i + 1);
        scanf("%d", &v[j]);
        if (v[j] == 0)
        {
            j -= 1;
        }
        j++;
    }
    printf("O vetor compactado, eliminando os zeros, e: \n");
    for (i = 0; i < j; i++)
    {
        printf(" %d\n", v[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}