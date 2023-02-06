#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto
{
    float x,y;
}ponto;

float distancia(ponto a, ponto b);

int main () 
{
    ponto cartesiano1, cartesiano2;
    printf ("Digite a posicao do primeiro ponto (x,y):\n");
    scanf ("%f %f", &cartesiano1.x, &cartesiano1.y);
    printf ("Digite a posicao do segundo ponto (x,y):\n");
    scanf ("%f %f", &cartesiano2.x, &cartesiano2.y);
    printf ("A distancia entre eles e: %0.2f", distancia(cartesiano1, cartesiano2));
    return 0;
}

float distancia(ponto a, ponto b)
{
    return sqrt( pow( b.x - a.x, 2 ) + pow( b.y - a.y, 2 ) );
}
