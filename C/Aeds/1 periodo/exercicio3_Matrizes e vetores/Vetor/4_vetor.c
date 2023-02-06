/*4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu
programa deverá escrever a soma dos valores encontrados nas respectivas posições
X e Y .*/
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int numero[8], i, x, y;
    for (i = 0; i < 8; i++)
    {
        printf ("Digite um numero: ");
        scanf  ("%d", &numero[i]);
    } 
    system("pause");
    system("cls");
    printf ("Digite o Valor de X: ");
    scanf  ("%d", &x);
    printf ("Digite o Valor de Y: ");
    scanf  ("%d", &y);
    printf ("%d + %d = %d\n", numero[x], numero[y], numero[x] + numero[y]);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}