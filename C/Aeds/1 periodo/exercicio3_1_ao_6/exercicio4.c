#include <stdio.h>

int main()
{
    int i, numero, primo = 0, mod = 0;
    printf ("digite um numero inteiro:");
    scanf  ("%d", &numero);
    i = numero;
    for (i > 0; i != 0; i--){
       mod = numero % i;
       
       if (mod ==0){
        primo ++;   
       }
    }
    if (primo == 2){
          printf ("esse numero e primo.");
    } else {
       printf ("esse numero não e primo.");    
    }
    return 0;
}