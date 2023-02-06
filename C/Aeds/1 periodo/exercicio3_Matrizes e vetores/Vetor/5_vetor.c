/*5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero[10], i, par = 0;
    for (i = 0; i < 8; i++)
    {
        printf ("Digite um numero: ");
        scanf  ("%d", &numero[i]);
        if (numero[i] %2 == 0)
        {
            par++;
        }
    } 
    printf ("Possui %d numeros pares\n", par);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}