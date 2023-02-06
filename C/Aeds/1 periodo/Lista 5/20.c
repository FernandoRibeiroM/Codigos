#include <stdio.h>

void tamanho(char *str, int *strsize);

int main()
{
    char frase[50];
    int tam;
    printf("Insira a frase: ");
    setbuf(stdin, NULL);
    gets(frase);
    tamanho(frase, tam);
    return 0;
}

void tamanho(char *str, int *strsize)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    printf("\nO tamanho da string inserida: %d.\n", i);
}