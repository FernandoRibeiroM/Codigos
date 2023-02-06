/*24. Fac ̧a um programa que leia dez conjuntos de dois valores, o primeiro representando o
numero do aluno e o segundo representando a sua altura em metros. Encontre o aluno  ́
mais baixo e o mais alto. Mostre o numero do aluno mais baixo e do mais alto, juntamente  ́
com suas alturas.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float vetor_altura[5];
    int i, vetor_aluno[5], indice_maior = 0, indice_menor = 0;
    for (i = 0; i < 5; i++)
    {
        printf("\nInsira o numero do aluno: ");
        scanf("%d", &vetor_aluno[i]);
        printf("Insira altura do aluno: ");
        scanf("%f", &vetor_altura[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (vetor_altura[indice_menor] > vetor_altura[i])
            indice_menor = i;
        if (vetor_altura[indice_maior] < vetor_altura[i])
            indice_maior = i;
    }
    printf("\nO aluno mais alto e o numero %d, medindo %.2fm de altura.", vetor_aluno[indice_maior], vetor_altura[indice_maior]);
    printf("\nO aluno mais baixo e o numero %d, medindo %.2fm de altura.", vetor_aluno[indice_menor], vetor_altura[indice_menor]);
    printf("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}