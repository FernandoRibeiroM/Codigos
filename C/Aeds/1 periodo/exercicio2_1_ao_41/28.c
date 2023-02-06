/*28. Fac ̧a um programa que leia tres n ˆ umeros inteiros positivos e efetue o c  ́ alculo de uma das  ́
seguintes medias de acordo com um valor num  ́ erico digitado pelo usu  ́ ario:  ́

3

(a) Geometrica:  ́

√3 x ∗ y ∗ z
(b) Ponderada: x+2∗y+3∗z
6
(c) Harmonica: ˆ
1
1
x + 1
y + 1
z
(d) Aritmetica:  ́
x+y+z*/
//^1/3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float numeros[3], i, conta;
    int operacao;
    printf("Digite 1 valores: ");
    scanf("%f", &numeros[0]);
    printf("Digite 1 valores: ");
    scanf("%f", &numeros[1]);
    printf("Digite 1 valores: ");
    scanf("%f", &numeros[2]);
    system("pause");
    system("cls");
    printf("1-Geometrica\n2-Ponderada\n3-Harmonica\n4-Aritmetica ");
    scanf("%d", &operacao);
    switch (operacao)
    {
    case 1:
        conta = pow((numeros[0] * numeros[1] * numeros[2]), 1 / 3);
        printf("Geometrica = %0.2f \n", conta);
        break;
    case 2:
        conta = (numeros[0] + (2 * numeros[1]) + (3 * numeros[3]));
        printf("Ponderada = %0.2f \n", conta);
        break;
    case 3:
        conta = 1 / ((1 / numeros[0]) + (1 / numeros[1]) + (1 / numeros[2]));
        printf("Harmonica = %0.2f \n", conta);
        break;
    case 4:
        conta = (numeros[0] + numeros[1] + numeros[2]) / 3;
        printf("Aritmetica = %0.2f \n", conta);
        break;
    default:
        printf("Voce colocou uma opcao que nao e valida.\n");
        break;
    }

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}