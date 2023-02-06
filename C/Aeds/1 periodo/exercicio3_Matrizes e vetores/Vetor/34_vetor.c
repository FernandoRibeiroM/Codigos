/*34. Fac ̧a um programa para ler 10 numeros DIFERENTES a serem armazenados em um  ́
vetor. Os dados deverao ser armazenados no vetor na ordem que forem sendo lidos,  ̃
sendo que caso o usuario digite um n  ́ umero que j  ́ a foi digitado anteriormente, o programa  ́
devera pedir para ele digitar outro n  ́ umero. Note que cada valor digitado pelo usu  ́ ario  ́
deve ser pesquisado no vetor, verificando se ele existe entre os numeros que j  ́ a foram  ́
fornecidos. Exibir na tela o vetor final que foi digitado.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[10], i, j, aux = 0;
    printf("Insira apenas numeros difrentes para os elementos do vetor.\n\n");
    for (i = 0; i < 10; i++)
    {
        if (aux == 0)
        {
            printf("Insira o valor do %do. elemento do vetor: ", i + 1);
        }
        else
        {
            printf("Insira novamente o %do. elemento do vetor: ", i + 1);
        }
        scanf("%d", &v[i]);
        if (i != 0)
        {
            aux = 0;
            for (j = 0; j < i; j++)
            {
                if (v[i] == v[j])
                {
                    printf("\nNumero invalido! Valor ja incluido no vetor.");
                    i -= 1;
                }
            }
        }
    }
    printf("\nO vetor:\n");
    for (i = 0; i < 10; i++)
    {
        printf(" %d\n", v[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}