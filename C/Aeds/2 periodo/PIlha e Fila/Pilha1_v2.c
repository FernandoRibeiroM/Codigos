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
    int numero, numero_excluido = 0, op, verificacao;
    do
    {
        printf("     MENU\n");
        printf("1- Criar pilha!\n2- Verificar se esta vazia!\n3- Verificar se esta cheia!\n4- Empilhar um elemento!\n5- Desempilha um elemento!\n6- Libera a pilha\n0- Sair\n\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1: //1- criar pilha!
            p = criaPilha();
            if (p != NULL)
                printf("Pilha criada com sucesso!\n");
            break;
        case 2: //2- Verificar se esta vazia!
            verificacao = estahVazia(p);
            if (verificacao == 1)
                printf("Esta vazio!\n");
            else
                printf("Nao esta vazia!\n");
            break;
        case 3: //3- Verificar se esta cheia!
            verificacao = estahCheia(p);
            if (verificacao == 1)
                printf("Esta cheio!\n");
            else
                printf("Nao esta cheio!\n");
            break;
        case 4: //4- Empilhar um elemento!
            printf("Digite o numero que deseja colocar na pilha: ");
            scanf("%d", &numero);
            empilha(p, numero);
            break;
        case 5: //5- Desempilha um elemento!
            desempilha(p, &numero_excluido);
            printf("O valor %d foi retirado da pilha!\n", numero_excluido);
            break;
        case 6: //6- Libera a pilha!
            liberaPilha(p);
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
        printf("A pilha esta cheia.\n");
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
    int verificacao, topo;
    topo = p->topo;
    verificacao = estahVazia(p);
    if (verificacao == 0)
    {
        *v = (p->vetor[topo]);
        p->topo--;
    }
    else
        printf("A pilha esta vazia\n");
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
