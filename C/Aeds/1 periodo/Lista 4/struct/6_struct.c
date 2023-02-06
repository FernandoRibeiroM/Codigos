/*6. Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras),
autor (máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual
título deseja buscar. Mostre os dados de todos os livros encontrados.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
struct livro{
    char titulo[30], autor[15];
    int ano;
};
int main(){
    struct livro x[5];
    char busca[30];
    int i, j, k, l;
    for(i = 0; i < 5; i++){
        printf("\nDados do %do. livro\n", i + 1);
        printf("Insira o titulo (Max: 30 letras): ");
        setbuf(stdin, NULL);
        gets(x[i].titulo);
        printf("Insira o autor (Max: 15 letras): ");
        setbuf(stdin, NULL);
        gets(x[i].autor);
        printf("Insira o ano: ");
        scanf("%d", &x[i].ano);
        while(x[i].ano < 0){
           printf("Valor invalido! Insira novamente a ano: ");
            scanf("%d", &x[i].ano);
        }
    }
    printf("\nDigite o nome do livro que deseja buscar: ");
    setbuf(stdin, NULL);
    gets(busca);
    int cont = 0, aux = 0;
    for(l = 0; l < 5; l++){
        for(i = 0; i < strlen(x[l].titulo); i++){
            if(tolower(x[l].titulo[i]) == tolower(busca[0])){
                for(j = i, k = 0; k < strlen(busca); j++, k++){
                    if(tolower(x[l].titulo[j]) == tolower(busca[k])){
                        cont++;
                    }
                }
            }
            if(cont == strlen(busca)){
                printf("\nLivro encontrado!");
                printf("\nTitulo: %s", x[i].titulo);
                printf("\nAutor: %s", x[i].autor);
                printf("\nAno: %d", x[i].ano);
                aux++;
            }
            cont = 0;
        }
    }
    if(aux == 0){
        printf("\nLivro nao encontrado!\n");
    }
    return 0;
}