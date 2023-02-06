/*4. Utilizando uma estrutura, faça um programa que permita a entrada de nome,
endereço e telefone de 5 pessoas e os imprima em ordem alfabética.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
struct cadastro{
    char nome[50], endereco[50], telefone[20];
};
int main(){
    struct cadastro x[5];
    char nome;
    int aux, v[5] = {0, 1, 2, 3, 4}, i, j, k;
    for(i = 0; i < 5; i++){
        printf("\nCadastro %da. pessoa\n", i + 1);
        printf("Insira o nome: ");
        setbuf(stdin, NULL);
        gets(x[i].nome);
        strlwr(x[i].nome);
        printf("Insira o endereco: ");
        setbuf(stdin, NULL);
        gets(x[i].endereco);
        printf("Insira o telefone: ");
        setbuf(stdin, NULL);
        gets(x[i].telefone);
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < i; j++){
            if(strcmp(x[j].nome, x[i].nome) > 0){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            for( k = 0; k < 5; k++){
                printf("%d", v[k]);
            }
            printf(" ");
        }
    }
    for(i = 0; i < 5; i++){
        printf("\n\nRegistro %da. pessoa", i + 1);
        printf("\nNome: %s", x[v[i]].nome);
        printf("\nEndereco: %s", x[v[i]].endereco);
        printf("\nTelefone: %s", x[v[i]].telefone);
    }
    return 0;
}