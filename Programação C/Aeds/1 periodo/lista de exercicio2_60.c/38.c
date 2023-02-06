/*38. Fac ̧a um programa que calcule o terno pitagorico  ́ a, b, c, para o qual a+b+c = 1000. Um
terno pitagorico  ́ e um conjunto de tr  ́ es n ˆ umeros naturais,  ́ a, b, c, para a qual,

a
2 + b
2 = c
2

Por exemplo,

3
2 + 42 = 9 + 16 = 25 = 52*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i, j, k, a , b ,c;
    for (i = 1; i <= 1000; i++)
    {
        for (j = 1; j <= 1000; j++)
        {
            for (k = 1; k <= 1000; k++)
            {
                if ((i + j + k) == 1000)
                {
                    printf("%d %d %d\n", i, j, k);
                    a = pow(i, 2);
                    b = pow(j, 2);
                    c = pow(k, 2);
                    if(a+b == c){
                        printf("\nO terno pitagorico e: %d^2 + %d^2 = %d^2\n\n", i, j, k); 
                        system("pause");
                    }
                }
            }
        }
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}