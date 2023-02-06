#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <assert.h>

struct no_avl
{
    struct no_avl *esquerda;
    struct no_avl *direita;
    char *valor;
};
typedef struct no_avl No_Avl;

struct arvore_avl
{
    struct no_avl *raiz;
};
typedef struct arvore_avl Arvore_Avl;

/* cria a avl */
Arvore_Avl *CriarAvl()
{
    Arvore_Avl *Arvore = NULL;
    if ((Arvore = malloc(sizeof(Arvore_Avl))) == NULL)
    {
        return NULL;
    }
    Arvore->raiz = NULL;
    return Arvore;
}

/* inicializando no */
No_Avl *CriarAvl_no()
{
    No_Avl *no = NULL;
    if ((no = malloc(sizeof(No_Avl))) == NULL)
    {
        return NULL;
    }
    no->esquerda = NULL;
    no->direita = NULL;
    no->valor = malloc(sizeof(char *) * 64);
    return no;
}

/* verificar altura */
int avl_no_aultura(No_Avl *no)
{
    int aultura_esquerda = 0;
    int aultura_direita = 0;
    if (no->esquerda)
        aultura_esquerda = avl_no_aultura(no->esquerda);
    if (no->direita)
        aultura_direita = avl_no_aultura(no->direita);
    return aultura_direita > aultura_esquerda ? ++aultura_direita : ++aultura_esquerda;
}

/* fator de balanceamento */
int avl_fator_de_balanceamento(No_Avl *no)
{
    int fb = 0;
    if (no->esquerda)
        fb += avl_no_aultura(no->esquerda);
    if (no->direita)
        fb -= avl_no_aultura(no->direita);
    return fb;
}

/* esquerda esquerda rodar */
No_Avl *avl_rodar_esquerdaesquerda(No_Avl *no)
{
    No_Avl *a = no;
    No_Avl *b = a->esquerda;
    a->esquerda = b->direita;
    b->direita = a;
    return (b);
}

/* esquerda direita rodar */
No_Avl *avl_rodar_esquerdadireita(No_Avl *no)
{
    No_Avl *a = no;
    No_Avl *b = a->esquerda;
    No_Avl *c = b->direita;
    a->esquerda = c->direita;
    b->direita = c->esquerda;
    c->esquerda = b;
    c->direita = a;
    return (c);
}

/* direita esquerda rodar */
No_Avl *avl_rodar_direitaesquerda(No_Avl *no)
{
    No_Avl *a = no;
    No_Avl *b = a->direita;
    No_Avl *c = b->esquerda;
    a->direita = c->esquerda;
    b->esquerda = c->direita;
    c->direita = b;
    c->esquerda = a;
    return (c);
}

/* direita direita rodar */
No_Avl *avl_rodar_direitadireita(No_Avl *no)
{
    No_Avl *a = no;
    No_Avl *b = a->direita;

    a->direita = b->esquerda;
    b->esquerda = a;

    return (b);
}

/* Balance a given no */
No_Avl *avl_balance_no(No_Avl *no)
{
    No_Avl *newraiz = NULL;
    /* Balance our children, if they exist. */
    if (no->esquerda)
        no->esquerda = avl_balance_no(no->esquerda);
    if (no->direita)
        no->direita = avl_balance_no(no->direita);

    int fb = avl_fator_de_balanceamento(no);
    if (fb >= 2)
    {
        /* esquerda Heavy */
        if (avl_fator_de_balanceamento(no->esquerda) <= -1)
            newraiz = avl_rodar_esquerdadireita(no);
        else
            newraiz = avl_rodar_esquerdaesquerda(no);
    }
    else if (fb <= -2)
    {
        /* direita Heavy */

        if (avl_fator_de_balanceamento(no->direita) >= 1)
            newraiz = avl_rodar_direitaesquerda(no);
        else
            newraiz = avl_rodar_direitadireita(no);
    }
    else
    {
        /* This no is balanced -- no change. */

        newraiz = no;
    }
    return (newraiz);
}

