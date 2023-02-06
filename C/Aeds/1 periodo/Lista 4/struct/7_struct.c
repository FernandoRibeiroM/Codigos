/*7. Faça um programa que seja uma agenda de compromissos e:
a) Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60
letras) e data. A data deve ser outra estrutura de dados contendo dia, mês e ano.
b) Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A.
Repita o procedimento até ler M = 0.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct agenda{
    char compromisso[60];
    int dia, mes, ano;
};
int main(){
    struct agenda comp[5];
    int M = -1, A, i;
    for(i = 0; i < 5; i++){
        printf("\n%do. compromisso\n", i + 1);
        printf("Insira o compromisso (Max: 60 letras): ");
        setbuf(stdin, NULL);
        gets(comp[i].compromisso);
        printf("Insira a data do compromisso (dd mm aaaa): ");
        scanf("%d %d %d", &comp[i].dia, &comp[i].mes, &comp[i].ano);
        while(comp[i].dia < 1 || comp[i].dia > 31 || comp[i].mes < 1 || comp[i].mes > 12 || comp[i].ano < 1){
            printf("Data invalida! Insira novamente (dd mm aaaa): ");
            scanf("%d %d %d", &comp[i].dia, &comp[i].mes, &comp[i].ano);
        }
    }
    int cont = 0;
    while(M != 0){
        printf("\nDigite o mes e ano para verificar na agenda (mm aaaa): ");
        scanf("%d %d", &M, &A);
        while(M > 12 || A < 0){
            printf("Data invalida! Insira novamente (mm aaaa): ");
            scanf("%d %d", &M, &A);
        }
        printf("\nPara o mes %d do ano %d:", M, A);
        for(i = 0; i < 5; i++){
            if(M == comp[i].mes && A == comp[i].ano){
                printf("\n\nCompromisso: %s\nDia: %d", comp[i].compromisso, comp[i].dia);
                cont++;
            }
        }
        if(cont == 0){
            printf("\nNenhum compromisso encontrado para %d/%d.\n", M, A);
        }
    }
    return 0;
}