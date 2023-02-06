/*32. Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuario n  ́ ao ̃
informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso
abaixo:
• Soma entre x e y: soma de cada elemento de x com o elemento da mesma posic ̧ao ̃
em y.
• Produto entre x e y: multiplicac ̧ao de cada elemento de  ̃ x com o elemento da mesma
posic ̧ao em  ̃ y.
• Diferenc ̧a entre x e y: todos os elementos de x que nao existam em  ̃ y.
• Intersec ̧ao entre  ̃ x e y: apenas os elementos que aparecem nos dois vetores.
• Uniao entre  ̃ x e y: todos os elementos de x, e todos os elementos de y que nao ̃
estao em  ̃ x.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[5], v2[5], soma[5], produto[5], diferenca[5] = {0}, interseccao[5], uniao[10], i, j, k, l, aux, max = 0;
    printf("Primeiro vetor:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Insira o valor do %do. elemento do vetor: ", i + 1);
        scanf("%d", &v[i]);
        if (max == 0)
        {
            uniao[max] = v[i];
            max++;
        }
        else
        {
            aux = 0;
            for (j = 0; j < i; j++)
            {
                if (v[i] == uniao[j])
                {
                    aux++;
                }
            }
            if (aux == 0)
            {
                uniao[max] = v[i];
                max++;
            }
        }
    }
    printf("Segundo vetor:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Insira o valor do %do. elemento do vetor: ", i + 1);
        scanf("%d", &v2[i]);
        soma[i] = v[i] + v2[i];
        produto[i] = v[i] * v2[i];
        for (k = 0; k < 5; k++)
        {
            aux = 0;
            for (j = 0; j <= k; j++)
            {
                if (v[k] == v[j])
                {
                    aux++;
                    break;
                }
                if (aux == 0)
                {
                    diferenca[k] = v[k];
                }
            }
            for (j = 0; j <= k; j++)
            {
                if (diferenca[k] == v2[j])
                {
                    diferenca[k] = 0;
                    aux++;
                    break;
                }
                if (aux == 0)
                {
                    diferenca[k] = v[k];
                }
            }
        }
        aux = 0;
        for (j = 0; j < 5; j++)
        {
            if (v2[i] == v[j])
            {
                aux++;
            }
        }
        if (aux == 0)
        {
            uniao[max] = v2[i];
            max++;
        }
    }
    printf("\nA soma dos elementos de mesma posicao dos vetores:");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", soma[i]);
    }
    printf("\nO produto dos elementos de mesma posicao dos vetores:");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", produto[i]);
    }
    printf("\nA diferenca entre os vetores:");
    for (i = 0; i < 5; i++)
    {
        if (diferenca[i] != 0)
        {
            printf(" %d", diferenca[i]);
        }
    }
    printf("\nA interseccao dos vetores:");
    for (i = 0, l = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (v[i] == v2[j])
            {
                aux = 0;
                for (k = 0; k < l; k++)
                {
                    if (v[i] == interseccao[k])
                    {
                        aux = 1;
                    }
                }
                if (!aux)
                {
                    interseccao[l] = v[i];
                    printf(" %d", interseccao[l]);
                    l++;
                }
            }
        }
    }
    printf("\nA uniao dos vetores:\n");
    for (i = 0; i < max; i++)
    {
        printf(" %d\n", uniao[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}