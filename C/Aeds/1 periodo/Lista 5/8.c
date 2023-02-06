#include <stdio.h>
#include <math.h>

float serie(int n);

int main()
{
    int num;
    printf("Insira um numero para a serie S = 2/4 + 5/5 + 10/6 + ... + (N^2 + 1)/(N + 3): ");
    scanf("%d", &num);
    while (num <= 0)
    {
        printf("Valor invalido! Insira novamente o numero: ");
        scanf("%d", &num);
    }
    float resultado = serie(num);
    printf("\nResultado da serie S para %d: %.2f\n", num, resultado);
    return 0;
}

float serie(int n)
{ 
    int i;
    float resultado = 0;
    for ( i = 1; i <= n; i++)
    {
        resultado += ((pow(i, 2.0)) + 1.0) / (i + 3.0);
    }
    return resultado;
}