/* Balance a given Arvore */
void avl_balance(Arvore_Avl *Arvore)
{
    No_Avl *newraiz = NULL;
    newraiz = avl_balance_no(Arvore->raiz);
    if (newraiz != Arvore->raiz)
    {
        Arvore->raiz = newraiz;
    }
}

/* Insere um nv no */
void avl_insere(Arvore_Avl *Arvore, char *valor)
{
    No_Avl *no = NULL;
    No_Avl *proximo = NULL;
    No_Avl *ultimo = NULL;
    if (Arvore->raiz == NULL)
    {
        no = CriarAvl_no();
        no->valor = valor;
        Arvore->raiz = no;
    }
    else
    {
        proximo = Arvore->raiz;

        while (proximo != NULL)
        {
            ultimo = proximo;

            if (strcmp(valor, proximo->valor) < 0)
            {
                proximo = proximo->esquerda;
            }
            else if (strcmp(valor, proximo->valor) > 0)
            {
                proximo = proximo->direita;

                /* Have we already insereed this no? */
            }
            else if (strcmp(valor, proximo->valor) == 0)
            {
                return;
            }
        }
        no = CriarAvl_no();
        no->valor = valor;
        if (strcmp(valor, ultimo->valor) < 0)
            ultimo->esquerda = no;
        if (strcmp(valor, ultimo->valor) > 0)
            ultimo->direita = no;
    }

    avl_balance(Arvore);
}

/* encontra algo na arvore*/
No_Avl *avl_procurar(Arvore_Avl *Arvore, char *valor)
{
    No_Avl *atual = Arvore->raiz;
    while (atual && (strcmp(atual->valor, valor) != 0))
    {
        if (strcmp(valor, atual->valor) > 0)
            atual = atual->direita;
        else
            atual = atual->esquerda;
    }
    return atual;
}

/* Do a profundidade first traverse of a no. */
void avl_traverse_no_dfs(No_Avl *no, int profundidade)
{
    int i = 0;

    if (no->esquerda)
        avl_traverse_no_dfs(no->esquerda, profundidade + 2);

    for (i = 0; i < profundidade; i++)
        putchar(' ');
    printf("%s: %d\n", no->valor, avl_fator_de_balanceamento(no));

    if (no->direita)
        avl_traverse_no_dfs(no->direita, profundidade + 2);
}

/* Do a profundidade first traverse of a Arvore. */
void avl_traverse_dfs(Arvore_Avl *Arvore)
{
    avl_traverse_no_dfs(Arvore->raiz, 0);
}

void avl_print_no(No_Avl *no, char *fmt)
{
    int i = 0;

    if (no->esquerda)
        avl_print_no(no->esquerda, fmt);

    printf(fmt, no->valor);

    if (no->direita)
        avl_print_no(no->direita, fmt);
}

void avl_print(Arvore_Avl *Arvore, char *fmt)
{
    avl_print_no(Arvore->raiz, fmt);
}

void avl_count_no(No_Avl *no, int *res)
{
    if (no->esquerda)
        avl_count_no(no->esquerda, res);
    *res = *res + 1;
    if (no->direita)
        avl_count_no(no->direita, res);
}

void avl_count(Arvore_Avl *Arvore, int *res)
{
    avl_count_no(Arvore->raiz, res);
}

int main(int argc, char **argv)
{
    Arvore_Avl *Arvore = NULL;
    int i = 0;
    char r[4];
    char *aux;

    Arvore = CriarAvl();

    /* insere 1-20 in random order -- this is suboptimal, but easy */
    srand(time(NULL));

    for (i = 0; i < 20; i++)
    {
        r[0] = rand() % 26 + 'A';
        r[1] = rand() % 26 + 'A';
        r[2] = rand() % 26 + 'A';
        r[3] = '\0';
        aux = strdup(r);
        avl_insere(Arvore, aux);
    }
    avl_procurar(Arvore, "cavalo");
    printf
    avl_print(Arvore, "<li> %s </li>\n");

    return 0;
}