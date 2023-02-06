#include <stdio.h>

float funcao(float n1, float n2, float n3, char letra);

int main()
{
    float n1, n2, n3, resposta;
    char letra;
    printf("Digite suas 3 notas:\n");
    scanf ("%f %f %f", &n1, &n2, &n3);
    printf ("Digite 'A' para fazer a media aritmetica ou 'P' para media ponderada: ");
    setbuf(stdin,NULL);
    scanf("%c", &letra);
    resposta = funcao(n1, n2, n3, letra);
    printf ("\nresposta = %0.2f\n", resposta);
    return 0;
}

float funcao(float n1, float n2, float n3, char letra)
{
    if (letra == 'A')
    {
        return ((n1 + n2 + n3) / 3);
    }
    else if (letra == 'P')
    {
        return (((n1 * 5) + (n2 * 3) + (n3 * 2))/ 3);
    }
}