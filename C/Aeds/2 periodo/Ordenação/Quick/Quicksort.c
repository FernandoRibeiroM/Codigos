#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void Imprime(int vetor[]);
void preencher_vetor(int vetor[], int n);
void Quick(int vetor[10], int inicio, int fim);

int main()
{
    int vetor[TAM];
    preencher_vetor(vetor, TAM);
    Quick(vetor, 0, TAM - 1);
    printf("\n");
    return 0;
}

void Imprime(int vetor[])
{
    int i;
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
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
    Imprime(vetor);
}

void Quick(int vetor[10], int inicio, int fim)
{

    int pivo, aux, i, j, meio;
    i = inicio;
    j = fim;
    meio = (int)((i + j) / 2);
    pivo = vetor[meio];
    do
    {
        while (vetor[i] < pivo)
            i = i + 1;
        while (vetor[j] > pivo)
            j = j - 1;

        if (i <= j)
        {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i = i + 1;
            j = j - 1;
        }
        Imprime(vetor);
    } while (j > i);
    if (inicio < j)
        Quick(vetor, inicio, j);
    if (i < fim)
        Quick(vetor, i, fim);
}