#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Aluno
{
    // informações do aluno
    int matricula;
    char nome[20];
    float nota[3];
    float media;
} Cadastro;

// essa função faz a média de 3 provas
float media(float a, float b, float c);

// Busca sequencial, busca um aluno com base na matrícula
int busca_sequencial(Cadastro *aluno, int tamanho);

// bubblesort, realiza a ordenação dos alunos
void BubbleSort(Cadastro *aluno, int tamanho);

int main()
{
    FILE *ponteiro_file;
    Cadastro *ponteiro_alunos;
    int i, j, quantidade_alunos = 1, contador, resposta;
    char quebra_linha = '\n', auxiliar;
    float maior, menor;

    // abrindo arquivo
    ponteiro_file = fopen("alunos.txt", "r");
    if (ponteiro_file == NULL)
    {
        printf("Erro");
        exit(1);
    }

    // esse loop faz o cálculo de alunos, po meio da quantidade de linhas
    do
    {
        auxiliar = fgetc(ponteiro_file);
        if (auxiliar == quebra_linha)
        {
            quantidade_alunos++;
        }

    } while (auxiliar != EOF);
    fclose(ponteiro_file);

    // Alocação dinâmica de memória.
    ponteiro_alunos = (Cadastro *)malloc(quantidade_alunos * sizeof(Cadastro));

    // abrindo arquivo
    ponteiro_file = fopen("alunos.txt", "r");

    for (i = 0; i < quantidade_alunos; i++)
    {
        fscanf(ponteiro_file, "%d%s%f%f%f", &ponteiro_alunos[i].matricula, &ponteiro_alunos[i].nome, &ponteiro_alunos[i].nota[0], &ponteiro_alunos[i].nota[1], &ponteiro_alunos[i].nota[2]);
        ponteiro_alunos[i].media = media(ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2]);
    }
    fclose(ponteiro_file);

    do
    {
        // MENU
        printf("                   Menu\n1- Imprimir todos os elementos do arranjo\n2- Imprimir os nomes dos alunos\n3- Imprimir o nome dos alunos e sua nota final(media)\n4- Buscar os dados de um aluno usando sua matricula\n5- Imprimir os alunos ordenados com base na matricula\n6- Editar as notas de um aluno\n7- Imprimir a matricula, nome e nota final do aluno que obteve a maior nota\n8- Imprimir a matricula, nome e nota final do aluno que obteve a menor nota\n9- Imprimir quantos alunos foram aprovados e quantos alunos foram reprovados, e a media geral\n0- Sair do programa\n\n");
        scanf("%d", &resposta);
        system("pause");
        system("cls");

        if (resposta == 1)
        {
            // 1. Imprimir todos os elementos do arranjo;
            // imprime os dados de todos os alunos, porém de forma particionada, para que todos os nomes possam aparecer no console
            for (i = 0; i < quantidade_alunos / 3; i++)
            {
                printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[i].matricula, ponteiro_alunos[i].nome, ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2], ponteiro_alunos[i].media);
            }
            system("pause");
            system("cls");
            for (i = (quantidade_alunos / 3); i < (quantidade_alunos / 3) + (quantidade_alunos / 3); i++)
            {
                printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[i].matricula, ponteiro_alunos[i].nome, ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2], ponteiro_alunos[i].media);
            }
            system("pause");
            system("cls");
            for (i = (quantidade_alunos / 3) + (quantidade_alunos / 3); i < quantidade_alunos; i++)
            {
                printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[i].matricula, ponteiro_alunos[i].nome, ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2], ponteiro_alunos[i].media);
            }
            system("pause");
            system("cls");
        }
        else if (resposta == 2)
        {
            // 2. Imprimir apenas os nomes dos alunos;
            // Imprimi o nome dos alunos;
            for (i = 0; i < quantidade_alunos; i++)
            {
                printf("Nome aluno %d: %s\n\n", i + 1, ponteiro_alunos[i].nome);
            }
            system("pause");
            system("cls");
        }
        else if (resposta == 3)
        {
            // 3. Imprimir o nome dos alunos e sua respectiva nota final;
            // imprime os nomes e a média dos alunos, poém deforma particionada, para que todos os nomes possam aparecer no console
            for (i = 0; i < quantidade_alunos / 2; i++)
            {
                printf("Nome aluno %d: %s\nMedia: %0.2f\n\n", i + 1, ponteiro_alunos[i].nome, ponteiro_alunos[i].media);
            }
            system("pause");
            system("cls");
            for (i = (quantidade_alunos / 2); i < quantidade_alunos; i++)
            {
                printf("Nome aluno %d: %s\nMedia: %0.2f\n\n", i + 1, ponteiro_alunos[i].nome, ponteiro_alunos[i].media);
            }
            system("pause");
            system("cls");
        }
        else if (resposta == 4)
        {
            // 4. Buscar os dados de um aluno usando a busca sequencial;
            // busca um aluno com sua matrícula e depois imprime seus dados na tela
            contador = busca_sequencial(ponteiro_alunos, quantidade_alunos);
            printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[contador].matricula, ponteiro_alunos[contador].nome, ponteiro_alunos[contador].nota[0], ponteiro_alunos[contador].nota[1], ponteiro_alunos[contador].nota[2], ponteiro_alunos[contador].media);
            system("pause");
            system("cls");
        }
        else if (resposta == 5)
        {
            // 5. Imprimir os alunos ordenados de acordo com sua matrícula;
            // organiza com base na matrícula e depois imprime na tela
            BubbleSort(ponteiro_alunos, quantidade_alunos);
            for (i = 0; i < quantidade_alunos / 3; i++)
            {
                printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[i].matricula, ponteiro_alunos[i].nome, ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2], ponteiro_alunos[i].media);
            }
            system("pause");
            system("cls");
            for (i = (quantidade_alunos / 3); i < (quantidade_alunos / 3) + (quantidade_alunos / 3); i++)
            {
                printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[i].matricula, ponteiro_alunos[i].nome, ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2], ponteiro_alunos[i].media);
            }
            system("pause");
            system("cls");
            for (i = (quantidade_alunos / 3) + (quantidade_alunos / 3); i < quantidade_alunos; i++)
            {
                printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[i].matricula, ponteiro_alunos[i].nome, ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2], ponteiro_alunos[i].media);
            }
            system("pause");
            system("cls");
        }
        else if (resposta == 6)
        {
            // 6. Editar as notas de um aluno, para isso é necessário que se busque os dados do aluno.
            contador = busca_sequencial(ponteiro_alunos, quantidade_alunos);
            printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\n", ponteiro_alunos[contador].matricula, ponteiro_alunos[contador].nome, ponteiro_alunos[contador].nota[0], ponteiro_alunos[contador].nota[1], ponteiro_alunos[contador].nota[2]);
            printf("Digite as notas editadas:\n");
            scanf("%f %f %f", &ponteiro_alunos[contador].nota[0], &ponteiro_alunos[contador].nota[1], &ponteiro_alunos[contador].nota[2]);
            ponteiro_alunos[contador].media = media(ponteiro_alunos[contador].nota[0], ponteiro_alunos[contador].nota[1], ponteiro_alunos[contador].nota[2]);
            printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[contador].matricula, ponteiro_alunos[contador].nome, ponteiro_alunos[contador].nota[0], ponteiro_alunos[contador].nota[1], ponteiro_alunos[contador].nota[2], ponteiro_alunos[contador].media);
            system("pause");
            system("cls");
        }
        else if (resposta == 7)
        {
            // 7. Imprimir a matrícula, nome e nota final do aluno que obteve a maior nota de todas;
            maior = ponteiro_alunos[0].nota[0];
            contador = 0;
            // esse loop tem como objetivo verificar notas > maior
            for (i = 0; i < quantidade_alunos; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (ponteiro_alunos[i].nota[j] > maior)
                    {
                        contador = i;
                    }
                }
            }
            printf("Nome: %s\nMedia/Nota final: %0.2f\n\n", ponteiro_alunos[contador].nome, ponteiro_alunos[contador].media);
            system("pause");
            system("cls");
        }
        else if (resposta == 8)
        {
            // 8. Imprimir a matrícula, nome e nota final do aluno que obteve a menor nota de todas;
            menor = ponteiro_alunos[0].nota[0];
            contador = 0;
            // esse loop tem como objetivo verificar notas < menor
            for (i = 0; i < quantidade_alunos; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (ponteiro_alunos[i].nota[j] < menor)
                    {
                        contador = i;
                    }
                }
            }
            printf("Nome: %s\nMedia/Nota final: %0.2f\n\n", ponteiro_alunos[contador].nome, ponteiro_alunos[contador].media);
            system("pause");
            system("cls");
        }
        else if (resposta == 9)
        {
            // 9. Imprimir quantos alunos foram aprovados e quantos alunos foram reprovados, imprima ainda a média geral;
            contador = 0;
            int contador2 = 0;
            float media_geral = 0;
            // esse loop tem como objetivo verificar os alunos que foram aprovados e os q foram reprovados, além de calcular a média geral
            for (i = 0; i < quantidade_alunos; i++)
            {
                media_geral += ponteiro_alunos[i].media;
                if (ponteiro_alunos[i].media >= 6)
                {
                    contador++;
                }
                else
                {
                    contador2++;
                }
            }
            printf("Aprovados: %d\nReprovados: %d\nmedia geral: %0.2f\n", contador, contador2, media_geral / quantidade_alunos);
            system("pause");
            system("cls");
        }
        else if (resposta > 9 || resposta < 0)
        {
            // esse else if tem como objetivo impedir que ocorra algum problema caso o usuário digite um numero inválido no menu
            printf("Erro\nVoce digitou um valor invalido.\n\n");
            system("pause");
            system("cls");
        }

    } while (resposta != 0);

    // função bobblesort, para que o código seja organizado antes de ser salvo
    BubbleSort(ponteiro_alunos, quantidade_alunos);

    // criação do arquivo e fprintf dos dados nele
    FILE *Alunos_novo;
    Alunos_novo = fopen("Novo_Arquivo_alunos.txt", "w");
    if (Alunos_novo == NULL)
    {
        printf("Erro");
        exit(1);
    }
    for (i = 0; i < quantidade_alunos; i++)
    {
        fprintf(Alunos_novo, "%d %s %0.2f %0.2f %0.2f %0.2f\n", ponteiro_alunos[i].matricula, ponteiro_alunos[i].nome, ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2], ponteiro_alunos[i].media);
    }
    fclose(Alunos_novo);
    free(ponteiro_alunos);
    /*Trabalho de Algoritmo e estrutura de dados I.
    By: Fernando Ribeiro Martins*/
    return 0;
}

// função media, calcula a média das 3 notas dos alunos
float media(float a, float b, float c)
{
    // funcionamento da fução que calcula média
    float resultado = (a + b + c) / 3.0;
    return resultado;
}

// Função de busca sequencial, dá para buscar um aluno usando sua matrícula
int busca_sequencial(Cadastro *aluno, int tamanho)
{
    int posicao, busca, i;
    printf("Digite a matricula do aluno que quer achar:");
    scanf("%d", &busca);
    for (i = 0; i < tamanho; i++)
    {
        if (busca == aluno[i].matricula)
        {
            posicao = i;
        }
    }
    return posicao;
}

// função bubblesort, ordena os alunos com base na matrícula
void BubbleSort(Cadastro *aluno, int tamanho)
{
    int contador, i;
    Cadastro auxiliar;
    for (contador = 1; contador < tamanho; contador++)
    {
        for (i = 0; i < tamanho - 1; i++)
        {
            if (aluno[i].matricula > aluno[i + 1].matricula)
            {
                auxiliar = aluno[i];
                aluno[i] = aluno[i + 1];
                aluno[i + 1] = auxiliar;
            }
        }
    }
}
