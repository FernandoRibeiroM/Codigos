/*1. Faça um programa que possua um vetor denominado A que armazene 6 números
inteiros. O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável inteira (simples) a soma entre os valores das
posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
d) Mostre na tela cada valor do vetor A, um em cada linha.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[6]  = {1,0,5,-2,-5,7}, soma = 8;
    A[4] = 100;
    printf ("Posicao 1: %d\nPosicao 2: %d\nPosicao 3: %d\nPosicao 4: %d\nPosicao 5: %d\nPosicao 6: %d\n", A[0], A[1], A[2], A[3], A[4], A[5]);
    
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}