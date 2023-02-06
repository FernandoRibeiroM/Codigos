/*30. Fac ̧a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
intersecc ̧ao entre os 2 vetores anteriores, ou seja, que cont  ̃ em apenas os n  ́ umeros que  ́
estao em ambos os vetores. N  ̃ ao deve conter n  ̃ umeros repetidos.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor1[10], vetor2[10], vetor_interseccao[10] = {0}, i, j, k;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor do primeiro vetor na posicao %d: ", i);
        scanf("%d", &vetor1[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor do segundo vetor na posicao %d: ", i);
        scanf("%d", &vetor2[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                for (k = 0; k < 10; k++)
                {
                    if (vetor_interseccao[j] == vetor2[k])
                    {
                    }
                    else
                    {
                        vetor_interseccao[i] = vetor2[j];
                    }
                }
            }
        }
    }
    printf("\nInterseccao:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d/n", vetor_interseccao[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}