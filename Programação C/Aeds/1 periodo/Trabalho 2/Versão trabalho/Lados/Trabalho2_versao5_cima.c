#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct pessoa
{
    char nome[30], sexo[10], cor_peca;
    int idade, pontuacao;
} Jogador;

void impressao_tabuleiro(char tabuleiro[][8], int x);
void cima(char cor, char tabuleiro[][8], int x);

int main()
{
    Jogador *jogador;
    char tabuleiro[8][8];
    int i, j, auxiliar, linha, coluna, jogadas_possiveis = 0, contador = 0;
    //alocação de memória dos jogadores, eu fiz por meio de alocação de memória pq era obrigatório usar em algum lugar
    jogador = (Jogador *)malloc(2 * sizeof(Jogador));

    //este loop coleta as informações dos jogadores
    for (i = 0; i < 2; i++)
    {
        printf("Digite seu nome: ");
        setbuf(stdin, NULL);
        gets(jogador[i].nome);
        printf("Digite sua idade: ");
        scanf("%d", &jogador[i].idade);
        printf("Digite seu sexo: ");
        setbuf(stdin, NULL);
        gets(jogador[i].sexo);
        system("pause");
        system("cls");
    }

    //distribuição da cor que cada jogador irá usar no jogo, por meio de um rand e if/else if
    auxiliar = rand() % 2;
    if (auxiliar == 0)
    {
        jogador[0].cor_peca = 'P';
        jogador[1].cor_peca = 'B';
        printf("O jogador %s e preto e o jogador %s e branco\n", jogador[0].nome, jogador[1].nome);
    }
    else if (auxiliar == 1)
    {
        jogador[0].cor_peca = 'B';
        jogador[1].cor_peca = 'P';
        printf("O jogador %s preto e o jogador %s e branco\n", jogador[1].nome, jogador[0].nome);
    }
    system("pause");
    system("cls");
    //até aqui as informações dos jogadores

    //esse loop inicializa o tabuleiro com o caracter espaço
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
    //isso inicia a posição das peças inicias no centro do tabuleiro
    tabuleiro[3][3] = 'B';
    tabuleiro[4][4] = 'B';
    tabuleiro[4][3] = 'P';
    tabuleiro[3][4] = 'P';

    printf("Boa sorte no jogo %s e %s.\n", jogador[0].nome, jogador[1].nome);
    system("pause");
    system("cls");
    //até aqui tá dando certo

    impressao_tabuleiro(tabuleiro, 8);
    direita(jogador[0].cor_peca, tabuleiro, 8);
    system("pause");
    system("cls");

    do
    {

        if (contador % 2 == 0)
        {
            //quando par é a vez do preto
            printf("Vez do preto.\n");
            printf("Digite a linha: ");
            scanf("%d", &linha);
            printf("Digite a coluna: ");
            scanf("%d", &coluna);
        }
        else
        {
            //quando impar é a vez do branco
            printf("Vez do Branco.\n");
            printf("Digite a linha: ");
            scanf("%d", &linha);
            printf("Digite a coluna: ");
            scanf("%d", &coluna);
        }
        contador++;
    } while (jogadas_possiveis != 0);

    contador = 0;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (tabuleiro[i][j] == 'P')
            {
                if (jogador[0].cor_peca == 'P')
                {
                    jogador[0].pontuacao++;
                }
                else if (jogador[1].cor_peca == 'P')
                {
                    jogador[1].pontuacao++;
                }
            }
            else if (tabuleiro[i][j] == 'B')
            {
                if (jogador[0].cor_peca == 'B')
                {
                    jogador[0].pontuacao++;
                }
                else if (jogador[1].cor_peca == 'B')
                {
                    jogador[1].pontuacao++;
                }
            }
        }
    }

    if (jogador[0].pontuacao > jogador[1].pontuacao)
    {
        printf("Ganhador:\n");
        printf("Nome: %s\nSexo: %s\nIdade: %d\nCor da peca: %c\nPontuacao: %d\n", jogador[0].nome, jogador[0].sexo, jogador[0].idade, jogador[0].cor_peca, jogador[0].pontuacao);
        printf("Perdedor:\n");
        printf("Nome: %s\nSexo: %s\nIdade: %d\nCor da peca: %c\nPontuacao: %d\n", jogador[1].nome, jogador[1].sexo, jogador[1].idade, jogador[1].cor_peca, jogador[1].pontuacao);
    }
    else if (jogador[0].pontuacao < jogador[1].pontuacao)
    {
        printf("Ganhador:\n");
        printf("Nome: %s\nSexo: %s\nIdade: %d\nCor da peca: %c\nPontuacao: %d\n", jogador[1].nome, jogador[1].sexo, jogador[1].idade, jogador[1].cor_peca, jogador[1].pontuacao);
        printf("Perdedor:\n");
        printf("Nome: %s\nSexo: %s\nIdade: %d\nCor da peca: %c\nPontuacao: %d\n", jogador[0].nome, jogador[0].sexo, jogador[0].idade, jogador[0].cor_peca, jogador[0].pontuacao);
    }
    else
    {
        printf("Empate");
        printf("Nome: %s\nSexo: %s\nIdade: %d\nCor da peca: %c\nPontuacao: %d\n", jogador[0].nome, jogador[0].sexo, jogador[0].idade, jogador[0].cor_peca, jogador[0].pontuacao);
        printf("Nome: %s\nSexo: %s\nIdade: %d\nCor da peca: %c\nPontuacao: %d\n", jogador[1].nome, jogador[1].sexo, jogador[1].idade, jogador[1].cor_peca, jogador[1].pontuacao);
    }

    free(jogador);
    return 0;
}

