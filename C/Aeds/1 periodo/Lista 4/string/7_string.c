/*7. Construa um programa que leia duas strings fornecidas pelo usuário e verifique se a
segunda string lida está contida na primeira string, ou seja, se a segunda string é uma
substring da primeira, retornando o resultado da verificação.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char frase[200], frase2[200];
    int quant, quant2, cont;
    printf("Insira a primeira frase: ");
    setbuf(stdin, NULL);
    gets(frase);
    strlwr(frase);
    printf("Insira a segunda frase: ");
    setbuf(stdin, NULL);
    gets(frase2);
    strlwr(frase2);
    for(int i = 0; i < strlen(frase); i++){
        cont = 0;
        if(frase[i] = frase2[0]){
            for(int j = i, k = 0; k < strlen(frase2); j++, k++){
                if(frase[j] == frase2[k]){
                    cont++;
                }
            }
        }
        if(cont == strlen(frase2)){
            printf("\nA segunda frase esta contida na primeira frase!");
            break;
        }
    }
    if(cont == 0){
        printf("\nA segunda frase nao esta contida na primeira frase!\n");
    }
    return 0;
}