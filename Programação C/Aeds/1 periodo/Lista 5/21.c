#include <stdio.h>
#include <string.h>
#include <ctype.h>

int comparar(char *str, char *str2);

int main()
{
    char palavra[20], palavra2[20];
    printf("Insira a primeira palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);
    printf("Insira a segunda palavra: ");
    setbuf(stdin, NULL);
    gets(palavra2);
    int condicao = comparar(palavra, palavra2);
    if (condicao == 1)
    {
        printf("\nAs string sao iguais!\n");
    }
    else
    {
        printf("\nAs string sao diferentes!\n");
    }
    return 0;
}

int comparar(char *str, char *str2)
{
    int soma = 0, soma2 = 0, i;
    if (strlen(str) == strlen(str2))
    {
        for ( i = 0; i < strlen(str) && soma == soma2; i++)
        {
            soma += str[i];
            soma2 += str2[i];
        }
        if (soma == soma2)
        {
            return 1;
        }
    }
    return 0;
}