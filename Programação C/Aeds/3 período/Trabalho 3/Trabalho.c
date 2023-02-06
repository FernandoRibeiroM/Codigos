#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#define b 0
#define c 1
#define p 2

// Menu com as funcionalidades do código, utilizei como função para diminuir o main
void Menu(int **Grafo, int vertice, int aresta, int **Matrizincidencia);
void Imrpime(int **Grafo, int vertice);
void Imrpimeincidencia(int **Matrizincidencia, int vertice, int aresta);
void caso1(int **Matrizincidencia, int vertice, int aresta);
void caso2(int **Grafo, int vertice);
void caso3(int vertice, int aresta, int **Matrizincidencia);
void caso4(int vertice, int aresta, int **Matrizincidencia);
void caso5(int **Grafo, int vertice);
void caso6(int **Grafo, int vertice);
void caso7(int vertice, int aresta, int **Matrizincidencia);
void caso8(int **Grafo, int vertice, int aresta, int **Matrizincidencia);
void caso9(int **Grafo, int vertice, int aresta);
void caso10(int **Grafo, int vertice, int aresta);
void caso11(int **Grafo, int vertices);
int caso11_auxiliar(int **Grafo, int ini, int *visitado, int cont, int vertice, int cont_salvo);

int main()
{
    FILE *ponteiro_file;
    int Nvertice, Narestas, vertice1, vertice2, peso, i, j = 0, **matrizIncidencia;
    int **grafo;
    // abrindo arquivo
    ponteiro_file = fopen("dados_grafos.txt", "r");
    if (ponteiro_file == NULL)
    { // Se der erro no arquivo
        printf("\nErro na abertura do arquivo");
        exit(1);
    }
    else
    { // leitura arquivo
        // Recebo os dois primeiros valores, N de vertices e de arestas
        fscanf(ponteiro_file, "%d%d", &Nvertice, &Narestas);
        // Alocação dinâmica de uma matriz e da matriz de incidencia

        grafo = (int **)calloc(Nvertice, sizeof(int *));
        matrizIncidencia = (int **)calloc(Nvertice, sizeof(int *));
        for (i = 0; i < Nvertice; i++)
        {
            grafo[i] = (int *)calloc(Nvertice, sizeof(int));
        }
        for (i = 0; i < Narestas; i++)
        {
            matrizIncidencia[i] = (int *)calloc(Narestas, sizeof(int *));
        }
        // Pego os outros valores do arquivo e já os coloco na matriz, peso e vertice(se o vertice existe é dados o valor 1), além da matriiz matriz de incidencia, que contém arestas e vértices, onde sai é negativo e onde chega é positivo
        for (i = 0; i < Narestas; i++)
        {
            fscanf(ponteiro_file, "%d%d%d", &vertice1, &vertice2, &peso);
            grafo[vertice1 - 1][vertice2 - 1] = 1;

            for (j = 0; j < Narestas; j++)
            {
                matrizIncidencia[vertice1 - 1][i] = peso;
                matrizIncidencia[vertice2 - 1][i] = -peso;
            }
        }
        fclose(ponteiro_file);
    }
    // O Menu é iniciado
    Menu(grafo, Nvertice, Narestas, matrizIncidencia);
    free(matrizIncidencia);
    free(grafo);
    //  By:Fernando Ribeiro Martins
    return 0;
}

