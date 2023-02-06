
#include <stdio.h>

float conversao( int celsius);

int main()
{
    float celsius, fahrenheit;
    printf("digite a temperatura em Celsius:");
    scanf("%f", &celsius);
    fahrenheit = conversao(celsius);
    printf("a temperatura em Fahrenheit e: %0.2f", fahrenheit);
    return 0;
}

float conversao(int celsius)
{
    return ((celsius * (9.0 / 5.0)) + 32.0);
}
//(celsius * (9.0 / 5.0)) + 32.0;