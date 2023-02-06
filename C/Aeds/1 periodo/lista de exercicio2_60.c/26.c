/*26. Faca um algoritmo que encontre o primeiro multiplo de 11, 13 ou 17 ap  ́ os um n  ́ umero  ́
dado.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero, i, resultado = 1;
    printf ("Digite um numero: ");
    scanf  ("%d", &numero);
    system("pause");
    system("cls");
    i = numero;
    do
    {
        if ((i %11 == 0) || (i %13 == 0) || (i %17 == 0))
        {
             printf ("%d e divisivel.\n", i);
             resultado = 0;
        }
        i++;
    }
    while (resultado != 0);    
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}