void Menu(int **Grafo, int vertice, int aresta, int **Matrizincidencia)
{
    int resposta = 0;
    do
    {
        // MENU
        printf("\n\t\t\tMenu\n\t1- Imprimir todas as arestas adjacentes a uma aresta a\n\t2- Imprimir todos os vertice adjacentes a um vertice v\n\t3- Imprimir todas as arestas incidentes a um vertice v\n\t4- Imprimir todos os vertice incidentes a uma aresta a\n\t5- Imprimir o grau do vertice v\n\t6- Determinar se dois vertices sao adjacentes.\n\t7- Substituir o peso de uma aresta a\n\t8- Trocar dois vertice.\n\t9- Implementar o Algoritmo de Dijkstra.\n\t10- Busca em grafos (Busca em Largura).\n\t11- Busca em grafos (Busca em Profundidade).\n\t0- Sair do programa\n\n\t");
        scanf("%d", &resposta);
        printf("\n\t");
        switch (resposta)
        {
        case 1: // Imprimir todas as arestas adjacentes a uma aresta a,informado pelo usuário
            caso1(Grafo, vertice, aresta);
            break;
        case 2: // Imprimir todos os vertice adjacentes a um vertice v,informado pelo usuário
            caso2(Grafo, vertice);
            break;
        case 3: // Imprimir todas as arestas incidentes a um vertice v, informado pelo usuário.
            caso3(vertice, aresta, Matrizincidencia);
            break;
        case 4: // Imprimir todos os vertice incidentes a uma aresta a, informada pelo usuário.
            caso4(vertice, aresta, Matrizincidencia);
            break;
        case 5: // Imprimir o grau do vertice v, informado pelo usuário.
            caso5(Grafo, vertice);
            break;
        case 6: // Determinar se dois vértices são adjacentes.
            caso6(Grafo, vertice);
            break;
        case 7: // Substituir o peso de uma aresta a, informada pelo usuário.
            caso7(vertice, aresta, Matrizincidencia);
            break;
        case 8: // Trocar dois vertice.O usuário deverá informar qual são os dois vertice a serem trocados.
            caso8(Grafo, vertice, aresta, Matrizincidencia);
            break;
        case 9: // Implementar o Algoritmo de Dijkstra. Este algoritmo, a partir de um vertice origem o e um vertice destino d, encontra o caminho mínimo entre eles. Deverá ser impresso a rota utilizada, ou seja, os vertice utilizados no caminho mínimo entre o e d, com os respectivos pesos de cada aresta do caminho.
            caso9(Grafo, vertice, aresta);
            break;
        case 10: // Busca em grafos (Busca em Largura): O vertice inicial será dado pelo usuário e a respectiva árvore de busca deve ser gerada assim como o nível de cada vertice na árvore (nível da raiz é zero), além de apresentar os predecessores. Use a ordem numérica crescente para escolher entre os vertice adjacentes.
            caso10(Grafo, vertice, aresta);
            break;
        case 11: // Busca em grafos (Busca em Profundidade): O vertice inicial será dado pelo usuário e a respectiva árvore de busca deve ser gerada assim como a distância de descoberta e de finalização de cada vertice na árvore (nível da raiz é zero). Use a ordem numérica crescente para escolher entre os vertice adjacentes.
            caso11(Grafo, vertice);
            break;
        case 12: // usado pra testes, imprime o grafo
            Imrpime(Grafo, vertice);
            break;
        case 13: // Usado pra teste, imprime a matriz de incidencia
            Imrpimeincidencia(Matrizincidencia, vertice, aresta);
            break;
        case 0: // Sair
            printf("Tchau, obrigado por usar!");
            resposta = 0;
            break;
        default: // Valor inválido
            printf("O valor digitado nao esta incluido no Menu");
            break;
        }
        printf("\n\n\n\t");
        system("pause & cls");
    } while (resposta != 0);
}

void Imrpime(int **Grafo, int vertice)
{
    int i, j = 0;
    printf("\n");
    printf("\t   1 2 3 4 5\n");
    for (i = 0; i < vertice; i++)
    {
        printf("\t%d- ", i + 1);
        for (j = 0; j < vertice; j++)
        {
            printf("%d ", Grafo[i][j]);
        }
        printf("\n");
    }
}

void Imrpimeincidencia(int **Matrizincidencia, int vertice, int aresta)
{
    int i, j;
    printf("\n");
    printf("\t   1 2 3 4 5 6\n");
    for (i = 0; i < vertice; i++)
    {
        printf("\tV%d- ", i + 1);
        for (j = 0; j < aresta; j++)
        {
            printf("%d ", Matrizincidencia[i][j]);
        }
        printf("\n");
    }
}

void caso1(int **Matrizincidencia, int vertice, int aresta)
{
    printf("\n\n\t Fiquei em duvida quanto a implementacao");
    int j, resposta;
    Imrpimeincidencia(Matrizincidencia, vertice, aresta);
    printf("\n\tDigite o vertice que deseja saber: ");
    scanf("%d", &resposta);
    resposta--;
    printf("\n\t");
    for (j = 0; j < aresta; j++)
    {
        if (Matrizincidencia[resposta][j] > 0)
        {
            printf("%d ", j + 1);
        }
    }
}

