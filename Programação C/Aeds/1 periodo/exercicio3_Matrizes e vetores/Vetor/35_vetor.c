/*35. Fac ̧a um programa que leia dois numeros  ́ a e b (positivos menores que 10000) e:
• Crie um vetor onde cada posic ̧ao ̃ e um algarismo do n  ́ umero. A primeira posic ̧  ́ ao ̃ e ́
o algarismo menos significativo;
• Crie um vetor que seja a soma de a e b, mas fac ̧a-o usando apenas os vetores
constru ́ıdos anteriormente.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, v[4], v2[4], soma[4], i;
    printf("Insira o 1o. valor, sendo apenas natural menor que 10.000, no vetor: ");
    scanf("%d", &a);
    while (a < 0 || a > 9999)
    {
        printf("Numero invalido! Insira novamente um numero natural menor que 10.000: ");
        scanf("%d", &a);
    }
    for (i = 3; a != 0; i -= 1)
    {
        v[i] = (a % 10);
        soma[i] = v[i];
        a /= 10;
    }
    printf("Insira o 2o. valor, sendo apenas natural menor que 10.000, no vetor: ");
    scanf("%d", &b);
    while (b < 0 || b > 9999)
    {
        printf("Numero invalido! Insira novamente um numero natural menor que 10.000: ");
        scanf("%d", &b);
    }
    for (i = 3; b != 0; i -= 1)
    {
        v2[i] = (b % 10);
        soma[i] += v2[i];
        b /= 10;
    }
    printf("Soma por elemento dos vetores A e B:\n");
    for (i = 4; i > 0; i -= 1)
    {
        printf(" %d\n", soma[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}