/*
• Construa um TAD para trabalhar com pontos cartesianos:

• Crie o TAD (struct, além das operações que vão trabalhar com o TAD);

• Operações a serem criadas:

• Inicialização passando parâmetros;
• Inicialização fazendo a leitura dentro da função;
• Analisar qual o quadrante um ponto se encontra;
• Uma função que verifique se um determinado ponto passado por parâmetro está em
um determinado quadrante, também passado por parâmetro;
• Alterar os valores de um determinado ponto;
• Retornar qual a distância entre dois pontos;
• Retornar o maior valor de coordenada de um ponto;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto
{
    float x, y;
} ponto;

ponto inicializacao_por_parametro(int X, int Y);

ponto coleta_da_posicao();

int analise_do_quadrante(ponto A);

int verificacao_quadrante(ponto A, int quadrante);

ponto alterar_valor_ponto(int tqual_ponto_alterar, ponto A);

float distancia(ponto a, ponto b);

float maior_valor_de_coordenada(ponto A);

int main()
{
    ponto A, B;
    int quadranteA, quadranteB, tverificacao_quadrante, qual_ponto_alterar = 0, ponto_usado = 0, possivel_quadrante = 0;
    float cordenada_maior = -9;

    A = coleta_da_posicao();
    system("pause");
    system("cls");
    B = coleta_da_posicao();
    system("pause");
    system("cls");

    quadranteA = analise_do_quadrante(A);
    switch (quadranteA)
    {
    case 1:
        printf("O ponto 1 esta no quadrante: %d\n", quadranteA);
        break;
    case 3:
        printf("O ponto 1 esta no quadrante: %d\n", quadranteA);
        break;
    case 4:
        printf("O ponto 1 esta no quadrante: %d\n", quadranteA);
        break;
    case 5:
        printf("O ponto 1 se encontra na intercecao de dois quadrantes\n");
        break;
    }
    system("pause");
    system("cls");

    quadranteB = analise_do_quadrante(B);
    switch (quadranteB)
    {
    case 1:
        printf("O ponto 2 esta no quadrante: %d\n", quadranteB);
        break;
    case 2:
        printf("O ponto 2 esta no quadrante: %d\n", quadranteB);
        break;
    case 3:
        printf("O ponto 2 esta no quadrante: %d\n", quadranteB);
        break;
    case 4:
        printf("O ponto 2 esta no quadrante: %d\n", quadranteB);
        break;
    case 5:
        printf("O ponto 2 se encontra na intercecao de dois quadrantes");
        break;
    }
    system("pause");
    system("cls");

    do
    {
        printf("Deseja verificar qual a maior cordenada do ponto 1 ou 2: ");
        scanf("%d", &ponto_usado);
        printf("\n");
        system("pause");
        system("cls");
    } while (!((ponto_usado == 1) || (ponto_usado == 2)));

    do
    {
        printf("Em qual quadrante vc acha q o ponto esta?\n ");
        scanf("%d", &possivel_quadrante);
        printf("\n");
        system("pause");
        system("cls");
    } while (!((possivel_quadrante == 1) || (possivel_quadrante == 2) || (possivel_quadrante == 3) || (possivel_quadrante == 4)));

    tverificacao_quadrante = verificacao_quadrante(A, possivel_quadrante);

    if (tverificacao_quadrante == 1)
    {
        printf("Vc acertou o quadrante.\n");
    }
    else
    {
        printf("Vc errou o quadrante.\n");
    }

    system("pause");
    system("cls");

    do
    {
        printf("Deseja alterar o ponto 1 ou 2: ");
        scanf("%d", &qual_ponto_alterar);
        system("pause");
        system("cls");
    } while (!((qual_ponto_alterar == 1) || (qual_ponto_alterar == 2)));

    switch (qual_ponto_alterar)
    {
    case 1:
        A = alterar_valor_ponto(qual_ponto_alterar, A);
        break;
    case 2:
        B = alterar_valor_ponto(qual_ponto_alterar, B);
        break;
    }
    system("pause");
    system("cls");

    printf("A distancia entre eles e: %0.2f\n", distancia(A, B));
    system("pause");
    system("cls");

    do
    {
        printf("Deseja verificar qual a maior cordenada do ponto 1 ou 2: ");
        scanf("%d", &ponto_usado);
        printf("\n");
        system("pause");
        system("cls");
    } while (!((ponto_usado == 1) || (ponto_usado == 2)));

    switch (ponto_usado)
    {
    case 1:
        cordenada_maior = maior_valor_de_coordenada(A);
        if (cordenada_maior == 0)
        {
            printf("Ambos os pontos estao no mesmo lugar\n");
        }
        else
        {
            printf("A maior cordenada do primeiro ponto e: %f\n", cordenada_maior);
        }
        break;
    case 2:
        cordenada_maior = maior_valor_de_coordenada(B);
        if (cordenada_maior == 0)
        {
            printf("O valor de X e Y e igual\n");
        }
        else
        {
            printf("A maior cordenada do segundo ponto e: %f\n", cordenada_maior);
        }
        break;
    }

    system("pause");
    system("cls");

    printf("fim\n\n");
    return 0;
}
ponto inicializacao_por_parametro(int X, int Y)
{
    ponto A;
    A.x = X;
    A.y = Y;
    return A;
}

ponto coleta_da_posicao()
{
    ponto A;
    printf("Digite a posicao do ponto no eixo X: ");
    scanf("%f", &A.x);
    printf("Digite a posicao do ponto no eixo Y: ");
    scanf("%f", &A.y);
    return A;
}

int analise_do_quadrante(ponto A)
{
    if ((A.x > 0) && (A.y > 0))
    {
        return 1;
    }
    else if ((A.x < 0) && (A.y > 0))
    {
        return 2;
    }
    else if ((A.x < 0) && (A.y < 0))
    {
        return 3;
    }
    else if ((A.x > 0) && (A.y < 0))
    {
        return 4;
    }
    else
    {
        return 5;
    }
}

int verificacao_quadrante(ponto A, int quadrante)
{
    int verificacao;
    if ((A.x > 0) && (A.y > 0))
    {
        verificacao = 1;
    }
    else if ((A.x < 0) && (A.y > 0))
    {
        verificacao = 2;
    }
    else if ((A.x < 0) && (A.y < 0))
    {
        verificacao = 3;
    }
    else if ((A.x > 0) && (A.y < 0))
    {
        verificacao = 4;
    }

    if (verificacao == quadrante)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

ponto alterar_valor_ponto(int tqual_ponto_alterar, ponto A)
{
    switch (tqual_ponto_alterar)
    {
    case 1:
        printf("Digite a posicao do ponto no eixo X: ");
        scanf("%f", &A.x);
        printf("Digite a posicao do ponto no eixo Y: ");
        scanf("%f", &A.y);
        return A;
        break;
    case 2:
        printf("Digite a posicao do ponto no eixo X: ");
        scanf("%f", &A.x);
        printf("Digite a posicao do ponto no eixo Y: ");
        scanf("%f", &A.y);
        return A;
        break;
    }
}

float distancia(ponto a, ponto b)
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

float maior_valor_de_coordenada(ponto A)
{
    if (A.x > A.y)
    {
        return A.x;
    }
    else if (A.y > A.x)
    {
        return A.y;
    }
    else
    {
        return 0;
    }
}

// Não tive muito empenho nesse código, apenas cumpri o pedido pelo ed, poderia ter deixado mais pulido e mais interativo, na próxima devo utilizar um menu para que o usuário escolha o que quer fazer