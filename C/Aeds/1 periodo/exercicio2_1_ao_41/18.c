/*18. Fac ̧a um programa que mostre ao usuario um menu com 4 opc ̧  ́ oes de operac ̧  ̃ oes ma-  ̃
tematicas (as b  ́ asicas, por exemplo). O usu  ́ ario escolhe uma das opc ̧  ́ oes e o seu pro-  ̃
grama entao pede dois valores num  ̃ ericos e realiza a operac ̧  ́ ao, mostrando o resultado e  ̃
saindo.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int o;
    float n1, n2;
    printf("Qual operação deseja fazer:\n 1-Soma \n 2-Subtraçao \n 3-Multiplicaçao \n 4-Divisao \n");
    scanf("%d", &o);
    if ((o > 0) && (o < 5))
    {
        printf("digite dois valores:\n");
        scanf("%f %f", &n1, &n2);
        switch (o)
        {
        case 1:
            printf("%f + %f = %f\n", n1, n2, n1 + n2);
            break;
        case 2:
            printf("%f - %f = %f\n", n1, n2, n1 - n2);
            break;
        case 3:
            printf("%f * %f = %f\n", n1, n2, n1 * n2);
            break;
        case 4:
            printf("%f / %f = %f\n", n1, n2, n1 / n2);
            break;
        }
    }
    else
    {
        printf("Voce colocou uma operaçao invalida\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}