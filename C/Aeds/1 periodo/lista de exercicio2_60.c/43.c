/*43. Fac ̧a um programa que leia um numero indeterminado de idades de indiv  ́  ́ıduos (pare
quando for informada a idade 0), e calcule a idade media desse grupo.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade, contador_idades_inseridas = 0, soma_idades = 0;
    float media;
    do
    {
        system ("cls");
        printf("Digite uma idade: ");
        scanf("%d", &idade);
        system ("pause");
        if (idade == 0)
        {
            system ("cls");
            printf("Finalizando programa.\n");
        }
        else if (idade < 0)
        {
            system ("cls");
            printf("\nIdade invalida.");
        }
        else
        {
            soma_idades += idade;
            contador_idades_inseridas++;
        }
    } while (idade != 0);
    media = soma_idades / contador_idades_inseridas;
    system("cls");
    printf("A media e: %.2f\n", media);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}