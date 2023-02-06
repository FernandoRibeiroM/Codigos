/*2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
número é inválido.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float numero;
    printf("Digite um valor:\n");
    scanf("%f", &numero);
    if (numero >= 0)
    {
        printf("A raiz quadrada desse numero e: %0.2f\n", sqrt(numero));
    }
    else
    {
        printf("O numero e invalido\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}