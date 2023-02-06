#include <stdio.h>

int SomaSerie(int i, int j, int k);

int main()
{
    int min, max, incremento;
    printf("Insira o valor inicial do intervalo: ");
    scanf("%d", &min);
    printf("Insira o valor limite do intervalo: ");
    scanf("%d", &max);
    while (max < min)
    {
        printf("Valor invalido, valor do limite menor que o valor inicial! Insira o limite novamente: ");
        scanf("%d", &max);
    }
    printf("Insira um valor para incremento: ");
    scanf("%d", &incremento);
    while (incremento < 1)
    {
        printf("Valor invalido! Insira um valor positivo para o incremento: ");
        scanf("%d", &incremento);
    }
    int resultado = SomaSerie(min, max, incremento);
    printf("\nA soma da serie de valores do intervalo [%d, %d], com incremento %d: %d.", min, max, incremento, resultado);
    return 0;
}

int SomaSerie(int i, int j, int k)
{
    if (i > j)
    {
        return 0;
    }
    else
    {
        return i + SomaSerie(i + k, j, k);
    }
}
