/*25. Calcule as ra ́ızes da equac ̧ao de 2  ̃
o grau.
Lembrando que:
x =
−b ±
√
∆
2a
Onde
∆ = B
2 − 4ac

E ax2 + bx + c = 0 representa uma equac ̧ao de 2  ̃
o grau.

A variavel  ́ a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Nao ̃
e equac ̧  ́ ao de segundo grau”.  ̃
• Se ∆ < 0, nao existe real. Imprima a mensagem  ̃ N~ao existe raiz.
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz  ́unica.
• Se ∆ ≥ 0, imprima as duas ra ́ızes reais.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, delta, resultado1, resultado2;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    if (a != 0)
    {
        delta = pow(b, 2) - 4 * (a) * (c);
        if (delta < 0)
        {
            printf("Nao exite raiz.\n");
        }
        else if (delta = 0)
        {
            printf("b^2 / 2a = %f\n", (pow(b, 2)) / 2 * a);
        }
        else
        {
            resultado1 = (pow(b, 2) + sqrt(delta)) / 2 * a;
            resultado2 =((pow(b, 2)) - (sqrt(delta))) / 2 * a;
            printf("b^2 + raiz de delta / 2 * a = %f\n", resultado1);
            printf("b^2 - raiz de delta / 2 * a = %f\n", resultado2);
        }
    }
    else
    {
        printf("Nao e uma equaçao de segundo gral.\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");

    return 0;
}