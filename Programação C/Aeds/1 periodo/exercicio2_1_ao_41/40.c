/*40. O custo ao consumidor de um carro novo e a soma do custo de f  ́ abrica, da comiss  ́ ao ̃
do distribuidor, e dos impostos. A comissao e os impostos s  ̃ ao calculados sobre o custo  ̃
de fabrica, de acordo com a tabela abaixo. Leia o custo de f  ́ abrica e escreva o custo ao  ́
consumidor.
CUSTO DE FABRICA  ́ % DO DISTRIBUIDOR % DOS IMPOSTOS
ate R$12.000,00  ́ 5 isento
entre R$12.000,00 e 25.000,00 10 15
acima de R$25.000,00 15 20*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float custo, resultado;
    printf("Qual o custo: ");
    scanf("%f", &custo);
    if (custo <= 12000.00)
    {
        resultado = ((custo * 0.05) + custo);
        printf("Sao: %f\n", resultado);
    }
    else if ((custo > 12000.00) && (custo <= 25000))
    {
        resultado = ((custo * 0.10) + custo + (custo * 0.15));
        printf("Sao: %f\n", resultado);
    }
    else
    {
        resultado = ((custo * 0.15) + custo + (custo * 0.20));
        ("Sao: %f\n", resultado);
    }

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}