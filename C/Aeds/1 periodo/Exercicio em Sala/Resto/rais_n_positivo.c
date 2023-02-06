#include <stdio.h>
#include <math.h>
 int main () {
     int a;
     float b;
     printf ("digite um numero");
     scanf  ("%d", &a);
     if (a > 0) {
     b = sqrt(a);
     printf ("%.2f", b);
     } else {
     printf ("o numero e invalido");
     }
 return 0;
 }
