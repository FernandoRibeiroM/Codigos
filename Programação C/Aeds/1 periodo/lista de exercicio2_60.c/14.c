/*14. FaC'a um programa que leia um nC:mero inteiro positivo par N e imprima todos os nC:meros
pares de 0 atC) N em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i = numero; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}