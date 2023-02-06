/*2a Questão
Fazer um algoritmo que:
(a) Crie um arranjo de 5 elementos e o preencha de números
(b) Procure a posição do menor elemento deste arranjo
(c) Troque o menor elemento com elemento da primeira posição
(d) Imprima os elementos do arranjo*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int menor, valor_0, contar = 0;
    int numeros[5];
    printf("Digite o valor  primeiro numero: ");
    scanf("%d", &numeros[0]);
    printf("Digite o valor  segundo numero: ");
    scanf("%d", &numeros[1]);
    printf("Digite o valor  teceiro numero: ");
    scanf("%d", &numeros[2]);
    printf("Digite o valor  quarto numero: ");
    scanf("%d", &numeros[3]);
    printf("Digite o valor  quinto numero: ");
    scanf("%d", &numeros[4]);
    system("cls");
    menor = numeros[0];
    if (numeros[1] < menor)
    {
        menor = numeros[1];
        contar = 1;
    }
    if (numeros[2] < menor)
    {
        menor = numeros[2];
        contar = 2;
    }
    if (numeros[3] < menor)
    {
        menor = numeros[3];
        contar = 3;
    }
    if (numeros[4] < menor)
    {
        menor = numeros[4];
        contar = 4;
    }

    valor_0 = numeros[0];
    numeros[0] = menor;
    numeros[contar] = valor_0;
    printf("O valor do primeiro e: %d", numeros[0]);
    printf("\nO valor do segundo e: %d", numeros[1]);
    printf("\nO valor do terceiro e: %d", numeros[2]);
    printf("\nO valor do quarto e: %d", numeros[3]);
    printf("\nO valor do quinto e: %d", numeros[4]);
    system ("pause");
    system ("cls");
    printf ("By: Fernando Ribeiro Martins");
    return 0;
}