/*16. Fac ̧a um programa que leia um vetor de 5 posic ̧oes para n  ̃ umeros reais e, depois, um  ́
codigo inteiro. Se o c  ́ odigo for zero, finalize o programa; se for 1, mostre o vetor na ordem  ́
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2  ́
escreva uma mensagem informando que o codigo  ́ e inv  ́ alido.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, vetor[5] = {0, 3, 4, 5, 8}, opcao;
    printf("[1] Ordem direta\n[2] Ordem inversa\n[0] Finalizar o programa");
    printf("\nEscolha um dos codigos acima: ");
    scanf("%d", &opcao);
    printf("\n");
    if (opcao == 0)
    {
        printf("\nFinalizando o programa...\n");
        exit(0);
    }
    else if (opcao == 1)
    {
        printf("OS valores na ordem direta sao: ");

        for (i = 0; i < 5; i++)
        {
            printf("%d ", vetor[i]);
        }
    }
    else if (opcao == 2)
    {
        printf("Os valores na ordem inversao sao: ");

        for (i = 4; i >= 0; i--)
        {
            printf("%d ", vetor[i]);
        }
    }
    else
        printf("Opcao invalida");

    printf("\n");
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}