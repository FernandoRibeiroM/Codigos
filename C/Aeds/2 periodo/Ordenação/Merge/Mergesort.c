#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void preencher_vetor(int vetor[], int n);
void mostra_vetor(int v[]);
void intercala(int p, int q, int r, int v[]);
void mergesort(int p, int r, int v[]);

int main()
{

    int vetor[TAM];
    preencher_vetor(vetor, TAM);
    mostra_vetor(vetor);
    mergesort(0, TAM - 1, vetor);
    mostra_vetor(vetor);

    return 0;
}

void preencher_vetor(int vetor[], int n)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < n; i++)
    {
        int temp = rand() % 100;
        vetor[i] = temp;
    }
    mostra_vetor(vetor);
}

void mostra_vetor(int v[])
{
    int i;
    printf("%2d ", v[0]);
    for (i = 1; i < TAM; i++)
    {
        printf("%2d ", v[i]);
    }
    printf("\n");

}

void intercala(int p, int q, int r, int v[])
{
    int i, j, k;
    int w[TAM];
    i = p;
    j = q;
    k = 0;
    while (i < q && j <= r)
    {
        if (v[i] <= v[j])
            w[k++] = v[i++];
        else
            w[k++] = v[j++];
    }
    while (i < q)
        w[k++] = v[i++];
    while (j <= r)
        w[k++] = v[j++];
    for (i = p; i <= r; i++)
        v[i] = w[i - p];
}

void mergesort(int p, int r, int v[])
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergesort(p, q, v);
        mergesort(q + 1, r, v);
        intercala(p, q + 1, r, v);
        mostra_vetor(v);
    }
}