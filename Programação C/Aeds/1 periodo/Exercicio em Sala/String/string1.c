/*Faça um programa que leia o nome de três alunos e suas respectivas notas em AEDS I. Em seguida, o programa deverá
apresentar o nome e a nota do aluno que obteve maior nota;*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char nome[20], nome_final[20];
  float nota, maior = 0;
  int i;
  for (i = 0; i < 3; i++)
  {
    setbuf(stdin, NULL);
    printf("Digite seu nome:");
    fgets(nome, 20, stdin);
    system("pause");
    setbuf(stdin, NULL);
    printf("Digite sua nota:");
    scanf("%f", &nota);
    system("pause");
    system("cls");
    if (nota > maior)
    {
      maior = nota;
      strcpy(nome_final, nome);
    }
  }
  printf("%s%0.2f\n", nome_final, maior);
  system("pause");
  system("cls");
  printf("By: Fernando Ribeiro Martins");
  return 0;
}