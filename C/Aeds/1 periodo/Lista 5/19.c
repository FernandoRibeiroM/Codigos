#include <stdio.h>
#include <string.h>
#include <ctype.h>

int anagrama(char *str, char *str2);

int main()
{
    char palavra[20], palavra2[20];
    printf("Insira a primeira palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);
    printf("Insira a segunda palavra: ");
    setbuf(stdin, NULL);
    gets(palavra2);
    int condicao = anagrama(palavra, palavra2);
    if (condicao == 1)
    {
        printf("\nAs string sao anagrama!\n");
    }
    else
    {
        printf("\nAs string nao sao anagrama!\n");
    }
    return 0;
}

int anagrama(char *str, char *str2)
{
    int soma = 0, soma2 = 0, i;
    for ( i = 0; i < strlen(str); i++)
    {
        soma += str[i];
    }
    for ( i = 0; i < strlen(str2); i++)
    {
        soma2 += str2[i];
    }
    if (soma == soma2)
    {
        return 1;
    }
    return 0;
}