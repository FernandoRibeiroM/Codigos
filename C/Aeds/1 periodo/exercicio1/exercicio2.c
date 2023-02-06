#include <stdio.h>
int main()
{
    double celsius, fahrenheit;
    printf("digite a temperatura em Celsius:");
    scanf("%lf", &celsius),
        fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;
    printf("a temperatura e: %lf", fahrenheit);
    return 0;
}
