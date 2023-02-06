/*Escreva um programa que leia um numero inteiro maior do que zero e devolva, na
tela, a soma de todos os seus algarismos. Por exemplo, ao numero 2493 correspondera
o valor 18 (2 + 4 + 9 + 3). Se o numero lido nao for maior do que zero, o programa
terminara com a mensagem "Numero invalido".
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, soma = 0, i;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    i = numero;
    if (numero > 0)
    {
        while (numero > 0)
        {
            soma = (soma + numero % 10);
            numero = (numero / 10);
        }
        printf("\nA soma dos algarismos e: %d = %d\n", i, soma);
    }
    else
    {
        printf("Erro\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}
