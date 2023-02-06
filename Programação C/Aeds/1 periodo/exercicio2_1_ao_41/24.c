/*24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Fac ̧a um programa em que o usuario entre com o valor e o estado destino do  ́
produto e o programa retorne o prec ̧o final do produto acrescido do imposto do estado
em que ele sera vendido. Se o estado digitado n  ́ ao for v  ̃ alido, mostrar uma mensagem  ́
de erro.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int estado;
    float valor;
    printf("Digite o valor: ");
    scanf("%f", &valor);
    system("pause");
    system("cls");

    printf("1- MG\n2- SP\n3- RJ\n4- MS\nEstado:");
    scanf("%d", &estado);
    system("pause");
    system("cls");
    switch (estado)
    {
    case 1:
        printf("O imposto e de: %0.2f\n", (valor * 0.07) + valor);
        break;
    case 2:
        printf("O imposto e de: %0.2f\n", (valor * 0.12) + valor);
        break;
    case 3:
        printf("O imposto e de: %0.2f\n", (valor * 0.15) + valor);
        break;
    case 4:
        printf("O imposto e de: %0.2f\n", (valor * 0.08) + valor);
        break;
    default:
        printf("\nErro\n");
        break;
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");

    return 0;
}