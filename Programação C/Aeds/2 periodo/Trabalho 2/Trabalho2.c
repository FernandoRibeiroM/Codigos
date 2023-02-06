#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t
#include "Funcoes.h"
#define TAM1 1000000
#define TAM2 20
#define TAM3 30
#define TAM4 40
/*
#define TAM1 1000
#define TAM2 10000
#define TAM3 100000
#define TAM4 2000000
*/

int main()
{
    clock_t t;
    double vetor1[TAM1], vetor2[TAM2], vetor3[TAM3], vetor4[TAM4];
    int i, contador;
    char imprimir[1], sim[] = "S";
    for (i = 0; i < 10; i++)
    {
        // aleatorio
        // TAM1
        t = clock();
        preencher_vetor_aletorio(vetor1, TAM1);
        printf("Deseja imprimir o vetor? S para sim e N para nao\n");
        setbuf(stdin, NULL);
        gets(imprimir);
        if (strcmp(imprimir, sim) == 0)
        {
            Imprime(vetor1, TAM1);
        }
        contador = selecao(vetor1, TAM1);
        printf("Deseja imprimir o vetor? S para sim e N para nao\n");
        setbuf(stdin, NULL);
        gets(imprimir);
        if (strcmp(imprimir, sim) == 1)
        {
            Imprime(vetor1, TAM1);
        }
        printf("Tempo de execucao: %lf\ncontador: %d", ((double)t) / ((CLOCKS_PER_SEC)), contador);
        t = clock() - t;
        // TAM2
        t = clock();
        preencher_vetor_aletorio(vetor2, TAM2);
        printf("Deseja imprimir o vetor? S para sim e N para nao\n");
        setbuf(stdin, NULL);
        gets(imprimir);
        if (strcmp(imprimir, sim) == 1)
        {
            Imprime(vetor2, TAM2);
        }
        contador = selecao(vetor1, TAM2);
        printf("Deseja imprimir o vetor? S para sim e N para nao\n");
        setbuf(stdin, NULL);
        gets(imprimir);
        if (strcmp(imprimir, sim) == 1)
        {
            Imprime(vetor2, TAM2);
        }
        printf("Tempo de execucao: %lf\ncontador: %d", ((double)t) / ((CLOCKS_PER_SEC)), contador);
        t = clock() - t;
        // TAM3
        t = clock();
        preencher_vetor_aletorio(vetor1, TAM3);
        printf("Deseja imprimir o vetor? S para sim e N para nao\n");
        setbuf(stdin, NULL);
        gets(imprimir);
        if (strcmp(imprimir, sim) == 1)
        {
            Imprime(vetor3, TAM3);
        }
        contador = selecao(vetor1, TAM3);
        printf("Deseja imprimir o vetor? S para sim e N para nao\n");
        setbuf(stdin, NULL);
        gets(imprimir);
        if (strcmp(imprimir, sim) == 1)
        {
            Imprime(vetor3, TAM3);
        }
        printf("Tempo de execucao: %lf\ncontador: %d", ((double)t) / ((CLOCKS_PER_SEC)), contador);
        t = clock() - t;
        // TAM4
        t = clock();
        preencher_vetor_aletorio(vetor1, TAM4);
        printf("Deseja imprimir o vetor? S para sim e N para nao\n");
        setbuf(stdin, NULL);
        gets(imprimir);
        if (strcmp(imprimir, sim) == 1)
        {
            Imprime(vetor4, TAM4);
        }
        contador = selecao(vetor1, TAM4);
        printf("Deseja imprimir o vetor? S para sim e N para nao\n");
        setbuf(stdin, NULL);
        gets(imprimir);
        if (strcmp(imprimir, sim) == 1)
        {
            Imprime(vetor4, TAM4);
        }
        printf("Tempo de execucao: %lf\ncontador: %d", ((double)t) / ((CLOCKS_PER_SEC)), contador);
        t = clock() - t;
        // crescente

        // decrecente
    }
    // insertsort
    for (i = 0; i < 10; i++)
    {
        // aleatorio

        // crescente

        // decrecente
    }
    // quicksort
    for (i = 0; i < 10; i++)
    {
        // aleatorio

        // crescente

        // decrecente
    }
    // mergesort
    for (i = 0; i < 10; i++)
    {
        // aleatorio

        // crescente

        // decrecente
    }
}
/*t = clock();
    // Código q vai ter o tempo medido fica aqui
    t = clock() - t;
    printf("Tempo de execucao: %lf", ((double)t) / ((CLOCKS_PER_SEC)));*/
