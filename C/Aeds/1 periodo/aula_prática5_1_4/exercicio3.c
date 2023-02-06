/*3a Questão
Ler 5 números que devem ser digitados por usuários e armazená-los em um arranjo. Em seguida,
obtenha outro arranjo, cujos componentes são o triplo dos respectivos componentes do primeiro
arranjo.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numeros1[5], numeros2[5];
    printf ("Digite o valor do primeiro numero: ");
    scanf ("%d", &numeros1[0]);
    printf ("Digite o valor do segundo numero: ");
    scanf ("%d", &numeros1[1]);
    printf ("Digite o valor do terceiro numero: ");
    scanf ("%d", &numeros1[2]);
    printf ("Digite o valor do quarto numero: ");
    scanf ("%d", &numeros1[3]);
    printf ("Digite o valor do quinto numero: ");
    scanf ("%d", &numeros1[4]);
    numeros2[0] = numeros1[0] * 3;   
    numeros2[1] = numeros1[1] * 3;
    numeros2[2] = numeros1[2] * 3;
    numeros2[3] = numeros1[3] * 3;
    numeros2[4] = numeros1[4] * 3;
    system ("cls");
    printf ("O valor do  primeiro do arranjo A e: %d", numeros1[0]);
    printf ("\nO valor do  segundo do arranjo A e: %d", numeros1[1]);
    printf ("\nO valor do  terceiro do arranjo A e: %d", numeros1[2]);
    printf ("\nO valor do  quarto do arranjo A e: %d", numeros1[3]);
    printf ("\nO valor do  quinto do arranjo A e: %d\n", numeros1[4]);
    system ("pause");
    system ("cls");    
    printf ("O valor do primeiro arranjo B e: %d", numeros2[0]);
    printf ("\nO valor do segundo do arranjo B e: %d", numeros2[1]);
    printf ("\nO valor do terceiro do arranjo B e: %d", numeros2[2]);
    printf ("\nO valor do quarto do arranjo B e: %d", numeros2[3]); 
    printf ("\nO valor do quinto do arranjo B e: %d\n", numeros2[4]);;
    system ("pause");
    system ("cls");
    printf ("By: Fernando Ribeiro Martins");
    return 0;
}