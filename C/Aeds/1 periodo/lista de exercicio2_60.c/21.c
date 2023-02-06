/*21. Fac ̧a um programa que receba dois numeros. Calcule e mostre:  ́
• a soma dos numeros pares desse intervalo de n  ́ umeros, incluindo os n  ́ umeros digi-  ́
tados;
• a multiplicac ̧ao dos n  ̃ umeros  ́  ́ımpares desse intervalo, incluindo os digitados;*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero[2], i, par = 0, impar = 1;
    printf ("Digite dois numeros:\n");
    scanf ("%d %d", &numero[0], &numero[1]);
    system("pause");
    system("cls");
    i = numero[0];
    do
    {
       printf ("%d\n", i);
       if (i %2 == 0)
       {
           par += i;
       }
       if (i %2 != 0) 
       {
           impar = impar * i;
       }
       i++;
    }while (!(i == numero[1] + 1));
    system("pause");
    system("cls");
    printf ("Soma par: %d\nMultiplicaçao impar: %d\n", par, impar);

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}