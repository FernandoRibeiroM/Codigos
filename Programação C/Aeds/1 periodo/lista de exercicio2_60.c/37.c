/*37. Escreve um programa que verifique quais numeros entre 1000 e 9999 (inclusive) pos-  ́
suem a propriedade seguinte: a soma dos dois d ́ıgitos de mais baixa ordem com os dois
d ́ıgitos de mais alta ordem elevada ao quadrado e igual ao pr  ́ oprio numero. Por exemplo,  ́
para o inteiro 3025, temos que:
30 + 25 = 55
552 = 3025*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, digitosiniciais, digitosfinais, somadigitos, resultado;
    for (i = 1000; i <= 9999; i++)
    {
        digitosfinais = i % 100;
        digitosiniciais = i / 100;
        somadigitos = digitosfinais + digitosiniciais;
        resultado = pow(somadigitos, 2);
        if (resultado == i)
        {
            printf("i = %d\n%d + %d = %d\n%d^2 = %d\n", i, digitosiniciais, digitosfinais, somadigitos, somadigitos, resultado);
        }
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}