/*Crie uma função que vai receber a altura e peso de um indivíduo e a função deverá calcular e retornar seu IMC*/
#include <stdio.h>
#include <stdlib.h>
float imc (float a, float b)
{
    return a / (b * b);
}    
int main()
{
    float peso, altura;
    printf ("Digite seu peso: ");
    scanf ("%f", &peso);

    printf ("Digite sua altura: ");
    scanf ("%f", &altura);
    
    printf ("seu imc = %f\n\n", imc(peso, altura));
    
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}