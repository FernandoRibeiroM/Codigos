/*4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 O número digitado ao quadrado
 A raiz quadrada do número digitado*/

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
        printf("O valor ao quadrado e: %0.2f \nA raiz quadrada desse numero e: %0.2f\n", pow(numero, 2), sqrt(numero));
    }
    else
    {
        printf("Erro, o numero nao e positivo\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}