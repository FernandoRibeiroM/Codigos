#include <stdio.h>
#include <stdlib.h>
#define b 0
#define c 1
#define p 2

void caso11(int **Grafo, int vertices)
{
    int cont = 0, *visita, ini, aux, *cont_salvo = cont;
    visita = (int *)calloc(vertices, sizeof(int));
    printf("\n\tDigite o vertice: ");
    scanf("%d", &ini);
    ini--;
    caso11_auxiliar(Grafo, ini, visita, cont, vertices, cont_salvo);
    free(visita);
}

int caso11_auxiliar(int **Grafo, int ini, int *visitado, int cont, int vertice, int cont_salvo)
{
    int i, salvaCont1 = cont, salvaCont2 = cont + 1;
    visitado[ini] = c;
    for (i = 0; i < vertice; i++)
    {
        if ((visitado[i] == b) && (Grafo[ini][i] != 0))
        {
            salvaCont2 = (caso11_auxiliar(Grafo, i, visitado, cont + 1, vertice, cont_salvo));
        }
    }
    visitado[ini] = p;
    printf("\nVertice: %d - Tempo que foi pintado de cinza: %d - Tempo que fechou: %d\n", ini + 1, salvaCont1, salvaCont2);
    salvaCont2++;
    return salvaCont2;
}