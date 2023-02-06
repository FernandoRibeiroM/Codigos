/*15. Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele-  ́
mentos repetidos.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, j, rep = 0, vetor[20], igual[20], n = 0;
    for (i = 0; i < 20; i++)
    {
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 20; i++)
    {
        if (i == 0)
        {
            igual[n] = vetor[i];
            n++;
        }
        else
        {
            rep = 0;
            for (j = 0; j < 20; j++)
            {
                if (vetor[i] == igual[j])
                {
                    rep++;
                }
            }
            if (rep < 1)
            {
                igual[n] = vetor[i];
                n++;
            }
        }
    }
    printf("Os vetores distintos sao: ");
    for (i = 0; i < n; i++)
        printf("%d ", igual[i]);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}
