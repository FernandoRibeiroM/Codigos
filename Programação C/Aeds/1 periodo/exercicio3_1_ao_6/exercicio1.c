#include <stdio.h>
#include <stdlib.h>
int main()
{
    int o;
    float n1, n2;
    o = 0;
    n1 = 0;
    n2 = 0;
    do
    {
        printf("Qual operaçao deseja fazer?\n 0-Sair \n 1-Soma \n 2-Subtraçao \n 3-Multiplicaçao \n 4-Divisao \n");
        scanf("%d", &o);
        if ((o >= 0) && (o <= 4))
        {
            printf("digite dois valores: \n");
            scanf("%f %f", &n1, &n2);
            switch (o)
            {
            case 1:
                printf("%f + %f = %f", n1, n2, n1 + n2);
                system ("cls");
                break;
            case 2:
                printf("%f - %f = %f", n1, n2, n1 - n2);
                 system ("cls");
                break;
            case 3:
                printf("%f * %f = %f", n1, n2, n1 * n2);
                system ("cls");
                break;
            case 4:
                printf("%f / %f = %f", n1, n2, n1 / n2);
                system ("cls");
                break;
            }
        }
        else
        {
            printf("voce deve digitar um valor de 0 a 4");
        }
    } while (o != 0);
    printf("\nObrigado por utilizar à calculadora.");
    return 0;
}