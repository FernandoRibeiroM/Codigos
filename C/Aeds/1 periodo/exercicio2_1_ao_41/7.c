/*7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
números forem iguais, imprima a mensagem Números iguais..*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero1, numero2;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &numero1, &numero2);
    if (numero1 > numero2)
    {
        printf("O numero %d e maior\n", numero1);
    }
    else if (numero2 > numero1)
    {
        printf("o numero %d e maior\n", numero2);
    }
    else
    {
        printf("Eles sao iguais\n");
    }
    system("pause");
    system ("cls");
    printf ("By: Fernando Ribeiro Martins");

    return 0;
}