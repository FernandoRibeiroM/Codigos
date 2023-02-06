/*20. Ler uma sequencia de n ˆ umeros inteiros e determinar se eles s  ́ ao pares ou n  ̃ ao. Dever  ̃ a ́
ser informado o numero de dados lidos e n  ́ umero de valores pares. O processo termina  ́
quando for digitado o numero 1000.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero, par = 0, lido = 0;
    while (numero != 100)
    {
       printf ("Qual numero Deseja ler?");
       scanf  ("%d", &numero);
       lido++;
       if (numero % 2 == 0)
       {
           printf ("Par\n");
           par++;
       }
    }
    printf ("lido: %d\nPar: %d \n", lido, par);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}