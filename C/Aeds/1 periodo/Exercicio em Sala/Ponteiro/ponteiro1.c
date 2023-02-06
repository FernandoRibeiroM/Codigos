/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char Associe as variáveis aos ponteiros (use Modifique os valores de cada variável usando os ponteiros Imprima os valores das variáveis antes e após a modificação;*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 3, *pi = &i;
    float f = 3.0, *pf = &f;
    char c = 'Q', *pc = &c;
    printf("i = %d\nf = %f\nc = %c\n", i, f, c);
    *pi = 4;
    *pf = 4.8;
    *pc = 'R';
    printf("i = %d\nf = %f\nc = %c", i, f, c);

    return 0;
}