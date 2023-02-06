#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *numeros, i, lidos;
    printf("Quantos valores vc deseja ler?\n");
    scanf("%d", &lidos);
    system("pause");
    system("cls");
    numeros = (int *)malloc(lidos);
    for (i = 0; i < lidos; i++)
    {
        printf("Digite 1 numero:\n");
        scanf("%d", &numeros[i]);
    }
    system("pause");
    system("cls");
    for (i = 0; i < lidos; i++)
    {
        printf("%d\n", numeros[i]);
    }
    free(numeros);
    return 0;
}