#include <stdlib.h>
#include <stdio.h>
#include <math.h>

const int ALLDIRECTIONS[8] = {-11, -10, -9, -1, 1, 9, 10, 11};
const int BOARDSIZE = 100;

const int EMPTY = 0;
const int BLACK = 1;
const int WHITE = 2;
const int OUTER = 3;

const int WIN = 2000;
const int LOSS = -2000;

long int BOARDS;

int human(int, int *);
int randomstrategy(int, int *);
int maxdiffstrategy1(int, int *);
int maxdiffstrategy3(int, int *);
int maxdiffstrategy5(int, int *);
int maxweighteddiffstrategy1(int, int *);
int maxweighteddiffstrategy3(int, int *);
int maxweighteddiffstrategy5(int, int *);

void *STRATEGIES[9][4] = {
    {"human", "human", human},
    {"random", "random", randomstrategy},
    {"diff1", "maxdiff, 1-move minmax lookahead", maxdiffstrategy1},
    {"diff3", "maxdiff, 3-move minmax lookahead", maxdiffstrategy3},
    {"diff5", "maxdiff, 5-move minmax lookahead", maxdiffstrategy5},
    {"wdiff1", "maxweigteddiff, 1-move minmax lookahead",
     maxweighteddiffstrategy1},
    {"wdiff3", "maxweigteddiff, 3-move minmax lookahead",
     maxweighteddiffstrategy3},
    {"wdiff5", "maxweigteddiff, 5-move minmax lookahead",
     maxweighteddiffstrategy5},
    {NULL, NULL, NULL}};

typedef int (*fpc)(int, int *);

char nameof(int piece)
{
    static char piecenames[5] = ".bw?";
    return (piecenames[piece]);
}

int opponent(int player)
{
    switch (player)
    {
    case 1:
        return 2;
    case 2:
        return 1;
    default:
        printf("illegal player\n");
        return 0;
    }
}

int *copyboard(int *board)
{
    int i, *newboard;
    newboard = (int *)malloc(BOARDSIZE * sizeof(int));
    for (i = 0; i < BOARDSIZE; i++)
        newboard[i] = board[i];
    return newboard;
}

int *initialboard(void)
{
    int i, *board;
    board = (int *)malloc(BOARDSIZE * sizeof(int));
    for (i = 0; i <= 9; i++)
        board[i] = OUTER;
    for (i = 10; i <= 89; i++)
    {
        if (i % 10 >= 1 && i % 10 <= 8)
            board[i] = EMPTY;
        else
            board[i] = OUTER;
    }
    for (i = 90; i <= 99; i++)
        board[i] = OUTER;
    board[44] = WHITE;
    board[45] = BLACK;
    board[54] = BLACK;
    board[55] = WHITE;
    return board;
}

int count(int player, int *board)
{
    int i, cnt;
    cnt = 0;
    for (i = 1; i <= 88; i++)
        if (board[i] == player)
            cnt++;
    return cnt;
}

void printboard(int *board)
{
    int row, col;
    printf("    1 2 3 4 5 6 7 8 [%c=%d %c=%d]\n",
           nameof(BLACK), count(BLACK, board), nameof(WHITE), count(WHITE, board));
    for (row = 1; row <= 8; row++)
    {
        printf("%d  ", 10 * row);
        for (col = 1; col <= 8; col++)
            printf("%c ", nameof(board[col + (10 * row)]));
        printf("\n");
    }
}

int validp(int move)
{
    if ((move >= 11) && (move <= 88) && (move % 10 >= 1) && (move % 10 <= 8))
        return 1;
    else
        return 0;
}

int findbracketingpiece(int square, int player, int *board, int dir)
{
    while (board[square] == opponent(player))
        square = square + dir;
    if (board[square] == player)
        return square;
    else
        return 0;
}

int wouldflip(int move, int player, int *board, int dir)
{
    int c;
    c = move + dir;
    if (board[c] == opponent(player))
        return findbracketingpiece(c + dir, player, board, dir);
    else
        return 0;
}

int legalp(int move, int player, int *board)
{
    int i;
    if (!validp(move))
        return 0;
    if (board[move] == EMPTY)
    {
        i = 0;
        while (i <= 7 && !wouldflip(move, player, board, ALLDIRECTIONS[i]))
            i++;
        if (i == 8)
            return 0;
        else
            return 1;
    }
    else
        return 0;
}

