#include <stdio.h>
int main()
{
    int numeros[5];
    int i, maior = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d numero", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] >= maior)
        {
            maior = numeros[i];
        }
    }
    printf("o valor do maior e: %d", maior);

    return 0;
}