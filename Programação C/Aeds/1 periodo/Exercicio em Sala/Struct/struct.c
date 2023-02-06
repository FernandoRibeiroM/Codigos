#include <stdio.h>
#include <string.h>
struct cadastro
{
    char nome[30];
    int idade;
    char cidade[30];
    char rua[30];
};
int main()
{
    struct cadastro aluno;
    printf("Digite seu nome: ");
    setbuf(stdin, NULL);
    gets(aluno.nome);

    printf("Digite sua idade: ");
    scanf("%d", &aluno.idade);

    printf("Digite o nome da cidade em que vc mora: ");
    setbuf(stdin, NULL);
    gets(aluno.cidade);

    printf("Digite o nome da rua em que vc mora: ");
    setbuf(stdin, NULL);
    gets(aluno.rua);

    printf ("\n\n");

    system("pause");
    system("cls");

    printf("%s\nIdade: %d\nCidade: %s\nRua: %s\n\n", aluno.nome, aluno.idade, aluno.cidade, aluno.rua);

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}