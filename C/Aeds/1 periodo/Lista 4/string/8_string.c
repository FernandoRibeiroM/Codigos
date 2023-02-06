/*8. Faça um programa para ler uma tabela contendo os nomes dos alunos de uma turma
de 5 alunos. O programa deve solicitar ao usuário os nomes dos alunos. Uma vez lidos
todos os alunos, o usuário irá indicar um nome que ele deseja verificar se está presente
na lista, onde o programa deve procurar pelo nome (ou parte deste nome) e se encontrar
deve exibir na tela o nome completo e o índice do vetor onde está guardado este nome.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char aluno[5][50], chamada[50];
    int quant[6], i, j, k, l,cont, aux;
    for(i = 0; i < 5; i++){
        printf("Insira o nome do %do. aluno: ", i + 1);
        setbuf(stdin, NULL);
        gets(aluno[i]);
        for(j = 0; aluno[i][j] != '\0'; j++){
            aluno[i][j] = tolower(aluno[i][j]);
        }
        quant[i] = strlen(aluno[i]) - 1;
    }
    printf("\nInsira o nome de um aluno que deseja verificar se esta presente: ");
    setbuf(stdin, NULL);
    gets(chamada);
    for(i = 0; chamada[i] != '\0'; i++){
        chamada[i] = tolower(chamada[i]);
    }
    quant[6] = strlen(chamada) - 1;
    for(i = 0; i <= 5; i++){
        for(j = 0; j <= quant[i]; j++){
            if(aluno[i][j] == chamada[0]){
                for(k = j, l = 0; l <= quant[6]; k++, l++){
                    if(aluno[i][k] == chamada[l]){
                        cont++;
                    }
                }
            }
        }
        if(cont == quant[6]){
            printf("\nAluno n%d: %s\n", i + 1, aluno[i]);
            break;
        }
        cont = 0;
    }
    if(cont == 0){
        printf("\nAluno nao encontrado!\n");
    }
    return 0;
}