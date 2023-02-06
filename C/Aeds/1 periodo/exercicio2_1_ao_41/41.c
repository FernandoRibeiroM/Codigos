/*41. Fac ̧a um algoritmo que calcule o IMC de uma pessoa e mostre sua classificac ̧ao de  ̃
acordo com a tabela abaixo:

IMC Classificac ̧ao ̃
< 18,5 Abaixo do Peso
18,6 - 24,9 Saudavel  ́
25,0 - 29,9 Peso em excesso
30,0 - 34,9 Obesidade Grau I
35,0 - 39,9 Obesidade Grau II(severa)
≥ 40,0 Obesidade Grau III(morbida)*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float a, b, imc;
    printf("digite seu peso: ");
    scanf("%f", &a);
    printf("digite sua altura: ");
    scanf("%f", &b);
    imc = (a / pow(b, 2));
    printf("seu imc e: %f\n", imc);
    system("pause");
    system("cls");
    if (imc < 18.5)
        printf("voce esta abaixo do peso\n");
    else if (imc >= 18.6 && imc <= 24.9)
        printf("voce e saudavel\n");
    else if (imc >= 25 && imc < 29.9)
        printf("vc esta com peso em excesso\n");
    else if (imc >= 30 && imc <= 34.9)
        printf("vc esta com obesidade gral I\n");
    else if (imc >= 35 && imc <= 39.9)
        printf("vc esta com obesidade gral II\n");
    else if (imc >= 40)
        printf("vc esta com obesidade gral III\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");    

    return 0;
}