void caso2(int **Grafo, int vertice)
{
    int i, resposta;
    Imrpime(Grafo, vertice);
    printf("\n\tDigite o vertice que deseja saber: ");
    scanf("%d", &resposta);
    for (i = 0; i < vertice; i++)
    {
        // verifica se dois vertices são adjacentes
        if (Grafo[i][resposta - 1] > 0)
        {
            printf("\n\tO vertice %d e adjacente ao %d.", i + 1, resposta);
        }
    }
}

void caso3(int vertice, int aresta, int **Matrizincidencia)
{
    int i, resposta;
    Imrpimeincidencia(Matrizincidencia, vertice, aresta);
    printf("\n\tDigite o vertice que deseja saber: ");
    scanf("%d", &resposta);
    printf("\n\t Vertice %d: ", resposta);
    for (i = 0; i < aresta; i++)
    {
        // verifica as arestas incidentes em um vértice9usando matriz de incidencia
        if (Matrizincidencia[resposta - 1][i] > 0)
        {
            printf("a%d ", i + 1);
        }
    }
}

void caso4(int vertice, int aresta, int **Matrizincidencia)
{
    int i, resposta;
    Imrpimeincidencia(Matrizincidencia, vertice, aresta);
    printf("\n\tDigite a aresta que deseja saber: ");
    scanf("%d", &resposta);
    printf("\n\t Aresta %d: ", resposta);
    resposta--;
    // usando a matriz de incidencia, ali eu rodo todoas as opções da aresta e verifico se esta positivo
    for (i = 0; i < aresta; i++)
    {
        if (Matrizincidencia[i][resposta] >= 1)
        {
            printf("v%d ", i + 1);
        }
        else if (Matrizincidencia[i][resposta] <= -1)
        {
            printf("v%d ", i + 1);
        }
    }
}

void caso5(int **Grafo, int vertice)
{
    int resposta, i, contador = 0;
    Imrpime(Grafo, vertice);
    printf("\n\tDigite o vertice que deseja saber: ");
    scanf("%d", &resposta);
    resposta--;
    for (i = 0; i < vertice; i++)
    {
        if (Grafo[resposta][i] > 0)
        {
            contador++;
        }
    }
    printf("\t\tO grau desse vertice e: %d", contador);
}

void caso6(int **Grafo, int vertice)
{
    int vertice1, vertice2;
    Imrpime(Grafo, vertice);
    printf("\n\tDigite o vertice 1: ");
    scanf("%d", &vertice1);
    printf("\n\tDigite o vertice 2: ");
    scanf("%d", &vertice2);
    vertice1--;
    vertice2--;
    // determina se dois vértices são adjacentes
    if (Grafo[vertice1][vertice2] > 0 || Grafo[vertice2][vertice1] > 0)
        printf("\n\tOs vertices sao adjacentes.\n");
    else
        printf("\n\tOs vertices nao sao adjacentes\n");
}

void caso7(int vertice, int aresta, int **Matrizincidencia)
{
    int RAresta, peso, i, j;
    Imrpimeincidencia(Matrizincidencia, vertice, aresta);
    printf("\n\tDigite a aresta: ");
    scanf("%d", &RAresta);
    RAresta--;
    printf("\n\tDigite o peso: ");
    scanf("%d", &peso);
    // pega o valor do peso e coloca na aresta
    for (i = 0; i < vertice; i++)
    {
        if (peso >= 0)
        {
            if (Matrizincidencia[i][RAresta] > 0)
            {
                Matrizincidencia[i][RAresta] = peso;
            }
            else if (Matrizincidencia[i][RAresta] < 0)
            {
                Matrizincidencia[i][RAresta] = peso * -1;
            }
        }
        else
        {
            if (Matrizincidencia[i][RAresta] < 0)
            {
                Matrizincidencia[i][RAresta] = peso;
            }
            else if (Matrizincidencia[i][RAresta] > 0)
            {
                Matrizincidencia[i][RAresta] = peso * -1;
            }
        }
    }
    printf("    a1 a2 a3 a4 a5 a6 ");
    printf("\n ");
    for (i = 0; i < vertice; i++)
    {
        printf("\tV%d- ", i + 1);
        for (j = 0; j < aresta; j++)
        {
            printf("%d  ", Matrizincidencia[i][j]);
        }
        printf("\n");
    }
}

