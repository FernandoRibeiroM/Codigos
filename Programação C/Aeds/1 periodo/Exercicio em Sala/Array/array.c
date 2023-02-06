#include <stdio.h>
int main()
{
    float nota[5];
    float soma = 0, media;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("digite a nota do aluno %d\n", i + 1);
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }
    media = soma / 5;
    for (i = 0; i < 5; i++)
    {
        if (nota[i] > media)
        {
            printf("Nota %f e maior que a media", nota[i]);
        }
    }

    return 0;
}
