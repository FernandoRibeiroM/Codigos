/*13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se
encontram o maior e o menor valor.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero[5], i, maior, menor, contador_menor = 0, contador_maior = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero[0]);
    maior = numero[0];
    menor = numero[0];
    for (i = 1; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
        if (numero[i] > maior)
        {
            maior = numero[i];
            contador_maior = i;
        }
        if (numero[i] < menor)
        {
            menor = numero[i];
            contador_menor = numero[i];
        }
    }
    system("pause");
    system("cls");
    printf("%d e o maior, ele esta na posicao %d.\n%d e o menor, ele esta na posicao %d.\n", maior, contador_maior, menor, contador_menor);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}