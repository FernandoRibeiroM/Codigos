#include <stdio.h>
int main()
{
    int i, w, a = 0, z = 0, x = 0, c = 0, v = 0, b = 0;
    //a variavel "w" e igual ao numero de pessoas(i), "a" a idade, "z" <= 15, "x"  >= 16 e <= 30, "c" >= 31 e <= 45, "v" a >= 46 e <= 60, "b" > 60.
    printf("Quantas idades deseja digitar:");
    scanf("%d", &i);
    w = i;
    while (i != 0)
    {
        printf("Qual idade:\n");
        scanf("%d", &a);
        if ((a >= 1) && (a <= 15))
        {
            z++;
            i--;
        }
        else if ((a >= 16) && (a <= 30))
        {
            x++;
            i--;
        }
        else if ((a >= 31) && (a <= 45))
        {
            c++;
            i--;
        }
        else if ((a >= 46) && (a <= 60))
        {
            v++;
            i--;
        }
        else if (a > 60)
        {
            b++;
            i--;
        }
        else
        {
            printf("erro, vc colocou um numero <=0 \n");
        }
    }

    printf(" 1 a 15 anos-%d% \n", z * 100 / w);
    printf(" 16 a 30 anos-%d% \n", x * 100 / w);
    printf(" 31 a 45 anos-%d% \n", c * 100 / w);
    printf(" 46 a 60 anos-%d% \n", v * 100 / w);
    printf(" Mais de 60 anos-%d% \n ", b * 100 / w);
    return 0;
}