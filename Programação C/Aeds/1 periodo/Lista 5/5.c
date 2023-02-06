#include <stdio.h>

float operacao(float n1, float n2, char X);

int main()
{
    float n1, n2, resposta;
    char conta;
    printf ("Digite dois numeros: ");
    scanf ("%f %f", &n1, &n2);
    printf ("Digite '+' para soma, '-' para subtrecao, '/' para divisao ou '*' para multiplicacao: ");
    setbuf(stdin,NULL);
    scanf("%c", &conta);
    resposta = operacao(n1, n2, conta);
    printf("resposta = %0.2f\n", resposta);
    return 0;
}

float operacao(float n1, float n2, char X)
{
    if(X == '+')
    {
        return (n1 + n2);
    }
    else if (X == '-')
    {
        return (n1 - n2);
    }
    else if (X == '/')
    {
        return (n1 / n2);
    }
    else if (X == '*')
    {
        return (n1 * n2);
    }
}