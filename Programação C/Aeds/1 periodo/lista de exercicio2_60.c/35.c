/*35. Fac ̧a um programa que some os numeros impares contidos em um intervalo definido  ́
pelo usuario. O usu  ́ ario define o valor inicial do intervalo e o valor final deste intervalo  ́
e o programa deve somar todos os numeros  ́  ́ımpares contidos neste intervalo. Caso o
usuario digite um intervalo inv  ́ alido (comec ̧ando por um valor maior que o valor final) deve  ́
ser escrito uma mensagem de erro na tela, “Intervalo de valores invalido” e o programa  ́
termina. Exemplo de tela de sa ́ıda: Digite o valor inicial e valor final: 5
10
Soma dos  ́ımpares neste intervalo: 21*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, valorinicial, valorfinal, intervalo, somaimpares = 0;
    do
    {
        printf("Digite o numero inicial e o numero final: ");
        scanf("%d%d", &valorinicial, &valorfinal);
        if (valorinicial > valorfinal)
            printf("O valor final precisa ser maior que o valor inicial!\n");
    } while (valorfinal < valorinicial);
    intervalo = valorfinal - valorinicial;
    for (i = 0; i < intervalo; i++)
    {
        if (((valorinicial + i) % 2) != 0)
        {
            somaimpares += valorinicial + i;
        }
    }
    printf("A soma dos impares neste intervalo e de: %d\n", somaimpares);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}