#include <stdio.h>
#include <math.h>
 int main () {
     float força, area, pressão;
     printf ("Digite o valor da força:");
     scanf  ("%f", &força);
     printf ("Digite o valor da area:");
     scanf  ("%f", &area);
     pressão = força / area;
     printf ("A pressao e de: %f", pressao);
return 0;
 }
