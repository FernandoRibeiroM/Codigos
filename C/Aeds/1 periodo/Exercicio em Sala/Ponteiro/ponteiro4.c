/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A; Ver menos Responder*/
#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);

int main()
{
    int x = 5, y = 10, *px = &x, *py = &y;
    printf ("x = %d\ny = %d\n", *px, *py);
    troca(&(*px), &(*py));
    printf ("x = %d\ny = %d", *px, *py);
    return 0;
}

void troca(int *a, int *b)
{
    int z;
    z = *a;
    *a = *b;
    *b = z;
}
