#include <stdio.h>
#include <string.h>
#include <ctype.h>

void intercalar(char *str, char *str2);

int main()
{
    char palavra[20], palavra2[20];
    printf("Insira a primeira palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);
    printf("Insira a segunda palavra: ");
    setbuf(stdin, NULL);
    gets(palavra2);
    intercalar(palavra, palavra2);
    printf("\nNova string intercalada: %s.", palavra);
    return 0;
}

void intercalar(char *str, char *str2)
{
    int i;
    for ( i = 0; i < strlen(str); i++)
    {
        if ((i % 2) != 0)
        {
            str[i] = str2[i];
        }
    }
}