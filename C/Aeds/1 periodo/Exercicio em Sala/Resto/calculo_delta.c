#include <stdio.h>
#include <math.h>
 int main () {
     float a = 0, b = 0, c = 0, delta, x1, x2;
     printf ("digite o valor de a, b, e c \n");
     scanf  ("%f %f %f", &a, &b, &c);
     delta = (pow(b,2) -4 * (a) * (c));
     if ( delta > 0) {
     x1 = (- b + sqrt(delta)) / (2 * a);
     x2 = (- b - sqrt(delta)) / (2 * a);
     printf ("x1 e %f, x2 e %f", x1, x2);
     }
     else if ( delta = 0){
     x1 = -b / ( 2 *a);
     }
     else {
     printf ("a função não possui raiz real");
     }
 return 0;
 }
