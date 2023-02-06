/*3. Faça um programa que armazene em um registro de dados (estrutura composta) os
dados de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F),
CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa
(string de até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário,
armazenados na estrutura e exibidos na tela.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct funcionario{
    char nome[50], sexo, cargo[30];
    int idade, dia, mes, ano, codigo;
    float salario;
    double cpf;
};
int main(){
    struct funcionario x;
    printf("Insira os dados do funcionario\n");
    printf("Insira seu nome: ");
    setbuf(stdin, NULL);
    gets(x.nome);
    printf("Insira a idade: ");
    scanf("%d", &x.idade);
    printf("Insira o sexo (M/F):");
    setbuf(stdin, NULL);
    scanf("%c", &x.sexo);
    while(tolower(x.sexo) != 'f' && tolower(x.sexo) != 'm'){
        printf("Sexo invalido! Insira novamente (M/F): ");
        scanf("%c", &x.sexo);
    }
    x.sexo = toupper(x.sexo);
    printf("Insira o CPF: ");
    scanf("%lf", &x.cpf);
    printf("Insira data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &x.dia, &x.mes, &x.ano);
    while(x.dia < 1 || x.dia > 31 || x.mes < 1 || x.mes > 12 || x.ano < 1){
        printf("Data invalida! Insira novamente (dd mm aaaa): ");
        scanf("%d %d %d", &x.dia, &x.mes, &x.ano);
    }
    printf("Insira o codigo do setor (0-99): ");
    scanf("%d", &x.codigo);
    while(x.codigo < 0 || x.codigo > 99){
        printf("Codigo do setor invalida! Insira novamente (0-99): ");
        scanf("%d", &x.codigo);
    }
    printf("Insira o cargo: ");
    setbuf(stdin, NULL);
    scanf("%s", &x.cargo);
    printf("Insira o salario: ");
    scanf("%f", &x.salario);
    printf("\n\nFicha do funcionario\n");
    printf("Nome: %s\nIdade: %d\nSexo: %c\nCPF: %.0lf\n", x.nome, x.idade, x.sexo, x.cpf);
    printf("Data de Nascimento: %d/%d/%d\nCodigo do Setor: %d\n", x.dia, x.mes, x.ano, x.codigo);
    printf("Cargo: %s\nSalario: %.2f", x.cargo, x.salario);
    return 0;
}
