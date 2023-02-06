/*Escreva um programa que contenha duas variáveis inteiras Leia essas variáveis do teclado Em seguida, compare seus endereços e exiba o conteúdo do maior endereço*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, *px = &x, *py = &y;
    printf ("Digite o valor de X e de Y:\n");
    scanf ("%d %d", &(*px), &(*py));
    if (py < px)
    {
        printf("px = %d", *px);
    }
    else
    {
        printf("py = %d", *py);
    }

    return 0;
}
