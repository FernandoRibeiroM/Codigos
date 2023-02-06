#include <stdio.h>

int par(int *n);

int main()
{
    int vet[10], i;
    for ( i = 0; i < 10; i++)
    {
        printf("Insira o %do. elemento do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    int pares = par(vet);
    printf("\nO vetor possue %d numero(s) par(es).\n", pares);
    return 0;
}

int par(int *n)
{
    int cont = 0, i;
    for ( i = 0; i < 10; i++)
    {
        if ((n[i] % 2) == 0)
        {
            cont++;
        }
    }
    return cont;
}