void makeflips(int move, int player, int *board, int dir)
{
    int bracketer, c;
    bracketer = wouldflip(move, player, board, dir);
    if (bracketer)
    {
        c = move + dir;
        do
        {
            board[c] = player;
            c = c + dir;
        } while (c != bracketer);
    }
}

void makemove(int move, int player, int *board)
{
    int i;
    board[move] = player;
    for (i = 0; i <= 7; i++)
        makeflips(move, player, board, ALLDIRECTIONS[i]);
}

int anylegalmove(int player, int *board)
{
    int move;
    move = 11;
    while (move <= 88 && !legalp(move, player, board))
        move++;
    if (move <= 88)
        return 1;
    else
        return 0;
}

int nexttoplay(int *board, int previousplayer, int printflag)
{
    int opp;
    opp = opponent(previousplayer);
    if (anylegalmove(opp, board))
        return opp;
    if (anylegalmove(previousplayer, board))
    {
        if (printflag)
            printf("%c has no moves and must pass.\n", nameof(opp));
        return previousplayer;
    }
    return 0;
}

int *legalmoves(int player, int *board)
{
    int move, i, *moves;
    moves = (int *)malloc(65 * sizeof(int));
    moves[0] = 0;
    i = 0;
    for (move = 11; move <= 88; move++)
        if (legalp(move, player, board))
        {
            i++;
            moves[i] = move;
        }
    moves[0] = i;
    return moves;
}

int human(int player, int *board)
{
    int move;
    printf("%c to move:", nameof(player));
    scanf("%d", &move);
    return move;
}

int randomstrategy(int player, int *board)
{
    int r, *moves;
    moves = legalmoves(player, board);
    r = moves[(rand() % moves[0]) + 1];
    free(moves);
    return (r);
}

int diffeval(int player, int *board)
{                           /* utility is measured */
    int i, ocnt, pcnt, opp; /* by the difference in */
    pcnt = 0;
    ocnt = 0; /* number of pieces */
    opp = opponent(player);
    for (i = 1; i <= 88; i++)
    {
        if (board[i] == player)
            pcnt++;
        if (board[i] == opp)
            ocnt++;
    }
    return (pcnt - ocnt);
}

int weighteddiffeval(int player, int *board)
{
    int i, ocnt, pcnt, opp;
    const int weights[100] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                              0, 120, -20, 20, 5, 5, 20, -20, 120, 0,
                              0, -20, -40, -5, -5, -5, -5, -40, -20, 0,
                              0, 20, -5, 15, 3, 3, 15, -5, 20, 0,
                              0, 5, -5, 3, 3, 3, 3, -5, 5, 0,
                              0, 5, -5, 3, 3, 3, 3, -5, 5, 0,
                              0, 20, -5, 15, 3, 3, 15, -5, 20, 0,
                              0, -20, -40, -5, -5, -5, -5, -40, -20, 0,
                              0, 120, -20, 20, 5, 5, 20, -20, 120, 0,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    pcnt = 0;
    ocnt = 0;
    opp = opponent(player);
    for (i = 1; i <= 88; i++)
    {
        if (board[i] == player)
            pcnt = pcnt + weights[i];
        if (board[i] == opp)
            ocnt = ocnt + weights[i];
    }
    return (pcnt - ocnt);
}

int minmax(int player, int *board, int ply, int (*evalfn)(int, int *))
{
    int i, max, ntm, newscore, bestmove, *moves, *newboard;
    int maxchoice(int, int *, int, int (*)(int, int *));
    int minchoice(int, int *, int, int (*)(int, int *));
    moves = legalmoves(player, board); /* get all legal moves for player */
    max = LOSS - 1;                    /* any legal move will exceed this score */
    for (i = 1; i <= moves[0]; i++)
    {
        newboard = copyboard(board);
        BOARDS = BOARDS + 1;
        makemove(moves[i], player, newboard);
        ntm = nexttoplay(newboard, player, 0);
        if (ntm == 0)
        { /* game over, so determine winner */
            newscore = diffeval(player, newboard);
            if (newscore > 0)
                newscore = WIN; /* a win for player */
            if (newscore < 0)
                newscore = LOSS; /* a win for opp */
        }
        if (ntm == player) /* opponent cannot move */
            newscore = maxchoice(player, newboard, ply - 1, evalfn);
        if (ntm == opponent(player))
            newscore = minchoice(player, newboard, ply - 1, evalfn);
        if (newscore > max)
        {
            max = newscore;
            bestmove = moves[i]; /* a better move found */
        }
        free(newboard);
    }
    free(moves);
    return (bestmove);
}

