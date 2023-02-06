/*2 - Crie uma função que receba 5 valores como parâmetro, e que “ qual
o menor e qual o maior valor dos 5 Nesta função ao menos dois parâmetros deverão ser passados por referência*/
#include <stdio.h>

void maior_menor(int n1, int n2, int n3, int n4, int n5, int *maior, int *menor);

int main ()
{
    int n[5], maior, menor;
    printf("Digite 5 numeros:\n");
    scanf("%d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4]);
    maior_menor(n[0], n[1], n[2], n[3], n[4], &maior, &menor);
    printf("Maior = %d\nMenor = %d\n", maior, menor);
    return 0;
}
void maior_menor(int n1, int n2, int n3, int n4, int n5, int *maior, int *menor)
{
    *maior = n1;
    *menor = n1;
    if (n2 > *maior)
    {
        *maior = n2;
    }
    if (n2 < *menor)
    {
        *menor = n2;
    }
    if (n3 > *maior)
    {
        *maior = n3;
    }
    if (n3 < *menor)
    {
        *menor = n3;
    }
    if (n4 > *maior)
    {
        *maior = n4;
    }
    if (n4 < *menor)
    {
        *menor = n4;
    }
    if (n5 > *maior)
    {
        *maior = n5;
    }
    if (n5 < *menor)
    {
        *menor = n5;
    }
}