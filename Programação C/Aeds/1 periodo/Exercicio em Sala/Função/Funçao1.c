/*1 - Crie uma função para verificar e retornar qual o maior valor entre 3 valores passados como parâmetro A passagem de parâmetro nesse exercício será feita por valor*/
#include <stdio.h>

int maior1(int x, int y, int z, int maior);
int main()
{
    int n1, n2, n3, maior;
    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    maior = maior1(n1, n2, n3, maior);
    printf("Maior = %d\n", maior);
    return 0;
}
int maior1(int x, int y, int z, int maior)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else if (z > x && z > y)
    {
        return z;
    }
}