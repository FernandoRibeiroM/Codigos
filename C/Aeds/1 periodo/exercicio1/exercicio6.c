#include <stdio.h>
#include <math.h>
int main () {
    double fahrenheit, celsius;
    printf ("digite a temperatura em fahtenheit:");
    scanf  ("%lf", &fahrenheit);
    celsius = 5.0 * (fahrenheit-32) / 9.0;
    printf ("a temperatura é: %lf celsius", celsius);
return 0;
}
