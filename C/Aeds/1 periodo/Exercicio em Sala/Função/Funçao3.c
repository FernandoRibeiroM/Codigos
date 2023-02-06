/*3 - Crie uma função que receba um array de tamanho 5 Os elementos deste array deverão ser lidos pelo teclado na função main A função criada deverá trocar de posição o menor e o maior valor deste array Após a saída da função, já na função main imprima os elementos do array;*/
#include <stdio.h>

void troca(int *numero, int x);

int main()
{ 
    int n[5], i;
    for (i = 0; i < 5; i++)
    {
    printf("Digite %d numeros: ", i + 1);
    scanf("%d", &n[i]);
    }
    troca(n,5);
    for (i = 0; i < 5; i++)
    {
    printf("Numero %d = %d\n", i + 1, n[i]);
    }
    return 0;
}
void troca(int *numero, int x)
{
    int i, contador1 = 0, contador2 = 0, maior, menor;
    maior = numero[0];
    menor = numero[0];

    for (i = 1; i < 5; i++)
    {
        if (numero[i] > maior)
        {
            maior = numero [i];
            contador1 = i;
        }
        if (numero[i] < menor)
        {
            menor = numero[i];
            contador1 = i;
        }
    }
    numero[contador1] = menor;
    numero[contador2] = maior;
}