#include <stdio.h>

int somaColuna(int *n, int c);

int main()
{
    int vet[7][6], i, j;
    for ( i = 0; i < 7; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            printf("Insira o [%d][%d] elemento da matriz: ", i + 1, j + 1);
            scanf("%d", &vet[i][j]);
        }
    }
    int coluna;
    printf("\nEscolha qual coluna deseja somar os elementos: ");
    scanf("%d", &coluna);
    while (coluna < 1 || coluna > 6)
    {
        printf("\nValor invalido! Selecione uma coluna (1-6): ");
        scanf("%d", &coluna);
    }
    int resultado = somaColuna(*vet, coluna);
    printf("\nSoma dos elementos da %d coluna: %d.\n", coluna, resultado);
    return 0;
}

int somaColuna(int *n, int c)
{
    int soma = 0, i;
    c--;
    for ( i = 0; i < 7; i++)
    {
        soma += n[c];
    }
    return soma;
}
