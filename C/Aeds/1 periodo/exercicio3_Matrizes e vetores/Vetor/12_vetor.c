/*12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores
lidos juntamente com o maior, o menor e a média dos valores.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero[5], i, maior, menor;
    float media = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero[0]);
    maior = numero[0];
    menor = numero[0];
    media += numero[0];
    for (i = 1; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
        media += numero[i];
        if (numero[i] > maior)
        {
            maior = numero[i];
        }
        if (numero[i] < menor)
        {
            menor = numero[i];
        }
    }
    system("pause");
    system("cls");
    for (i = 0; i < 5; i++)
    {
        printf("Numero %d = %d\n", i + 1, numero[i]);
    }
    system("pause");
    system("cls");
    printf("%d e o maior.\n%d e o menor.\n%0.2f e a media\n", maior, menor, media / 5);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}