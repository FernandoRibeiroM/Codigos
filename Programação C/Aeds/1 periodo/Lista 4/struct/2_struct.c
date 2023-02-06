/*2. Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do
usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os
dados na tela.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct aluno{
    char nome[50], curso[50];
    int matricula;
};
int main(){
    struct aluno x[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("\nAluno %d\n", i + 1);
        printf("Insira seu nome: ");
        setbuf(stdin, NULL);
        gets(x[i].nome);
        printf("Insira o numero de matricula: ");
        scanf("%d", &x[i].matricula);
        printf("Insira o curso:");
        setbuf(stdin, NULL);
        gets(x[i].curso);
    }
    printf("\nDados dos alunos:\n");
    for(i = 0; i < 5; i++){
        printf("\nAluno %d\n", i + 1);
        printf("\nNome: %s\nNumero de matricula: %d\nCurso: %s", x[i].nome, x[i].matricula, x[i].curso);
    }
    return 0;
}