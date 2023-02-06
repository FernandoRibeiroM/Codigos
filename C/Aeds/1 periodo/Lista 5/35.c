#include <stdio.h>

void inverterVetor(float *v, int tam);

int main()
{
    float vet[10];
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("Insira o %do. elemento do vetor: ", i + 1);
        scanf("%f", &vet[i]);
    }
    printf("\n\nVetor inserido:");
    for ( i = 0; i < 10; i++)
    {
        printf(" %.2f", vet[i]);
    }
    inverterVetor(vet, 9);
    printf("\n\nVetor invertido:");
    for ( i = 0; i < 10; i++)
    {
        printf(" %.2f", vet[i]);
    }
    printf("\n");
    return 0;
}

void inverterVetor(float *v, int tam)
{ 
    if (tam > 4)
    {
        int aux = v[tam];
        v[tam] = v[9 - tam];
        v[9 - tam] = aux;
        inverterVetor(v, tam - 1);
    }
}