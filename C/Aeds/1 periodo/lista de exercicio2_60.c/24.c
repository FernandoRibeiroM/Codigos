/*24. Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores  ́
desse numero, com excec ̧  ́ ao dele pr  ̃ oprio. Ex: a soma dos divisores do n  ́ umero 66  ́ e ́
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero, i, resultado, soma = 0;
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);
    system("pause");
    system("cls");
    while (i < numero)
    {
        resultado = numero % i;
        if (resultado == 0)
        {
            printf("E divisivel por %d.\n", i);
            soma += i;
        }
        i++;
    }
    system("pause");
    system("cls");
    printf ("Soma: %d\n", soma);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}
