/*20. Dados tres valores, ˆ A, B, C, verificar se eles podem ser valores dos lados de um triangulo ˆ
e, se forem, se e um tri  ́ angulo escaleno, equil ˆ atero ou is  ́ oscele, considerando os seguin-  ́
tes conceitos:
• O comprimento de cada lado de um triangulo ˆ e menor do que a soma dos outros  ́
dois lados.
• Chama-se equilatero o tri  ́ angulo que tem tr ˆ es lados iguais. ˆ
• Denominam-se isosceles o tri  ́ angulo que tem o comprimento de dois lados iguais. ˆ
• Recebe o nome de escaleno o triangulo que tem os tr ˆ es lados diferentes.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float ladoA, ladoB, ladoC;
    printf("Digite o valor do  lado:");
    scanf("%f", &ladoA);
    printf("Digite o valor do  lado:");
    scanf("%f", &ladoB);
    printf("Digite o valor do  lado:");
    scanf("%f", &ladoC);
    if ((ladoA + ladoB > ladoC) && (ladoB + ladoC > ladoA) && (ladoC + ladoA > ladoB))
    {
        if ((ladoA == ladoB) || (ladoB == ladoC))
        {
            printf("E um triangulo equilatero.\n");
        }
        else if ((ladoA == ladoB) || (ladoA == ladoC) || (ladoB == ladoC))
        {
            printf("E um triangulo isosceles.\n");
        }
        else
        {
            printf("E um triangulo escaleno.\n");
        }
    }
    else
    {
        printf("O triangulo não e valido.\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");

    return 0;
}
