/*2. Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo:
“0011001” -> 3*/
#include <stdio.h>
#include <string.h>
int main(){
    char binario[20];
    int cont = 0, i = 0;
    printf("Insira um numero: ");
    setbuf(stdin, NULL);
    gets(binario);
    while(binario[i] != '\0'){
        if(binario[i] == '1'){
            cont++;
        }
        i++;
    }
    if(cont == 0){
        printf("!\nNenhum numero 1 encontrando na string!\n");
    }
    else{
        printf("\n%d numeros 1 presente(s) na string inserida!\n", cont);
    }
    return 0;
}
