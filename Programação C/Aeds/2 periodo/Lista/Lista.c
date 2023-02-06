#include <stdio.h>
#include <stdlib.h>
#define Max 5

typedef struct lista
{
    int vet[Max];
    int fim;
} Lista;

Lista *CriaLista();
void LiberarLista(Lista *l);
int Cheia(Lista *l);
int Vazia(Lista *l);
int InserirFinal(Lista *l, int v);
int InserirPosicao(Lista *l, int posi, int v);
int Remover(Lista *l, int *v, int posi);
int BuscaChave(Lista *l, int chave);
int BuscaPosicao(Lista *l, int posi);
void ImprimeLista(Lista *l);
void LimparLista(Lista *l);
int ContarLista(Lista *l);

int main()
{
    Lista *p;
    int numero, numero_excluido, op, verificacao, posi;
    do
    {
        printf("     MENU\n");
        printf("1- Criar Lista!\n2- Verificar se esta vazia!\n3- Verificar se esta cheia!\n4- Inserir um elemento por posicao!\n5- Inserir elemento no fim da lista!\n6- Retirar um elemento!\n7-Buscar elemento com chave!\n8- Buscar elemento por posicao\n9- Quantidade de numeros na lista!\n10- Imprimir lista!\n11- Limpar lista!\n12- Libera a lista\n0- Sair\n\n");
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
        case 3: // 3- Verificar se esta cheia!
            verificacao = Cheia(p);
            if (verificacao == 1)
                printf("Esta cheio!\n");
            else
                printf("Nao esta cheio!\n");
            break;

        case 4: // 4- inserir um elemento por posicao!
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

        case 5: // 5- Inserir elemento no fim da lista
            printf("Digite o numero que deseja colocar na lista: ");
            scanf("%d", &numero);
            verificacao = (InserirFinal(p, numero));
            if (verificacao == 1)
                printf("\nValor inserido com sucesso!\n");
            else
                printf("\nOcorreu um erro!\n");
            break;

        case 6: // 6- Retirar um elemento!
            printf("Digite a posicao que vc deseja remover um elemento: ");
            scanf("%d", &posi);
            verificacao = Remover(p, &numero_excluido, posi);
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
            printf("\nDigite a valor chave para buscar na lista: ");
            scanf("%d", &numero);
            if (BuscaChave(p, numero) == 1)
                printf("\nO valor %i se encontra na lista!\n", numero);
            else
                printf("\nNao Localizado!\n");
            break;
        case 8: // 8- Buscar elemento por posicao!
            printf("\nDigite a posicao que deseja buscar na lista: ");
            scanf("%i", &posi);
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
    l->fim = -1;
}

void LiberarLista(Lista *l)
{
    free(l);
}

// 1 == cheio / 0 == tem espaço
int Cheia(Lista *l)
{
    if (l->fim == (Max - 1))
        return 1;
    else
        return 0;
}

// 1 == vazio / 0 == Não ta vazio
int Vazia(Lista *l)
{
    if (l->fim == -1)
        return 1;
    else
        return 0;
}

int InserirFinal(Lista *l, int v)
{
    if (l->fim < Max - 1)
    {
        l->fim++;
        l->vet[l->fim] = v;
        return 1;
    }
    else
        return 0;
}

int InserirPosicao(Lista *l, int posi, int v)
{
    if (l->fim == -1)
    {
        l->vet[posi] = v;
        l->fim = posi;
        return 1;
    }
    else if (l->fim > -1)
    {
        if (l->fim > posi)
        {
            int aux = l->fim;
            do
            {
                l->vet[aux + 1] = l->vet[aux];
                aux--;
            } while (posi != aux);
            l->vet[posi] = v;
            l->fim = l->fim + 1;
            return 1;
        }
        else if ((posi > l->fim) && (posi < Max))
        {
            l->vet[posi] = v;
            l->fim = posi;
            return 1;
        }
    }
    else
        return 0;
}

int Remover(Lista *l, int *v, int posi)
{
    int i;
    if (posi == l->fim)
    {
        *v = l->vet[l->fim];
        l->fim--;
        return 1;
    }
    else if (posi < l->fim)
    {
        *v = l->vet[l->fim];
        for (i = posi; i < l->fim; i++)
        {
            l->vet[i] = l->vet[i + 1];
        }
        l->fim--;
        return 1;
    }
    else
        return 0;
}

int BuscaChave(Lista *l, int chave)
{
    if (l->fim > -1)
    {
        int i = 0;
        do
        {
            if (l->vet[i] == chave)
            {
                return 1;
            }
            i++;
        } while (i <= Max);
    }
    else
        return 0;
}

int BuscaPosicao(Lista *l, int posi)
{
    if (l->fim > -1)
    {
        if ((posi < (Max - 1)) && (posi >= 0))
        {
            return l->vet[posi];
        }
        else
            return 0;
    }
    else
        return 0;
}

void ImprimeLista(Lista *l)
{
    int i;
    if (l->fim > -1)
    {
        for (i = 0; i <= l->fim; i++)
        {
            printf("\n-> %d\n", l->vet[i]);
        }
    }
    else
    {
        printf("A lista esta vazia");
    }
}

void LimparLista(Lista *l)
{
    l->fim = -1;
}

int ContarLista(Lista *l)
{
    int quantidade = l->fim;
    quantidade++;
    return quantidade;
}