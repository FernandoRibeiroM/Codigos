/*19. Fac ̧a um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 ∗ i)%(i+ 1), sendo
i a posic ̧ao do elemento no vetor. Em seguida imprima o vetor na tela.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[50], i;
    for (i = 0; i < 50; i++)
    {
        vet[i] = (i + 5 * i) % (i + 1);
    }
    for (i = 0; i < 50; i++)
    {
        printf("[%d] ", vet[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}