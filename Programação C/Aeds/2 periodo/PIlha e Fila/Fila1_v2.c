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
    int numero, numero_excluido, op, verificacao;
    do
    {
        printf("     MENU\n");
        printf("1- Criar fila!\n2- Verificar se esta vazia!\n3- Verificar se esta cheia!\n4- Inserir um elemento!\n5- Retirar um elemento!\n6- Libera a fila\n0- Sair\n\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1: //1- criar fila!
            p = criaFila();
            if (p != NULL)
                printf("Fila criada com sucesso!\n");
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
        case 4: //4- inserir um elemento!
            printf("Digite o numero que deseja colocar na fila: ");
            scanf("%d", &numero);
            inserir(p, numero);
            break;
        case 5: //5- Retirar um elemento!
            retirar(p, &numero_excluido);
            printf("O valor %d foi retirado da pilha!\n", numero_excluido);
            break;
        case 6: //6- Libera a pilha!
            liberaFila(p);
            break;
        case 0:
            break;
        default: //Caso digite valor inválido
            printf("Vc digitou um valor invalido!\n");
            break;
        }
        system("pause");
        system("cls");

    } while (op != 0);
    return 0;
}

Fila *criaFila()
{
    Fila *p;
    p = (Fila *)malloc(sizeof(Fila));
    p->comeco = 0;
    p->fim = -1;
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
    int verificacao, comeco;
    comeco = p->comeco;
    verificacao = estahVazia;
    if (verificacao == 0)
    {
        *v = p->vetor[comeco];
    }
    else
        printf("A fila esta vazia\n");
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
    if (p->fim == (Max - 1))
        return 1;
    else
        return 0;
}
