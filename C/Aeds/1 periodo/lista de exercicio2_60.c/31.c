/*31. Fac ̧a um programa que calcule e escreva o valor de S

S =
1
1
+
3
2
+
5
3
+
7
4
...
99
50*/
#include <stdio.h>
#include <stdio.h>
int main()
{
    int i;
    float numerador, denominador, resultado = 0;
    for (i = 1; i <= 50; i++)
    {
        numerador = i * 2 - 1;
        denominador = i;
        printf("\n%.2f/%.2f\n", numerador, denominador);
        resultado += numerador / denominador;
    }
    printf("O resultado e de: %.2f\n", resultado);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}