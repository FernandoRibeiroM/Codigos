/*4 - Crie uma função recursiva, para calcular e retornar o fatorial de um valor passado por parâmetro por valor para a função*/
#include <stdio.h>

int fatorial(int x);

int main ()
{
    int numero, resultado;
    printf("Digite um numero: ");
    scanf ("%d", &numero);
    resultado = fatorial(numero);
    printf("Fatorial de %d e : %d", numero, resultado);
    return 0;
}
int fatorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * fatorial(x - 1);
    }
    
    
    
}
