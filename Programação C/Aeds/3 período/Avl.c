#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
	int chave;
	struct no *esquerda;
	struct no *direita;
	int altura;
} No;

int altura(No *N);
int maximo(int a, int b);
No *novo_no(int chave);
No *rotacaodireita(No *y);
No *rotacaoesquerda(No *x);
int balanceamento(No *N);
No *inserir(No *no, int chave);
void preordem(No *raiz);

int main()
{
	No *raiz = NULL;

	raiz = inserir(raiz, 10);
	raiz = inserir(raiz, 20);
	raiz = inserir(raiz, 30);
	raiz = inserir(raiz, 40);
	raiz = inserir(raiz, 50);
	raiz = inserir(raiz, 25);
	printf("Avl preordem\n");
	preordem(raiz);
	return 0;
}

int altura(No *N)
{
	if (N == NULL)
		return 0;
	return 1 + maximo(altura(N->esquerda), altura(N->direita));
}

int maximo(int a, int b)
{
	return (a > b) ? a : b;
}

No *novo_no(int chave)
{
	No *no = (No *)
		malloc(sizeof(No));
	no->chave = chave;
	no->esquerda = NULL;
	no->direita = NULL;
	no->altura = 0;
	return (no);
}

No *rotacaodireita(No *y)
{
	No *x = y->esquerda;
	No *T2 = x->direita;
	x->direita = y;
	y->esquerda = T2;
	y->altura = altura(y);
	x->altura = altura(x);
	return x;
}

No *rotacaoesquerda(No *x)
{
	No *y = x->direita;
	No *T2 = y->esquerda;
	y->esquerda = x;
	x->direita = T2;
	x->altura = altura(x);
	y->altura = altura(y);
	return y;
}

int balanceamento(No *N)
{
	if (N == NULL)
		return 0;
	return altura(N->esquerda) - altura(N->direita);
}

No *inserir(No *no, int chave)
{
	if (no == NULL)
		return (novo_no(chave));
	if (chave < no->chave)
		no->esquerda = inserir(no->esquerda, chave);
	else if (chave > no->chave)
		no->direita = inserir(no->direita, chave);
	else
		return no;
	no->altura = altura(no);
	int balance = balanceamento(no);
	if (balance > 1 && chave < no->esquerda->chave)
		return rotacaodireita(no);
	if (balance < -1 && chave > no->direita->chave)
		return rotacaoesquerda(no);
	if (balance > 1 && chave > no->esquerda->chave)
	{
		no->esquerda = rotacaoesquerda(no->esquerda);
		return rotacaodireita(no);
	}
	if (balance < -1 && chave < no->direita->chave)
	{
		no->direita = rotacaodireita(no->direita);
		return rotacaoesquerda(no);
	}
	return no;
}

void preordem(No *raiz)
{
	if (raiz != NULL)
	{
		printf("%d ", raiz->chave);
		preordem(raiz->esquerda);
		preordem(raiz->direita);
	}
}