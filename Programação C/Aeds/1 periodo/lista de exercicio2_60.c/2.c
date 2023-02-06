/*2. Escreva um programa que escreva na tela, de 1 atC) 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetiC'C#o for, a segunda while, e a terceira do while.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i;
  for (i = 1; i < 101; i++)
  {
    printf("1- %d\n", i);
  }
  system("pause");
  system("cls");
  i = 0;
  while (i < 100)
  {
    i++;
    printf("2- %d\n", i);
  }
  system("pause");
  system("cls");
  i = 0;
  do
  {
    i++;
    printf("3- %d\n", i);
  } while (i < 100);
  system("pause");
  system("cls");
  printf("By: Fernando Ribeiro Martins");
  return 0;
}