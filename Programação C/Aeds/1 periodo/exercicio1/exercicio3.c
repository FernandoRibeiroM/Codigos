#include <stdio.h>
 int main () {
     double raio, pi, area, perimetro;
     printf ("digite o raio");
     scanf  ("%lf", &raio);
     pi = 3.14;
     area = (pi * (raio * raio));
     perimetro = 2 * pi * raio;
     printf ("o perimetro e: %f, a area e: %f", perimetro, area);
 return 0;
 }
