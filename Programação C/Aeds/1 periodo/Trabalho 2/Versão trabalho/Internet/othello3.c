#include <stdio.h>

#include <stdlib.h>

#include <Windows.h>

#include <conio.c>

SYSTEMTIME s;

char tab[3][3];

int preenche();

void exiba();

void desenha(int cor);

void joga(int a, int b);

void inverte(int a, int b);

int checa_fim();

int main()

{

    int x, y;

    int i, j, n = 0;

    char retorno;

    GetSystemTime(&s);

    srand(s.wMilliseconds);

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            tab[j] = preenche();
        }
    }

    textcolor(WHITE + BLINK);

    printf("\a\n\n\nReversi em C");

    getchar();

    textcolor(BLUE);

    printf("\a\n\n\nPRESSIONE <ENTER> PARA JOGAR!");

    getchar();

    clrscr();

    textcolor(WHITE);

    while (checa_fim() == -1)
    { //Laço que mantém o jogo "aberto" até o fim

        n++;

    inicio:

        exiba();

        textcolor(LIGHTGREEN);

        printf("\a\n\n>>?(X,Y): ");

        scanf("%d,%d", &x, &y);

        if ((x > 3) || (y > 3))
        {

            printf("Erro!X e Y vao de 1 a 3!");

            printf("\nAperte <ENTER> para refazer sua jogada.");

            getchar();

            getchar();

            clrscr();

            goto inicio;
        }

        else
        {

            clrscr();

            joga(x, y);
        }
    }

    printf("\n\n\n\n\nPARABENS,VOCE GANHOU!\a\a"); //O fim

    printf("\nFORAM NECESSARIAS %d JOGADAS!", n);

    getchar();

    getchar();

    return 0;
}

int preenche()

{

    if (rand() % 2 == 0)
    {

        return (1);
    }

    else
    {

        return (0);
    }
}

void desenha(int cor)

{

    if (cor == 1)
    {

        textcolor(WHITE);

        printf(" Û ");
    }

    else
    {

        textcolor(YELLOW);

        printf(" ° ");
    }
}

void exiba()

{

    int i, j;

    textcolor(LIGHTGREEN);

    printf(" | 1| 2| 3|\n");

    for (i = 0; i < 3; i++)
    {

        textcolor(LIGHTGREEN);

        printf("| %d |", i + 1);

        for (j = 0; j < 3; j++)
        {

            desenha(tab[j]);
        }

        printf("\n\n");
    }
}

void joga(int a, int b)

{

    if (a == 1 && b == 1)
    {

        inverte(0, 0);

        inverte(0, 1);

        inverte(1, 0);
    }

    if (a == 1 && b == 2)
    {

        inverte(0, 0);

        inverte(0, 1);

        inverte(0, 2);
    }

    if (a == 1 && b == 3)
    {

        inverte(0, 2);

        inverte(0, 1);

        inverte(1, 2);
    }

    if (a == 2 && b == 1)
    {

        inverte(1, 0);

        inverte(0, 0);

        inverte(2, 0);
    }

    if (a == 2 && b == 2)
    {

        inverte(0, 1);

        inverte(1, 0);

        inverte(1, 1);

        inverte(1, 2);

        inverte(2, 1);
    }

    if (a == 2 && b == 3)
    {

        inverte(0, 2);

        inverte(1, 2);

        inverte(2, 2);
    }

    if (a == 3 && b == 1)
    {

        inverte(2, 0);

        inverte(1, 0);

        inverte(2, 1);
    }

    if (a == 3 && b == 2)
    {

        inverte(2, 1);

        inverte(2, 0);

        inverte(2, 2);
    }

    if (a == 3 && b == 3)
    {

        inverte(2, 2);

        inverte(1, 2);

        inverte(2, 1);
    }
}

void inverte(int a, int b)

{

    if (tab[a] == 1)
    {

        tab[a] = 0;
    }

    else
    {

        tab[a] = 1;
    }
}

int checa_fim()

{

    int r = 0, i, j;

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            r = r + tab[j];
        }
    }

    if ((r == 0) || (r == 9))
    {

        return (1);
    }

    else
    {

        return (-1);
    }
}