/*34. Leia a nota e o numero de faltas de um aluno, e escreva seu conceito. De acordo com a  ́
tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma reduc ̧ao de conceito.  ̃

4

PREC ̧ O NOVO MENSAGEM
ate R$ 80  ́ Barato
entre R$ 80 e R$ 120 (inclusive) Normal
entre R$ 120 e R$ 200 (inclusive) Caro
acima de R$ 200 Muito caro

NOTA CONCEITO (ATE 20 FALTAS)  ́ CONCEITO (MAIS DE 20 FALTAS)
9.0 ate 10.0  ́ A B
7.5 ate 8.9  ́ B C
5.0 ate 7.4  ́ C D
4.0 ate 4.9  ́ D E
0.0 ate 3.9  ́ E E*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota;
    int falta;
    printf("Digite sua nota: ");
    scanf("%f", &nota);
    printf("Digite seu numero de faltas");
    scanf("%d", &falta);
    if ((nota <= 10.0) && (nota >= 9.0))
    {
        if (falta > 20)
        {
            printf("Conceito: B");
        }
        else
        {
            printf("conceito: A");
        }
    }
    else if ((nota <= 8.9) && (nota >= 7.5))
    {
        if (falta > 20)
        {
            printf("Conceito: C\n");
        }
        else
        {
            printf("Conceito: B\n");
        }
    }
    else if ((nota <= 7.4) && (nota >= 5.0))
    {
        if (falta > 20)
        {
            printf("Conceito: D\n");
        }
        else
        {
            printf("Conceito: C\n");
        }
    }
    else if ((nota <= 4.9) && (nota >= 4.0))
    {
        if (falta > 20)
        {
            printf("Conceito: E\n");
        }
        else
        {
            printf("Conceito: D\n");
        }
    }
    else if ((nota <= 3.9) && (nota >= 0.0))
    {
        if (falta > 20)
        {
            printf("Conceito: E\n");
        }
        else
        {
            printf("Conceito: E\n");
        }
    }

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}