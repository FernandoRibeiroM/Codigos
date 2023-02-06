#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, imc;
    printf("digite seu peso:");
    scanf("%f", &a);
    printf("digite sua altura:");
    scanf("%f", &b);
    imc = (a / pow(b, 2));
    printf("seu imc e: %f \n ", imc);
    if (imc < 18.5)
        printf("voce esta abaixo do peso");
    else if (imc >= 18.6 && imc <= 24.9)
        printf("voce e saudavel");
    else if (imc >= 25 && imc < 29.9)
        printf("vc esta com peso em excesso");
    else if (imc >= 30 && imc <= 34.9)
        printf("vc esta com obesidade gal I");
    else if (imc >= 35 && imc <= 39.9)
        printf("vc esta com obesidade gral II");
    else if (imc >= 40)
        printf("vc esta com obesidade gral III");

    return 0;
}
