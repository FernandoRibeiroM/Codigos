/*
• Faça um programa que contenha as seguintes funções:

• Uma função main que vá utilizar as demais funções criadas;
• Uma função de busca sequencial para buscar um determinado valor em
um vetor de inteiros, cujo tamanho será definido pelo usuário, usando
alocação dinâmica de memória. O vetor deve ser preenchido pelo usuário;
• Da mesma forma que a função acima, crie agora uma função de busca
binária. Obs: No último slide deste conteúdo possui uma função de
ordenação, pode usá-la;
• Crie uma struct “aluno” contendo os membros: nome, matricula, nota1,
nota2, nota3 e media(que deve ser preenchida após a entrada das 3
notas). O usuário é quem vai definir a quantidade de alunos que ele deseja
inserir, bem como inserir seus dados;
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[20];
    int matricula;
    float nota1, nota2, nota3, media;
} Dados;

Dados Coleta_de_dados();

int Busca_sequencial(int chave, Dados alunos[], int tamanho);

void ordenacao(Dados *alunos[], int tamanho);

int Busca_binaria(int chave, Dados alunos[], int tamanho);

void imprime(Dados Alunos);

int main()
{
    int i, resposta, quantidade_de_alunos, buscando, resultado;
    Dados *Alunos;

    //quantidade de alunos
    printf("Deseja digitar os dados de quantos alunos?");
    scanf("%d", &quantidade_de_alunos);
    //alocação dinâmica de memória
    Alunos = (Dados *)malloc(quantidade_de_alunos * sizeof(Dados));
    system("pause");
    system("cls");

    //coleta de dados
    for (i = 0; i < quantidade_de_alunos; i++)
    {
        Alunos[i] = Coleta_de_dados();
        system("pause");
        system("cls");
    }

    //qual busca fazer
    printf("Vc deseja usar busca sequncial ou binaria?\nDigite 1 para sequencial\nDigite 2 para binaria\nResposta: ");
    scanf("%d", &resposta);
    system("pause");
    system("cls");

    switch (resposta)
    {
    case 1:
        printf("Qual matricula deseja achar?");
        scanf("%d", &buscando);
        system("pause");
        system("cls");
        resultado = Busca_sequencial(buscando, Alunos, quantidade_de_alunos);
        if (resultado == -1)
            printf("Essa matrícula não existe\n");
        else
        {
            imprime(Alunos[resultado]);
        }
        break;

    case 2:
        printf("Qual matricula deseja achar?");
        scanf("%d", &buscando);
        ordenacao(Alunos, quantidade_de_alunos);
        resultado = Busca_binaria(buscando, Alunos, quantidade_de_alunos);
        if (resultado == -1)
            printf("Essa matrícula não existe");
        else
            imprime(Alunos[resultado]);
        break;
    default:
        printf("vc escolheu uma opcao invalida com relacao ao tipo de busca");
        break;
    }
    return 0;
}

Dados Coleta_de_dados()
{
    Dados Aluno;
    printf("Digite o nome do aluno: ");
    setbuf(stdin, NULL);
    gets(Aluno.nome);
    printf("\nDigite a matricula: ");
    scanf("%d", &Aluno.matricula);
    printf("\nDigite a nota da prova 1: ");
    scanf("%f", &Aluno.nota1);
    printf("\nDigite a nota da prova 2: ");
    scanf("%f", &Aluno.nota2);
    printf("\nDigite a nota da prova 3: ");
    scanf("%f", &Aluno.nota3);
    Aluno.media = (Aluno.nota1 + Aluno.nota2 + Aluno.nota3) / 3;
    return Aluno;
}

int Busca_sequencial(int chave, Dados alunos[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (alunos[i].matricula == chave)
        {
            return i;
        }
    }
    return -1;
}

void ordenacao(Dados *alunos[], int tamanho)
{
    int i, j, auxiliar;
    for (j = tamanho - 1; j < 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            if (alunos[i + 1] < alunos[i])
            {
                auxiliar = alunos[i];
                alunos[i] = alunos[i + 1];
                alunos[i + 1] = auxiliar;
            }
        }
    }
}

int Busca_binaria(int chave, Dados alunos[], int tamanho)
{
    int i, esquerda = 0, direita = tamanho - 1;
    do
    {
        i = (esquerda + direita) / 2;
        if (chave > alunos[i].matricula)
        {
            esquerda = i + 1;
        }
        else
        {
            direita = i - 1;
        }
    } while (chave != alunos[i].matricula && esquerda <= direita);

    if (chave == alunos[i].matricula)
    {
        return i;
    }
    else
    {
        return -1;
    }
}

void imprime(Dados Alunos)
{
    printf("Nome: %s\nMatricula: %d\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n", Alunos.nome, Alunos.matricula, Alunos.nota1, Alunos.nota2, Alunos.nota3, Alunos.media);
}
