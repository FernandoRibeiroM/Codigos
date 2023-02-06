/*30. Fac ̧a programas para calcular as seguintes sequencias: ˆ
1 + 2 + 3 + 4 + 5 + ... + n
1 − 2 + 3 − 4 + 5 + ... + (2n − 1)
1 + 3 + 5 + 7 + ... + (2n − 1)*/

#include <stdlib.h>
#include <stdio.h>
int main()
{
    int numero, i, resultado[3] = {0, 0, 0};
    printf("Digite um valor: ");
    scanf("%d", &numero);
    system("pause");
    system("cls");
    for (i = 1; i <= numero; i++)
    {
        resultado[0] += i;
    }
    for (i = 1; i <= (2 * numero - 1); i++)
    {
        if (i % 2 != 0)
        {
            resultado[1] += i;
        }
        if (i % 2 == 0)
        {
            resultado[1] -= i;
        }
    }
    for (i = 1; i <= (2 * numero - 1); i++)
    {
        if (i % 2 != 0)
        {
            resultado[2] += i;
        }
    }
    printf("\nResultado 1: %d\nResultado 2: %d\nResultado 3: %d\n", resultado[0], resultado[1], resultado[2]);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}