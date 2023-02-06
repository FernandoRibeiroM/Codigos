/*23. Determine se um determinado ano lido e bissexto. Sendo que um ano  ́ e bissexto se  ́
for divis ́ıvel por 400 ou se for divis ́ıvel por 4 e nao for divis  ̃  ́ıvel por 100. Por exemplo:
1988, 1992, 1996*/
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    int ano;
    float mod;
    printf ("Digite um ano: ");
    scanf  ("%d", &ano);
    if ( ( ano % 4 == 0 && ano % 100 != 0 ) || (ano % 400 == 0 ))
    {
      printf ("O ano e bissexto.\n");
    }
    else {
        printf ("O ano nao e bissexto.\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");

    return 0;
}
