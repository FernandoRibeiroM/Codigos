/*5. Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final),
armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos
vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima
para a aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados,
seguido dos dados do vetor de reprovados.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
struct classe{
    char nome[50], matricula[20];
    float media;
};
int main(){
    struct classe aluno[10];
    struct classe aluno_rep[10];
    struct classe aluno_aprov[10];
    for(int i = 0; i < 10; i++){
        printf("\nDados do %do. aluno\n", i + 1);
        printf("Insira o nome: ");
        setbuf(stdin, NULL);
        gets(aluno[i].nome);
        printf("Insira a matricula: ");
        setbuf(stdin, NULL);
        gets(aluno[i].matricula);
        printf("Insira a media final: ");
        scanf("%f", &aluno[i].media);
        while(aluno[i].media < 0 || aluno[i].media > 10){
           printf("Valor invalido! Insira novamente a media final (0-10): ");
            scanf("%f", &aluno[i].media);
        }
    }
    int cont_aprov = 0, cont_rep = 0;
    for(int i = 0; i < 10; i++){
        if(aluno[i].media < (5.0)){
            aluno_rep[cont_rep] = aluno[i];
            cont_rep++;
        }
        else{
            aluno_aprov[cont_aprov] = aluno[i];
            cont_aprov++;
        }
    }
    printf("\nResultados\n\n");
    for(int i = 0; i < cont_aprov; i++){
        printf("[APROVADO]\nNome: %s\nMatricula: %s\nMedia Final: %.2f\n\n", aluno_aprov[i].nome, aluno_aprov[i].matricula, aluno_aprov[i].media);
    }
    for(int i = 0; i < cont_rep; i++){
        printf("[REPROVADO]\nNome: %s\nMatricula: %s\nMedia Final: %.2f\n\n", aluno_rep[i].nome, aluno_rep[i].matricula, aluno_rep[i].media);
    }
    return 0;
}