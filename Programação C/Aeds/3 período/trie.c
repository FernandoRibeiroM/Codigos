#include <stdio.h>
#include <stdlib.h>
#define tamanho 26

typedef struct arvore
{
    int folha;
    struct arvore *caracter[tamanho];
} Arvore;

Arvore *Novo_no();

void inserir(Arvore *raiz, char *str);

int busca(Arvore *raiz, char *str);

int filho(Arvore *atual);

int deletar(Arvore **atual, char *str);

int main()
{
    Arvore *raiz = Novo_no();
    inserir(raiz, "hello");
    printf("%d ", busca(raiz, "hello"));
    inserir(raiz, "helloworld");
    printf("%d ", busca(raiz, "helloworld"));
    printf("%d ", busca(raiz, "helll"));
    inserir(raiz, "hell");
    printf("%d ", busca(raiz, "hell"));
    inserir(raiz, "h");
    printf("%d \n", busca(raiz, "h"));
    deletar(&raiz, "hello");
    printf("%d ", busca(raiz, "hello"));
    printf("%d ", busca(raiz, "helloworld"));
    printf("%d \n", busca(raiz, "hell"));
    deletar(&raiz, "h");
    printf("%d ", busca(raiz, "h"));
    printf("%d ", busca(raiz, "hell"));
    printf("%d\n", busca(raiz, "helloworld"));
    deletar(&raiz, "helloworld");
    printf("%d ", busca(raiz, "helloworld"));
    printf("%d ", busca(raiz, "hell"));
    deletar(&raiz, "hell");
    printf("%d\n", busca(raiz, "hell"));
    if (raiz == NULL)
    {
        printf("Arvore Limpa!!\n");
    }
    printf("%d ", busca(raiz, "hell"));
    return 0;
}

Arvore *Novo_no()
{
    Arvore *no = (Arvore *)malloc(sizeof(Arvore));
    no->folha = 0;
    int i;
    for (i = 0; i < tamanho; i++)
    {
        no->caracter[i] = NULL;
    }
    return no;
}

void inserir(Arvore *raiz, char *str)
{
    Arvore *atual = raiz;
    while (*str)
    {
        if (atual->caracter[*str - 'a'] == NULL)
        {
            atual->caracter[*str - 'a'] = Novo_no();
        }
        atual = atual->caracter[*str - 'a'];
        str++;
    }
    atual->folha = 1;
}

int busca(Arvore *raiz, char *str)
{
    if (raiz == NULL)
    {
        return 0;
    }

    Arvore *atual = raiz;
    while (*str)
    {
        atual = atual->caracter[*str - 'a'];
        if (atual == NULL)
        {
            return 0;
        }
        str++;
    }
    return atual->folha;
}

int filho(Arvore *atual)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (atual->caracter[i])
        {
            return 1;
        }
    }

    return 0;
}

int deletar(Arvore **atual, char *str)
{
    if (*atual == NULL)
    {
        return 0;
    }
    if (*str)
    {
        if (*atual != NULL && (*atual)->caracter[*str - 'a'] != NULL &&
            deletar(&((*atual)->caracter[*str - 'a']), str + 1) &&
            (*atual)->folha == 0)
        {
            if (!filho(*atual))
            {
                free(*atual);
                (*atual) = NULL;
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }

    if (*str == '\0' && (*atual)->folha)
    {
        if (!filho(*atual))
        {
            free(*atual);
            (*atual) = NULL;
            return 1;
        }

        else
        {
            (*atual)->folha = 0;
            return 0;
        }
    }

    return 0;
}
