#include <stdio.h>
 int main () {
     int a;
     printf ("digite um numero:");
     scanf  ("%i", &a);
     if (a % 2 == 0){
     printf ("%i e par", a);
     }else {
     printf ("%i e impar", a);
     }
     system ("pause");
return 0;
}
