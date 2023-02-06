#include <stdio.h>
#include <math.h>
 int main () {
     double catetoA, catetoB, hipotenusa;
     printf ("digite o cateto A");
     scanf  ("%lf", &catetoA);
     printf ("didite o cateto B");
     scanf  ("%lf", &catetoB);
     hipotenusa = sqrt(pow(catetoA,2)+ pow(catetoB,2));
     printf ("resultado: %f", hipotenusa);
 return 0;
 }
