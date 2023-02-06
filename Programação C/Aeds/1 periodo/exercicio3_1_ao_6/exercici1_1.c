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
            system("cls");
            if ((o > 0) && (o < 5))
            {
                printf("digite dois valores: \n");
                scanf("%f %f", &n1, &n2);
                system("cls");
                switch (o)
                {
                case 1:
                    printf("%0.2f + %0.2f = %0.2f\n", n1, n2, n1 + n2);
                    system("pause");
                    system("cls");
                    break;
                case 2:
                    printf("%0.2f - %0.2f = %0.2f\n", n1, n2, n1 - n2);
                    system("pause");
                    system("cls");
                    break;
                case 3:
                    printf("%0.2f * %0.2f = %0.2f\n", n1, n2, n1 * n2);
                    system("pause");
                    system("cls");
                    break;
                case 4:
                    printf("%0.2f / %0.2f = %0.2f\n", n1, n2, n1 / n2);
                    system("pause");
                    system("cls");
                    break;
                }
            }
        }
        else
        {
            system("cls");
            printf("voce deve digitar um valor de 0 a 4\n");
            system("pause");
            system("cls");
        }
    } while (o != 0);
    printf("\nObrigado por utilizar a calculadora.");
    return 0;
}