#include <stdio.h>
#include <stdlib.h>

typedef struct elem
{
    int dado;
    struct elem *prox;
} elem;

typedef struct pilha
{
    elem *topo;
} Pilha;

Pilha *criaPilha();

void liberaPilha(Pilha *p);

int empilha(Pilha *p, int v);

int desempilha(Pilha *p, int *v);

int estahVazia(Pilha *p);

int main()
{
    Pilha *p;
    int numero, numero_excluido = 0, op, verificacao;
    do
    {
        printf("     MENU\n");
        printf("1- Criar pilha!\n2- Verificar se esta vazia!\n3- Empilhar um elemento!\n4- Desempilha um elemento!\n5- Libera a pilha\n0- Sair\n\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1: //1- criar pilha!
            p = criaPilha();
            if (p != NULL)
                printf("Pilha criada com sucesso!\n");
            if (p == NULL)
            {

                printf("\nErro\n");
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
        case 3: //3- Empilhar um elemento!
            printf("Digite o numero que deseja colocar na pilha: ");
            scanf("%d", &numero);
            empilha(p, numero);
            break;
        case 4: //4- Desempilha um elemento!
            verificacao = desempilha(p, &numero_excluido);
            if (verificacao == 1)
            {
                printf("\nO valor %d foi retirado da pilha!\n", numero_excluido);
            }
            else
            {
                printf("\nNao foi possivel retirar um elemento, pois a pilha esta vazia.\n");
            }
            break;
        case 5: //5- Libera a pilha!
            liberaPilha(p);
            break;
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

Pilha *criaPilha()
{
    Pilha *p;
    p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void liberaPilha(Pilha *p)
{
    do
    {
        int n;
        desempilha(p, &n);
    } while (p->topo != NULL);
    free(p);
    printf("Pilha liberada com sucesso\n");
}

int empilha(Pilha *p, int v)
{
    elem *ptr = (elem*) malloc(sizeof(elem));
    if(ptr == NULL)
    {
        printf("\nErro\n");
        return 0;
    }
    else
    {
        ptr->dado = v;
        ptr->prox = p->topo;
        p->topo = ptr;
        return 1;
    }
    return 0;
}

int desempilha(Pilha *p, int *v)
{
    elem *auxiliar = p->topo;
    if(auxiliar == NULL)
    {
        free(auxiliar);
        return 0;
    }
    else{

        p->topo = auxiliar->prox;
        auxiliar->prox = NULL;
        *v = auxiliar->dado;
        free(auxiliar);
        return 1;
    }
}

// 1 == vazio / 0 == Não tá vazio
int estahVazia(Pilha *p)
{
    if(p->topo == NULL)
        return 1;
    else
        return 0;
}
