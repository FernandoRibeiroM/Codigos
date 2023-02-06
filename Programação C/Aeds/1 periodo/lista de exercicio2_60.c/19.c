/*19. Escreva um algoritmo que leia um numero inteiro entre 100 e 999 e imprima na sa  ́  ́ıda
cada um dos algarismos que compoem o n  ̃ umero*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero, algorismo[3];
    do 
    {
        printf ("Esreva um n entre 100 e 999: ");
        scanf  ("%d", &numero);
        if (numero <= 100 || numero >= 999)
        {
            printf ("Vc digitou um n maior que 999 ou menor que 100.");
        }
    } while (!(numero >= 100 && numero <= 999));
    system("pause");
    system("cls");
    algorismo[0] = numero % 10;
    algorismo[1] = ((numero % 100) - algorismo[0]) / 10;
    algorismo[2] = ((numero % 1000) - algorismo[1] - algorismo[0]) / 100;
    printf ("%d\n", numero);
    system("pause");
    system("cls");
    printf ("%d %d %d\n", algorismo[2], algorismo[1], algorismo[0]);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}