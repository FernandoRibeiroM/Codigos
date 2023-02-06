/*15. Usando switch, escrevprogramaa um  que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto e, domingo se  ́ 1, segunda-feira se 2, e
assim por diante. */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dia;
    printf("Digite o  dia  da semana:");
    scanf("%d", &dia);
    if ((dia > 0) && (dia <= 7))
    {
        switch (dia)
        {
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terça\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        case 1:
            printf("Domingo\n");
            break;
        }
    }
    else
    {
        printf("Voce colocou um dia invalido.\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");

    return 0;
}