/*3. Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado
dos componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos
têm 10 elementos cada. Imprimir todos os conjuntos.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int A[10], B[10], i;
    for (i = 0; i < 10; i++)
    {
        printf ("Digite o %d numero: ", i + 1);
        scanf  ("%d", &A[i]);
    }
    system("pause");
    system("cls");
    for (i = 0; i < 10; i++)
    {
        B[i] = pow(A[i], 2);
    }
    for (i = 0; i < 10; i++)
    {
        printf ("A %d = %d\n", i + 1, A[i]);
    }
    system("pause");
    system("cls");
    for (i = 0; i < 10; i++)
    {
        printf ("B %d = %d\n", i + 1, B[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}