/*10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
calcule e imprima a média geral.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota[15], soma = 0;
    int i;
    for (i = 0; i < 15; i++)
    {
        printf ("Digite sua nota:");
        scanf  ("%f", &nota[i]);
        soma += nota[i];
    }
    system("pause");
    system("cls");
    printf ("A media e: %0.2f\n", soma  / 15);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}