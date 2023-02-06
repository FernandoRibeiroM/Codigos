#include <stdio.h>

int positvo_negativo(int n);

int main()
{
    int n, resposta;
    printf("Digite 1 numero: ");
    scanf("%d", &n);
    resposta = positvo_negativo(n);
    printf("%d", resposta);
    return 0;
}

int positvo_negativo(int n)
{
    if(n > 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    else 
    {
        return 0;
    }
}
