/*27. Leia 10 numeros inteiros e armazene em um vetor. Em seguida escreva os elementos  ́
que sao primos e suas respectivas posic ̧  ̃ oes no vetor.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, vetor[5], primo = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor da posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < vetor[i]; j++)
        {
            if (vetor[i] % j == 0)
            {
                primo++;
            }
        }
        if (primo == 2)
        {
            printf("%d ", vetor[i]);
        }
        primo = 0;
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}