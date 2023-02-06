/*9. Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia A ocorre
na cadeia B.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char A[200], B[200];
    int vezes = 0, i, j, k;
    printf("Insira a primeira string (A): ");
    setbuf(stdin, NULL);
    gets(A);
    printf("Insira a segunda string (B): ");
    setbuf(stdin, NULL);
    gets(B);
    int cont = 0;
    for(i = 0; i < strlen(B); i++){
        cont = 0;
        if(tolower(B[i]) == tolower(A[0])){
            for( j = i, k = 0; k < strlen(A); j++, k++){
                if(tolower(B[j]) == tolower(A[k])){
                    cont++;
                }
            }
        }
        if(cont == strlen(A)){
            vezes++;
        }
    }
    if(vezes == 0){
        printf("A nao e substring de B!");
    }
    else{
        printf("A string A ocorre na string B: %d vezes.\n", vezes);
    }
    return 0;
}