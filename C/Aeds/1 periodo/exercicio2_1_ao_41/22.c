/*22. Leia a idade e o tempo de servic ̧o de um trabalhador e escreva se ele pode ou nao se  ̃
aposentar. As condic ̧oes para aposentadoria s  ̃ ao ̃
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade, tempo_de_trabalho;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu tempo de trabalho: ");
    scanf("%d", &tempo_de_trabalho);
    if (((idade > 65) || (tempo_de_trabalho > 30)) || ((idade >= 60) && (tempo_de_trabalho >= 25)))
    {
        printf("Aposentadoria aceita.\n");
    }
    else
    {
        printf("Aposentadoria negada.\n");
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");

    return 0;
}
