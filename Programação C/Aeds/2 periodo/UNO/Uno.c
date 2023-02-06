#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define Max 110
#define MaxCor 12

// Carta
typedef struct carta
{
    char cor;
    char valor[20];
} Carta;

// Lista Mão jogador
typedef struct elemento
{
    Carta carta;
    struct elemento *proximo;
} Elemento;
typedef struct lista
{
    Elemento *inicio;
    int cont;
} Lista;

// Jogador
typedef struct jogador
{
    // Nome, Numero de cartas na mão do jogador, Pontuação no decorrer das partidas, Número de partidas ganhas
    char Nome[20];
    int NCartasMao, Pontuacao, NPartidasGanhas, vez, uno;
    Lista *Mao;
} Jogador;

// Pilha
typedef struct pilha
{
    int topo;
    Carta vetor[Max];
} Pilha;

// Funções
// PIlha
Pilha *criaPILHA();
void liberaPILHA(Pilha *p);
int empilhaPILHA(Pilha *p, Carta v);
int desempilhaPILHA(Pilha *p, Carta *v);
int estahVaziaPILHA(Pilha *p);
int estahCheiaPILHA(Pilha *p);
void EmbaralharPILHA(Pilha *p, int NCartas);
void Trocar_Cartas_de_Pilha(Pilha *P1, Pilha *P2);
// Lista
Lista *CriaLista();
void LiberarLista(Lista *l);
int Vazia(Lista *l);
int InserirFinal(Lista *l, Carta v);
int InserirPosicao(Lista *l, int posi, Carta v);
int RemoverFinal(Lista *l, Carta *v, Jogador *J);
int Remover_carta_definida(Lista *l, Carta retirar, Jogador *J);
int BuscaChave(Lista *l, Carta chave);
int BuscaPosicao(Lista *l, int posi);
void ImprimeLista(Lista *l);
void LimparLista(Lista *l);
int ContarLista(Lista *l);
// Jogador
int Sorteio();
Jogador *Criacao_Jogador();
// Comprar Carta
void Comprar_carta(Pilha *Mont, Pilha *descarte, Jogador *J, int Ncomprado);
void ComprarCartaLoop(Pilha *Mont, Pilha *descarte, Jogador *J, Carta Salva_cor_n, int turno);
// Funções que empilham o baralho no início do jogo
void Criacao_Cartas(Pilha *B);
int Cartas_Na_Pilha(Pilha *B, char *valor, char cor);
// Contagem de pontos
int Contagem_Pontos(Lista *Mao);
// Chama a função das cartas
int ChamaCarta(Carta C, Jogador *J1, Jogador *J2, Carta Salva_cor_n, int *Somatorio);
// Função das Cartas
void CartasMais(Pilha *Mont, Pilha *descarte, Jogador *J, Carta Salva_cor_n, int CartasComprar);
void EscolheCor(Carta Salva_cor_n);
void TrocaMao(Lista *Mao1, Lista *Mao2, Carta Salva_cor_n);
void Pular_inverter(Jogador *J1, Jogador *J2);
// Pergunta se a pessoa deseja comprar carta ou jogar uma carta
int J_comprar();
// Verifica se uma carta pode ser jogada
int valida(Carta C, Carta Salva_cor_valor, int Turno, Jogador *J);
// Inverte que vai ser o próximo jogador
void Inverter_vez(Jogador *J1, Jogador *J2);
// Onde o principal do jogo acontece
void Jogo(Jogador *J1, Jogador *J2, FILE *ponteiro_files);
// Função que permite o jogador jogar uma carta
void Jogar_carta(Jogador *J, Jogador *Jsecundario, Pilha *Mont, Pilha *Descarte, int Turno, Carta Salva_cor_valor, int Somatorio, FILE *ponteiro_files);
// Função chamada quando alguém joga uma  carta com mais
void CartaMais_Jogo(Jogador *J, Jogador *Jsecundario, Carta Salva_cor_valor, int Turno, Pilha *Mont, Pilha *Descarte, int Somatorio);
// VErifica todas as cartas da mão do jogador a fim de descobrir se ele possui alguma carta jogável
int Procura_carta_valida(Carta Salva_cor_valor, int Turno, Jogador *J);
// Deseja falar UNO S/N
void UNO(Jogador *J1, Jogador *Jsecundario, Pilha *Mont, Pilha *Descarte, Carta Salva_cor_valor);

