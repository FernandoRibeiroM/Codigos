/*33. Dados n e dois numeros inteiros positivos,  ́ i e j, diferentes de 0, imprimir em ordem
crescente os n primeiros naturais que sao m  ̃ ultiplos de  ́ i ou de j e ou de ambos. Exemplo:
Para n = 6, i = 2 e j = 3 a sa ́ıda devera ser: 0,2,3,4,6,8.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, valor[3], contagem = 1;
    printf("Digite 3 numeros:\n");
    scanf("%d%d%d", &valor[0], &valor[1], &valor[2]);
    printf("0 ");
    for (i = 1; contagem < valor[0]; i++)
    {
        if (i % valor[1] == 0 || i % valor[2] == 0)
        {
            printf("%d ", i);
            contagem++;
        }
    }
    printf ("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}