void caso8(int **Grafo, int vertice, int aresta, int **Matrizincidencia)
{
    int auxiliar[vertice];
    int vertice1, vertice2, i, j, auxiliarint = 0;
    Imrpime(Grafo, vertice);
    Imrpimeincidencia(Matrizincidencia, vertice, aresta);
    printf("\n\tDigite o vertice 1: ");
    scanf("%d", &vertice1);
    printf("\n\tDigite o vertice 2: ");
    scanf("%d", &vertice2);
    vertice1--;
    vertice2--;
    // realizo a troca vertices nas duas matrizes
    for (i = 0; i < vertice; i++)
    {
        auxiliar[i] = Grafo[vertice1][i];
        Grafo[vertice1][i] = Grafo[vertice2][i];
        Grafo[vertice2][i] = auxiliar[i];
    }
    for (i = 0; i < vertice; i++)
    {
        auxiliarint = Matrizincidencia[vertice1][i];
        Matrizincidencia[vertice1][i] = Matrizincidencia[vertice2][i];
        Matrizincidencia[vertice2][i] = auxiliarint;
    }
    printf("\n\tGrafo Reformulado:\n");
    Imrpime(Grafo, vertice);
    Imrpimeincidencia(Matrizincidencia, vertice, aresta);
}

void caso9(int **Grafo, int vertice, int aresta)
{
    printf("\n\tNao tenho essa parte");
}

void caso10(int **Grafo, int vertice, int aresta)
{
    printf("\n\tErro");
    /*
    int cont = 0, *visita, ini, i;
    Fila *fila;
    visita = (int *)calloc(vertice, sizeof(int));
    printf("\n\tDigite o vertice: ");
    scanf("%d", &ini);
    ini += -1;
    fila = criaFila();
    inserir(fila, ini);
    caso10_aux(Grafo, vertice, aresta, cont, visita, fila);
    free(fila);
    free(visita);
}

int caso10_aux(int **Grafo, int vertice, int aresta, int cont, int *visita, Fila *fila)
{

    int i, aux, salvaCont1 = cont, salvaCont2 = cont + 1;
    retirar(fila, &aux);
    printf("- %d \n", aux)/
    system("pause");
    visita[aux] = c;
    printf("\n\n\n----%d------\n", aux);

    for (i = 0; i < vertice; i++)
    {
        if ((visita[i] == b) && (Grafo[aux][i] > 0))
        {
            inserir(fila, Grafo[aux][i]);
            printf("OIIIIIIIIIIIIIII\n");
            salvaCont2 = caso10_aux(Grafo, vertice, aresta, cont + 1, visita, fila);
        }
    }
    visita[aux] = p;
    printf("\nVertice: %d - Tempo que foi pintado de cinza: %d - Tempo que fechou: %d\n", aux + 1, salvaCont1, salvaCont2);
    salvaCont2++;
    return salvaCont2;*/
}

void caso11(int **Grafo, int vertices)
{
    int cont = 0, *visita, ini, aux, *cont_salvo = cont;
    visita = (int *)calloc(vertices, sizeof(int));
    printf("\n\tDigite o vertice: ");
    scanf("%d", &ini);
    ini--;
    caso11_auxiliar(Grafo, ini, visita, cont, vertices, cont_salvo);
    free(visita);
}

int caso11_auxiliar(int **Grafo, int ini, int *visitado, int cont, int vertice, int cont_salvo)
{
    int i, salvaCont1 = cont, salvaCont2 = cont + 1;
    visitado[ini] = c;
    for (i = 0; i < vertice; i++)
    {
        if ((visitado[i] == b) && (Grafo[ini][i] != 0))
        {
            salvaCont2 = (caso11_auxiliar(Grafo, i, visitado, cont + 1, vertice, cont_salvo));
        }
    }
    visitado[ini] = p;
    printf("\nVertice: %d - Tempo que foi pintado de cinza: %d - Tempo que fechou: %d\n", ini + 1, salvaCont1, salvaCont2);
    salvaCont2++;
    return salvaCont2;
}
