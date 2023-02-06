#include <stdio.h>

void impressaoNormal(int *n);

void impressaoInversa(int *n);

void maiorMenor(int *n, int *n2, int *n3);

int main()
{
    int vet[10], maior, menor, i;
    for ( i = 0; i < 10; i++)
    {
        printf("Insira o %do. elemento do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    impressaoNormal(vet);
    impressaoInversa(vet);
    maiorMenor(vet, &maior, &menor);
    printf("\n\nMaior e menor elemento do vetor sao respectivamente: %d e %d.\n", maior, menor);
}

void impressaoNormal(int *n)
{
    int i;
    printf("\nImpressao normal do vetor:");
    for ( i = 0; i < 10; i++)
    {
        printf(" %d", n[i]);
    }
}

void impressaoInversa(int *n)
{
    int i;
    printf("\n\nImpressao inversa do vetor:");
    for ( i = 9; i >= 0; i--)
    {
        printf(" %d", n[i]);
    }
}

void maiorMenor(int *n, int *n2, int *n3)
{
    int maior = n[0], menor = n[0], i;
    for ( i = 1; i < 10; i++)
    {
        if (n[i] > maior)
        {
            maior = n[i];
        }
        if (n[i] < menor)
        {
            menor = n[i];
        }
    }
    *n2 = maior;
    *n3 = menor;
}
