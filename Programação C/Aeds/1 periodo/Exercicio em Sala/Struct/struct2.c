#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct aluno
{
    int numm_aluno;
    float nota1;
    float nota2;
    float nota3;
    float media;
};
int main()
{
    struct aluno cadastro[10];
    int i;
    
    for (i = 0; i < 10; i++)
    {
        printf("Qual seu numero: ");
        scanf("%f", &cadastro[i].numm_aluno);

        printf("Nota 1: ");
        scanf("%f", &cadastro[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &cadastro[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &cadastro[i].nota3);

        cadastro[i].media = (cadastro[i].nota1 + cadastro[i].nota2 + cadastro[i].nota3) / 3;
        system("pause");
        system("cls");
    }
    for (i = 0; i < 10; i++)
    {
        printf("Numero: %d\n", cadastro[i].numm_aluno);
        printf("Nota 1: %f\n", cadastro[i].nota1);
        printf("Nota 2: %f\n", cadastro[i].nota2);
        printf("Nota 3: %f\n", cadastro[i].nota3);
        printf("Media : %f\n", cadastro[i].media);

        system("pause");
        system("cls");
    }

    printf("By: Fernando Ribeiro Martins");
    return 0;
}