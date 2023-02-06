#include <stdio.h>
#include <math.h>
int main () {
    double salarionormal, bonus, imposto, salariofinal;
    printf ("digite o salario");
    scanf  ("%lf", &salarionormal);
    bonus = salarionormal * 0.05;
    imposto =salarionormal * 0.07 ;
    salariofinal = salarionormal - imposto + bonus;
    printf ("o salario e: %lf",salariofinal);
return 0;
}