void impressao_tabuleiro(char tabuleiro[][8], int x)
{
    printf("      0     1     2     3     4     5     6     7   \n    ----- ----- ----- ----- ----- ----- ----- -----\n   |     |     |     |     |     |     |     |     |\n 0 |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n   |     |     |     |     |     |     |     |     |\n   |-----|-----|-----|-----|-----|-----|-----|-----|\n   |     |     |     |     |     |     |     |     |\n 1 |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n   |     |     |     |     |     |     |     |     |\n   |-----|-----|-----|-----|-----|-----|-----|-----|\n   |     |     |     |     |     |     |     |     |\n 2 |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n   |     |     |     |     |     |     |     |     |\n   |-----|-----|-----|-----|-----|-----|-----|-----|\n   |     |     |     |     |     |     |     |     |\n 3 |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n   |     |     |     |     |     |     |     |     |\n   |-----|-----|-----|-----|-----|-----|-----|-----|\n   |     |     |     |     |     |     |     |     |\n 4 |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n   |     |     |     |     |     |     |     |     |\n   |-----|-----|-----|-----|-----|-----|-----|-----|\n   |     |     |     |     |     |     |     |     |\n 5 |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n   |     |     |     |     |     |     |     |     |\n   |-----|-----|-----|-----|-----|-----|-----|-----|\n   |     |     |     |     |     |     |     |     |\n 6 |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n   |     |     |     |     |     |     |     |     |\n   |-----|-----|-----|-----|-----|-----|-----|-----|\n   |     |     |     |     |     |     |     |     |\n 7 |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n   |     |     |     |     |     |     |     |     |\n    ----- ----- ----- ----- ----- ----- ----- -----\n",
           tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3], tabuleiro[0][4], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7],
           tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2], tabuleiro[1][3], tabuleiro[1][4], tabuleiro[1][5], tabuleiro[1][6], tabuleiro[1][7],
           tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2], tabuleiro[2][3], tabuleiro[2][4], tabuleiro[2][5], tabuleiro[2][6], tabuleiro[2][7],
           tabuleiro[3][0], tabuleiro[3][1], tabuleiro[3][2], tabuleiro[3][3], tabuleiro[3][4], tabuleiro[3][5], tabuleiro[3][6], tabuleiro[3][7],
           tabuleiro[4][0], tabuleiro[4][1], tabuleiro[4][2], tabuleiro[4][3], tabuleiro[4][4], tabuleiro[4][5], tabuleiro[4][6], tabuleiro[4][7],
           tabuleiro[5][0], tabuleiro[5][1], tabuleiro[5][2], tabuleiro[5][3], tabuleiro[5][4], tabuleiro[5][5], tabuleiro[5][6], tabuleiro[5][7],
           tabuleiro[6][0], tabuleiro[6][1], tabuleiro[6][2], tabuleiro[6][3], tabuleiro[6][4], tabuleiro[6][5], tabuleiro[6][6], tabuleiro[6][7],
           tabuleiro[7][0], tabuleiro[7][1], tabuleiro[7][2], tabuleiro[7][3], tabuleiro[7][4], tabuleiro[7][5], tabuleiro[7][6], tabuleiro[7][7]);
}

void cima(char cor, char tabuleiro[][8], int x)
{
    int i, j, k;
    if (cor == 'P')
    {
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                k = i;
                if (tabuleiro[i][j] == 'P')
                {
                    while ((tabuleiro[k][j] != 'X') || (tabuleiro[k][j] != 'P') || (k >= 8) || (k < 0))
                    {
                        k--;
                        if (tabuleiro[i][k] == ' ')
                        {
                            tabuleiro[i][k] = 'X';
                        }
                    }
                }
            }
        }
        return;
    }
    else if (cor == 'B')
    {
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                k = i;
                if (tabuleiro[i][j] == 'B')
                {
                    while ((tabuleiro[k][j] != 'X') || (tabuleiro[k][j] != 'B') || (k < 8) || (k >= 0))
                    {
                        k--;
                        if (tabuleiro[i][k] == ' ')
                        {
                            tabuleiro[i][k] = 'X';
                        }
                    }
                }
            }
        }
        return;
    }
}