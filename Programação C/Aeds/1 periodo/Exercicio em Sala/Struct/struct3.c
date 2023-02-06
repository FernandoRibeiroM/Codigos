/*Crie uma scruct para representar a matrícula ( as notas, n 1
n 2 e n 3 e média geral, de um aluno, além de seu nome e curso que
está cursando Em seguida, leia por meio do teclado os dados de 5
alunos e armazene Em seguida, faça
•
a) apresente os dados do aluno que obteve a maior média geral
•
b) Apresente os dados do aluno que obteve a maior nota entre as três
recebidas
•
c) Apresente os dados do aluno que se encontra na posição 1 em uma ordem
crescente dos alunos de acordo com ordenação de seus nomes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct aluno
{
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float media;
    char nome[20];
    char curso[30];
};
int main()
{
    struct aluno cadastro[1];
    int i, j, contador = 0, contador2 = 0, contador_nomes;
    float maior_media = 0, maior_nota = 0;

    printf("Qual seu numero: ");
    scanf("%d", &cadastro[0].matricula);

    printf("Nota 1: ");
    scanf("%f", &cadastro[0].nota1);

    printf("Nota 2: ");
    scanf("%f", &cadastro[0].nota2);

    printf("Nota 3: ");
    scanf("%f", &cadastro[0].nota3);

    printf("Digite seu nome: ");
    setbuf(stdin, NULL);
    gets(cadastro[0].nome);

    printf("Digite o nome do seu curso: ");
    setbuf(stdin, NULL);
    gets(cadastro[0].curso);

    cadastro[0].media = (cadastro[0].nota1 + cadastro[0].nota2 + cadastro[0].nota3) / 3.0;

    maior_media = cadastro[0].media;

    if (cadastro[0].nota1 > maior_nota)
    {
        maior_nota = cadastro[0].nota1;
    }
    if (cadastro[0].nota2 > maior_nota)
    {
        maior_nota = cadastro[0].nota2;
    }
    if (cadastro[0].nota3 > maior_nota)
    {
        maior_nota = cadastro[0].nota3;
    }

    system("pause");
    system("cls");

    for (i = 0; i < 5; i++)
    {
        printf("Qual seu numero: ");
        scanf("%d", &cadastro[i].matricula);

        printf("Nota 1: ");
        scanf("%f", &cadastro[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &cadastro[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &cadastro[i].nota3);

        printf("Digite seu nome: ");
        setbuf(stdin, NULL);
        gets(cadastro[i].nome);

        printf("Digite o nome do seu curso: ");
        setbuf(stdin, NULL);
        gets(cadastro[i].curso);

        cadastro[i].media = (cadastro[i].nota1 + cadastro[i].nota2 + cadastro[i].nota3) / 3.0;

        if (cadastro[i].media > maior_media)
        {
            maior_media = cadastro[i].media;
            contador = i;
        }

        if (cadastro[i].nota1 > maior_nota)
        {
            maior_nota = cadastro[i].nota1;
            contador2 = i;
        }
        if (cadastro[i].nota2 > maior_nota)
        {
            maior_nota = cadastro[i].nota2;
            contador2 = i;
        }
        if (cadastro[i].nota3 > maior_nota)
        {
            maior_nota = cadastro[i].nota3;
            contador2 = i;
        }
        system("pause");
        system("cls");
    }
    //A
    printf("Matricula: %d\nNota1: %f\nNota2: %f\nNota3: %f\nMedia:;%f\nNome: %s\nCurso: %s\n\n", cadastro[contador].matricula, cadastro[contador].nota1, cadastro[contador].nota2, cadastro[contador].nota3, cadastro[contador].nome, cadastro[contador].curso);
    //B
    printf("Matricula: %d\nNota1: %f\nNota2: %f\nNota3: %f\nMedia:;%f\nNome: %s\nCurso: %s\n\n", cadastro[contador2].matricula, cadastro[contador2].nota1, cadastro[contador2].nota2, cadastro[contador2].nota3, cadastro[contador2].nome, cadastro[contador2].curso);

    for (i = 1; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (strcmp(cadastro[i].nome, cadastro[i - 1].nome) < 0)
            {
                if (strcmp(cadastro[i - 1].nome, contador_nomes > 0))
                    contador_nomes == i - 1;
            }
            if (strcmp(cadastro[i].nome, cadastro[i - 1].nome) > 0)
            {
                if (strcmp(cadastro[i].nome, contador_nomes > 0))
                    contador_nomes == i;
            }
            if (strcmp(cadastro[i].nome, cadastro[i - 1].nome) == 0)
            {
                if (strcmp(cadastro[i - 1].nome, contador_nomes == 0))
                    contador_nomes == i;
            }
        }
    }

    printf("Matricula: %d\nNota1: %f\nNota2: %f\nNota3: %f\nMedia:;%f\nNome: %s\nCurso: %s\n\n", cadastro[contador_nomes].matricula, cadastro[contador_nomes].nota1, cadastro[contador_nomes].nota2, cadastro[contador_nomes].nota3, cadastro[contador_nomes].nome, cadastro[contador_nomes].curso);

    printf("By: Fernando Ribeiro Martins");
    return 0;
}