#include <stdio.h>
 int main() {
     double peso;
     double altura;
     double imc;
     printf ("digite seu peso");
     scanf  ("%lf", &peso);
     printf ("digite sua altura");
     scanf  ("%lf", &altura);
     imc = (peso / (altura * altura));
     printf ("seu imc e: %lf", imc);
return 0;
}
