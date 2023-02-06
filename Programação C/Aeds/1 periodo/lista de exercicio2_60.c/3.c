/*3. FaC'a um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
iniciando em 10 e terminando em 0. Mostrar uma mensagem MFIM!M apC3s a contagm..*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i;
  i = 0;
  while (i < 10)
  {
    i++;
    printf("%d\n", i);
  }
  printf("Fim\n");
  system("pause");
  system("cls");
  printf("By: Fernando Ribeiro Martins");
  return 0;
}