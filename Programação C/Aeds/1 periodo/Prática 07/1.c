#include <stdio.h>
int main()
{
    int *numeros, i;
    numeros = (int *)malloc(5);
    for (i = 0; i < 5; i++)
    {
        printf("Digite 1 numero:\n");
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", numeros[i]);
    }
    free(numeros);

    return 0;
}