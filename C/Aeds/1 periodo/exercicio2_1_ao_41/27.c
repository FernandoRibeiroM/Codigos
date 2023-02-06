/*27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:

Categoria Idade
Infantil A 5 a 7
Infantil B 8 a 10
Juvenil A 11 a 13
Juvenil B 14 a 17
Senior ˆ maiores de 18 anos*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if ((idade >= 5) && (idade <= 7))
    {
        printf("Categoria infantil A.\n");
    }
    else if ((idade >= 8) && (idade <= 10))
    {
        printf("Categoria infantil B.\n");
    }
    else if ((idade >= 11) && (idade <= 13))
    {
        printf("Categoria Juvenil A.\n");
    }
    else if ((idade >= 14) && (idade <= 17))
    {
        printf("Categoria Juvenil B.\n");
    }
    else if (idade >= 18)
    {
        printf("Categoria Senior.\n");
    }
    else
    {
        printf("Erro\nVoce digitou um numero menor do que 5.\n");
    }

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}