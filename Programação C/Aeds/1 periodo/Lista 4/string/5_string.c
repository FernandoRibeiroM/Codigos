/*5. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É
um tipo de substituição na qual cada letra do texto é substituída por outra, que se
apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma
troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante.
Implemente um programa que faça uso desse código de César (3 posições), entre com
uma string e retorne a string codificada. Exemplo:
 String: a ligeira raposa marrom saltou sobre o cachorro cansado
 Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char frase[200], letras[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    int i, j, max = 0;
    printf("Insira a frase: ");
    setbuf(stdin, NULL);
    gets(frase);
    printf("\nFrase: %s", frase);
    for(i = 0; frase[i] != '\0'; i++){
        max++;
    }
    for(i = 0; i < max; i++){
        for(j = 0; j < 27; j++){
            frase[i] = tolower(frase[i]);
            if(frase[i] == ' '){
                break;
            }
            else if(frase[i] == letras[j] && (j + 3) <= 26){
                frase[i] = letras[j + 3];
                break;
            }
            else if(frase[i] == letras[j] && (j + 3) > 26){
                frase[i] = letras[26 - (j + 3)];
                break;
            }
        }
    }
    printf("\nFrase criptografada: %s", frase);
    return 0;
}