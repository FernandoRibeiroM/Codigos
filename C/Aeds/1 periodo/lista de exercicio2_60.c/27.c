/*27. Em Matematica, o n  ́ umero harm  ́ onico designado por ˆ H(n) define-se como sendo a soma
da serie harm  ́ onica:  ́

H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float numero, resultado = 0, i;
    printf("digite um numero: ");
    scanf("%f", &numero);
    system("pause");
    system("cls");
    printf("1 + ");
    for (i = 1; i <= numero; i++)
    {
        printf("1/%.2f ", i);
        resultado += 1 / i;
    }
    printf("= %f\n", resultado);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}