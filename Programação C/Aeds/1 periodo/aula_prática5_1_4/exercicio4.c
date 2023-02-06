/*4a Questão
Ler 5 números que devem ser digitados por usuários e armazená-los em um arranjo. Em seguida,
obtenha o maior e o menor valor armazenado, além da média dos valores.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numeros[5], maior, menor, soma = 0;
    float media = 0;
    int numeros1[5], numeros2[5], i;
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &numeros[0]);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &numeros[1]);
    printf("Digite o valor do terceiro numero: ");
    scanf("%d", &numeros[2]);
    printf("Digite o valor do quarto numero: ");
    scanf("%d", &numeros[3]);
    printf("Digite o valor do quinto numero: ");
    scanf("%d", &numeros[4]);
    system("pause");
    system("cls");
    maior = numeros[0];
    menor = numeros[0];
    if (maior < numeros[1])
    {
        maior = numeros[1];
    }
    if (menor > numeros[1])
    {
        menor = numeros[1];
    }
    if (maior < numeros[2])
    {
        maior = numeros[2];
    }
    if (menor > numeros[2])
    {
        menor = numeros[2];
    }
    if (maior < numeros[3])
    {
        maior = numeros[3];
    }
    if (menor > numeros[3])
    {
        menor = numeros[3];
    }
    if (maior < numeros[4])
    {
        maior = numeros[4];
    }
    if (menor > numeros[4])
    {
        menor = numeros[4];
    }
    printf("O valor do menor e: %d\nO valor do maior e: %d \n", menor, maior);
    system("pause");
    system("cls");
    soma = soma + numeros[0];
    soma = soma + numeros[1];
    soma = soma + numeros[2];
    soma = soma + numeros[3];
    soma = soma + numeros[4];
    media = soma / 5;
    printf("O valor da media e: %0.2f\n", media);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}
