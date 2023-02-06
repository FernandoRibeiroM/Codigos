/*42. Fac ̧a um programa que leia um conjunto nao determinado de valores, um de cada vez, e  ̃
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
a entrada de dados com um valor negativo ou zero.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float v1, quadrado, cubo, raiz_quadrada;
    do
    {
        printf("DIgite um numero: ");
        scanf("%f", &v1);
        if (v1 < 0)
        {
            system("cls");
            printf("Finalizando programa.\n");
            system("pause");
        }
        else
        {
            quadrado = v1 * v1;
            cubo = v1 * v1 * v1;
            raiz_quadrada = sqrt(v1);
            printf("O quadrado de %.2f e: %.2f", v1, quadrado);
            printf("\nO cubo de %.2f e: %.2f", v1, cubo);
            printf("\nA raiz quadrada de %.2f e: %.2f\n", v1, raiz_quadrada);
            system("pause");
            system("cls");
        }
    } while (v1 >= 0);
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}