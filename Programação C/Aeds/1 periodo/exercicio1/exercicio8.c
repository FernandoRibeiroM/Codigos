#include <stdio.h>
#include <math.h>
 int main () {
     float dias, imposto, salario, ganhofinal;
     printf ("digite o numero de dias trabalhados:");
     scanf  ("%f", &dias);
     salario = dias * 30;
     imposto = salario * 0.08;
     ganhofinal = salario - imposto;
     printf ("ganho final: %f", ganhofinal);

 return 0;
 }
