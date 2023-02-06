/*21. Escreva o menu de opc ̧oes abaixo. Leia a opc ̧  ̃ ao do usu  ̃ ario e execute a operac ̧  ́ ao esco-  ̃
lhida. Escreva uma mensagem de erro se a opc ̧ao for inv  ̃ alida.  ́
Escolha a op ̧c~ao:
1- Soma de 2 n ́umeros.
2- Diferen ̧ca entre 2 n ́umeros (maior pelo menor).
3- Produto entre 2 n ́umeros.
4- Divis~ao entre 2 n ́umeros (o denominador n~ao pode ser zero).
Op ̧c~ao*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int operacao;
    float numero1, numero2;
    printf("Escolha a operaçao:\n1-Soma\n2-Menos\n3-Multiplicaçao\n4-Divisao\n");
    scanf("%d", &operacao);
    if ((operacao > 0) && (operacao < 5))
    {
        printf("Digite o valor de A: ");
        scanf("%f", &numero1);
        printf("Digite o valor de B: ");
        scanf("%f", &numero2);
        if (operacao == 1)
        {
            printf("%0.2f + %0.2f = %0.2f \n", numero1, numero2, numero1 + numero2);
        }
        else if (operacao == 2)
        {
            if (numero1 > numero2)
            {
                printf("%0.2f - %0.2f = %0.2f\n", numero1, numero2, numero1 - numero2);
            }
            else
            {
                printf("%0.2f - %0.2f = %0.2f\n", numero2, numero1, numero2 - numero1);
            }
        }
        else if (operacao == 3)
        {
            printf("%0.2f * %0.2f = %0.2f\n", numero1, numero2, numero1 * numero2);
        }
        else if (operacao == 4)
        {
            if (numero2 > 0)
            {
                printf("%0.2f / %0.2f = %0.2f\n", numero1, numero2, numero1 / numero2);
            }
            else {
                printf("Voce colocou o denominador como 0.\n");
            }
        }
    }
    else
    {
        printf("Erro\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");

    return 0;
}