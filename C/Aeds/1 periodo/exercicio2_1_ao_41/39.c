/*39. Uma empresa decide dar um aumento aos seus funcionarios de acordo com uma tabela  ́
que considera o salario atual e o tempo de servic ̧o de cada funcion  ́ ario. Os funcion  ́ arios  ́
com menor salario ter  ́ ao um aumento proporcionalmente maior do que os funcion  ̃ arios  ́
com um salario maior, e conforme o tempo de servic ̧o na empresa, cada funcion  ́ ario ir  ́ a ́
receber um bonus adicional de sal ˆ ario. Fac ̧a um programa que leia:  ́
• o valor do salario atual do funcion  ́ ario;  ́
• o tempo de servic ̧o desse funcionario na empresa (n  ́ umero de anos de trabalho na  ́
empresa).
Use as tabelas abaixo para calcular o salario reajustado deste funcion  ́ ario e imprima o  ́
valor do salario final reajustado, ou uma mensagem caso o funcion  ́ ario n  ́ ao tenha direito  ̃
a nenhum aumento.
Salario Atual  ́ Reajuste(%) Tempo de Servic ̧o Bonus ˆ
Ate 500,00  ́ 25% Abaixo de 1 ano Sem bonus ˆ
Ate 1000,00  ́ 20% De 1 a 3 anos 100,00
Ate 1500,00  ́ 15% De 4 a 6 anos 200,00
Ate 2000,00  ́ 10% De 7 a 10 anos 300,00
Acima de 2000,00 Sem reajuste Mais de 10 anos 500,00*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario, resultado;
    int tempo;
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    printf("Digite seu tempo de trabalho: ");
    scanf("%d", &tempo);
    if (salario >= 500)
    {
        if (tempo < 1)
        {
            resultado = (salario * 0.25);
            printf("O aumento do seu salario e: %f\n", resultado);
        }
        else
        {
            printf("Vc nao tera aumento de salario.\n");
        }
    }
    else if ((salario <= 1000) && (salario > 500))
    {
        if ((tempo >= 1) && (tempo <= 3))
        {
            resultado = (salario * 0.20) + 100;
            printf("O aumento do seu salrio e: %f\n", resultado);
        }
        else
        {
            printf("Vc nao tera aumento de salario.\n");
        }
    }
    else if ((salario <= 1500) && (salario > 1000))
    {
        if ((tempo >= 4) && (tempo <= 6))
        {
            resultado = (salario * 0.15) + 200;
            printf("O aumento do seu salrio e: %f\n", resultado);
        }
        else
        {
            printf("Vc nao tera aumento de salario.\n");
        }
    }
    else if ((salario <= 2000) && (salario > 1500))
    {
        if (tempo > 1)
        {
            resultado = (salario * 0.10) + 300;
            printf("O aumento do seu salrio e: %f\n", resultado);
        }
        else
        {
            printf("Vc nao tera aumento de salario.\n");
        }
    }
    else if (salario > 2000)
    {
        if (tempo > 1)
        {
            resultado = (salario + 500);
            printf("O aumento do seu salrio e: %f\n", resultado);
        }
        else
        {
            printf("Vc nao tera aumento de salario.\n");
        }
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