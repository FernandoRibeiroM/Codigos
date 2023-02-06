
Char CorY[] = "Y", CorB[] = "B", CorG[] = "G", CorR[] = "R", CorP[] = "P";
int i, j, tamanho;
// Criando as cartas Amarelas
for (i = 0; i < 2; i++)
{
    for (j = 0; j <= 12; j++)
    {
        retorno = cartas_baralho(MOnt, valor, CorY);
        if (retorno == 1)
            ;
        else
            printf("\n\tOcorreu um erro!\n\n");
    }
}
cor
    // Criando as cartas Azuis
    for (i = 0; i < 2; i++)
{
    for (j = 0; j <= 12; j++)
    {
        retorno = cartas_baralho(MOnt, valor, CorB);
        if (retorno == 1)
            ;
        else
            printf("\n\tOcorreu um erro!\n\n");
    }
}
// Criando as cartas Verde
for (i = 0; i < 2; i++)
{
    for (j = 0; j <= 12; j++)
    {
        retorno = cartas_baralho(MOnt, valor, CorG);
        if (retorno == 1)
            ;
        else
            printf("\n\tOcorreu um erro!\n\n");
    }
}
// Criando as cartas Vermelho
for (i = 0; i < 2; i++)
{
    for (j = 0; j <= 12; j++)
    {
        retorno = cartas_baralho(MOnt, valor, CorR);
        if (retorno == 1)
            ;
        else
            printf("\n\tOcorreu um erro!\n\n");
    }
}
// Criando as cartas corigas
for (int i = 0; i < 3; i++)
{
    if (i == 0)
    {
        char valor[] = "+4";
        int c = 2;
        for (int j = 0; j < 2; j++)
        {
            retorno = cartas_baralho(MOnt, valor, c, CorP);
            if (retorno == 1)
                ;
            else
                printf("\n\tOcorreu um erro!\n\n");
        }
    }
    else if (i == 1)
    {
        char valor[] = "Escolher cor";
        int c = 12;
        for (int j = 0; j < 2; j++)
        {
            retorno = cartas_baralho(MOnt, valor, c, cor);
            if (retorno == 1)

            else
                printf("\n\tOcorreu um erro!\n\n");
        }
    }
    else
    {
        char valor[] = "Troca maos";
        int c = 10;
        for (int j = 0; j < 2; j++)
        {
            retorno = cartas_baralho(MOnt, valor, c, cor);
            if (retorno == 1)

            else
                printf("\n\tOcorreu um erro!\n\n");
        }
    }
}
