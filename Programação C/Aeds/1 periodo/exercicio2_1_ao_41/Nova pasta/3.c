/*3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário,
imprima o número ao quadrado.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float numero;
    printf("Digite um valor:\n");
    scanf("%f", &numero);
    if (numero >= 0)
    {
        printf("A raiz quadrada desse numero e: %0.2f\n", sqrt(numero));
    }
    else
    {
        printf("esse numero ao quadrado e: %0.2f\n", pow(numero, 2));
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}