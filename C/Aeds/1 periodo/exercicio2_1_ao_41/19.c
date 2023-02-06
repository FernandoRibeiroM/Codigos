/*19. Fac ̧a um programa para verificar se um determinado numero inteiro e divis  ́  ́ıvel por 3 ou
5, mas nao simultaneamente pelos dois.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, divisao3, divisao5;
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);
    divisao3 = numero % 3;
    divisao5 = numero % 5;
    if ((divisao3 == 0) && (divisao5 != 0))
    {
        printf("O valor e divisivel por 3\n");
    }
    else if ((divisao5 == 0) && (divisao3 != 0))
    {
        printf("O valor e divisivel por 5\n");
    }
    else if ((divisao3 == 0) && (divisao5 == 0))
    {
        printf("O valor e divisivel por 3 e 5\n");
    }
    else
    {
        printf("Nao e divisivel nem por 3 nem por 5\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}