// Main/////////////////////////////////
int main()
{
    FILE *ponteiro_file;
    ponteiro_file = fopen("Jogo_Uno.txt", "w"); // abrindo arquivo
    if (ponteiro_file == NULL)
    {
        printf("Erro");
        exit(1);
    }

    Jogador *J1, *J2;
    J1 = Criacao_Jogador();
    J2 = Criacao_Jogador();
    do
    {
        Jogo(J1, J2, ponteiro_file);
    } while ((J1->Pontuacao >= 500) || (J2->Pontuacao >= 500));
    if (J1->Pontuacao >= 500)
    {
        printf("\nParabens %s por ganhar o jogo!!!", J1->Nome);
    }
    else if (J2->Pontuacao >= 500)
    {
        printf("\nParabens %s por ganhar o jogo!!!", J2->Nome);
    }
    else
        printf("Erro Pontuacao");
    fclose(ponteiro_file);
    LiberarLista(J1->Mao);
    LiberarLista(J2->Mao);
    free(J1);
    free(J2);
    return 0;
    // No fim o código tem como problema a criação de cartas, ele impede o desenvolvimento do codigo
    /*Trabalho de Algoritmo e estrutura de dados II.
    By: Fernando Ribeiro Martins*/
}
///////////////////////////////////////
// Funções relacionadas a pilha estática
Pilha *criaPILHA()
{
    Pilha *p;
    p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}

void liberaPILHA(Pilha *p)
{
    free(p);
}

int empilhaPILHA(Pilha *p, Carta v)
{
    // 1 == Deu para alocar carta / 0 == Não deu pra alocar carta
    int verificacao;
    verificacao = estahCheiaPILHA(p);
    if (verificacao == 1)
    {
        return 0;
    }
    else
    {
        p->topo++;
        p->vetor[p->topo] = v;
        return 1;
    }
}

int desempilhaPILHA(Pilha *p, Carta *v)
{
    // 1== Ainda tem cartas para poderem ser retiradas / 0 == Essa era a última carta / -1 == Tá sem carta
    int verificacao, topo;
    topo = p->topo;
    verificacao = estahVaziaPILHA(p);
    if (verificacao == 0)
    {
        *v = (p->vetor[topo]);
        p->topo--;
        verificacao = estahVaziaPILHA(p);
        if (verificacao == 1)
        {
            return 0;
        }
        else
            return 1;
    }
    else
        return -1;
}

int estahVaziaPILHA(Pilha *p)
{
    // 1 == vazio / 0 == Não tá vazio
    if (p->topo == -1)
        return 1;
    else
        return 0;
}

int estahCheiaPILHA(Pilha *p)
{
    // 1 == cheio / 0 == tem espaço
    if (p->topo == Max - 1)
        return 1;
    else
        return 0;
}

void EmbaralharPILHA(Pilha *p, int NCartas)
{
    int i;
    for (i = 0; i < NCartas; i++)
    {
        int r = rand() % NCartas;

        Pilha aux = p[i];
        p[i] = p[r];
        p[r] = aux;
    }
}

void Trocar_Cartas_de_Pilha(Pilha *P1, Pilha *P2)
{
    // P1 pilha de compra, P2 pilha de descarte
    Carta Carta_Retirada, auxiliar;
    int verificacao;
    verificacao = desempilhaPILHA(P2, &auxiliar);
    if (verificacao == -1)
        printf("\n\n\nERRO em desempilhar uma carta do descarte, para salvala para posteriormente adicionar ela ao topo do descarte novamente ");
    EmbaralharPILHA(P2, P2->topo);
    while (P2->topo != -1)
    {
        verificacao = desempilhaPILHA(P2, &Carta_Retirada);
        if (verificacao == 1 || verificacao == 0)
        {
            verificacao = empilhaPILHA(P1, Carta_Retirada);
            if (verificacao == 0)
                verificacao = empilhaPILHA(P1, Carta_Retirada);
            if (verificacao == 1)
                P1->topo++;
        }
        else
            P2->topo--;
    }
    verificacao = empilhaPILHA(P2, auxiliar);
    if (verificacao == 1)
    {
        return;
    }
    else
        printf("ERRO");
}
// Fim Pilha estática

