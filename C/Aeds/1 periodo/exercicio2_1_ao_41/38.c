/*38. Leia uma data de nascimento de uma pessoa fornecida atraves de tr  ́ es n ˆ umeros inteiros:  ́
Dia, Mes e Ano. Teste a validade desta data para saber se esta ˆ e uma data v  ́ alida. Teste  ́
se o dia fornecido e um dia v  ́ alido: dia  ́ > 0, dia ≤ 28 para o mes de fevereiro (29 se o ˆ
ano for bissexto), dia ≤ 30 em abril, junho, setembro e novembro, dia ≤ 31 nos outros
meses. Teste a validade do mes: m ˆ esˆ > 0 e mesˆ < 13. Teste a validade do ano: ano ≤
ano atual (use uma constante definida com o valor igual a 2008). Imprimir: “data valida”  ́
ou “data invalida” no final da execuc ̧  ́ ao do programa.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;
    printf("\n Nascimento: ");
    scanf("%d", &dia);
    printf("\n Nascimento: ");
    scanf("%d", &mes);
    printf("\n Nascimento: ");
    scanf("%d", &ano);
    if (ano <= 2008)
    {
        printf("\ninvalido.");
        return 0;
    }
    if (dia < 1 || dia > 31)
    {
        printf("\ninvalido.");
        return 0;
    }
    if (mes < 1 || mes > 12)
    {
        printf("\ninvalido.");
        return 0;
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if (dia <= 30)
        {
            printf("\nvalido.");
        }
        else
        {
            printf("\ninvalido.");
        }
    }
    if (mes == 1 || mes == 2 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        if (dia <= 31)
        {
            printf("\n\valido.");
        }
        else
        {
            printf("invalido.");
        }
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}