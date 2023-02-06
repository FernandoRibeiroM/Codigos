/*26. Leia a distancia em ˆ Km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
a tabela abaixo:

CONSUMO (Km/l) MENSAGEM
menor que 8 Venda o carro!
entre 8 e 14 Economico! ˆ
maior que 12 Super economico!*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float km, litros_gasosa, resultado;
    printf("Digeite o Km: ");
    scanf("%f", &km);
    printf("Digite a gasolina: ");
    scanf("%f", &litros_gasosa);
    resultado = km / litros_gasosa;
    if (resultado < 8)
    {
        printf("Venda o carro!!!\n");
    }
    else if ((resultado >= 8) && (resultado < 13))
    {
        printf("Economico\n");
    }
    else
    {
        printf("Super economico\n");
    }

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}