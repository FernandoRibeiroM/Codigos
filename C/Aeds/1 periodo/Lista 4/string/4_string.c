/*4. Faça um programa que preencha uma matriz de string com os modelos de cinco
carros (exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor
com o consumo desses carros, isto é, quantos quilômetros cada um deles faz com um
litro de combustível. Calcule e mostre:
a) O modelo de carro mais econômico;
b) Quantos litros de combustível cada um dos carros cadastrados consome para
percorrer uma distância de 1.000 quilômetros.*/
#include <stdio.h>
#include <string.h>
int main(){
    char carro[5][20];
    int i, aux;
    float consumo[5], economico = 999999;
    for(i = 0; i < 5; i++){
        printf("Insira o modelo do %do. carro: ", i + 1);
        setbuf(stdin, NULL);
        gets(carro[i]);
        printf("Insira o consumo: ");
        scanf("%f", &consumo[i]);
        while(consumo < 0){
            printf("Valor invalido! Insira novamente: ");
            scanf("%f", &consumo[i]);
        }
        if(consumo[i] < economico){
            economico = consumo[i];
            aux = i;
        }
    }
    printf("\n\nO modelo do carro mais economico e o %s, com %.2f km/L.\n\n", carro[aux], economico);
    for(i = 0; i < 5; i++){
        printf("Modelo %s consome %.2f L em 1000 Km\n", carro[i], consumo[i] * 1000);
    }
    return 0;
}
