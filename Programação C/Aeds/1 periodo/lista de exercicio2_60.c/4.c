/*4. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em
1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i;
  i = 0;
  while (i < 100000)
  {
    i += 1000;
    printf("%d\n", i);
  }
  printf("Fim\n");
  system("pause");
  system("cls");
  printf("By: Fernando Ribeiro Martins");
  return 0;
}