#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numeros[5];
    int i, maior;
    printf ("Digite o 1 numero:");
    scanf  ("%d", &numeros[0]);
    maior = numeros[0];
    for (i = 0; i < 4; i++)
    {
        printf("Digite o %d numero:", i + 2);
        scanf("%d", &numeros[i]);
        if (numeros[i] >= maior)
        {
            maior = numeros[i];
        }
    }
    system ("cls");
    printf("O valor do maior e: %d", maior);
    return 0;
}