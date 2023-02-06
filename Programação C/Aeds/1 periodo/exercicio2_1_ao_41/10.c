/*10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
 Homens: (72,7 * h) - 58
 Mulheres: (62, 1 * h) – 44, 7 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int sexo = 0;
  float h;
  printf("Digite 1 se for Mulher:\nDigite 2 se for Homem:\n");
  scanf("%d", &sexo);
  system("cls");
  if (sexo == 1)
  {
    printf("Qual sua altura?\n");
    scanf("%f", &h);
    printf("Seu peso ideal e: %f\n", (62.1 * h) - 44.7);
  }
  else if (sexo == 2)
  {
    printf("Qual sua altura?\n");
    scanf("%f", &h);
    printf("Seu peso ideal e: %0.2f\n", (72.7 * h) - 58);
  }
  else
  {
    printf("Deve ser digitado 1 ou 2\n");
  }
  system("pause");
  system("cls");
  printf("By: Fernando Ribeiro Martins");

  return 0;
}