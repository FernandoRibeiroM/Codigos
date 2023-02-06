#include <stdio.h>
#include <stdlib.h>

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

Fila *criaFila();

void liberaFila(Fila *p);

int inserir(Fila *p, int v);

int retirar(Fila *p, int *v);

int estahVazia(Fila *p);

int main()
{
    Fila *p;
    int numero, numero_excluido, op, verificacao;
    do
    {
        printf("     MENU\n");
        printf("1- Criar fila!\n2- Verificar se esta vazia!\n3- Inserir um elemento!\n4- Retirar um elemento!\n5- Libera a fila\n0- Sair\n\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1: //1- criar fila!
            p = criaFila();
            if (p != NULL)
                printf("Fila criada com sucesso!\n");
            if (p == NULL)
            {

                printf("\nERRO\n");
                exit(0);
            }
            break;
        case 2: //2- Verificar se esta vazia!
            verificacao = estahVazia(p);
            if (verificacao == 1)
                printf("Esta vazio!\n");
            else
                printf("Nao esta vazia!\n");
            break;
        case 3: //3- inserir um elemento!
            printf("Digite o numero que deseja colocar na fila: ");
            scanf("%d", &numero);
            inserir(p, numero);
            break;
        case 4: //4- Retirar um elemento!
            verificacao = retirar(p, &numero_excluido);
            if (verificacao == 1)
            {
                printf("\nO valor %d foi retirado da fila!\n", numero_excluido);
            }
            else
            {
                printf("\nNao foi possivel retirar um elemento, pois a fila esta vazia.\n");
            }
            break;
        case 5: //5- Libera a fila!
            liberaFila(p);
            break;
        case 0:
            break;
        default: //Caso digite valor inválido
            printf("Vc digitou um valor invalido!\n");
            break;
        }
        system("pause && cls");
    } while (op != 0);
    return 0;
}

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
        free(auxiliar);

        if (p->ini == NULL)
        {

            p->fim = NULL;
        }
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