int maxchoice(int player, int *board, int ply,
              int (*evalfn)(int, int *))
{
    int i, max, ntm, newscore, *moves, *newboard;
    int minchoice(int, int *, int, int (*)(int, int *));
    if (ply == 0)
        return ((*evalfn)(player, board));
    moves = legalmoves(player, board);
    max = LOSS - 1;
    for (i = 1; i <= moves[0]; i++)
    {
        newboard = copyboard(board);
        BOARDS = BOARDS + 1;
        makemove(moves[i], player, newboard);
        ntm = nexttoplay(newboard, player, 0);
        if (ntm == 0)
        {
            newscore = diffeval(player, newboard);
            if (newscore > 0)
                newscore = WIN;
            if (newscore < 0)
                newscore = LOSS;
        }
        if (ntm == player)
            newscore = maxchoice(player, newboard, ply - 1, evalfn);
        if (ntm == opponent(player))
            newscore = minchoice(player, newboard, ply - 1, evalfn);
        if (newscore > max)
            max = newscore;
        free(newboard);
    }
    free(moves);
    return (max);
}

int minchoice(int player, int *board, int ply,
              int (*evalfn)(int, int *))
{
    int i, min, ntm, newscore, *moves, *newboard;
    if (ply == 0)
        return ((*evalfn)(player, board));
    moves = legalmoves(opponent(player), board);
    min = WIN + 1;
    for (i = 1; i <= moves[0]; i++)
    {
        newboard = copyboard(board);
        BOARDS = BOARDS + 1;
        makemove(moves[i], opponent(player), newboard);
        ntm = nexttoplay(newboard, opponent(player), 0);
        if (ntm == 0)
        {
            newscore = diffeval(player, newboard);
            if (newscore > 0)
                newscore = WIN;
            if (newscore < 0)
                newscore = LOSS;
        }
        if (ntm == player)
            newscore = maxchoice(player, newboard, ply - 1, evalfn);
        if (ntm == opponent(player))
            newscore = minchoice(player, newboard, ply - 1, evalfn);
        if (newscore < min)
            min = newscore;
        free(newboard);
    }
    free(moves);
    return (min);
}

int maxdiffstrategy1(int player, int *board)
{                                                /* 1 ply lookahead */
    return (minmax(player, board, 1, diffeval)); /* diffeval as utility fn */
}

int maxdiffstrategy3(int player, int *board)
{ /* 3 ply lookahead */
    return (minmax(player, board, 3, diffeval));
}

int maxdiffstrategy5(int player, int *board)
{ /* 5 ply lookahead */
    return (minmax(player, board, 5, diffeval));
}

int maxweighteddiffstrategy1(int player, int *board)
{
    return (minmax(player, board, 1, weighteddiffeval));
}

int maxweighteddiffstrategy3(int player, int *board)
{
    return (minmax(player, board, 3, weighteddiffeval));
}

int maxweighteddiffstrategy5(int player, int *board)
{
    return (minmax(player, board, 5, weighteddiffeval));
}

void getmove(int (*strategy)(int, int *), int player, int *board,
             int printflag)
{
    int move;
    if (printflag)
        printboard(board);
    move = (*strategy)(player, board);
    if (legalp(move, player, board))
    {
        if (printflag)
            printf("%c moves to %d\n", nameof(player), move);
        makemove(move, player, board);
    }
    else
    {
        printf("Illegal move %d\n", move);
        getmove(strategy, player, board, printflag);
    }
}

void othello(int (*blstrategy)(int, int *),
             int (*whstrategy)(int, int *), int printflag)
{
    int *board;
    int player;
    board = initialboard();
    player = BLACK;
    do
    {
        if (player == BLACK)
            getmove(blstrategy, BLACK, board, printflag);
        else
            getmove(whstrategy, WHITE, board, printflag);
        player = nexttoplay(board, player, printflag);
    } while (player != 0);
    if (printflag)
    {
        printf("The game is over. Final result:\n");
        printboard(board);
    }
}

