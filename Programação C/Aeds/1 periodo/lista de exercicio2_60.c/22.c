/*22. Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequencia arbitr ˆ aria de notas (v  ́ alidas no intervalo de 10 a 20) e que mostre na tela,  ́
como resultado, a correspondente media aritm  ́ etica. O n  ́ umero de notas com que o aluno  ́
pretenda efetuar o calculo n  ́ ao ser  ̃ a fornecido ao programa, o qual terminar  ́ a quando for  ́
introduzido um valor que nao seja v  ̃ alido como nota de aprovac ̧  ́ ao.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int contagem = 0;
    float nota, soma = 0;
    do
    {
       printf ("Digite sua nota: ");
       scanf  ("%f", &nota);
       if ( nota < 20 && nota > 10)
       {
       soma += nota;
       contagem++;
       }
    } while (!(nota > 20 || nota < 10));
    
    printf ("%0.2f / %d = %0.2f\n", soma, contagem, soma / contagem);
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}
