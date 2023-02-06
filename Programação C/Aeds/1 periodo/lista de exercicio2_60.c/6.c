/*6. Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  float numero, soma = 0;
  int i;
  i = 0;
  for (i = 0; i < 10; i++)
  {
    printf("Digite um numero:");
    scanf("%f", &numero);
    soma = soma + numero;
  }
  printf("A media e: %0.2f\n", soma / 10);
  system("pause");
  system("cls");
  printf("By: Fernando Ribeiro Martins");
  return 0;
}