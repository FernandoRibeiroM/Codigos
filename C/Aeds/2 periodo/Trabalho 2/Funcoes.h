#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int selecao(int vetor[], int n)
{
    int i, j, minimo, temp, contador = 0;
    for (i = 0; i < n - 1; i++)
    {
        minimo = i;
        for (j = i + 1; j < n; j++)
        {
            if (vetor[minimo] > vetor[j])
            {
                minimo = j;
            }
            contador++;
        }
        temp = vetor[i];
        vetor[i] = vetor[minimo];
        vetor[minimo] = temp;
    }
    return contador;
}

int insercao(int vetor[], int n)
{
    int i, j, temp, contador = 0;
    for (i = 1; i < n; i++)
    {
        temp = vetor[i];
        j = i - 1;
        while (temp < vetor[j] && j >= 0)
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = temp;
        contador++;
    }
    return contador;
}

int Quick(int vetor[10], int inicio, int fim)
{

    int pivo, aux, i, j, meio, mediana, contador;
    i = inicio;
    j = fim;
    meio = (int)((i + j) / 2);
    mediana = ((i + j + meio) / 3);
    pivo = vetor[mediana];
    do
    {
        while (vetor[i] < pivo)
        {
            contador++;
            i = i + 1;
        }
        while (vetor[j] > pivo)
        {
            contador++;
            j = j - 1;
        }

        if (i <= j)
        {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i = i + 1;
            j = j - 1;
        }
    } while (j > i);
    if (inicio < j)
        contador += Quick(vetor, inicio, j);
    if (i < fim)
        contador += Quick(vetor, i, fim);
    return contador;
}

int intercala(int p, int q, int r, int v[], int tamanho)
{
    int i, j, k;
    int w[tamanho], contador = 0;
    i = p;
    j = q;
    k = 0;
    while (i < q && j <= r)
    {
        contador++;
        if (v[i] <= v[j])
            w[k++] = v[i++];
        else
            w[k++] = v[j++];
    }
    while (i < q)
    {
        w[k++] = v[i++];
    }
    while (j <= r)
    {
        w[k++] = v[j++];
    }
    for (i = p; i <= r; i++)
    {
        v[i] = w[i - p];
    }
    return contador;
}

void mergesort(int p, int r, int v[], int tamanho)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergesort(p, q, v, tamanho);
        mergesort(q + 1, r, v, tamanho);
        intercala(p, q + 1, r, v, tamanho);
    }
}

void Imprime(int vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void preencher_vetor_aletorio(int vetor[], int n)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < n; i++)
    {
        int temp = rand() % n;
        vetor[i] = temp;
    }
}

void preencher_vetor_ordenado(int vetor[], int n)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        vetor[i] = i;
    }
}

void preencher_vetor_inversamente_ordenado(int vetor[], int n)
{
    int i, j = -1;
    for (i = n; i >= 0; i++)
    {
        j++;
        vetor[j] = i;
    }
}
