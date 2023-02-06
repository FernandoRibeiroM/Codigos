/*17. Leia um vetor de 10 posic ̧oes e atribua valor 0 para todos os elementos que possu  ̃  ́ırem
valores negativos.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numeros[10], i ;
    for (i = 0; i < 10; i++)
    {
       printf ("Digite o %d numero: ", i + 1);
       scanf  ("%d", &numeros[i]);
       if (numeros[i] < 0)
       {
           numeros[i] = 0;
       }
    }
    for (i = 0; i < 10; i++)
    {
        printf ("%d = %d\n", i + 1, numeros[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}