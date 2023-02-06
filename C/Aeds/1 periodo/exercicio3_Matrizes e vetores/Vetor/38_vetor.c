/*38. Pec ̧a ao usuario para digitar dez valores num  ́ ericos e ordene por ordem crescente esses  ́
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[10], i, j, aux;
    for (i = 0; i < 10; i++)
    {
        printf("Insira o %do. valor do vetor: ", i + 1);
        scanf("%d", &v[i]);
        for (j = 0; j < i; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    printf("O vetor ordenado ate o decimo elemento:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", v[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}