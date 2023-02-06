#include <stdio.h>
#include <stdlib.h>

typedef struct elemento
{
    int objeto;
    struct elemento *proximo;
} Elemento;

typedef struct lista
{
    Elemento *inicio;
    int cont;
} Lista;

Lista *CriaLista();
void LiberarLista(Lista *l);
int Vazia(Lista *l);
int InserirFinal(Lista *l, int v);
int InserirPosicao(Lista *l, int posi, int v);
int RemoverFinal(Lista *l, int *v);
int RemoverPosicao(Lista *l, int posi, int *v);
int BuscaChave(Lista *l, int chave);
int BuscaPosicao(Lista *l, int posi);
void ImprimeLista(Lista *l);
void LimparLista(Lista *l);
int ContarLista(Lista *l);

int main()
{
    Lista *p;
    int numero, numero_excluido = 0, op, verificacao, posi;
    do
    {
        printf("     MENU\n");
        printf("1- Criar Lista!\n2- Verificar se esta vazia!\n3- Inserir um elemento por posicao!\n4- Inserir elemento no fim da lista!\n5- Retirar um elemento por meio da posicao!\n6- Retirar elemento do final!\n7-Buscar elemento com chave!\n8- Buscar elemento por posicao\n9- Quantidade de numeros na lista!\n10- Imprimir lista!\n11- Limpar lista!\n12- Libera a lista\n0- Sair\n\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1: // 1- criar Lista!
            p = CriaLista();
            if (p != NULL)
                printf("Lista criada com sucesso!\n");
            if (p == NULL)
            {
                printf("\nERRO\n");
                exit(0);
            }
            break;

        case 2: // 2- Verificar se esta vazia!
            verificacao = Vazia(p);
            if (verificacao == 1)
                printf("Esta vazio!\n");
            else
                printf("Nao esta vazia!\n");
            break;

        case 3: // 3- inserir um elemento por posicao!
            printf("Digite o numero que deseja colocar na lista: ");
            scanf("%d", &numero);
            printf("Digite a posicao: ");
            scanf("%d", &posi);
            verificacao = (InserirPosicao(p, posi, numero));
            if (verificacao == 1)
                printf("\nValor inserido com sucesso!\n");
            else
                printf("\nOcorreu um erro!\n");
            break;

        case 4: // 4- Inserir elemento no fim da lista
            printf("Digite o numero que deseja colocar na lista: ");
            scanf("%d", &numero);
            verificacao = (InserirFinal(p, numero));
            if (verificacao == 1)
                printf("\nValor inserido com sucesso!\n");
            else
                printf("\nOcorreu um erro!\n");
            break;

        case 5: // 5- Retirar um elemento por meio da posição!
            printf("Digite a posicao que vc deseja remover um elemento: ");
            scanf("%d", &posi);
            verificacao = RemoverPosicao(p, posi, &numero_excluido);
            if (verificacao == 1)
            {
                printf("\nO valor %d foi retirado da fila!\n", numero_excluido);
            }
            else
            {
                printf("\nNao foi possivel retirar um elemento, pois a lista esta vazia.\n");
            }
            break;

        case 6:
            verificacao = RemoverFinal(p, &numero_excluido);
            if (verificacao == 1)
            {
                printf("\nO valor %d foi retirado da fila!\n", numero_excluido);
            }
            else
            {
                printf("\nNao foi possivel retirar um elemento, pois a lista esta vazia.\n");
            }
            break;

        case 7: // 7-Buscar elemento com chave!
            printf("\n\tDigite a valor chave para buscar na lista: ");
            scanf("%d", &numero);
            verificacao = BuscaChave(p, numero);
            if (verificacao == 1)
                printf("\nO valor %d se encontra na lista!\n", numero);
            else
                printf("\nNao Localizado!\n");
            break;
        case 8: // 8- Buscar elemento por posicao!
            printf("\nDigite a posicao que deseja buscar na lista: ");
            scanf("%d", &posi);
            if (BuscaPosicao(p, posi) == 1)
                printf("\nA posicao procurada e uma posicao valida!\n");
            else
                printf("\nPosicao invalida!\n");
            break;
        case 9: // Contar lista
            numero = ContarLista(p);
            printf("\nSao: %d numeros na lista\n", numero);
            break;
        case 10: // 10- Imprimir lista!
            ImprimeLista(p);
            break;
        case 11: // 11- Limpar lista!
            LimparLista(p);
            break;
        case 12: // 12- Libera a lista!
            LiberarLista(p);
            break;
        case 0:
            break;
        default: // Caso digite valor inválido
            printf("Vc digitou um valor invalido!\n");
            break;
        }
        system("pause && cls");
    } while (op != 0);
    return 0;
}

Lista *CriaLista()
{
    Lista *l;
    l = (Lista *)malloc(sizeof(Lista));
    l->inicio = NULL;
    l->cont = -1;
}

void LiberarLista(Lista *l)
{
    int verificacao = Vazia(l);
    if (verificacao == 0)
    {
        Elemento *atual, *prox;
        atual = l->inicio;
        while (atual != NULL)
        {
            prox = atual->proximo;
            free(atual);
            atual = prox;
        }
        free(l);
    }
}

