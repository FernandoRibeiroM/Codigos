#include <stdio.h>
#include <math.h>

void quadrado(int n);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    quadrado(num);
    return 0;
}

void quadrado(int n)
{
    float aux = sqrt(n);
    if (sqrt(n) == aux)
    {
        printf("\nQuadrado perfeito!\n");
    }
    else
    {
        printf("\nValor inserido nao e quadrado perfeito!\n");
    }
}
