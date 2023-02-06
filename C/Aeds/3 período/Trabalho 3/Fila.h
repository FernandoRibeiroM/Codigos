#include <stdlib.h>
#include <stdio.h>

typedef struct elem
{

    int dado;
    struct elem *prox;

} elem;

typedef struct fila
{
    elem *ini;
    elem *fim;
} Fila;

Fila *criaFila()
{
    Fila *p;
    p = (Fila *)malloc(sizeof(Fila));
    p->ini = NULL;
    p->fim = NULL;
}

void liberaFila(Fila *p)
{
    do
    {
        elem *auxiliar = p->ini;
        if (p->ini == p->fim)
        {
            p->ini = NULL;
            p->fim = NULL;
        }
        else
        {
            p->ini = auxiliar->prox;
        }
        free(auxiliar);
    } while (p->ini != NULL);
    free(p);
}

int inserir(Fila *p, int v)
{
    elem *ptr = (elem *)malloc(sizeof(elem));
    if (ptr == NULL)
    {

        printf("\nERRO");
        return;
    }
    else
    {

        ptr->dado = v;
        ptr->prox = NULL;

        if (p->ini == NULL)
        {
            p->ini = ptr;
        }

        else
        {

            p->fim->prox = ptr;
        }

        p->fim = ptr;
    }
}

int retirar(Fila *p, int *v)
{
    elem *auxiliar = p->ini;

    if (auxiliar != NULL)
    {

        p->ini = auxiliar->prox;
        auxiliar->prox = NULL;

        *v = auxiliar->dado;
        

        if (p->ini == NULL)
        {

            p->fim = NULL;
        }
        free(auxiliar);
        return 1;
    }
    else
    {
        free(auxiliar);
        return 0;
    }
}

// 1 == vazio / 0 == Não ta vazio
int estahVazia(Fila *p)
{
    if (p->ini == NULL && p->fim == NULL)
    {
        return 1;
    }
    else
        return 0;
}
