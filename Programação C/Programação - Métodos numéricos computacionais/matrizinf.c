#include <stdio.h>

#define TAM 4

int main()
{
    // Resolver sistema triangular inferior
    int A[TAM][TAM];
    int B[TAM];
    int X[TAM];

    int i, j;

    // Entrada de dados
    printf("Entre com a matriz A:\n");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entre com o vetor B:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    // Resolução do sistema
    for (i = 0; i < TAM; i++)
    {
        X[i] = B[i];
        for (j = 0; j < i; j++)
            X[i] -= A[i][j] * X[j];
        X[i] /= A[i][i];
    }

    // Saída de dados
    printf("Vetor X:\n");
    {
        for (i = 0; i < TAM; i++)
            printf("%d ", X[i]);
    }
}