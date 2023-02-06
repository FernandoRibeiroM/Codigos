#include <stdio.h>
#include <stdlib.h>
#define Max 5

typedef struct fila
{
    int comeco;
    int fim;
    int vetor[5];
} Fila;

Fila *criaFila();

void liberaFila(Fila *p);

int inserir(Fila *p, int v);

int retirar(Fila *p, int *v);

int estahVazia(Fila *p);

int estahCheia(Fila *p);

int main()
{
    Fila *p;
    int numero, numero_excluido;
    printf("Adicione um numero a filha: ");
    scanf("%d", &numero);
    inserir(p, numero);
    printf("Adicione um numero a filha: ");
    scanf("%d", &numero);
    inserir(p, numero);
    printf("Adicione um numero a filha: ");
    scanf("%d", &numero);
    inserir(p, numero);
    printf("Adicione um numero a filha: ");
    scanf("%d", &numero);
    inserir(p, numero);
    printf("Adicione um numero a filha: ");
    scanf("%d", &numero);
    inserir(p, numero);
    retirar(p, &numero_excluido);
    liberaFila(p);
    return 0;
}

Fila *criaFila()
{
    Fila *p;
    p = (Fila *)malloc(sizeof(Fila));
    p->comeco == 0;
    p->fim == -1;
}

void liberaFila(Fila *p)
{
    free(p);
}

int inserir(Fila *p, int v)
{
    int verificacao;
    verificacao = estahCheia(p);
    if (verificacao == 1)
    {
        printf("A fila esta cheia.");
        exit;
    }
    else
    {
        p->fim++;
        p->vetor[p->fim] = v;
    }
}

int retirar(Fila *p, int *v)
{
    int verificacao;
    verificacao = estahVazia;
    if (verificacao == 0)
    {
        *v = p->vetor[p->comeco];
        p->comeco++;
    }
}

// 1 == vazio / 0 == Não ta vazio
int estahVazia(Fila *p)
{
    if (p->fim == -1)
        return 1;
    else
        return 0;
}

// 1 == cheio / 0 == tem espaço
int estahCheia(Fila *p)
{
    if (p->fim == Max - 1)
        return 1;
    else
        return 0;
}
