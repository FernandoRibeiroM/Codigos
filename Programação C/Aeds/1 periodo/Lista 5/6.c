#include <stdio.h>

void triangulo(float n, float n2, float n3);

int main()
{
    float num, num2, num3;
    printf("Insira 3 valores sendo respectivamente os 3 lados de um triangulo: ");
    scanf("%f %f %f", &num, &num2, &num3);
    while (num <= 0 || num2 <= 0 || num3 <= 0)
    {
        printf("Valores invalido! Insira novamente os 3 valores: ");
        scanf("%f %f %f", &num, &num2, &num3);
    }
    if ((num2 + num3) < num || (num + num3) < num2 || (num + num2) < num3)
    {
        printf("Nao e um triangulo!");
    }
    else
    {
        triangulo(num, num2, num3);
    }
    return 0;
}

void triangulo(float n, float n2, float n3)
{
    if (n == n2 && n == n3 && n2 == n3)
    {
        printf("\nTriangulo equilatero!\n");
    }
    else if (n != n2 && n != n3 && n2 != n3)
    {
        printf("\nTriangulo escaleno!\n");
    }
    else
    {
        printf("\nTriangulo isosceles!\n");
    }
}
