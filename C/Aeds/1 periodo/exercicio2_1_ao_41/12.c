/*12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número. */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int numero;
    float resultado;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    if (numero >= 0)
    {
        resultado = log10(numero);
        printf("O logaritmo deste valor e: %f\n", resultado);
    }
    else
    {
        printf("Numero ivalido.\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");

    return 0;
}