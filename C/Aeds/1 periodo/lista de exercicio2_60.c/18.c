/*18. Escreva um algoritmo que leia certa quantidade de numeros e imprima o maior deles e  ́
quantas vezes o maior numero foi lido. A quantidade de n  ́ umeros a serem lidos deve ser  ́
fornecida pelo usuario.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, quantidade_testada, maior, numero, contagem;
    printf("Digite quantos numeros deseja ler: ");
    scanf("%d", &quantidade_testada);
    printf("Digite o 1 numero: ");
    scanf("%d", &numero);
    maior = numero;
    contagem = 0;
    for (i = 1; i < quantidade_testada; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero);
        if (numero > maior)
        {
            maior = numero;
            contagem = 1;
        }
        else if (numero == maior)
        {
            contagem++;
        }
    }
    printf("Maior = %d\n", maior);
    printf("Ele apareceu: %d\n", contagem);

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}