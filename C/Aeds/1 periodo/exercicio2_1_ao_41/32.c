/*32. Escrever um programa que leia o codigo do produto escolhido do card  ́ apio de uma lan-  ́
chonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execuc ̧ao somente ser  ̃ a calculado um pedido. O card  ́ apio da lan-  ́
chonete segue o padrao abaixo:*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int codigo;
    printf("Qual o codigo do seu pedido: ");
        scanf("%d", &codigo);
    switch (codigo)
    {
    case 100:
        printf("Vc deve pagar 1.20$\n");
        break;
    case 101:
        printf("Vc deve pagar 1.30$\n");
        break;
    case 102:
        printf("Vc deve pagar 1.50$\n");
        break;
    case 103:
        printf("Vc deve pagar 1.20$\n");
        break;
    case 104:
        printf("Vc deve pagar 1.70$\n");
        break;
    case 105:
        printf("Vc deve pagar 2.20$\n");
        break;
    case 106:
        printf("Vc deve pagar 1.00$\n");
        break;

    default:
        printf ("Vc digitou um codigo que nao tem no cardapio");
        break;
    }

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}