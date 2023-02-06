/*11. Faça um programa que preencha um vetor com 10 números reais, calcule e
mostre a quantidade de números negativos e a soma dos números positivos desse
vetor.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float numero[10], soma = 0;
    int i, contador = 0;
    for (i = 0; i < 10; i++)
    {
        printf ("Digite um numero:");
        scanf  ("%f", &numero[i]);
        if ( numero[i] >= 0)
        {
        soma += numero[i];
        }  
        if ( numero[i] < 0)
        {
            contador += 1;
        }
    }
    system("pause");
    system("cls");
    printf ("Sao %d numeros negativos\nSoma = %0.2f\n", contador, soma);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}