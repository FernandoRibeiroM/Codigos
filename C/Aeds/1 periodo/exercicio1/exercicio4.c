#include <stdio.h>
 int main () {
     int aa, bb, operacao;
     printf ("digite o valor do termo A:");
     scanf  ("%d", &aa);
     printf ("digite o valor do termo B:");
     scanf  ("%d", &bb);
     operacao = ((bb * bb * bb)+ aa * bb) - 2 * bb + (aa % bb);
     printf ("o reultado e: %d", operacao);
return 0;
}
