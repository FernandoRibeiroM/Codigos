/*23. Faca um algoritmo que leia um numero positivo e imprima seus divisores.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero, i, resultado;
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);
    if (numero >= 0)
    {
        while (i <= numero)
        {
            resultado = numero % i;
            if (resultado == 0)
            {
                printf("E divisivel por %d.\n", i);
            }
            i++;
        }
    }
    else
    {
        printf("Vc digitou um numero negativo.\n");
    }

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}
