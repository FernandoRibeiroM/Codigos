/*14. Fac ̧a um programa que leia um vetor de 10 posic ̧oes e verifique se existem valores iguais  ̃
e os escreva na tela.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0, i, j, w, contador;
    int vetor[10], iguais[10];
    for (i = 0; i < 10; i++)
    {
        printf("Digite a %d posicao : ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            contador = 0;
            if (vetor[i] == vetor[j] && i != j)
            {
                for (w = 0; w < 10; w++)
                {
                    if (iguais[w] == vetor[j])
                        contador = 1;
                }

                if (contador == 0)
                {
                    iguais[a] = vetor[i];
                    a++;
                }
            }
        }
    }
    system("pause");
    system("cls");
    printf("Os valores que se repetem sao:\n");
    for (i = 0; i < a; i++)
    {
        printf("%d\n", iguais[i]);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}