// Funções Lista------------- AInda tem problemas
Lista *CriaLista()
{
    Lista *l;
    l = (Lista *)malloc(sizeof(Lista));
    l->inicio = NULL;
    l->cont = -1;
    return l;
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

int Vazia(Lista *l)
{ // 1 == vazio / 0 == Não ta vazio
    if (l->inicio == NULL)
        return 1;
    else
        return 0;
}

int InserirFinal(Lista *l, Carta v)
{
    if (l == NULL)
        return 0;
    else
    {
        Elemento *e = (Elemento *)malloc(sizeof(Elemento));
        e->carta = v;
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

int InserirPosicao(Lista *l, int posi, Carta v)
{
    if (l == NULL)
    {
        return 0;
    }
    else
    {
        Elemento *e;
        e = (Elemento *)malloc(sizeof(Elemento));
        e->carta = v;
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
    return 0;
}

int RemoverFinal(Lista *l, Carta *v, Jogador *J)
{
    // 1 funcionou ---- 0 não funcionou
    int verificacao = ContarLista(l);
    if (verificacao == 0)
    {
        return 0;
    }
    else if (verificacao == 1)
    {
        *v = l->inicio->carta;
        J->NCartasMao--;
        l->cont--;
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
        l->cont--;
        J->NCartasMao--;
        *v = ultimo->carta;
        free(ultimo);
        free(penultimo);
        return 1;
    }
}

int Remover_carta_definida(Lista *l, Carta retirar, Jogador *J)
{
    // 1 funcionou ---- 0 não funcionou
    int i;
    Elemento *atual = l->inicio->proximo, *anterior = l->inicio;
    if ((anterior->carta.cor != retirar.cor) && (anterior->carta.valor != retirar.valor))
    {
        J->NCartasMao--;
        l->cont--;
        free(atual);
        free(anterior);
        return 1;
    }
    else
    {
        while ((anterior->carta.cor = retirar.cor) && (strcmp(anterior->carta.valor, retirar.valor) == 1))
        {
            anterior = atual;
            atual = atual->proximo;
            if (l->cont < i)
                return 0;
            i++;
        }
        free(atual);
        free(anterior);
        J->NCartasMao--;
        l->cont--;
        return 1;
    }
}

int BuscaChave(Lista *l, Carta chave)
{
    int verificacao = Vazia(l), verificacaoValor, verificacaoCor;
    if (verificacao == 1)
    {
        return 0;
    }
    else
    {
        Elemento *b;
        b = (Elemento *)malloc(sizeof(Elemento));
        b = l->inicio;
        do
        {
            verificacaoValor = strcmp(chave.valor, b->carta.valor);
            verificacaoCor = strcmp(&chave.cor, &b->carta.cor);
            if ((verificacaoValor != 0) && (verificacaoCor != 0))
            {
                b = b->proximo;
            }
            else if ((verificacaoValor = 0) && (verificacaoCor = 0))
                return 1;

        } while (b->proximo != NULL);

        if (b->carta.cor == chave.cor && b->carta.valor == chave.valor)
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
            printf("\n->%s %c", aux->carta.valor, aux->carta.cor);
            aux = aux->proximo;

        } while (aux->proximo != NULL);
    }
    verificacao = Vazia(l);
    if (verificacao != 1)
        printf("\n->%s %c", aux->carta.valor, aux->carta.cor);
    else
        return;
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

// Jogadores
int Sorteio()
{
    // Quem joga primeiro
    int resultado = rand() % 2;
    return resultado;
}

Jogador *Criacao_Jogador()
{
    // Nome, Pontuação no decorrer das partidas,
    Jogador *J;
    J = (Jogador *)malloc(sizeof(Jogador));
    printf("Digite seu nome:");
    setbuf(stdin, NULL);
    gets(&J->Nome);
    J->NCartasMao = 0;
    J->NPartidasGanhas = 0;
    J->Pontuacao = 0;
    J->Mao = CriaLista();
    J->vez = 0;
    J->uno = 0;
    return J;
}

// Comprar carta
void Comprar_carta(Pilha *Mont, Pilha *descarte, Jogador *J, int Ncomprado)
{
    Carta auxiliar;
    int i;
    for (i = 0; i < Ncomprado; i++)
    {
        if (estahVaziaPILHA(Mont) == 1)
        {
            Trocar_Cartas_de_Pilha(Mont, descarte);
        }
        desempilhaPILHA(Mont, &auxiliar);
        InserirFinal(J->Mao, auxiliar);
        J->NCartasMao++;
    }
}

void ComprarCartaLoop(Pilha *Mont, Pilha *descarte, Jogador *J, Carta Salva_cor_n, int turno)
{
    Carta auxiliar;
    int verificar;
    while ((auxiliar.cor != Salva_cor_n.cor) || (auxiliar.valor != Salva_cor_n.valor))
    {
        if (estahVaziaPILHA(Mont) == 1)
        {
            Trocar_Cartas_de_Pilha(Mont, descarte);
        }
        desempilhaPILHA(Mont, &auxiliar);
        InserirFinal(J->Mao, auxiliar);
        printf("\nValor: %s\nCor: %c", auxiliar.valor, auxiliar.cor);
        J->NCartasMao++;
        verificar = valida(auxiliar, Salva_cor_n, turno, J);
        if (verificar == 1)
        {
            ImprimeLista(J->Mao);
            return;
        }
    }
    return;
}
// Funções que empilham o baralho no início do jogo
void Criacao_Cartas(Pilha *B)
{

    char CorY[] = "Y", CorB[] = "B", CorG[] = "G", CorR[] = "R", CorP[] = "P", Inverter[] = "Inverter", Passa_vez[] = "Passa vez", MaisDois[] = "+2";
    int i, j, valor;
    // Criando as cartas Amarelas
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            valor = j;
            cartas_baralho(B, valor, CorY);
        }
        cartas_baralho(B, Passa_vez, CorY);
        cartas_baralho(B, Inverter, CorY);
        cartas_baralho(B, MaisDois, CorY);
    }
    // Criando as cartas Azuis
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            valor = j;
             cartas_baralho(B, valor, CorB);
        }
         cartas_baralho(B, Passa_vez, CorB);
         cartas_baralho(B, Inverter, CorB);
         cartas_baralho(B, MaisDois, CorB);
    }
    // Criando as cartas Verde
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            valor = j;
             cartas_baralho(B, valor, CorG);
        }
         cartas_baralho(B, Passa_vez, CorG);
         cartas_baralho(B, Inverter, CorG);
         cartas_baralho(B, MaisDois, CorG);
    }
    // Criando as cartas Vermelho
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            valor = j;
             cartas_baralho(B, valor, CorR);
        }
         cartas_baralho(B, Passa_vez, CorR);
         cartas_baralho(B, Inverter, CorR);
         cartas_baralho(B, MaisDois, CorR);
    }
    // Criando as cartas corigas
    for (i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            char valor[] = "+4";
            for (j = 0; j < 2; j++)
            {
                 cartas_baralho(B, valor, CorP);
            }
        }
        else if (i == 1)
        {
            char valor[] = "Escolher cor";
            for (j = 0; j < 2; j++)
            {
                 cartas_baralho(B, valor, CorP);
            }
        }
        else
        {
            char valor[] = "Troca maos";
            for (j = 0; j < 2; j++)
            {
                 cartas_baralho(B, valor, CorP);
            }
        }
    }
}

