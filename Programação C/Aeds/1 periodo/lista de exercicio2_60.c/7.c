/*7. FaC'a um programa que leia 10 inteiros positivos, ignorando nC#o positivos, e imprima sua
mC)dia.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  float numero, soma = 0;
  int i, j;
  for (i = 0; i < 10; i++)
  {
    do
    {
      printf("Digite um numero:");
      scanf("%f", &numero);
    } while (numero <= 0);

    soma = soma + numero;
  }
  printf("A media e: %0.2f\n", soma / 10);
  system("pause");
  system("cls");
  printf("By: Fernando Ribeiro Martins");
  return 0;
}