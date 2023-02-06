#include <stdio.h>
#include <stdlib.h>
#define M 19

typedef struct
{
    int valor;
} Pessoa;

Pessoa Tabela_hash[M];
void Inicializar_tabela();
int Gerar_Codigo(int chave);
Pessoa Ler_valor();
void Inserir();
Pessoa *Buscar(int chave);
void Imprimir();

int main()
{
    int op, chave;
    Pessoa *p;
    Inicializar_tabela();
    do
    {
        printf("1 - Inserir\n2 - Buscar\n3 - Imprimir\n0 - Sair\n");
        scanf("%d", &op);

        switch (op)
        {
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            Inserir();
            break;
        case 2:
            printf("Digite o valor a ser buscado: ");
            scanf("%d", &chave);
            p = Buscar(chave);

            if (p)
                printf("\n\tO valor %d existe\n", p->valor);
            else
                printf("\nValor nao encontrado!\n");
            break;
        case 3:
            Imprimir();
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (op != 0);
    return 0;
}

void Inicializar_tabela()
{
    int i;
    for (i = 0; i < M; i++)
        Tabela_hash[i].valor = -1;
}

int Gerar_Codigo(int chave)
{
    return chave % M;
}

Pessoa Ler_valor()
{
    Pessoa p;
    printf("Digite a valor: ");
    scanf("%d", &p.valor);
    scanf("%*c");
    return p;
}

void Inserir()
{
    Pessoa pes = Ler_valor();
    int indice = Gerar_Codigo(pes.valor);
    while (Tabela_hash[indice].valor != -1)
        indice = Gerar_Codigo(indice + 1);
    Tabela_hash[indice] = pes;
}

Pessoa *Buscar(int chave)
{
    int indice = Gerar_Codigo(chave);
    while (Tabela_hash[indice].valor != -1)
    {
        if (Tabela_hash[indice].valor == chave)
            return &Tabela_hash[indice];
        else
            indice = Gerar_Codigo(indice + 1);
    }
    return NULL;
}

void Imprimir()
{
    int i;
    printf("\n------------------------TABELA---------------------------\n");
    for (i = 0; i < M; i++)
    {
        if (Tabela_hash[i].valor != -1)
            printf("%2d = %3d \t %s", i, Tabela_hash[i].valor);
        else
            printf("%2d =\n", i);
    }
    printf("\n----------------------------------------------------------\n");
}