// 1 == vazio / 0 == Não ta vazio
int Vazia(Lista *l)
{
    if (l->inicio == NULL)
        return 1;
    else
        return 0;
}

int InserirFinal(Lista *l, int v)
{
    if (l == NULL)
        return 0;
    else
    {
        Elemento *e = (Elemento *)malloc(sizeof(Elemento));
        e->objeto = v;
        e->proximo = NULL;
        if (l->inicio == NULL)
        {
            l->inicio = e;
            l->cont++;
            return 1;
        }
        else
        {
            Elemento *aux;
            aux = l->inicio;
            while (aux->proximo != NULL)
            {
                aux = aux->proximo;
            }
            aux->proximo = e;
            l->cont++;
            return 1;
        }
    }
}

int InserirPosicao(Lista *l, int posi, int v)
{
    if (l == NULL)
    {
        return 0;
    }
    else
    {
        Elemento *e;
        e = (Elemento *)malloc(sizeof(Elemento));
        e->objeto = v;
        e->proximo = NULL;
        if (l->inicio == NULL)
        {
            l->inicio = e;
            l->cont++;
        }
        else
        {
            Elemento *ant;
            ant = l->inicio;
            int q = 1;
            if (posi == q)
            {
                e->proximo = l->inicio;
                l->inicio = e;
                l->cont++;
                return 1;
            }
            else
            {
                while ((ant->proximo != NULL) && (q != posi))
                {
                    ant = ant->proximo;
                    q++;
                }
                e->proximo = ant->proximo;
                ant->proximo = e;
                l->cont++;
                return 1;
            }
        }
    }
}

// 1 funcionou ---- 0 não funcionou
int RemoverFinal(Lista *l, int *v)
{
    int verificacao = ContarLista(l);
    if (verificacao == 0)
    {
        printf("Lista vazia\n");
        return 0;
    }
    else if (verificacao == 1)
    {
        *v = l->inicio->objeto;
        LimparLista(l);
        return 1;
    }
    else
    {
        Elemento *ultimo = l->inicio->proximo, *penultimo = l->inicio;

        while (ultimo->proximo != NULL)
        {
            penultimo = ultimo;
            ultimo = ultimo->proximo;
        }

        penultimo->proximo = NULL;
        l->cont++;
        *v = ultimo->objeto;
        return 1;
    }
}

// 1 funcionou ---- 0 não funcionou
int RemoverPosicao(Lista *l, int posi, int *v)
{
    int verificacao = ContarLista(l), i, numero = *v;
    if (posi >= 0 && posi <= verificacao)
    {
        if (posi == 0)
        {
            RemoverFinal(l, &numero);
            *v = numero;
            return 1;
        }
        else
        {
            Elemento *atual = l->inicio->proximo, *anterior = l->inicio;
            for (i = 1; i < posi; i++)
            {
                anterior = atual;
                atual = atual->proximo;
            }

            anterior->proximo = atual->proximo;
            l->cont--;
            *v = atual;
            return 1;
        }
    }
    else
    {
        printf("Elemento invalido\n\n");
        return 0;
    }
}

int BuscaChave(Lista *l, int chave)
{
    int verificacao = Vazia(l);
    if (verificacao == 1)
    {
        return 0;
    }
    else
    {
        Elemento *b;
        b = l->inicio;
        do
        {
            if (chave != b->objeto)
            {
                b = b->proximo;
            }
            else
                return 1;

        } while (b->proximo != NULL);

        if (b->objeto == chave)
            return 1;
        else
            return 0;
    }
}

int BuscaPosicao(Lista *l, int posi)
{
    int verificacao = Vazia(l);
    if (verificacao == 1)
    {
        return 0;
    }
    else
    {
        Elemento *aux;
        aux = l->inicio;
        int q = 1;
        while ((aux->proximo != NULL) && (posi != q))
        {
            aux = aux->proximo;
            q++;
        }
        if (posi == q)
            return 1;
        else
            return 0;
    }
}

void ImprimeLista(Lista *l)
{
    Elemento *aux;
    aux = l->inicio;
    int verificacao;
    int contador = ContarLista(l);
    if (contador > 1)
    {
        do
        {
            printf("\n->%d", aux->objeto);
            aux = aux->proximo;

        } while (aux->proximo != NULL);
    }
    verificacao = Vazia(l);
    if (verificacao != 1)
        printf("\n->%d\n", aux->objeto);
    else
        printf("\nA lsita esta Vazia\n");
}

void LimparLista(Lista *l)
{
    Elemento *no = l->inicio, *aux;
    while (no != NULL)
    {
        aux = no;
        no = no->proximo;
        free(aux);
    }
    l->inicio = NULL;
}

int ContarLista(Lista *l)
{
    Elemento *ant;
    int contador = 0;
    int verificacao = Vazia(l);
    ant = l->inicio;
    if (verificacao == 1)
    {
        return 0;
    }
    else if (ant->proximo == NULL)
    {
        return 1;
    }
    else
    {
        while (ant->proximo != NULL)
        {
            ant = ant->proximo;
            contador++;
        }
        contador++;
        return contador;
    }
}
