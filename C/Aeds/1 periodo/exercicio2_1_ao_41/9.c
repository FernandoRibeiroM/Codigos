/*9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso
contrário imprima: Empréstimo concedido.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario, parcela_do_emprestimo, porcentagem;
    printf("Qual seu salrio?\n");
    scanf("%f", &salario);
    printf("Qual o valor da parcela do emprestimo?");
    scanf("%f", &parcela_do_emprestimo);
    porcentagem = salario * 0.20;
    if (parcela_do_emprestimo > porcentagem)
    {
        printf("Emprestimo não concedido.\n");
    }
    else
    {
        printf("Emprestimo concedido\n");
    }
    system("pause");
    system ("cls");
    printf ("By: Fernando Ribeiro Martins");    
    return 0;
}