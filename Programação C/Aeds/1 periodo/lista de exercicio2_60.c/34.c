/*34. Fac ̧a um programa que calcule o menor numero divis  ́  ́ıvel por cada um dos numeros de 1  ́
a 20? Ex: 2520 e o menor n  ́ umero que pode ser dividido por cada um dos n  ́ umeros de 1  ́
a 10, sem sobrar resto.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, contagem=0;
    for(i = 1; contagem < 1; i++){
        if(i % 1 == 0 && i % 2 == 0 && i % 3 == 0 && i % 4 == 0 && i % 5 == 0 && i % 6 == 0 && i % 7 == 0 && i % 8 == 0 && i % 9 == 0 && i % 10 == 0 && i % 11 == 0 && i % 12 == 0 && i % 13 == 0 && i % 14 == 0 && i % 15 == 0 && i % 16 == 0 && i % 17 == 0 && i % 18 == 0 && i % 19 == 0 && i % 20 == 0){
            printf("%d\n", i);
            contagem++;
        }
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}