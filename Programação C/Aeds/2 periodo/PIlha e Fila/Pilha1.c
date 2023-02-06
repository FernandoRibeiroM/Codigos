#include <stdio.h>
#include <stdlib.h>
#define Max 5

typedef struct pilha
{
    int topo;
    int vetor[Max];
} Pilha;

Pilha *criaPilha();

void liberaPilha(Pilha *p);

int empilha(Pilha *p, int v);

int desempilha(Pilha *p, int *v);

int estahVazia(Pilha *p);

int estahCheia(Pilha *p);

int main()
{
    Pilha *p;
    int numero, numero_excluido;
    p = criaPilha();

    printf("Adicione um numero a pilha: ");
    scanf("%d", &numero);
    empilha(p, numero);
    printf("Adicione um numero a pilha: ");
    scanf("%d", &numero);
    empilha(p, numero);
    printf("Adicione um numero a pilha: ");
    scanf("%d", &numero);
    empilha(p, numero);
    printf("Adicione um numero a pilha: ");
    scanf("%d", &numero);
    empilha(p, numero);
    printf("Adicione um numero a pilha: ");
    scanf("%d", &numero);
    empilha(p, numero);
    desempilha(p, &numero_excluido);
    printf("Adicione um numero a pilha: ");
    scanf("%d", &numero);
    empilha(p, numero);
    printf("Numero exluido: %d", numero_excluido);
    liberaPilha(p);
    return 0;
}

Pilha *criaPilha()
{
    Pilha *p;
    p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = -1;
}

void liberaPilha(Pilha *p)
{
    free(p);
}

int empilha(Pilha *p, int v)
{
    int verificacao;
    verificacao = estahCheia(p);
    if (verificacao == 1)
    {
        printf("A pilha esta cheia.");
        exit;
    }
    else
    {
        p->topo++;
        p->vetor[p->topo] = v;
    }
}

int desempilha(Pilha *p, int *v)
{
    int verificacao;
    verificacao = estahVazia;
    if (verificacao == 0)
    {
        *v = p->vetor[p->topo];
        p->topo--;
    }
}

// 1 == vazio / 0 == Não tá vazio
int estahVazia(Pilha *p)
{
    if (p->topo == -1)
        return 1;
    else
        return 0;
}

// 1 == cheio / 0 == tem espaço
int estahCheia(Pilha *p)
{
    if (p->topo == Max - 1)
        return 1;
    else
        return 0;
}
