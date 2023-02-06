/*5. FaC'a um programa que peC'a ao usuC!rio para digitar 10 valores e some-os.*/

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
  printf("A soma e: %0.2f\n", soma);
  system("pause");
  system("cls");
  printf("By: Fernando Ribeiro Martins");
  return 0;
}