/*6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero1, numero2;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &numero1, &numero2);
    if (numero1 > numero2)
    {
        printf("O numero %d e maior e a diferença entre eles e %d\n", numero1, numero1 - numero2);
    }
    else
    {
        printf("o numero %d e maior e a diferença entre eles e %d\n", numero2, numero2 - numero1);
    }
    system("pause");
    system ("cls");
    printf ("By: Fernando Ribeiro Martins");
    return 0;