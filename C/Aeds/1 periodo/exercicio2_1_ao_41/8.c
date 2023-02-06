/*8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e
exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser
informado ao usuário e o programa termina.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float numero1, numero2, media = 0;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &numero1, &numero2);
    if ((numero1 >= 0) && (numero1 <= 10) && (numero2 >= 0) && (numero2 <= 10))
    {
        media = (numero1 + numero2) / 2;
        printf("A media destas notas e: %0.2f\n", media);
    }
    else
    {
        printf("Um desses valores nao e valido\n");
    }
    system("pause");
    system ("cls");
    printf ("By: Fernando Ribeiro Martins");
    return 0;
}