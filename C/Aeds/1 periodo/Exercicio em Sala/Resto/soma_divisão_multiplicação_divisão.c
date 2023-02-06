#include <stdio.h>
#include <math.h>
int main()
{
     int a;
     float x, y;
     printf("digite o numero de qual operaçao deseja fazer \n 1-soma \n 2-subtra�ao \n 3-multiplicaçao \n 4-divisao \n\n");
     scanf("%d", &a);
     printf("digite um valor para a e um para b:");
     scanf("%f %f", &x, &y);
     switch (a)
     {
     case 1:
          printf("%f + %f = %f", x, y, x + y);
          break;
     case 2:
          printf("%f - %f = %f", x, y, x - y);
          break;
     case 3:
          printf("%f * %f = %f", x, y, x * y);
          break;
     case 4:
          if (y != 0)
               printf("%f / %f = %f", x, y, x / y);
          else
               printf("o segundo valor nao pode ser = 0");
     default:
          printf("opçao invalida");
          break;
     }

     return 0;
}
