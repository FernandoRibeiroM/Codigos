/*Escreva um programa que contenha duas variáveis inteiras Compare seus endereços e exiba o maior endereço*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 1, y = 2, *px = &x, *py = &y;
    if (py < px)
    {
        printf ("px = %d", px);
    }
    else 
    {
        printf ("py = %d", py);
    }


    return 0;
}