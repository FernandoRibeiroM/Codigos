/*3. Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu
programa deve terminar quando uma idade negativa for digitada. Ao terminar, seu
programa deve escrever o nome e a idade das pessoas mais jovens e mais velhas.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char nome[20], menor[20], maior[20];
    int idade[10], i, idade_menor = 999999, idade_maior = 0, aux = 0;
    for(i = 0; i < 10;i++){
        printf("\n%da. pessoa\nInsira a idade: ", i + 1);
        scanf("%d", &idade[i]);
        if(idade[i] < 0){
            printf("Valor invalido! Encerrando.");
            break;
        }
        printf("Insira seu nome: ");
        setbuf(stdin, NULL);
        gets(nome);
        if(idade[i] > idade_maior){
            idade_maior = idade[i];
            strcpy(maior, nome);
        }
        if(idade[i] < idade_menor){
            idade_menor = idade[i];
            strcpy(menor, nome);
        }
    }
    if(i != 0){
        printf("\n\nPessoa mais velha: %s, com %d anos.", maior, idade_maior);
        printf("\nPessoa mais jovem: %s, com %d anos.\n", menor, idade_menor);
    }
    return 0;
}