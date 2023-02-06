#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct cadastro
{
    char sexo, cor_olho, cor_cabelo;
    int idade;
};

void leitura(struct cadastro *habitante);

int media(struct cadastro *habitante);

int maiorIdade(struct cadastro *habitante);

int quant(struct cadastro *habitante);

int main()
{
    struct cadastro habitantes[5];
    leitura(&habitantes[5]);
    int med = media(&habitantes[5]);
    printf("A media de idade das pessoas com olhos castanhos e cabelos pretos:%d", med);
    int max = maiorIdade(&habitantes[5]);
    printf("A maior idade entre os habitantes: %d", max);
    int cont = quant(&habitantes[5]);
    printf("A quantidade de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 (inclusive) e que tenham olhos azuis e cabelos louros: %d", cont);
    return 0;
}

void leitura(struct cadastro *habitante)
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("\n> Cadastro do %do. habitante", i + 1);
        printf("\nInsira o sexo (M/F): ");
        setbuf(stdin, NULL);
        scanf("%c", &habitante[i].sexo);
        while (tolower(habitante[i].sexo) != 'f' && tolower(habitante[i].sexo) != 'm')
        {
            printf("Caracter invalido! Insira novamente o sexo do %do. habitante (M/F): ", i + 1);
            setbuf(stdin, NULL);
            scanf("%c", &habitante[i].sexo);
        }
        printf("Insira a cor dos olhos (A-Azuis ou C-Castanhos): ");
        setbuf(stdin, NULL);
        scanf("%c", &habitante[i].cor_olho);
        while (tolower(habitante[i].cor_olho) != 'a' && tolower(habitante[i].cor_olho) != 'c')
        {
            printf("Caracter invalido! Insira novamente a cor dos olhos do %do. habitante (A-Azuis ou C-Castanhos): ", i + 1);
            setbuf(stdin, NULL);
            scanf("%c", &habitante[i].cor_olho);
        }
        printf("Insira a cor dos cabelos (L-Louros, P-Pretos ou C-Castanhos): ");
        setbuf(stdin, NULL);
        scanf("%c", &habitante[i].cor_cabelo);
        while (tolower(habitante[i].cor_cabelo) != 'l' && tolower(habitante[i].cor_cabelo) != 'p' && tolower(habitante[i].cor_cabelo) != 'c')
        {
            printf("Caracter invalido! Insira novamente a cor dos cabelos do %do. habitante (L-Louros, P-Pretos ou C-Castanhos): ", i + 1);
            setbuf(stdin, NULL);
            scanf("%c", &habitante[i].cor_cabelo);
        }
        printf("Insira a idade: ");
        scanf("%d", &habitante[i].idade);
    }
}

int media(struct cadastro *habitante)
{
    int media = 0, i;
    for ( i = 0; i < 5; i++)
    {
        if (tolower(habitante[i].cor_olho) == 'c' && tolower(habitante[i].cor_cabelo) == 'p')
        {
            media += habitante[i].idade;
        }
    }
    return media;
}

int maiorIdade(struct cadastro *habitante)
{
    int maior = 0, i;
    for ( i = 0; i < 5; i++)
    {
        if (habitante[i].idade > maior)
        {
            maior = habitante[i].idade;
        }
    }
    return maior;
}

int quant(struct cadastro *habitante)
{
    int cont = 0, i;
    for ( i = 0; i < 5; i++)
    {
        if (tolower(habitante[i].sexo) == 'f' && tolower(habitante[i].cor_olho) == 'a' && tolower(habitante[i].cor_cabelo) == 'l' && habitante[i].idade >= 18 && habitante[i].idade <= 35)
        {
            cont++;
        }
    }
    return cont;
}