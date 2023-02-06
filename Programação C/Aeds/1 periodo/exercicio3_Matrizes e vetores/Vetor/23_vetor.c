/*23. Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto  ́
escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o ˆ
produto escalar, sendo que o produto escalar e dado por:  ́ x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float vetorA[5], vetorB[5], produto_escalar = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Insira o valor do vetorA[%d]: ", i);
        scanf("%f", &vetorA[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("Insira o valor do vetorB[%d]: ", i);
        scanf("%f", &vetorB[i]);
    }
    for (i = 0; i < 10; i++)
    {
        produto_escalar += vetorA[i] * vetorB[i];
    }
    printf("\nO produto escalar dos conjuntos resulta em: %f", produto_escalar);
    printf("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}