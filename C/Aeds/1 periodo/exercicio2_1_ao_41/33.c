/*33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o prec ̧o antigo,
calcule e escreva o prec ̧o novo, e escreva uma mensagem em func ̧ao do prec ̧o novo (de  ̃
acordo com a segunda tabela).

PREC ̧ O ANTIGO PERCENTUAL DE AUMENTO
ate R$ 50  ́ 5%
entre R$ 50 e R$ 100 10%
acima de R$ 100 15%*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float precoi, precof;
    printf("Digite O preco: ");
    scanf("%f", &precoi);
    if (precoi < 50)
    {
        precof = precoi * 0.05;
        printf("O preco novo e: %0.2f\n", precof + precoi);
    }
    else if ((precoi >= 50) && (precoi <= 100))
    {
        precof = precoi * 0.10;
        printf("O preco novo e: %0.2f\n", precof + precoi);
    }
    else
    {
        precof = precoi * 0.15;
        printf("O preco novo e: %0.2f\n", precof + precoi);
    }

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}