int *randomboard(void)
{
    int player, oldplayer, i, *board;
    board = initialboard();
    player = BLACK;
    i = 1;
    do
    {
        if (player == BLACK)
            getmove(randomstrategy, BLACK, board, 0);
        else
            getmove(randomstrategy, WHITE, board, 0);
        oldplayer = player;
        player = nexttoplay(board, player, 0);
        if (oldplayer == player)
        {
            free(board);
            return (randomboard());
        }
        i++;
    } while (player != 0 && i <= 8);
    if (player == 0)
    {
        free(board);
        return (randomboard());
    }
    else
        return (board);
}

void roundrobin(void)
{
    int i, j, k, cntdiff, player, iwins, jwins, *game1board, *game2board;
    long int iboards, jboards;

    i = 1;
    while (STRATEGIES[i + 1][0] != NULL)
    { /* pit one strategy */
        j = i + 1;
        while (STRATEGIES[j][0] != NULL)
        { /* against another */
            iwins = 0;
            jwins = 0;
            iboards = 0;
            jboards = 0;
            for (k = 1; k <= 5; k++)
            {                               /* play a strategy as BLACK then as WHITE */
                game1board = randomboard(); /* do this 5 times */
                game2board = copyboard(game1board);
                player = BLACK;
                do
                {
                    if (player == BLACK)
                    {
                        BOARDS = 0;
                        getmove((fpc)STRATEGIES[i][2], BLACK, game1board, 0);
                        iboards = iboards + BOARDS;
                    }
                    else
                    {
                        BOARDS = 0;
                        getmove((fpc)STRATEGIES[j][2], WHITE, game1board, 0);
                        jboards = jboards + BOARDS;
                    }
                    player = nexttoplay(game1board, player, 0);
                } while (player != 0);

                cntdiff = diffeval(BLACK, game1board); /* determine winner */
                if (cntdiff > 0)
                    iwins++;
                if (cntdiff < 0)
                    jwins++;
                free(game1board);

                player = BLACK;
                do
                {
                    if (player == BLACK)
                    {
                        BOARDS = 0;
                        getmove((fpc)STRATEGIES[j][2], BLACK, game2board, 0);
                        jboards = jboards + BOARDS;
                    }
                    else
                    {
                        BOARDS = 0;
                        getmove((fpc)STRATEGIES[i][2], WHITE, game2board, 0);
                        iboards = iboards + BOARDS;
                    }
                    player = nexttoplay(game2board, player, 0);
                } while (player != 0);
                cntdiff = diffeval(WHITE, game2board); /* determine winner */
                if (cntdiff > 0)
                    iwins++;
                if (cntdiff < 0)
                    jwins++;
                free(game2board);
            }
            printf("%s wins=%d boards=%ld || %s wins=%d boards=%ld\n",
                   STRATEGIES[i][0], iwins, iboards,
                   STRATEGIES[j][0], jwins, jboards);

            j++;
        }
        i++;
    }
}

void playgame(void)
{
    int i, p1, p2, printflag;
    int (*strfn1)(int, int *);
    int (*strfn2)(int, int *);
    char *strnme;

    i = 0;
    printf("Player 1: ");
    while (STRATEGIES[i][0] != NULL)
    {
        strnme = STRATEGIES[i][1];
        printf("%d (%s)\n", i, strnme);
        printf("          ");
        i++;
    }
    printf(": ");
    scanf("%d", &p1);

    /* get strategy for player 2 (white) from user */
    i = 0;
    printf("Player 2: ");
    while (STRATEGIES[i][0] != NULL)
    {
        strnme = STRATEGIES[i][1];
        printf("%d (%s)\n", i, strnme);
        printf("          ");
        i++;
    }
    printf(": ");
    scanf("%d", &p2);

    strfn1 = STRATEGIES[p1][2];
    strfn2 = STRATEGIES[p2][2];
    if (strfn1 == human || strfn2 == human)
        printflag = 1;
    else
    {
        printf("       \n");
        printf("Neither player is human. Do you want to print each board (1) or not (0): ");
        scanf("%d", &printflag);
    }

    othello(strfn1, strfn2, printflag);
}

int main(void)
{
    do
    {
        playgame();
        fflush(stdin);
        printf("Do you want to play another game (y or n)? ");
    } while (getchar() == 'y');
}