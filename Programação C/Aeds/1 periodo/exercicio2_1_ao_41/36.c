/*36. Escreva um programa que, dado o valor da venda, imprima a comissao que dever  ̃ a ser  ́
paga ao vendedor. Para calcular a comissao, considere a tabela abaixo:  ̃
Venda mensal Comissao ̃
Maior ou igual a R$100.000,00 R$700,00 + 16% das vendas
Menor que R$100.000,00 e maior ou igual a R$80.000,00 R$650,00 +14% das vendas
Menor que R$80.000,00 e maior ou igual a R$60.000,00 R$600,00 +14% das vendas
Menor que R$60.000,00 e maior ou igual a R$40.000,00 R$550,00 +14% das vendas
Menor que R$40.000,00 e maior ou igual a R$20.000,00 R$500,00 +14% das vendas
Menor que R$20.000,00 R$400,00 +14% das vendas*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float valor;
    printf("Digite o valor da venda: ");
    scanf("%f", &valor);
    if (valor >= 100000)
    {
        printf("O valor da comissao e: %0.2f\n", 700 + (valor * 0.16));
    }
    else if ((valor < 100000) && (valor >= 80000))
    {
        printf("O valor da comissao e: %0.2f\n", 650 + (valor * 0.14));
    }
    else if ((valor < 80000) && (valor >= 60000))
    {
        printf("O valor da comissao e: %0.2f\n", 600 + (valor * 0.14));
    }
    else if ((valor < 60000) && (valor >= 40000))
    {
        printf("O valor da comissao e: %0.2f\n", 550 + (valor * 0.14));
    }
    else if ((valor < 40000) && (valor >= 20000))
    {
        printf("O valor da comissao e: %0.2f\n", 500 + (valor * 0.14));
    }
    else
    {
        printf("O valor da comissao e: %0.2f\n", 400 + (valor * 0.14));
    }

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}