int cartas_baralho(Pilha *B, char Valor[], char *cor)
{
    if (B->topo == 0)
    {
        Carta *c;
        c = (Carta *)malloc(sizeof(Carta));
        strcpy(c->valor, Valor);
        strcpy(&c->cor, cor);
        B->vetor[B->topo] = *c;
        B->topo++;
        free(c);
        return 1;
    }
    else if (B->topo != 0)
    {
        Carta *c;
        c = (Carta *)malloc(sizeof(Carta));
        strcpy(c->valor, Valor);
        strcpy(&c->cor, cor);
        B->vetor[B->topo] = *c;
        B->topo++;
        free(c);
        return 1;
    }
    else
        return 0;
}

// contagem de pontos
int Contagem_Pontos(Lista *Mao)
{
    // 10 == Inverter // 11 == Passa vez // 12 == +2 // 14 == +4 // 15 == Escolhe cor // 16 == Troca mão
    int resultado = 0;
    char Um[] = "1", Dois[] = "2", Tres[] = "3", Quatro[] = "4", Cinco[] = "5", Seis[] = "6", Sete[] = "7", Oito[] = "8", Nove[] = "9", Inverter[] = "Inverter", Passa_vez[] = "Passa vez", MaisDois[] = "+2", MaisQuatro[] = "+4", Escolhe_cor[] = "Escolher cor", Troca_mao[] = "Troca maos";
    Elemento *ant;
    int verificacao = Vazia(Mao);
    ant = Mao->inicio;
    if (verificacao == 1)
    {
        return resultado;
    }
    else
    {
        while (ant->proximo != NULL)
        {
            if ((strcmp(ant->carta.valor, Um) == 0) || (strcmp(ant->carta.valor, Dois) == 0) || (strcmp(ant->carta.valor, Tres) == 0) || (strcmp(ant->carta.valor, Quatro) == 0) || (strcmp(ant->carta.valor, Cinco) == 0) || (strcmp(ant->carta.valor, Seis) == 0) || (strcmp(ant->carta.valor, Sete) == 0) || (strcmp(ant->carta.valor, Oito) == 0) || (strcmp(ant->carta.valor, Nove) == 0))
                resultado += 5;
            else if ((strcmp(ant->carta.valor, Passa_vez) == 0) || (strcmp(ant->carta.valor, Inverter) == 0) || (strcmp(ant->carta.valor, MaisDois) == 0))
                resultado += 20;
            else if ((strcmp(ant->carta.valor, MaisQuatro) == 0) || (strcmp(ant->carta.valor, Escolhe_cor) == 0) || (strcmp(ant->carta.valor, Troca_mao) == 0))
                resultado += 50;
            ant = ant->proximo;
        }
        return resultado;
    }
}

