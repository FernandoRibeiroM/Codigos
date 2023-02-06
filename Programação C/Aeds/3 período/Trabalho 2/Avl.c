#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct no_avl
{
    struct no_avl *esquerda;
    struct no_avl *direita;
    char *valor;
    int quantidade;
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
    no->quantidade = 1;
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
    No_Avl *nova_raiz = NULL;
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
            nova_raiz = avl_rodar_esquerdadireita(no);
        else
            nova_raiz = avl_rodar_esquerdaesquerda(no);
    }
    else if (fb <= -2)
    {
        /* direita Heavy */

        if (avl_fator_de_balanceamento(no->direita) >= 1)
            nova_raiz = avl_rodar_direitaesquerda(no);
        else
            nova_raiz = avl_rodar_direitadireita(no);
    }
    else
    {
        /* This no is balanced -- no change. */

        nova_raiz = no;
    }
    return (nova_raiz);
}

/* Balance a given Arvore */
void avl_balance(Arvore_Avl *Arvore)
{
    No_Avl *nova_raiz = NULL;
    nova_raiz = avl_balance_no(Arvore->raiz);
    if (nova_raiz != Arvore->raiz)
    {
        Arvore->raiz = nova_raiz;
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
int avl_procurar_adicionar_quantidade(Arvore_Avl *Arvore, char *valor)
{
    No_Avl *atual = Arvore->raiz;
    int resposta = 0;
    while (atual != NULL && (strcmp(atual->valor, valor) != 0))
    {
        if (strcmp(valor, atual->valor) > 0)
            atual = atual->direita;
        else
            atual = atual->esquerda;
        if (strcmp(atual->valor, valor) == 0)
        {
            atual->quantidade++;
            return 1;
        }
    }
    return 0;
}

void Passagem_para_heap(No_Avl *pRaiz, HEAP *h ){
    if(pRaiz != NULL){
        Em_ordem(pRaiz->esquerda, h);
        
        Em_ordem(pRaiz->direita, h);
    }
}
//___________________________________________________________________________________________________________________________________________________________________

//___________________________________________________________________________________________________________________________________________________________________
#define true 1
#define false 0

struct palavra
{
    char valor[20];
    int quantidade;
};
typedef struct palavra Palavra;

typedef struct
{
    Palavra *A;
    int tamanhoAtual;
    int tamanhoMaximo;
} HEAP;

void inicializarHeap(HEAP *h, int tamanhoMax)
{
    h->A = (int *)malloc(sizeof(int) * (tamanhoMax + 1));
    h->tamanhoAtual = 0;
    h->tamanhoMaximo = tamanhoMax;
}

void destruirHeap(HEAP *h)
{
    int tamanho = h->tamanhoMaximo;
    free(h->A);
    h->tamanhoMaximo = 0;
    h->tamanhoAtual = 0;
}

int pai(int i)
{
    return i / 2;
}

int filhoEsquerda(int i)
{
    return 2 * i;
}

int filhoDireita(int i)
{
    return 2 * i + 1;
}

// Imprime o arranjo (na ordem que estiver)
void imprimirArranjo(HEAP h)
{
    int tamanho = h.tamanhoAtual;
    int i;
    for (i = 1; i <= tamanho; i++)
        printf("%d ", h.A[i]);
    printf("\n");
}

int inserirHeap(HEAP *h, char chave, int quantidade)
{
    int i, temp;
    Palavra adicionar;
    adicionar.quantidade = quantidade;
    strcpy( adicionar.valor, chave );
    if (h->tamanhoAtual == h->tamanhoMaximo)
        return 0;
    (h->tamanhoAtual)++;
    i = h->tamanhoAtual;
    h->A[i] = adicionar;
    while ((i > 1) && (h->A->quantidade[pai(i)] < h->A->quantidade[i]))
    {
        temp = h->A->quantidade[i];
        h->A[i] = h->A[pai(i)];
        h->A->quantidade[pai(i)] = temp;
        i = pai(i);
    }
    return 1;
}

int percursoPreOrdem(HEAP *h, int atual)
{
    if (atual <= h->tamanhoAtual)
    {
        printf("%i ", h->A[atual]);
        percursoPreOrdem(h, filhoEsquerda(atual));
        percursoPreOrdem(h, filhoDireita(atual));
    }
}

int alturaHeap(HEAP *h)
{
    int altura = -1;
    int i = 1;
    while (i <= h->tamanhoAtual)
    {
        i = filhoEsquerda(i);
        altura++;
    }
    return altura;
}