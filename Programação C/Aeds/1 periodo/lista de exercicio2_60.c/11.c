/*11. FaC'a um programa que leia um nC:mero inteiro positivo N e imprima todos os nC:meros
naturais de 0 atC) N em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, numero;
    printf("Quantos numeros deseja saber: ");
    scanf("%d", &numero);
    for (i = 0; i < (numero + 1); i++)
    {
        printf("%d\n", i);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}