// Funções cartas
int ChamaCarta(Carta C, Jogador *J1, Jogador *J2, Carta Salva_cor_n, int *Somatorio)
{
    int quantidade;
    char Zero[] = "0", Um[] = "1", Dois[] = "2", Tres[] = "3", Quatro[] = "4", Cinco[] = "5", Seis[] = "6", Sete[] = "7", Oito[] = "8", Nove[] = "9", Inverter[] = "Inverter", Passa_vez[] = "Passa vez", MaisDois[] = "+2", MaisQuatro[] = "+4", Escolhe_cor[] = "Escolher cor", Troca_mao[] = "Troca maos", Preto[] = "P";
    if ((strcmp(&C.cor, Preto) != 0) && ((strcmp(C.valor, Zero) == 0) || (strcmp(C.valor, Um) == 0) || (strcmp(C.valor, Dois) == 0) || (strcmp(C.valor, Tres) == 0) || (strcmp(C.valor, Quatro) == 0) || (strcmp(C.valor, Cinco) == 0) || (strcmp(C.valor, Seis) == 0) || (strcmp(C.valor, Sete) == 0) || (strcmp(C.valor, Oito) == 0) || (strcmp(C.valor, Nove) == 0)))
    {
        strcpy(&Salva_cor_n.cor, &C.cor);
        strcpy(Salva_cor_n.valor, C.valor);
        return 1;
    }
    else if (strcmp(C.valor, MaisDois) == 0)
    {
        quantidade = 2;
        *Somatorio += quantidade;
        strcpy(&Salva_cor_n.cor, &C.cor);
        strcpy(Salva_cor_n.valor, C.valor);
        return 1;
    }
    else if (strcmp(C.valor, MaisQuatro) == 0)
    {
        quantidade = 4;
        *Somatorio += quantidade;
        strcpy(&Salva_cor_n.cor, &C.cor);
        strcpy(Salva_cor_n.valor, C.valor);
        return 1;
    }
    else if (strcmp(C.valor, Escolhe_cor) == 0)
    {
        EscolheCor(Salva_cor_n);
        strcpy(Salva_cor_n.valor, C.valor);
        return 1;
    }
    else if (strcmp(C.valor, Troca_mao) == 0)
    {
        TrocaMao(J1->Mao, J2->Mao, Salva_cor_n);
        strcpy(Salva_cor_n.valor, C.valor);
        return 1;
    }
    else if ((strcmp(C.valor, Inverter) == 0) || (strcmp(C.valor, Passa_vez) == 0))
    {
        strcpy(&Salva_cor_n.cor, &C.cor);
        strcpy(Salva_cor_n.valor, C.valor);
        Pular_inverter(J1, J2);
        return 1;
    }
    else
    {
        printf("\nErro na execucao da funcao da carta");
        return 0;
    }
}

void CartasMais(Pilha *Mont, Pilha *descarte, Jogador *J, Carta Salva_cor_n, int CartasComprar)
{
    char Maisquatro[] = "+4";
    if (strcmp(Mont->vetor[Mont->topo].valor, Maisquatro) == 0)
    {
        EscolheCor(Salva_cor_n);
    }
    Comprar_carta(Mont, descarte, J, CartasComprar);
}

void EscolheCor(Carta Salva_cor_n)
{
    do
    {
        printf("\nDigite uma cor dentre as opcoes abaixo:\nR - G - B - Y\n");
        setbuf(stdin, NULL);
        gets(&Salva_cor_n.cor);
    } while ((Salva_cor_n.cor != 'R') || (Salva_cor_n.cor != 'G') || (Salva_cor_n.cor != 'B') || (Salva_cor_n.cor != 'Y'));
}

void TrocaMao(Lista *Mao1, Lista *Mao2, Carta Salva_cor_n)
{
    Lista *auxiliar;
    auxiliar = Mao1;
    Mao1 = Mao2;
    Mao2 = auxiliar;
    EscolheCor(Salva_cor_n);
}

void Pular_inverter(Jogador *J1, Jogador *J2)
{
    Inverter_vez(J1, J2);
}

int J_comprar()
{
    int i = 0;
    do
    {
        char Jogar_Comprar[20], Jogar[] = "Jogar", Comprar[] = "Comprar";
        printf("\n\n\nDeseja comprar ou jogar?\n");
        setbuf(stdin, NULL);
        gets(Jogar_Comprar);
        if (strcmp(Jogar_Comprar, Jogar) == 0)
        {
            return 1;
        }
        else if (strcmp(Jogar_Comprar, Comprar) == 0)
        {
            return 0;
        }
        else
            i++;

    } while (i != 0);
    return 0;
}

