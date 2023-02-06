#include <stdio.h>
#include <stdlib.h>
void troca(int *x , int *y);
int main()
{
    int a, b;
    printf ("Digite dois numeros:\n");
    scanf ("%d %d", &a, &b);
    printf ("\n\n");
    troca(&a,&b);
    printf ("Valor A = %d\nValor B = %d\n\n", a, b);

    return 0;
}
void troca(int *x , int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}