int valida(Carta C, Carta Salva_cor_valor, int Turno, Jogador *J)
{
    // falta inverter, pular, +2,
    char Zero[] = "0", Um[] = "1", Dois[] = "2", Tres[] = "3", Quatro[] = "4", Cinco[] = "5", Seis[] = "6", Sete[] = "7", Oito[] = "8", Nove[] = "9", MaisDois[] = "+2", MaisQuatro[] = "+4", Escolhe_cor[] = "Escolher cor", Troca_mao[] = "Troca maos", Preto[] = "P";
    if (Turno == 1)
    {
        if (((strcmp(C.valor, Zero) == 0) || (strcmp(C.valor, Um) == 0) || (strcmp(C.valor, Dois) == 0) || (strcmp(C.valor, Tres) == 0) || (strcmp(C.valor, Quatro) == 0) || (strcmp(C.valor, Cinco) == 0) || (strcmp(C.valor, Seis) == 0) || (strcmp(C.valor, Sete) == 0) || (strcmp(C.valor, Oito) == 0) || (strcmp(C.valor, Nove) == 0)) && (strcmp(&C.cor, Preto) == 0))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (((strcmp(C.valor, Salva_cor_valor.valor) == 0) || (strcmp(&C.cor, &Salva_cor_valor.cor) == 0)) && (strcmp(&C.cor, Preto) != 0) && (strcmp(Salva_cor_valor.valor, MaisDois) != 0))
    {
        return 1;
    }
    else if (strcmp(Salva_cor_valor.valor, MaisDois) == 0)
    {
        if (strcmp(C.valor, MaisDois) == 0)
            return 1;
        else
            return 0;
    }
    else if (((C.valor != Salva_cor_valor.valor) || (C.cor != Salva_cor_valor.cor)) && (C.cor != 'p'))
    {
        return 0;
    }
    else if (strcmp(C.valor, MaisQuatro) == 0)
    {
        Elemento *aux;
        aux = J->Mao->inicio;
        do
        {
            if (((aux->carta.cor == Salva_cor_valor.cor) || (aux->carta.valor == Salva_cor_valor.valor)) && (Salva_cor_valor.cor != 'P'))
                return 0;
            aux = aux->proximo;
        } while (aux->proximo != NULL);
        return 1;
    }
    else if (strcmp(C.valor, Escolhe_cor) == 0)
    {
        return 1;
    }
    else if (strcmp(C.valor, Troca_mao) == 0)
    {
        if (Turno > 1 || J->NCartasMao < 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
        return 0;
}

void Inverter_vez(Jogador *J1, Jogador *J2)
{
    if (J1->vez == 0)
    {
        J1->vez = 1;
        J2->vez = 0;
    }
    if (J2->vez == 0)
    {
        J1->vez = 0;
        J2->vez = 1;
    }
}
// JOGO
void Jogo(Jogador *J1, Jogador *J2, FILE *ponteiro_files)
{
    Pilha *Monte, *Descarte;
    int nSorteio, comprar_carta = 7, turno = 0, Jogar_Comprar, Soma_das_cartas_mais = 0, verificacao, soma_pontos = 0;
    char MaisDois[] = "+2", MaisQuatro[] = "+4";
    Carta Salva_cor_valor;
    nSorteio = Sorteio();
    if (nSorteio == 1)
    {
        J1->vez = 0;
        J2->vez = 1;
        printf("\n%s e o Jogador 1 e %s e o Jogador 2!\n", J1->Nome, J2->Nome);
    }
    else
    {
        J2->vez = 0;
        J1->vez = 1;
        printf("\n%s e o Jogador 1 e %s e o Jogador 2!\n", J2->Nome, J1->Nome);
    }
    Monte = criaPILHA();
    Criacao_Cartas(Monte);
    Descarte = criaPILHA();
    CartasMais(Monte, Descarte, J1, Salva_cor_valor, comprar_carta);
    CartasMais(Monte, Descarte, J2, Salva_cor_valor, comprar_carta);
    comprar_carta = 0;
    system("cls");
    do
    {
        if (estahVaziaPILHA(Monte) == 1)
        {
            Trocar_Cartas_de_Pilha(Monte, Descarte);
        }
        turno++;
        printf("----------Pilha de descarte----------\n\tValor: %s\n\tCor: %c\n\n\n\n", Descarte->vetor[Descarte->topo].valor, Descarte->vetor[Descarte->topo].cor);
        // Caso esteja no primeiro turno ou se a pessoa não levou um +2/+4
        if ((Descarte->topo == -1) || ((strcmp(Descarte->vetor[Descarte->topo].valor, MaisDois) != 0) && (Soma_das_cartas_mais != 0)) || ((strcmp(Descarte->vetor[Descarte->topo].valor, MaisQuatro) != 0) && (Soma_das_cartas_mais != 0)))
        // Carta sem +
        {
            Soma_das_cartas_mais = 0;
            Jogar_Comprar = J_comprar();
            // Jogar
            if (Jogar_Comprar == 1)
            {
                // Se J1 for a pessoa a jogar agora
                if (J1->vez == 0)
                {
                    verificacao = Procura_carta_valida(Salva_cor_valor, turno, J1);
                    if (verificacao == 1)
                    {
                        Jogar_carta(J1, J2, Monte, Descarte, turno, Salva_cor_valor, Soma_das_cartas_mais, ponteiro_files);
                    }
                    else
                    {
                        printf("\nInfelizmente tu vai ter que comprar, pois vc não possui nenhuma carta jogavel!\n");
                        ComprarCartaLoop(Monte, Descarte, J1, Salva_cor_valor, turno);
                    }
                }
                // Se J2 for a pessoa a jogar agora
                if (J2->vez == 0)
                {
                    verificacao = Procura_carta_valida(Salva_cor_valor, turno, J2);
                    if (verificacao == 1)
                    {
                        Jogar_carta(J2, J1, Monte, Descarte, turno, Salva_cor_valor, Soma_das_cartas_mais, ponteiro_files);
                    }
                    else
                    {
                        printf("\nInfelizmente vc vai ter que comprar, pois vc não possui nenhuma carta jogavel!\n");
                        ComprarCartaLoop(Monte, Descarte, J2, Salva_cor_valor, turno);
                    }
                }
            }
            // Comprar
            else
            {
                if (J1->vez == 0)
                {
                    ComprarCartaLoop(Monte, Descarte, J1, Salva_cor_valor, turno);
                }
                if (J2->vez == 0)
                {
                    ComprarCartaLoop(Monte, Descarte, J2, Salva_cor_valor, turno);
                }
            }
        }
        else
        // Carta com +
        {
            if (J1->vez == 0)
            {
                CartaMais_Jogo(J1, J2, Salva_cor_valor, turno, Monte, Descarte, Soma_das_cartas_mais);
            }
            if (J2->vez == 0)
            {
                CartaMais_Jogo(J2, J1, Salva_cor_valor, turno, Monte, Descarte, Soma_das_cartas_mais);
            }
        }
        system("pause, cls");
        Inverter_vez(J1, J2);
    } while ((J1->NCartasMao != 0) || (J2->NCartasMao != 0));
    if (J1->NCartasMao == 0)
    {
        soma_pontos = Contagem_Pontos(J2->Mao);
        J1->Pontuacao += soma_pontos;
        printf("\n\n\n\t\t%s Parabens\n\t\tvc ganhou essa partida", J1->Nome);
        J1->NPartidasGanhas++;
    }
    else
    {
        soma_pontos = Contagem_Pontos(J1->Mao);
        J2->Pontuacao += soma_pontos;
        printf("\n\n\n\t\t%s Parabens\n\t\tvc ganhou essa partida", J2->Nome);
        J2->NPartidasGanhas++;
    }
    liberaPILHA(Monte);
    liberaPILHA(Descarte);
}

void Jogar_carta(Jogador *J, Jogador *Jsecundario, Pilha *Mont, Pilha *Descarte, int Turno, Carta Salva_cor_valor, int Somatorio, FILE *ponteiro_files)
{
    int funcionou = 0, verificacao1, verificacao2, verificacao3, verificacao4, verificacao_valida;
    Carta carta_jogada;
    do
    {
        system("pause, cls");
        printf("----------Pilha de descarte Agora----------\n\tValor: %s\n\tCor: %c\n\n\n\n", Descarte->vetor[Descarte->topo].valor, Descarte->vetor[Descarte->topo].cor);
        ImprimeLista(J->Mao);
        printf("\nQual carta deseja jogar?");
        printf("\nDigite O valor: ");
        setbuf(stdin, NULL);
        gets(carta_jogada.valor);
        printf("\nDigite a cor: ");
        setbuf(stdin, NULL);
        gets(&carta_jogada.cor);
        verificacao_valida = valida(carta_jogada, Salva_cor_valor, Turno, J);
        verificacao1 = BuscaChave(J->Mao, carta_jogada);
        if (verificacao1 == 1)
        {
            if (verificacao_valida == 1)
            {
                verificacao2 = Remover_carta_definida(J->Mao, carta_jogada, J);
                if (verificacao2 == 1)
                {
                    verificacao3 = empilhaPILHA(Descarte, carta_jogada);
                    if (verificacao3 == 1)
                    {
                        verificacao4 = ChamaCarta(carta_jogada, J, Jsecundario, Salva_cor_valor, &Somatorio);
                        if (verificacao4 == 1)
                        {
                            printf("----------Pilha de descarte Agora----------\n\tValor: %s\n\tCor: %c\n\n\n\n", Descarte->vetor[Descarte->topo].valor, Descarte->vetor[Descarte->topo].cor);
                            ImprimeLista(J->Mao);
                            fprintf(ponteiro_files, "Carta valor: %s  cor: %c - %s\n", carta_jogada.valor, carta_jogada.cor, J->Nome);
                            funcionou = 1;
                        }
                        else
                        {
                            printf("\n\n\n\nErro na hora de executar a função da carta!!!");
                        }
                    }
                    else
                    {
                        printf("\n\n\nErro em colocar a carta no monte de descarte!");
                    }
                }
                else
                {
                    printf("\n\n\nErro em retirar a carta da mao do jogador!");
                }
            }
            else
            {
                printf("\n\nEssa carta e invalida, ela possui alguma caracteristica que a impede de ser jogada agora");
            }
        }
        else
        {
            printf("\n\nTu nao tem essa carta que digitou!");
        }

    } while (funcionou != 1);
    UNO(J, Jsecundario, Mont, Descarte, Salva_cor_valor);
    system("pause, cls");
}

void CartaMais_Jogo(Jogador *J, Jogador *Jsecundario, Carta Salva_cor_valor, int Turno, Pilha *Mont, Pilha *Descarte, int Somatorio)
{
    int funcionou = 0, verificacao_valida, verificacao_AcaoCarta;
    Carta carta_jogada;
    char Resposta;
    do
    {
        printf("\nTu levou uma carta que adiciona cartas a sua mao, por isso suas acoes sao limitadas!");
        verificacao_valida = Procura_carta_valida(Salva_cor_valor, Turno, J);
        if (verificacao_valida == 0) // O jogador não tem nada pra jogar
        {
            ImprimeLista(J->Mao);
            CartasMais(Mont, Descarte, J, Salva_cor_valor, Somatorio);
            ImprimeLista(J->Mao);
            UNO(J, Jsecundario, Mont, Descarte, Salva_cor_valor);
            funcionou = 1;
            // Registrar arquivo, quem comprou eo numero
        }
        else // O jogador tem carta pra jogar
        {
            ImprimeLista(J->Mao);
            printf("\nDeseja jogar seu %s?\nS para Sim e N para Nao", Descarte->vetor[Descarte->topo].valor);
            setbuf(stdin, NULL);
            scanf("%c", &Resposta);
            if (Resposta == 'S')
            {
                printf("\nDeseja jogar qual carta?\nDigite o valor:");
                setbuf(stdin, NULL);
                gets(carta_jogada.valor);
                printf("\nDigite a cor:");
                setbuf(stdin, NULL);
                gets(&carta_jogada.cor);
                verificacao_valida = valida(carta_jogada, Salva_cor_valor, Turno, J);
                if (verificacao_valida == 1)
                {
                    verificacao_AcaoCarta = ChamaCarta(carta_jogada, J, Jsecundario, Salva_cor_valor, &Somatorio);
                    if (verificacao_AcaoCarta == 1)
                    {
                        funcionou = 1;
                        // Registrar carta
                        UNO(J, Jsecundario, Mont, Descarte, Salva_cor_valor);
                    }
                    else
                    {
                        printf("\nErro na chamada da funcao da carta");
                    }
                }
                else
                    printf("\nCarta invalida!");
            }
            else if (Resposta == 'N')
            {
                CartasMais(Mont, Descarte, J, Salva_cor_valor, Somatorio);
                UNO(J, Jsecundario, Mont, Descarte, Salva_cor_valor);
                funcionou = 1;
            }
            else
                printf("\nResposta invalida");
        }
        system("pause, cls");
    } while (funcionou != 0);
    return;
}

int Procura_carta_valida(Carta Salva_cor_valor, int Turno, Jogador *J)
{
    int verificacao1 = ContarLista(J->Mao), verificacao2;
    Elemento *ultimo = J->Mao->inicio->proximo, *penultimo = J->Mao->inicio;
    if (verificacao1 == 0)
    {
        return 0;
    }

    while (ultimo->proximo != NULL)
    {
        verificacao2 = valida(penultimo->carta, Salva_cor_valor, Turno, J);
        if (verificacao2 == 1)
        {
            return 1;
        }

        penultimo = ultimo;
        ultimo = ultimo->proximo;
    }
    free(ultimo);
    free(penultimo);
    return 0;
}

void UNO(Jogador *J1, Jogador *Jsecundario, Pilha *Mont, Pilha *Descarte, Carta Salva_cor_valor)
{
    char Uno;
    int funcionou = 1;

    do
    {
        printf("\nDeseja falar uno?\nS para Sim e N para nao!\n");
        setbuf(stdin, NULL);
        scanf("%c", &Uno);
        if (Uno == 'S')
        {
            J1->uno = 1;
            funcionou = 0;
        }
        else if (Uno == 'N')
        {
            J1->uno = 0;
            funcionou = 0;
        }
        else
        {
            printf("\nResposta invalida!");
            system("pause, cls");
        }

    } while (funcionou != 0);
    do
    {
        printf("\nDeseja questionar o uno do amiguinho?\nApenas sara util se ele tiver apenas uma carta e nao tiver falado UNO\nS para Sim e N para nao!\n");
        setbuf(stdin, NULL);
        scanf("%c", &Uno);
        if (Uno == 'S')
        {
            if ((Jsecundario->uno == 0) && (Jsecundario->NCartasMao == 1))
            {
                int valor = 2;
                CartasMais(Mont, Descarte, Jsecundario, Salva_cor_valor, valor);
                printf("\nVc estava certo, por isso %s levou uma penalidade de +2 cartas.", Jsecundario->Nome);
                funcionou++;
            }
            else
            {
                printf("\nInfelizmente vc estava equivocado com relacao ao seu openente!");
                funcionou++;
            }
        }
        else if (Uno == 'N')
        {
            funcionou++;
        }
        else
        {
        }

    } while (funcionou != 1);
}
